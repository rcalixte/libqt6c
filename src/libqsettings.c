#include "libqanystringview.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqvariant.hpp"
#include "libqsettings.hpp"
#include "libqsettings.h"

QSettings* q_settings_new(const char* organization) {
    return QSettings_new(qstring(organization));
}

QSettings* q_settings_new2(int32_t scope, const char* organization) {
    return QSettings_new2(scope, qstring(organization));
}

QSettings* q_settings_new3(int32_t format, int32_t scope, const char* organization) {
    return QSettings_new3(format, scope, qstring(organization));
}

QSettings* q_settings_new4(const char* fileName, int32_t format) {
    return QSettings_new4(qstring(fileName), format);
}

QSettings* q_settings_new5() {
    return QSettings_new5();
}

QSettings* q_settings_new6(int32_t scope) {
    return QSettings_new6(scope);
}

QSettings* q_settings_new7(const char* organization, const char* application) {
    return QSettings_new7(qstring(organization), qstring(application));
}

QSettings* q_settings_new8(const char* organization, const char* application, void* parent) {
    return QSettings_new8(qstring(organization), qstring(application), (QObject*)parent);
}

QSettings* q_settings_new9(int32_t scope, const char* organization, const char* application) {
    return QSettings_new9(scope, qstring(organization), qstring(application));
}

QSettings* q_settings_new10(int32_t scope, const char* organization, const char* application, void* parent) {
    return QSettings_new10(scope, qstring(organization), qstring(application), (QObject*)parent);
}

QSettings* q_settings_new11(int32_t format, int32_t scope, const char* organization, const char* application) {
    return QSettings_new11(format, scope, qstring(organization), qstring(application));
}

QSettings* q_settings_new12(int32_t format, int32_t scope, const char* organization, const char* application, void* parent) {
    return QSettings_new12(format, scope, qstring(organization), qstring(application), (QObject*)parent);
}

QSettings* q_settings_new13(const char* fileName, int32_t format, void* parent) {
    return QSettings_new13(qstring(fileName), format, (QObject*)parent);
}

QSettings* q_settings_new14(void* parent) {
    return QSettings_new14((QObject*)parent);
}

QSettings* q_settings_new15(int32_t scope, void* parent) {
    return QSettings_new15(scope, (QObject*)parent);
}

const QMetaObject* q_settings_meta_object(void* self) {
    return QSettings_MetaObject((QSettings*)self);
}

void q_settings_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSettings_OnMetaObject((QSettings*)self, (intptr_t)callback);
}

const QMetaObject* q_settings_super_meta_object(void* self) {
    return QSettings_SuperMetaObject((QSettings*)self);
}

void* q_settings_metacast(void* self, const char* param1) {
    return QSettings_Metacast((QSettings*)self, param1);
}

void q_settings_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSettings_OnMetacast((QSettings*)self, (intptr_t)callback);
}

void* q_settings_super_metacast(void* self, const char* param1) {
    return QSettings_SuperMetacast((QSettings*)self, param1);
}

int32_t q_settings_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSettings_Metacall((QSettings*)self, param1, param2, param3);
}

void q_settings_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSettings_OnMetacall((QSettings*)self, (intptr_t)callback);
}

int32_t q_settings_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSettings_SuperMetacall((QSettings*)self, param1, param2, param3);
}

const char* q_settings_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_settings_clear(void* self) {
    QSettings_Clear((QSettings*)self);
}

void q_settings_sync(void* self) {
    QSettings_Sync((QSettings*)self);
}

int32_t q_settings_status(void* self) {
    return QSettings_Status((QSettings*)self);
}

bool q_settings_is_atomic_sync_required(void* self) {
    return QSettings_IsAtomicSyncRequired((QSettings*)self);
}

void q_settings_set_atomic_sync_required(void* self, bool enable) {
    QSettings_SetAtomicSyncRequired((QSettings*)self, enable);
}

void q_settings_begin_group(void* self, const char* prefix) {
    QSettings_BeginGroup((QSettings*)self, prefix);
}

void q_settings_end_group(void* self) {
    QSettings_EndGroup((QSettings*)self);
}

