#include "libqcoreevent.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqimageiohandler.hpp"
#include "libqimageiohandler.h"

QImageIOHandler* q_imageiohandler_new() {
    return QImageIOHandler_New();
}

void q_imageiohandler_set_device(void* self, void* device) {
    QImageIOHandler_SetDevice((QImageIOHandler*)self, (QIODevice*)device);
}

QIODevice* q_imageiohandler_device(const void* self) {
    return QImageIOHandler_Device((QImageIOHandler*)self);
}

void q_imageiohandler_set_format(void* self, char* format) {
    QImageIOHandler_SetFormat((QImageIOHandler*)self, qstring(format));
}

void q_imageiohandler_set_format2(const void* self, char* format) {
    QImageIOHandler_SetFormat2((QImageIOHandler*)self, qstring(format));
}

char* q_imageiohandler_format(const void* self) {
    libqt_string _str = QImageIOHandler_Format((QImageIOHandler*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_imageiohandler_can_read(const void* self) {
    return QImageIOHandler_CanRead((QImageIOHandler*)self);
}

void q_imageiohandler_on_can_read(void* self, bool (*callback)(const void*)) {
    QImageIOHandler_OnCanRead((QImageIOHandler*)self, (intptr_t)callback);
}

bool q_imageiohandler_read(void* self, void* image) {
    return QImageIOHandler_Read((QImageIOHandler*)self, (QImage*)image);
}

void q_imageiohandler_on_read(void* self, bool (*callback)(void*, void*)) {
    QImageIOHandler_OnRead((QImageIOHandler*)self, (intptr_t)callback);
}

bool q_imageiohandler_write(void* self, const void* image) {
    return QImageIOHandler_Write((QImageIOHandler*)self, (QImage*)image);
}

void q_imageiohandler_on_write(void* self, bool (*callback)(void*, const void*)) {
    QImageIOHandler_OnWrite((QImageIOHandler*)self, (intptr_t)callback);
}

bool q_imageiohandler_super_write(void* self, const void* image) {
    return QImageIOHandler_SuperWrite((QImageIOHandler*)self, (QImage*)image);
}

QVariant* q_imageiohandler_option(const void* self, int32_t option) {
    return QImageIOHandler_Option((QImageIOHandler*)self, option);
}

void q_imageiohandler_on_option(void* self, QVariant* (*callback)(const void*, int32_t)) {
    QImageIOHandler_OnOption((QImageIOHandler*)self, (intptr_t)callback);
}

QVariant* q_imageiohandler_super_option(const void* self, int32_t option) {
    return QImageIOHandler_SuperOption((QImageIOHandler*)self, option);
}

void q_imageiohandler_set_option(void* self, int32_t option, const void* value) {
    QImageIOHandler_SetOption((QImageIOHandler*)self, option, (QVariant*)value);
}

void q_imageiohandler_on_set_option(void* self, void (*callback)(void*, int32_t, const void*)) {
    QImageIOHandler_OnSetOption((QImageIOHandler*)self, (intptr_t)callback);
}

void q_imageiohandler_super_set_option(void* self, int32_t option, const void* value) {
    QImageIOHandler_SuperSetOption((QImageIOHandler*)self, option, (QVariant*)value);
}

bool q_imageiohandler_supports_option(const void* self, int32_t option) {
    return QImageIOHandler_SupportsOption((QImageIOHandler*)self, option);
}

void q_imageiohandler_on_supports_option(void* self, bool (*callback)(const void*, int32_t)) {
    QImageIOHandler_OnSupportsOption((QImageIOHandler*)self, (intptr_t)callback);
}

bool q_imageiohandler_super_supports_option(const void* self, int32_t option) {
    return QImageIOHandler_SuperSupportsOption((QImageIOHandler*)self, option);
}

bool q_imageiohandler_jump_to_next_image(void* self) {
    return QImageIOHandler_JumpToNextImage((QImageIOHandler*)self);
}

void q_imageiohandler_on_jump_to_next_image(void* self, bool (*callback)(void*)) {
    QImageIOHandler_OnJumpToNextImage((QImageIOHandler*)self, (intptr_t)callback);
}

bool q_imageiohandler_super_jump_to_next_image(void* self) {
    return QImageIOHandler_SuperJumpToNextImage((QImageIOHandler*)self);
}

bool q_imageiohandler_jump_to_image(void* self, int imageNumber) {
    return QImageIOHandler_JumpToImage((QImageIOHandler*)self, imageNumber);
}

void q_imageiohandler_on_jump_to_image(void* self, bool (*callback)(void*, int)) {
    QImageIOHandler_OnJumpToImage((QImageIOHandler*)self, (intptr_t)callback);
}

bool q_imageiohandler_super_jump_to_image(void* self, int imageNumber) {
    return QImageIOHandler_SuperJumpToImage((QImageIOHandler*)self, imageNumber);
}

int32_t q_imageiohandler_loop_count(const void* self) {
    return QImageIOHandler_LoopCount((QImageIOHandler*)self);
}

void q_imageiohandler_on_loop_count(void* self, int32_t (*callback)(const void*)) {
    QImageIOHandler_OnLoopCount((QImageIOHandler*)self, (intptr_t)callback);
}

int32_t q_imageiohandler_super_loop_count(const void* self) {
    return QImageIOHandler_SuperLoopCount((QImageIOHandler*)self);
}

int32_t q_imageiohandler_image_count(const void* self) {
    return QImageIOHandler_ImageCount((QImageIOHandler*)self);
}

void q_imageiohandler_on_image_count(void* self, int32_t (*callback)(const void*)) {
    QImageIOHandler_OnImageCount((QImageIOHandler*)self, (intptr_t)callback);
}

int32_t q_imageiohandler_super_image_count(const void* self) {
    return QImageIOHandler_SuperImageCount((QImageIOHandler*)self);
}

int32_t q_imageiohandler_next_image_delay(const void* self) {
    return QImageIOHandler_NextImageDelay((QImageIOHandler*)self);
}

void q_imageiohandler_on_next_image_delay(void* self, int32_t (*callback)(const void*)) {
    QImageIOHandler_OnNextImageDelay((QImageIOHandler*)self, (intptr_t)callback);
}

int32_t q_imageiohandler_super_next_image_delay(const void* self) {
    return QImageIOHandler_SuperNextImageDelay((QImageIOHandler*)self);
}

int32_t q_imageiohandler_current_image_number(const void* self) {
    return QImageIOHandler_CurrentImageNumber((QImageIOHandler*)self);
}

void q_imageiohandler_on_current_image_number(void* self, int32_t (*callback)(const void*)) {
    QImageIOHandler_OnCurrentImageNumber((QImageIOHandler*)self, (intptr_t)callback);
}

int32_t q_imageiohandler_super_current_image_number(const void* self) {
    return QImageIOHandler_SuperCurrentImageNumber((QImageIOHandler*)self);
}

QRect* q_imageiohandler_current_image_rect(const void* self) {
    return QImageIOHandler_CurrentImageRect((QImageIOHandler*)self);
}

void q_imageiohandler_on_current_image_rect(void* self, QRect* (*callback)(const void*)) {
    QImageIOHandler_OnCurrentImageRect((QImageIOHandler*)self, (intptr_t)callback);
}

QRect* q_imageiohandler_super_current_image_rect(const void* self) {
    return QImageIOHandler_SuperCurrentImageRect((QImageIOHandler*)self);
}

bool q_imageiohandler_allocate_image(void* size, int32_t format, void* image) {
    return QImageIOHandler_AllocateImage((QSize*)size, format, (QImage*)image);
}

void q_imageiohandler_delete(void* self) {
    QImageIOHandler_Delete((QImageIOHandler*)(self));
}

QImageIOPlugin* q_imageioplugin_new() {
    return QImageIOPlugin_New();
}

QImageIOPlugin* q_imageioplugin_new2(void* parent) {
    return QImageIOPlugin_New2((QObject*)parent);
}

const QMetaObject* q_imageioplugin_meta_object(const void* self) {
    return QImageIOPlugin_MetaObject((QImageIOPlugin*)self);
}

void q_imageioplugin_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QImageIOPlugin_OnMetaObject((QImageIOPlugin*)self, (intptr_t)callback);
}

const QMetaObject* q_imageioplugin_super_meta_object(const void* self) {
    return QImageIOPlugin_SuperMetaObject((QImageIOPlugin*)self);
}

void* q_imageioplugin_metacast(void* self, const char* param1) {
    return QImageIOPlugin_Metacast((QImageIOPlugin*)self, param1);
}

void q_imageioplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QImageIOPlugin_OnMetacast((QImageIOPlugin*)self, (intptr_t)callback);
}

void* q_imageioplugin_super_metacast(void* self, const char* param1) {
    return QImageIOPlugin_SuperMetacast((QImageIOPlugin*)self, param1);
}

int32_t q_imageioplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QImageIOPlugin_Metacall((QImageIOPlugin*)self, param1, param2, param3);
}

