#include "libextractionresult.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libextractorplugin.hpp"
#include "libextractorplugin.h"

KFileMetaData__ExtractorPlugin* k_filemetadata__extractorplugin_new(void* parent) {
    return KFileMetaData__ExtractorPlugin_new((QObject*)parent);
}

const QMetaObject* k_filemetadata__extractorplugin_meta_object(void* self) {
    return KFileMetaData__ExtractorPlugin_MetaObject((KFileMetaData__ExtractorPlugin*)self);
}

void k_filemetadata__extractorplugin_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFileMetaData__ExtractorPlugin_OnMetaObject((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

const QMetaObject* k_filemetadata__extractorplugin_super_meta_object(void* self) {
    return KFileMetaData__ExtractorPlugin_SuperMetaObject((KFileMetaData__ExtractorPlugin*)self);
}

void* k_filemetadata__extractorplugin_metacast(void* self, const char* param1) {
    return KFileMetaData__ExtractorPlugin_Metacast((KFileMetaData__ExtractorPlugin*)self, param1);
}

void k_filemetadata__extractorplugin_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFileMetaData__ExtractorPlugin_OnMetacast((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void* k_filemetadata__extractorplugin_super_metacast(void* self, const char* param1) {
    return KFileMetaData__ExtractorPlugin_SuperMetacast((KFileMetaData__ExtractorPlugin*)self, param1);
}

int32_t k_filemetadata__extractorplugin_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileMetaData__ExtractorPlugin_Metacall((KFileMetaData__ExtractorPlugin*)self, param1, param2, param3);
}

void k_filemetadata__extractorplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFileMetaData__ExtractorPlugin_OnMetacall((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

int32_t k_filemetadata__extractorplugin_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFileMetaData__ExtractorPlugin_SuperMetacall((KFileMetaData__ExtractorPlugin*)self, param1, param2, param3);
}

const char* k_filemetadata__extractorplugin_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_filemetadata__extractorplugin_mimetypes(void* self) {
    libqt_list _arr = KFileMetaData__ExtractorPlugin_Mimetypes((KFileMetaData__ExtractorPlugin*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__extractorplugin_mimetypes\n");
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

void k_filemetadata__extractorplugin_on_mimetypes(void* self, const char** (*callback)()) {
    KFileMetaData__ExtractorPlugin_OnMimetypes((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

const char** k_filemetadata__extractorplugin_super_mimetypes(void* self) {
    libqt_list _arr = KFileMetaData__ExtractorPlugin_SuperMimetypes((KFileMetaData__ExtractorPlugin*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__extractorplugin_mimetypes\n");
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

void k_filemetadata__extractorplugin_extract(void* self, void* result) {
    KFileMetaData__ExtractorPlugin_Extract((KFileMetaData__ExtractorPlugin*)self, (KFileMetaData__ExtractionResult*)result);
}

void k_filemetadata__extractorplugin_on_extract(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnExtract((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_super_extract(void* self, void* result) {
    KFileMetaData__ExtractorPlugin_SuperExtract((KFileMetaData__ExtractorPlugin*)self, (KFileMetaData__ExtractionResult*)result);
}

QDateTime* k_filemetadata__extractorplugin_date_time_from_string(const char* dateString) {
    return KFileMetaData__ExtractorPlugin_DateTimeFromString(qstring(dateString));
}

const char** k_filemetadata__extractorplugin_contacts_from_string(const char* stringVal) {
    libqt_list _arr = KFileMetaData__ExtractorPlugin_ContactsFromString(qstring(stringVal));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__extractorplugin_contacts_from_string\n");
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

const char* k_filemetadata__extractorplugin_get_supported_mime_type(void* self, const char* mimetype) {
    libqt_string _str = KFileMetaData__ExtractorPlugin_GetSupportedMimeType((KFileMetaData__ExtractorPlugin*)self, qstring(mimetype));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filemetadata__extractorplugin_on_get_supported_mime_type(void* self, const char* (*callback)(void*, const char*)) {
    KFileMetaData__ExtractorPlugin_OnGetSupportedMimeType((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

const char* k_filemetadata__extractorplugin_super_get_supported_mime_type(void* self, const char* mimetype) {
    libqt_string _str = KFileMetaData__ExtractorPlugin_SuperGetSupportedMimeType((KFileMetaData__ExtractorPlugin*)self, qstring(mimetype));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__extractorplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__extractorplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__extractorplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filemetadata__extractorplugin_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_filemetadata__extractorplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_filemetadata__extractorplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_filemetadata__extractorplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_filemetadata__extractorplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_filemetadata__extractorplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_filemetadata__extractorplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_filemetadata__extractorplugin_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_filemetadata__extractorplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_filemetadata__extractorplugin_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_filemetadata__extractorplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_filemetadata__extractorplugin_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_filemetadata__extractorplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_filemetadata__extractorplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_filemetadata__extractorplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_filemetadata__extractorplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_filemetadata__extractorplugin_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_filemetadata__extractorplugin_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_filemetadata__extractorplugin_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_filemetadata__extractorplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_filemetadata__extractorplugin_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_filemetadata__extractorplugin_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_filemetadata__extractorplugin_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_filemetadata__extractorplugin_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_filemetadata__extractorplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_filemetadata__extractorplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_filemetadata__extractorplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_filemetadata__extractorplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_filemetadata__extractorplugin_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__extractorplugin_dynamic_property_names\n");
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

QBindingStorage* k_filemetadata__extractorplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_filemetadata__extractorplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_filemetadata__extractorplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_filemetadata__extractorplugin_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_filemetadata__extractorplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_filemetadata__extractorplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_filemetadata__extractorplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_filemetadata__extractorplugin_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_filemetadata__extractorplugin_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_filemetadata__extractorplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_filemetadata__extractorplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_filemetadata__extractorplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_filemetadata__extractorplugin_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_filemetadata__extractorplugin_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_filemetadata__extractorplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_filemetadata__extractorplugin_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_filemetadata__extractorplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_filemetadata__extractorplugin_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_filemetadata__extractorplugin_event(void* self, void* event) {
    return KFileMetaData__ExtractorPlugin_Event((KFileMetaData__ExtractorPlugin*)self, (QEvent*)event);
}

bool k_filemetadata__extractorplugin_super_event(void* self, void* event) {
    return KFileMetaData__ExtractorPlugin_SuperEvent((KFileMetaData__ExtractorPlugin*)self, (QEvent*)event);
}

void k_filemetadata__extractorplugin_on_event(void* self, bool (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnEvent((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

bool k_filemetadata__extractorplugin_event_filter(void* self, void* watched, void* event) {
    return KFileMetaData__ExtractorPlugin_EventFilter((KFileMetaData__ExtractorPlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool k_filemetadata__extractorplugin_super_event_filter(void* self, void* watched, void* event) {
    return KFileMetaData__ExtractorPlugin_SuperEventFilter((KFileMetaData__ExtractorPlugin*)self, (QObject*)watched, (QEvent*)event);
}

void k_filemetadata__extractorplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnEventFilter((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_timer_event(void* self, void* event) {
    KFileMetaData__ExtractorPlugin_TimerEvent((KFileMetaData__ExtractorPlugin*)self, (QTimerEvent*)event);
}

void k_filemetadata__extractorplugin_super_timer_event(void* self, void* event) {
    KFileMetaData__ExtractorPlugin_SuperTimerEvent((KFileMetaData__ExtractorPlugin*)self, (QTimerEvent*)event);
}

void k_filemetadata__extractorplugin_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnTimerEvent((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_child_event(void* self, void* event) {
    KFileMetaData__ExtractorPlugin_ChildEvent((KFileMetaData__ExtractorPlugin*)self, (QChildEvent*)event);
}

void k_filemetadata__extractorplugin_super_child_event(void* self, void* event) {
    KFileMetaData__ExtractorPlugin_SuperChildEvent((KFileMetaData__ExtractorPlugin*)self, (QChildEvent*)event);
}

void k_filemetadata__extractorplugin_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnChildEvent((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_custom_event(void* self, void* event) {
    KFileMetaData__ExtractorPlugin_CustomEvent((KFileMetaData__ExtractorPlugin*)self, (QEvent*)event);
}

void k_filemetadata__extractorplugin_super_custom_event(void* self, void* event) {
    KFileMetaData__ExtractorPlugin_SuperCustomEvent((KFileMetaData__ExtractorPlugin*)self, (QEvent*)event);
}

void k_filemetadata__extractorplugin_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnCustomEvent((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_connect_notify(void* self, void* signal) {
    KFileMetaData__ExtractorPlugin_ConnectNotify((KFileMetaData__ExtractorPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__extractorplugin_super_connect_notify(void* self, void* signal) {
    KFileMetaData__ExtractorPlugin_SuperConnectNotify((KFileMetaData__ExtractorPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__extractorplugin_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnConnectNotify((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_disconnect_notify(void* self, void* signal) {
    KFileMetaData__ExtractorPlugin_DisconnectNotify((KFileMetaData__ExtractorPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__extractorplugin_super_disconnect_notify(void* self, void* signal) {
    KFileMetaData__ExtractorPlugin_SuperDisconnectNotify((KFileMetaData__ExtractorPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__extractorplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnDisconnectNotify((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

QObject* k_filemetadata__extractorplugin_sender(void* self) {
    return KFileMetaData__ExtractorPlugin_Sender((KFileMetaData__ExtractorPlugin*)self);
}

QObject* k_filemetadata__extractorplugin_super_sender(void* self) {
    return KFileMetaData__ExtractorPlugin_SuperSender((KFileMetaData__ExtractorPlugin*)self);
}

void k_filemetadata__extractorplugin_on_sender(void* self, QObject* (*callback)()) {
    KFileMetaData__ExtractorPlugin_OnSender((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

int32_t k_filemetadata__extractorplugin_sender_signal_index(void* self) {
    return KFileMetaData__ExtractorPlugin_SenderSignalIndex((KFileMetaData__ExtractorPlugin*)self);
}

int32_t k_filemetadata__extractorplugin_super_sender_signal_index(void* self) {
    return KFileMetaData__ExtractorPlugin_SuperSenderSignalIndex((KFileMetaData__ExtractorPlugin*)self);
}

void k_filemetadata__extractorplugin_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFileMetaData__ExtractorPlugin_OnSenderSignalIndex((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

int32_t k_filemetadata__extractorplugin_receivers(void* self, const char* signal) {
    return KFileMetaData__ExtractorPlugin_Receivers((KFileMetaData__ExtractorPlugin*)self, signal);
}

int32_t k_filemetadata__extractorplugin_super_receivers(void* self, const char* signal) {
    return KFileMetaData__ExtractorPlugin_SuperReceivers((KFileMetaData__ExtractorPlugin*)self, signal);
}

void k_filemetadata__extractorplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFileMetaData__ExtractorPlugin_OnReceivers((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

bool k_filemetadata__extractorplugin_is_signal_connected(void* self, void* signal) {
    return KFileMetaData__ExtractorPlugin_IsSignalConnected((KFileMetaData__ExtractorPlugin*)self, (QMetaMethod*)signal);
}

bool k_filemetadata__extractorplugin_super_is_signal_connected(void* self, void* signal) {
    return KFileMetaData__ExtractorPlugin_SuperIsSignalConnected((KFileMetaData__ExtractorPlugin*)self, (QMetaMethod*)signal);
}

void k_filemetadata__extractorplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFileMetaData__ExtractorPlugin_OnIsSignalConnected((KFileMetaData__ExtractorPlugin*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_filemetadata__extractorplugin_delete(void* self) {
    KFileMetaData__ExtractorPlugin_Delete((KFileMetaData__ExtractorPlugin*)(self));
}