const char* q_settings_group(void* self) {
    libqt_string _str = QSettings_Group((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_settings_begin_read_array(void* self, const char* prefix) {
    return QSettings_BeginReadArray((QSettings*)self, prefix);
}

void q_settings_begin_write_array(void* self, const char* prefix) {
    QSettings_BeginWriteArray((QSettings*)self, prefix);
}

void q_settings_end_array(void* self) {
    QSettings_EndArray((QSettings*)self);
}

void q_settings_set_array_index(void* self, int i) {
    QSettings_SetArrayIndex((QSettings*)self, i);
}

const char** q_settings_all_keys(void* self) {
    libqt_list _arr = QSettings_AllKeys((QSettings*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_settings_all_keys\n");
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

const char** q_settings_child_keys(void* self) {
    libqt_list _arr = QSettings_ChildKeys((QSettings*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_settings_child_keys\n");
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

const char** q_settings_child_groups(void* self) {
    libqt_list _arr = QSettings_ChildGroups((QSettings*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_settings_child_groups\n");
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

bool q_settings_is_writable(void* self) {
    return QSettings_IsWritable((QSettings*)self);
}

void q_settings_set_value(void* self, const char* key, void* value) {
    QSettings_SetValue((QSettings*)self, key, (QVariant*)value);
}

QVariant* q_settings_value(void* self, const char* key, void* defaultValue) {
    return QSettings_Value((QSettings*)self, key, (QVariant*)defaultValue);
}

QVariant* q_settings_value2(void* self, const char* key) {
    return QSettings_Value2((QSettings*)self, key);
}

void q_settings_remove(void* self, const char* key) {
    QSettings_Remove((QSettings*)self, key);
}

bool q_settings_contains(void* self, const char* key) {
    return QSettings_Contains((QSettings*)self, key);
}

void q_settings_set_fallbacks_enabled(void* self, bool b) {
    QSettings_SetFallbacksEnabled((QSettings*)self, b);
}

bool q_settings_fallbacks_enabled(void* self) {
    return QSettings_FallbacksEnabled((QSettings*)self);
}

const char* q_settings_file_name(void* self) {
    libqt_string _str = QSettings_FileName((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_settings_format(void* self) {
    return QSettings_Format((QSettings*)self);
}

int32_t q_settings_scope(void* self) {
    return QSettings_Scope((QSettings*)self);
}

const char* q_settings_organization_name(void* self) {
    libqt_string _str = QSettings_OrganizationName((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_settings_application_name(void* self) {
    libqt_string _str = QSettings_ApplicationName((QSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_settings_set_default_format(int32_t format) {
    QSettings_SetDefaultFormat(format);
}

int32_t q_settings_default_format() {
    return QSettings_DefaultFormat();
}

void q_settings_set_path(int32_t format, int32_t scope, const char* path) {
    QSettings_SetPath(format, scope, qstring(path));
}

bool q_settings_event(void* self, void* event) {
    return QSettings_Event((QSettings*)self, (QEvent*)event);
}

void q_settings_on_event(void* self, bool (*callback)(void*, void*)) {
    QSettings_OnEvent((QSettings*)self, (intptr_t)callback);
}

bool q_settings_super_event(void* self, void* event) {
    return QSettings_SuperEvent((QSettings*)self, (QEvent*)event);
}

const char* q_settings_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_settings_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_settings_begin_write_array2(void* self, const char* prefix, int size) {
    QSettings_BeginWriteArray2((QSettings*)self, prefix, size);
}

const char* q_settings_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_settings_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_settings_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_settings_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_settings_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_settings_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_settings_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_settings_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_settings_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_settings_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_settings_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_settings_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_settings_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_settings_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_settings_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_settings_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_settings_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_settings_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_settings_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_settings_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_settings_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_settings_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_settings_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_settings_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_settings_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_settings_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_settings_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_settings_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_settings_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_settings_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_settings_dynamic_property_names\n");
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

QBindingStorage* q_settings_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_settings_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_settings_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_settings_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_settings_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_settings_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_settings_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_settings_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_settings_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_settings_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_settings_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_settings_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_settings_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_settings_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_settings_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_settings_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_settings_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_settings_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_settings_event_filter(void* self, void* watched, void* event) {
    return QSettings_EventFilter((QSettings*)self, (QObject*)watched, (QEvent*)event);
}

bool q_settings_super_event_filter(void* self, void* watched, void* event) {
    return QSettings_SuperEventFilter((QSettings*)self, (QObject*)watched, (QEvent*)event);
}

void q_settings_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSettings_OnEventFilter((QSettings*)self, (intptr_t)callback);
}

void q_settings_timer_event(void* self, void* event) {
    QSettings_TimerEvent((QSettings*)self, (QTimerEvent*)event);
}

void q_settings_super_timer_event(void* self, void* event) {
    QSettings_SuperTimerEvent((QSettings*)self, (QTimerEvent*)event);
}

void q_settings_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSettings_OnTimerEvent((QSettings*)self, (intptr_t)callback);
}

void q_settings_child_event(void* self, void* event) {
    QSettings_ChildEvent((QSettings*)self, (QChildEvent*)event);
}

void q_settings_super_child_event(void* self, void* event) {
    QSettings_SuperChildEvent((QSettings*)self, (QChildEvent*)event);
}

void q_settings_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSettings_OnChildEvent((QSettings*)self, (intptr_t)callback);
}

void q_settings_custom_event(void* self, void* event) {
    QSettings_CustomEvent((QSettings*)self, (QEvent*)event);
}

void q_settings_super_custom_event(void* self, void* event) {
    QSettings_SuperCustomEvent((QSettings*)self, (QEvent*)event);
}

void q_settings_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSettings_OnCustomEvent((QSettings*)self, (intptr_t)callback);
}

void q_settings_connect_notify(void* self, void* signal) {
    QSettings_ConnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

void q_settings_super_connect_notify(void* self, void* signal) {
    QSettings_SuperConnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

void q_settings_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSettings_OnConnectNotify((QSettings*)self, (intptr_t)callback);
}

void q_settings_disconnect_notify(void* self, void* signal) {
    QSettings_DisconnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

void q_settings_super_disconnect_notify(void* self, void* signal) {
    QSettings_SuperDisconnectNotify((QSettings*)self, (QMetaMethod*)signal);
}

void q_settings_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSettings_OnDisconnectNotify((QSettings*)self, (intptr_t)callback);
}

QObject* q_settings_sender(void* self) {
    return QSettings_Sender((QSettings*)self);
}

QObject* q_settings_super_sender(void* self) {
    return QSettings_SuperSender((QSettings*)self);
}

void q_settings_on_sender(void* self, QObject* (*callback)()) {
    QSettings_OnSender((QSettings*)self, (intptr_t)callback);
}

int32_t q_settings_sender_signal_index(void* self) {
    return QSettings_SenderSignalIndex((QSettings*)self);
}

int32_t q_settings_super_sender_signal_index(void* self) {
    return QSettings_SuperSenderSignalIndex((QSettings*)self);
}

void q_settings_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSettings_OnSenderSignalIndex((QSettings*)self, (intptr_t)callback);
}

int32_t q_settings_receivers(void* self, const char* signal) {
    return QSettings_Receivers((QSettings*)self, signal);
}

int32_t q_settings_super_receivers(void* self, const char* signal) {
    return QSettings_SuperReceivers((QSettings*)self, signal);
}

void q_settings_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSettings_OnReceivers((QSettings*)self, (intptr_t)callback);
}

bool q_settings_is_signal_connected(void* self, void* signal) {
    return QSettings_IsSignalConnected((QSettings*)self, (QMetaMethod*)signal);
}

bool q_settings_super_is_signal_connected(void* self, void* signal) {
    return QSettings_SuperIsSignalConnected((QSettings*)self, (QMetaMethod*)signal);
}

void q_settings_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSettings_OnIsSignalConnected((QSettings*)self, (intptr_t)callback);
}

void q_settings_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_settings_delete(void* self) {
    QSettings_Delete((QSettings*)(self));
}