void q_imageioplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QImageIOPlugin_OnMetacall((QImageIOPlugin*)self, (intptr_t)callback);
}

int32_t q_imageioplugin_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QImageIOPlugin_SuperMetacall((QImageIOPlugin*)self, param1, param2, param3);
}

const char* q_imageioplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_imageioplugin_capabilities(const void* self, void* device, char* format) {
    return QImageIOPlugin_Capabilities((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

void q_imageioplugin_on_capabilities(void* self, int32_t (*callback)(const void*, void*, libqt_string)) {
    QImageIOPlugin_OnCapabilities((QImageIOPlugin*)self, (intptr_t)callback);
}

QImageIOHandler* q_imageioplugin_create(const void* self, void* device, char* format) {
    return QImageIOPlugin_Create((QImageIOPlugin*)self, (QIODevice*)device, qstring(format));
}

void q_imageioplugin_on_create(void* self, QImageIOHandler* (*callback)(const void*, void*, libqt_string)) {
    QImageIOPlugin_OnCreate((QImageIOPlugin*)self, (intptr_t)callback);
}

const char* q_imageioplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imageioplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_imageioplugin_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_imageioplugin_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_imageioplugin_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_imageioplugin_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_imageioplugin_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_imageioplugin_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_imageioplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_imageioplugin_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_imageioplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_imageioplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_imageioplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_imageioplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_imageioplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_imageioplugin_children(const void* self) {
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

QMetaObject__Connection* q_imageioplugin_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_imageioplugin_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_imageioplugin_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_imageioplugin_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_imageioplugin_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_imageioplugin_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_imageioplugin_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_imageioplugin_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_imageioplugin_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_imageioplugin_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_imageioplugin_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_imageioplugin_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_imageioplugin_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_imageioplugin_dynamic_property_names\n");
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

QBindingStorage* q_imageioplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_imageioplugin_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_imageioplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_imageioplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_imageioplugin_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_imageioplugin_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_imageioplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_imageioplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_imageioplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_imageioplugin_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_imageioplugin_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_imageioplugin_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_imageioplugin_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_imageioplugin_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_imageioplugin_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_imageioplugin_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_imageioplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_imageioplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_imageioplugin_event(void* self, void* event) {
    return QImageIOPlugin_Event((QImageIOPlugin*)self, (QEvent*)event);
}

bool q_imageioplugin_super_event(void* self, void* event) {
    return QImageIOPlugin_SuperEvent((QImageIOPlugin*)self, (QEvent*)event);
}

void q_imageioplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    QImageIOPlugin_OnEvent((QImageIOPlugin*)self, (intptr_t)callback);
}

bool q_imageioplugin_event_filter(void* self, void* watched, void* event) {
    return QImageIOPlugin_EventFilter((QImageIOPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_imageioplugin_super_event_filter(void* self, void* watched, void* event) {
    return QImageIOPlugin_SuperEventFilter((QImageIOPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_imageioplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QImageIOPlugin_OnEventFilter((QImageIOPlugin*)self, (intptr_t)callback);
}

void q_imageioplugin_timer_event(void* self, void* event) {
    QImageIOPlugin_TimerEvent((QImageIOPlugin*)self, (QTimerEvent*)event);
}

void q_imageioplugin_super_timer_event(void* self, void* event) {
    QImageIOPlugin_SuperTimerEvent((QImageIOPlugin*)self, (QTimerEvent*)event);
}

void q_imageioplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QImageIOPlugin_OnTimerEvent((QImageIOPlugin*)self, (intptr_t)callback);
}

void q_imageioplugin_child_event(void* self, void* event) {
    QImageIOPlugin_ChildEvent((QImageIOPlugin*)self, (QChildEvent*)event);
}

void q_imageioplugin_super_child_event(void* self, void* event) {
    QImageIOPlugin_SuperChildEvent((QImageIOPlugin*)self, (QChildEvent*)event);
}

void q_imageioplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    QImageIOPlugin_OnChildEvent((QImageIOPlugin*)self, (intptr_t)callback);
}

void q_imageioplugin_custom_event(void* self, void* event) {
    QImageIOPlugin_CustomEvent((QImageIOPlugin*)self, (QEvent*)event);
}

void q_imageioplugin_super_custom_event(void* self, void* event) {
    QImageIOPlugin_SuperCustomEvent((QImageIOPlugin*)self, (QEvent*)event);
}

void q_imageioplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QImageIOPlugin_OnCustomEvent((QImageIOPlugin*)self, (intptr_t)callback);
}

void q_imageioplugin_connect_notify(void* self, const void* signal) {
    QImageIOPlugin_ConnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_super_connect_notify(void* self, const void* signal) {
    QImageIOPlugin_SuperConnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QImageIOPlugin_OnConnectNotify((QImageIOPlugin*)self, (intptr_t)callback);
}

void q_imageioplugin_disconnect_notify(void* self, const void* signal) {
    QImageIOPlugin_DisconnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_super_disconnect_notify(void* self, const void* signal) {
    QImageIOPlugin_SuperDisconnectNotify((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QImageIOPlugin_OnDisconnectNotify((QImageIOPlugin*)self, (intptr_t)callback);
}

QObject* q_imageioplugin_sender(const void* self) {
    return QImageIOPlugin_Sender((QImageIOPlugin*)self);
}

int32_t q_imageioplugin_sender_signal_index(const void* self) {
    return QImageIOPlugin_SenderSignalIndex((QImageIOPlugin*)self);
}

int32_t q_imageioplugin_receivers(const void* self, const char* signal) {
    return QImageIOPlugin_Receivers((QImageIOPlugin*)self, signal);
}

bool q_imageioplugin_is_signal_connected(const void* self, const void* signal) {
    return QImageIOPlugin_IsSignalConnected((QImageIOPlugin*)self, (QMetaMethod*)signal);
}

void q_imageioplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_imageioplugin_delete(void* self) {
    QImageIOPlugin_Delete((QImageIOPlugin*)(self));
}
