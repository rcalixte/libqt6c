#include "libplatformdependent.hpp"
#include "libplatformdependent_v2.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libplatformdependent_v3.hpp"
#include "libplatformdependent_v3.h"

const QMetaObject* k_attica__platformdependentv3_meta_object(void* self) {
    return Attica__PlatformDependentV3_MetaObject((Attica__PlatformDependentV3*)self);
}

void* k_attica__platformdependentv3_metacast(void* self, const char* param1) {
    return Attica__PlatformDependentV3_Metacast((Attica__PlatformDependentV3*)self, param1);
}

int32_t k_attica__platformdependentv3_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Attica__PlatformDependentV3_Metacall((Attica__PlatformDependentV3*)self, param1, param2, param3);
}

const char* k_attica__platformdependentv3_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__platformdependentv3_is_ready(void* self) {
    return Attica__PlatformDependentV3_IsReady((Attica__PlatformDependentV3*)self);
}

void k_attica__platformdependentv3_ready_changed(void* self) {
    Attica__PlatformDependentV3_ReadyChanged((Attica__PlatformDependentV3*)self);
}

void k_attica__platformdependentv3_on_ready_changed(void* self, void (*callback)(void*)) {
    Attica__PlatformDependentV3_Connect_ReadyChanged((Attica__PlatformDependentV3*)self, (intptr_t)callback);
}

const char* k_attica__platformdependentv3_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__platformdependentv3_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__platformdependentv3_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_attica__platformdependentv3_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_attica__platformdependentv3_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__platformdependentv3_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_attica__platformdependentv3_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_attica__platformdependentv3_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_attica__platformdependentv3_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_attica__platformdependentv3_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_attica__platformdependentv3_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_attica__platformdependentv3_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_attica__platformdependentv3_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_attica__platformdependentv3_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_attica__platformdependentv3_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_attica__platformdependentv3_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_attica__platformdependentv3_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_attica__platformdependentv3_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_attica__platformdependentv3_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_attica__platformdependentv3_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_attica__platformdependentv3_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_attica__platformdependentv3_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_attica__platformdependentv3_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_attica__platformdependentv3_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_attica__platformdependentv3_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_attica__platformdependentv3_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_attica__platformdependentv3_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_attica__platformdependentv3_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_attica__platformdependentv3_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_attica__platformdependentv3_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_attica__platformdependentv3_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_attica__platformdependentv3_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_attica__platformdependentv3_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_attica__platformdependentv3_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__platformdependentv3_dynamic_property_names\n");
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

QBindingStorage* k_attica__platformdependentv3_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_attica__platformdependentv3_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_attica__platformdependentv3_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_attica__platformdependentv3_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_attica__platformdependentv3_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_attica__platformdependentv3_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_attica__platformdependentv3_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_attica__platformdependentv3_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_attica__platformdependentv3_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_attica__platformdependentv3_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_attica__platformdependentv3_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_attica__platformdependentv3_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_attica__platformdependentv3_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_attica__platformdependentv3_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_attica__platformdependentv3_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_attica__platformdependentv3_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_attica__platformdependentv3_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_attica__platformdependentv3_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QNetworkReply* k_attica__platformdependentv3_delete_resource(void* self, void* request) {
    return Attica__PlatformDependentV2_DeleteResource((Attica__PlatformDependentV2*)self, (QNetworkRequest*)request);
}

QNetworkReply* k_attica__platformdependentv3_put(void* self, void* request, void* data) {
    return Attica__PlatformDependentV2_Put((Attica__PlatformDependentV2*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* k_attica__platformdependentv3_put2(void* self, void* request, char* data) {
    return Attica__PlatformDependentV2_Put2((Attica__PlatformDependentV2*)self, (QNetworkRequest*)request, qstring(data));
}

void k_attica__platformdependentv3_operator_assign(void* self, void* param1) {
    Attica__PlatformDependentV2_OperatorAssign((Attica__PlatformDependentV2*)self, (Attica__PlatformDependentV2*)param1);
}

libqt_list /* of QUrl* */ k_attica__platformdependentv3_get_default_provider_files(void* self) {
    libqt_list _arr = Attica__PlatformDependent_GetDefaultProviderFiles((Attica__PlatformDependent*)self);
    return _arr;
}

void k_attica__platformdependentv3_add_default_provider_file(void* self, void* url) {
    Attica__PlatformDependent_AddDefaultProviderFile((Attica__PlatformDependent*)self, (QUrl*)url);
}

void k_attica__platformdependentv3_remove_default_provider_file(void* self, void* url) {
    Attica__PlatformDependent_RemoveDefaultProviderFile((Attica__PlatformDependent*)self, (QUrl*)url);
}

void k_attica__platformdependentv3_enable_provider(void* self, void* baseUrl, bool enabled) {
    Attica__PlatformDependent_EnableProvider((Attica__PlatformDependent*)self, (QUrl*)baseUrl, enabled);
}

bool k_attica__platformdependentv3_is_enabled(void* self, void* baseUrl) {
    return Attica__PlatformDependent_IsEnabled((Attica__PlatformDependent*)self, (QUrl*)baseUrl);
}

bool k_attica__platformdependentv3_has_credentials(void* self, void* baseUrl) {
    return Attica__PlatformDependent_HasCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl);
}

bool k_attica__platformdependentv3_load_credentials(void* self, void* baseUrl, const char* user, const char* password) {
    return Attica__PlatformDependent_LoadCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl, qstring(user), qstring(password));
}

bool k_attica__platformdependentv3_ask_for_credentials(void* self, void* baseUrl, const char* user, const char* password) {
    return Attica__PlatformDependent_AskForCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl, qstring(user), qstring(password));
}

bool k_attica__platformdependentv3_save_credentials(void* self, void* baseUrl, const char* user, const char* password) {
    return Attica__PlatformDependent_SaveCredentials((Attica__PlatformDependent*)self, (QUrl*)baseUrl, qstring(user), qstring(password));
}

QNetworkReply* k_attica__platformdependentv3_get(void* self, void* request) {
    return Attica__PlatformDependent_Get((Attica__PlatformDependent*)self, (QNetworkRequest*)request);
}

QNetworkReply* k_attica__platformdependentv3_post(void* self, void* request, void* data) {
    return Attica__PlatformDependent_Post((Attica__PlatformDependent*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* k_attica__platformdependentv3_post2(void* self, void* request, char* data) {
    return Attica__PlatformDependent_Post2((Attica__PlatformDependent*)self, (QNetworkRequest*)request, qstring(data));
}

void k_attica__platformdependentv3_set_nam(void* self, void* nam) {
    Attica__PlatformDependent_SetNam((Attica__PlatformDependent*)self, (QNetworkAccessManager*)nam);
}

QNetworkAccessManager* k_attica__platformdependentv3_nam(void* self) {
    return Attica__PlatformDependent_Nam((Attica__PlatformDependent*)self);
}

void k_attica__platformdependentv3_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_attica__platformdependentv3_delete(void* self) {
    Attica__PlatformDependentV3_Delete((Attica__PlatformDependentV3*)(self));
}
