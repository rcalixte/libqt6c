#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libkeychain.hpp"
#include "libkeychain.h"

const QMetaObject* q_keychain__job_meta_object(void* self) {
    return QKeychain__Job_MetaObject((QKeychain__Job*)self);
}

void* q_keychain__job_metacast(void* self, const char* param1) {
    return QKeychain__Job_Metacast((QKeychain__Job*)self, param1);
}

int32_t q_keychain__job_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QKeychain__Job_Metacall((QKeychain__Job*)self, param1, param2, param3);
}

const char* q_keychain__job_tr(const char* s) {
    libqt_string _str = QKeychain__Job_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSettings* q_keychain__job_settings(void* self) {
    return QKeychain__Job_Settings((QKeychain__Job*)self);
}

void q_keychain__job_set_settings(void* self, void* settings) {
    QKeychain__Job_SetSettings((QKeychain__Job*)self, (QSettings*)settings);
}

void q_keychain__job_start(void* self) {
    QKeychain__Job_Start((QKeychain__Job*)self);
}

const char* q_keychain__job_service(void* self) {
    libqt_string _str = QKeychain__Job_Service((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_keychain__job_error(void* self) {
    return QKeychain__Job_Error((QKeychain__Job*)self);
}

const char* q_keychain__job_error_string(void* self) {
    libqt_string _str = QKeychain__Job_ErrorString((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_keychain__job_auto_delete(void* self) {
    return QKeychain__Job_AutoDelete((QKeychain__Job*)self);
}

void q_keychain__job_set_auto_delete(void* self, bool autoDelete) {
    QKeychain__Job_SetAutoDelete((QKeychain__Job*)self, autoDelete);
}

bool q_keychain__job_insecure_fallback(void* self) {
    return QKeychain__Job_InsecureFallback((QKeychain__Job*)self);
}

void q_keychain__job_set_insecure_fallback(void* self, bool insecureFallback) {
    QKeychain__Job_SetInsecureFallback((QKeychain__Job*)self, insecureFallback);
}

const char* q_keychain__job_key(void* self) {
    libqt_string _str = QKeychain__Job_Key((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__job_set_key(void* self, const char* key) {
    QKeychain__Job_SetKey((QKeychain__Job*)self, qstring(key));
}

void q_keychain__job_emit_finished(void* self) {
    QKeychain__Job_EmitFinished((QKeychain__Job*)self);
}

void q_keychain__job_emit_finished_with_error(void* self, int32_t param1, const char* errorString) {
    QKeychain__Job_EmitFinishedWithError((QKeychain__Job*)self, param1, qstring(errorString));
}

void q_keychain__job_finished(void* self, void* param1) {
    QKeychain__Job_Finished((QKeychain__Job*)self, (QKeychain__Job*)param1);
}

void q_keychain__job_on_finished(void* self, void (*callback)(void*, void*)) {
    QKeychain__Job_Connect_Finished((QKeychain__Job*)self, (intptr_t)callback);
}

const char* q_keychain__job_tr2(const char* s, const char* c) {
    libqt_string _str = QKeychain__Job_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keychain__job_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QKeychain__Job_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_keychain__job_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_keychain__job_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_keychain__job_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__job_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_keychain__job_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_keychain__job_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_keychain__job_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_keychain__job_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_keychain__job_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_keychain__job_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_keychain__job_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_keychain__job_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_keychain__job_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_keychain__job_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_keychain__job_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_keychain__job_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_keychain__job_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_keychain__job_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_keychain__job_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_keychain__job_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_keychain__job_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_keychain__job_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_keychain__job_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_keychain__job_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_keychain__job_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_keychain__job_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_keychain__job_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_keychain__job_dynamic_property_names");
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

QBindingStorage* q_keychain__job_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_keychain__job_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_keychain__job_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_keychain__job_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_keychain__job_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_keychain__job_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_keychain__job_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_keychain__job_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_keychain__job_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_keychain__job_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_keychain__job_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_keychain__job_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_keychain__job_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_keychain__job_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_keychain__job_delete(void* self) {
    QKeychain__Job_Delete((QKeychain__Job*)(self));
}

QKeychain__ReadPasswordJob* q_keychain__readpasswordjob_new(const char* service) {
    return QKeychain__ReadPasswordJob_new(qstring(service));
}

QKeychain__ReadPasswordJob* q_keychain__readpasswordjob_new2(const char* service, void* parent) {
    return QKeychain__ReadPasswordJob_new2(qstring(service), (QObject*)parent);
}

const QMetaObject* q_keychain__readpasswordjob_meta_object(void* self) {
    return QKeychain__ReadPasswordJob_MetaObject((QKeychain__ReadPasswordJob*)self);
}

void* q_keychain__readpasswordjob_metacast(void* self, const char* param1) {
    return QKeychain__ReadPasswordJob_Metacast((QKeychain__ReadPasswordJob*)self, param1);
}

int32_t q_keychain__readpasswordjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QKeychain__ReadPasswordJob_Metacall((QKeychain__ReadPasswordJob*)self, param1, param2, param3);
}

void q_keychain__readpasswordjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QKeychain__ReadPasswordJob_OnMetacall((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__readpasswordjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QKeychain__ReadPasswordJob_QBaseMetacall((QKeychain__ReadPasswordJob*)self, param1, param2, param3);
}

const char* q_keychain__readpasswordjob_tr(const char* s) {
    libqt_string _str = QKeychain__ReadPasswordJob_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_keychain__readpasswordjob_binary_data(void* self) {
    libqt_string _str = QKeychain__ReadPasswordJob_BinaryData((QKeychain__ReadPasswordJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keychain__readpasswordjob_text_data(void* self) {
    libqt_string _str = QKeychain__ReadPasswordJob_TextData((QKeychain__ReadPasswordJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keychain__readpasswordjob_tr2(const char* s, const char* c) {
    libqt_string _str = QKeychain__ReadPasswordJob_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keychain__readpasswordjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QKeychain__ReadPasswordJob_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSettings* q_keychain__readpasswordjob_settings(void* self) {
    return QKeychain__Job_Settings((QKeychain__Job*)self);
}

void q_keychain__readpasswordjob_set_settings(void* self, void* settings) {
    QKeychain__Job_SetSettings((QKeychain__Job*)self, (QSettings*)settings);
}

void q_keychain__readpasswordjob_start(void* self) {
    QKeychain__Job_Start((QKeychain__Job*)self);
}

const char* q_keychain__readpasswordjob_service(void* self) {
    libqt_string _str = QKeychain__Job_Service((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_keychain__readpasswordjob_error(void* self) {
    return QKeychain__Job_Error((QKeychain__Job*)self);
}

const char* q_keychain__readpasswordjob_error_string(void* self) {
    libqt_string _str = QKeychain__Job_ErrorString((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_keychain__readpasswordjob_auto_delete(void* self) {
    return QKeychain__Job_AutoDelete((QKeychain__Job*)self);
}

void q_keychain__readpasswordjob_set_auto_delete(void* self, bool autoDelete) {
    QKeychain__Job_SetAutoDelete((QKeychain__Job*)self, autoDelete);
}

bool q_keychain__readpasswordjob_insecure_fallback(void* self) {
    return QKeychain__Job_InsecureFallback((QKeychain__Job*)self);
}

void q_keychain__readpasswordjob_set_insecure_fallback(void* self, bool insecureFallback) {
    QKeychain__Job_SetInsecureFallback((QKeychain__Job*)self, insecureFallback);
}

const char* q_keychain__readpasswordjob_key(void* self) {
    libqt_string _str = QKeychain__Job_Key((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__readpasswordjob_set_key(void* self, const char* key) {
    QKeychain__Job_SetKey((QKeychain__Job*)self, qstring(key));
}

void q_keychain__readpasswordjob_emit_finished(void* self) {
    QKeychain__Job_EmitFinished((QKeychain__Job*)self);
}

void q_keychain__readpasswordjob_emit_finished_with_error(void* self, int32_t param1, const char* errorString) {
    QKeychain__Job_EmitFinishedWithError((QKeychain__Job*)self, param1, qstring(errorString));
}

void q_keychain__readpasswordjob_finished(void* self, void* param1) {
    QKeychain__Job_Finished((QKeychain__Job*)self, (QKeychain__Job*)param1);
}

void q_keychain__readpasswordjob_on_finished(void* self, void (*callback)(void*, void*)) {
    QKeychain__Job_Connect_Finished((QKeychain__Job*)self, (intptr_t)callback);
}

const char* q_keychain__readpasswordjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__readpasswordjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_keychain__readpasswordjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_keychain__readpasswordjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_keychain__readpasswordjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_keychain__readpasswordjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_keychain__readpasswordjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_keychain__readpasswordjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_keychain__readpasswordjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_keychain__readpasswordjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_keychain__readpasswordjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_keychain__readpasswordjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_keychain__readpasswordjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_keychain__readpasswordjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_keychain__readpasswordjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_keychain__readpasswordjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_keychain__readpasswordjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_keychain__readpasswordjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_keychain__readpasswordjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_keychain__readpasswordjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_keychain__readpasswordjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_keychain__readpasswordjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_keychain__readpasswordjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_keychain__readpasswordjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_keychain__readpasswordjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_keychain__readpasswordjob_dynamic_property_names");
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

QBindingStorage* q_keychain__readpasswordjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_keychain__readpasswordjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_keychain__readpasswordjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_keychain__readpasswordjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_keychain__readpasswordjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_keychain__readpasswordjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_keychain__readpasswordjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_keychain__readpasswordjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_keychain__readpasswordjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_keychain__readpasswordjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_keychain__readpasswordjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_keychain__readpasswordjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_keychain__readpasswordjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_keychain__readpasswordjob_event(void* self, void* event) {
    return QKeychain__ReadPasswordJob_Event((QKeychain__ReadPasswordJob*)self, (QEvent*)event);
}

bool q_keychain__readpasswordjob_qbase_event(void* self, void* event) {
    return QKeychain__ReadPasswordJob_QBaseEvent((QKeychain__ReadPasswordJob*)self, (QEvent*)event);
}

void q_keychain__readpasswordjob_on_event(void* self, bool (*callback)(void*, void*)) {
    QKeychain__ReadPasswordJob_OnEvent((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

bool q_keychain__readpasswordjob_event_filter(void* self, void* watched, void* event) {
    return QKeychain__ReadPasswordJob_EventFilter((QKeychain__ReadPasswordJob*)self, (QObject*)watched, (QEvent*)event);
}

bool q_keychain__readpasswordjob_qbase_event_filter(void* self, void* watched, void* event) {
    return QKeychain__ReadPasswordJob_QBaseEventFilter((QKeychain__ReadPasswordJob*)self, (QObject*)watched, (QEvent*)event);
}

void q_keychain__readpasswordjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QKeychain__ReadPasswordJob_OnEventFilter((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_timer_event(void* self, void* event) {
    QKeychain__ReadPasswordJob_TimerEvent((QKeychain__ReadPasswordJob*)self, (QTimerEvent*)event);
}

void q_keychain__readpasswordjob_qbase_timer_event(void* self, void* event) {
    QKeychain__ReadPasswordJob_QBaseTimerEvent((QKeychain__ReadPasswordJob*)self, (QTimerEvent*)event);
}

void q_keychain__readpasswordjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__ReadPasswordJob_OnTimerEvent((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_child_event(void* self, void* event) {
    QKeychain__ReadPasswordJob_ChildEvent((QKeychain__ReadPasswordJob*)self, (QChildEvent*)event);
}

void q_keychain__readpasswordjob_qbase_child_event(void* self, void* event) {
    QKeychain__ReadPasswordJob_QBaseChildEvent((QKeychain__ReadPasswordJob*)self, (QChildEvent*)event);
}

void q_keychain__readpasswordjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__ReadPasswordJob_OnChildEvent((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_custom_event(void* self, void* event) {
    QKeychain__ReadPasswordJob_CustomEvent((QKeychain__ReadPasswordJob*)self, (QEvent*)event);
}

void q_keychain__readpasswordjob_qbase_custom_event(void* self, void* event) {
    QKeychain__ReadPasswordJob_QBaseCustomEvent((QKeychain__ReadPasswordJob*)self, (QEvent*)event);
}

void q_keychain__readpasswordjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__ReadPasswordJob_OnCustomEvent((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_connect_notify(void* self, void* signal) {
    QKeychain__ReadPasswordJob_ConnectNotify((QKeychain__ReadPasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__readpasswordjob_qbase_connect_notify(void* self, void* signal) {
    QKeychain__ReadPasswordJob_QBaseConnectNotify((QKeychain__ReadPasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__readpasswordjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QKeychain__ReadPasswordJob_OnConnectNotify((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_disconnect_notify(void* self, void* signal) {
    QKeychain__ReadPasswordJob_DisconnectNotify((QKeychain__ReadPasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__readpasswordjob_qbase_disconnect_notify(void* self, void* signal) {
    QKeychain__ReadPasswordJob_QBaseDisconnectNotify((QKeychain__ReadPasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__readpasswordjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QKeychain__ReadPasswordJob_OnDisconnectNotify((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_do_start(void* self) {
    QKeychain__ReadPasswordJob_DoStart((QKeychain__ReadPasswordJob*)self);
}

void q_keychain__readpasswordjob_qbase_do_start(void* self) {
    QKeychain__ReadPasswordJob_QBaseDoStart((QKeychain__ReadPasswordJob*)self);
}

void q_keychain__readpasswordjob_on_do_start(void* self, void (*callback)()) {
    QKeychain__ReadPasswordJob_OnDoStart((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

QObject* q_keychain__readpasswordjob_sender(void* self) {
    return QKeychain__ReadPasswordJob_Sender((QKeychain__ReadPasswordJob*)self);
}

QObject* q_keychain__readpasswordjob_qbase_sender(void* self) {
    return QKeychain__ReadPasswordJob_QBaseSender((QKeychain__ReadPasswordJob*)self);
}

void q_keychain__readpasswordjob_on_sender(void* self, QObject* (*callback)()) {
    QKeychain__ReadPasswordJob_OnSender((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__readpasswordjob_sender_signal_index(void* self) {
    return QKeychain__ReadPasswordJob_SenderSignalIndex((QKeychain__ReadPasswordJob*)self);
}

int32_t q_keychain__readpasswordjob_qbase_sender_signal_index(void* self) {
    return QKeychain__ReadPasswordJob_QBaseSenderSignalIndex((QKeychain__ReadPasswordJob*)self);
}

void q_keychain__readpasswordjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QKeychain__ReadPasswordJob_OnSenderSignalIndex((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__readpasswordjob_receivers(void* self, const char* signal) {
    return QKeychain__ReadPasswordJob_Receivers((QKeychain__ReadPasswordJob*)self, signal);
}

int32_t q_keychain__readpasswordjob_qbase_receivers(void* self, const char* signal) {
    return QKeychain__ReadPasswordJob_QBaseReceivers((QKeychain__ReadPasswordJob*)self, signal);
}

void q_keychain__readpasswordjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QKeychain__ReadPasswordJob_OnReceivers((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

bool q_keychain__readpasswordjob_is_signal_connected(void* self, void* signal) {
    return QKeychain__ReadPasswordJob_IsSignalConnected((QKeychain__ReadPasswordJob*)self, (QMetaMethod*)signal);
}

bool q_keychain__readpasswordjob_qbase_is_signal_connected(void* self, void* signal) {
    return QKeychain__ReadPasswordJob_QBaseIsSignalConnected((QKeychain__ReadPasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__readpasswordjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QKeychain__ReadPasswordJob_OnIsSignalConnected((QKeychain__ReadPasswordJob*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_keychain__readpasswordjob_delete(void* self) {
    QKeychain__ReadPasswordJob_Delete((QKeychain__ReadPasswordJob*)(self));
}

QKeychain__WritePasswordJob* q_keychain__writepasswordjob_new(const char* service) {
    return QKeychain__WritePasswordJob_new(qstring(service));
}

QKeychain__WritePasswordJob* q_keychain__writepasswordjob_new2(const char* service, void* parent) {
    return QKeychain__WritePasswordJob_new2(qstring(service), (QObject*)parent);
}

const QMetaObject* q_keychain__writepasswordjob_meta_object(void* self) {
    return QKeychain__WritePasswordJob_MetaObject((QKeychain__WritePasswordJob*)self);
}

void* q_keychain__writepasswordjob_metacast(void* self, const char* param1) {
    return QKeychain__WritePasswordJob_Metacast((QKeychain__WritePasswordJob*)self, param1);
}

int32_t q_keychain__writepasswordjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QKeychain__WritePasswordJob_Metacall((QKeychain__WritePasswordJob*)self, param1, param2, param3);
}

void q_keychain__writepasswordjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QKeychain__WritePasswordJob_OnMetacall((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__writepasswordjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QKeychain__WritePasswordJob_QBaseMetacall((QKeychain__WritePasswordJob*)self, param1, param2, param3);
}

const char* q_keychain__writepasswordjob_tr(const char* s) {
    libqt_string _str = QKeychain__WritePasswordJob_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__writepasswordjob_set_binary_data(void* self, const char* data) {
    QKeychain__WritePasswordJob_SetBinaryData((QKeychain__WritePasswordJob*)self, qstring(data));
}

void q_keychain__writepasswordjob_set_text_data(void* self, const char* data) {
    QKeychain__WritePasswordJob_SetTextData((QKeychain__WritePasswordJob*)self, qstring(data));
}

const char* q_keychain__writepasswordjob_tr2(const char* s, const char* c) {
    libqt_string _str = QKeychain__WritePasswordJob_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keychain__writepasswordjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QKeychain__WritePasswordJob_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSettings* q_keychain__writepasswordjob_settings(void* self) {
    return QKeychain__Job_Settings((QKeychain__Job*)self);
}

void q_keychain__writepasswordjob_set_settings(void* self, void* settings) {
    QKeychain__Job_SetSettings((QKeychain__Job*)self, (QSettings*)settings);
}

void q_keychain__writepasswordjob_start(void* self) {
    QKeychain__Job_Start((QKeychain__Job*)self);
}

const char* q_keychain__writepasswordjob_service(void* self) {
    libqt_string _str = QKeychain__Job_Service((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_keychain__writepasswordjob_error(void* self) {
    return QKeychain__Job_Error((QKeychain__Job*)self);
}

const char* q_keychain__writepasswordjob_error_string(void* self) {
    libqt_string _str = QKeychain__Job_ErrorString((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_keychain__writepasswordjob_auto_delete(void* self) {
    return QKeychain__Job_AutoDelete((QKeychain__Job*)self);
}

void q_keychain__writepasswordjob_set_auto_delete(void* self, bool autoDelete) {
    QKeychain__Job_SetAutoDelete((QKeychain__Job*)self, autoDelete);
}

bool q_keychain__writepasswordjob_insecure_fallback(void* self) {
    return QKeychain__Job_InsecureFallback((QKeychain__Job*)self);
}

void q_keychain__writepasswordjob_set_insecure_fallback(void* self, bool insecureFallback) {
    QKeychain__Job_SetInsecureFallback((QKeychain__Job*)self, insecureFallback);
}

const char* q_keychain__writepasswordjob_key(void* self) {
    libqt_string _str = QKeychain__Job_Key((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__writepasswordjob_set_key(void* self, const char* key) {
    QKeychain__Job_SetKey((QKeychain__Job*)self, qstring(key));
}

void q_keychain__writepasswordjob_emit_finished(void* self) {
    QKeychain__Job_EmitFinished((QKeychain__Job*)self);
}

void q_keychain__writepasswordjob_emit_finished_with_error(void* self, int32_t param1, const char* errorString) {
    QKeychain__Job_EmitFinishedWithError((QKeychain__Job*)self, param1, qstring(errorString));
}

void q_keychain__writepasswordjob_finished(void* self, void* param1) {
    QKeychain__Job_Finished((QKeychain__Job*)self, (QKeychain__Job*)param1);
}

void q_keychain__writepasswordjob_on_finished(void* self, void (*callback)(void*, void*)) {
    QKeychain__Job_Connect_Finished((QKeychain__Job*)self, (intptr_t)callback);
}

const char* q_keychain__writepasswordjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__writepasswordjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_keychain__writepasswordjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_keychain__writepasswordjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_keychain__writepasswordjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_keychain__writepasswordjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_keychain__writepasswordjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_keychain__writepasswordjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_keychain__writepasswordjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_keychain__writepasswordjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_keychain__writepasswordjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_keychain__writepasswordjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_keychain__writepasswordjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_keychain__writepasswordjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_keychain__writepasswordjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_keychain__writepasswordjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_keychain__writepasswordjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_keychain__writepasswordjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_keychain__writepasswordjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_keychain__writepasswordjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_keychain__writepasswordjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_keychain__writepasswordjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_keychain__writepasswordjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_keychain__writepasswordjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_keychain__writepasswordjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_keychain__writepasswordjob_dynamic_property_names");
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

QBindingStorage* q_keychain__writepasswordjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_keychain__writepasswordjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_keychain__writepasswordjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_keychain__writepasswordjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_keychain__writepasswordjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_keychain__writepasswordjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_keychain__writepasswordjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_keychain__writepasswordjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_keychain__writepasswordjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_keychain__writepasswordjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_keychain__writepasswordjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_keychain__writepasswordjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_keychain__writepasswordjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_keychain__writepasswordjob_event(void* self, void* event) {
    return QKeychain__WritePasswordJob_Event((QKeychain__WritePasswordJob*)self, (QEvent*)event);
}

bool q_keychain__writepasswordjob_qbase_event(void* self, void* event) {
    return QKeychain__WritePasswordJob_QBaseEvent((QKeychain__WritePasswordJob*)self, (QEvent*)event);
}

void q_keychain__writepasswordjob_on_event(void* self, bool (*callback)(void*, void*)) {
    QKeychain__WritePasswordJob_OnEvent((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

bool q_keychain__writepasswordjob_event_filter(void* self, void* watched, void* event) {
    return QKeychain__WritePasswordJob_EventFilter((QKeychain__WritePasswordJob*)self, (QObject*)watched, (QEvent*)event);
}

bool q_keychain__writepasswordjob_qbase_event_filter(void* self, void* watched, void* event) {
    return QKeychain__WritePasswordJob_QBaseEventFilter((QKeychain__WritePasswordJob*)self, (QObject*)watched, (QEvent*)event);
}

void q_keychain__writepasswordjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QKeychain__WritePasswordJob_OnEventFilter((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_timer_event(void* self, void* event) {
    QKeychain__WritePasswordJob_TimerEvent((QKeychain__WritePasswordJob*)self, (QTimerEvent*)event);
}

void q_keychain__writepasswordjob_qbase_timer_event(void* self, void* event) {
    QKeychain__WritePasswordJob_QBaseTimerEvent((QKeychain__WritePasswordJob*)self, (QTimerEvent*)event);
}

void q_keychain__writepasswordjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__WritePasswordJob_OnTimerEvent((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_child_event(void* self, void* event) {
    QKeychain__WritePasswordJob_ChildEvent((QKeychain__WritePasswordJob*)self, (QChildEvent*)event);
}

void q_keychain__writepasswordjob_qbase_child_event(void* self, void* event) {
    QKeychain__WritePasswordJob_QBaseChildEvent((QKeychain__WritePasswordJob*)self, (QChildEvent*)event);
}

void q_keychain__writepasswordjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__WritePasswordJob_OnChildEvent((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_custom_event(void* self, void* event) {
    QKeychain__WritePasswordJob_CustomEvent((QKeychain__WritePasswordJob*)self, (QEvent*)event);
}

void q_keychain__writepasswordjob_qbase_custom_event(void* self, void* event) {
    QKeychain__WritePasswordJob_QBaseCustomEvent((QKeychain__WritePasswordJob*)self, (QEvent*)event);
}

void q_keychain__writepasswordjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__WritePasswordJob_OnCustomEvent((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_connect_notify(void* self, void* signal) {
    QKeychain__WritePasswordJob_ConnectNotify((QKeychain__WritePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__writepasswordjob_qbase_connect_notify(void* self, void* signal) {
    QKeychain__WritePasswordJob_QBaseConnectNotify((QKeychain__WritePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__writepasswordjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QKeychain__WritePasswordJob_OnConnectNotify((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_disconnect_notify(void* self, void* signal) {
    QKeychain__WritePasswordJob_DisconnectNotify((QKeychain__WritePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__writepasswordjob_qbase_disconnect_notify(void* self, void* signal) {
    QKeychain__WritePasswordJob_QBaseDisconnectNotify((QKeychain__WritePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__writepasswordjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QKeychain__WritePasswordJob_OnDisconnectNotify((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_do_start(void* self) {
    QKeychain__WritePasswordJob_DoStart((QKeychain__WritePasswordJob*)self);
}

void q_keychain__writepasswordjob_qbase_do_start(void* self) {
    QKeychain__WritePasswordJob_QBaseDoStart((QKeychain__WritePasswordJob*)self);
}

void q_keychain__writepasswordjob_on_do_start(void* self, void (*callback)()) {
    QKeychain__WritePasswordJob_OnDoStart((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

QObject* q_keychain__writepasswordjob_sender(void* self) {
    return QKeychain__WritePasswordJob_Sender((QKeychain__WritePasswordJob*)self);
}

QObject* q_keychain__writepasswordjob_qbase_sender(void* self) {
    return QKeychain__WritePasswordJob_QBaseSender((QKeychain__WritePasswordJob*)self);
}

void q_keychain__writepasswordjob_on_sender(void* self, QObject* (*callback)()) {
    QKeychain__WritePasswordJob_OnSender((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__writepasswordjob_sender_signal_index(void* self) {
    return QKeychain__WritePasswordJob_SenderSignalIndex((QKeychain__WritePasswordJob*)self);
}

int32_t q_keychain__writepasswordjob_qbase_sender_signal_index(void* self) {
    return QKeychain__WritePasswordJob_QBaseSenderSignalIndex((QKeychain__WritePasswordJob*)self);
}

void q_keychain__writepasswordjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QKeychain__WritePasswordJob_OnSenderSignalIndex((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__writepasswordjob_receivers(void* self, const char* signal) {
    return QKeychain__WritePasswordJob_Receivers((QKeychain__WritePasswordJob*)self, signal);
}

int32_t q_keychain__writepasswordjob_qbase_receivers(void* self, const char* signal) {
    return QKeychain__WritePasswordJob_QBaseReceivers((QKeychain__WritePasswordJob*)self, signal);
}

void q_keychain__writepasswordjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QKeychain__WritePasswordJob_OnReceivers((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

bool q_keychain__writepasswordjob_is_signal_connected(void* self, void* signal) {
    return QKeychain__WritePasswordJob_IsSignalConnected((QKeychain__WritePasswordJob*)self, (QMetaMethod*)signal);
}

bool q_keychain__writepasswordjob_qbase_is_signal_connected(void* self, void* signal) {
    return QKeychain__WritePasswordJob_QBaseIsSignalConnected((QKeychain__WritePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__writepasswordjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QKeychain__WritePasswordJob_OnIsSignalConnected((QKeychain__WritePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_keychain__writepasswordjob_delete(void* self) {
    QKeychain__WritePasswordJob_Delete((QKeychain__WritePasswordJob*)(self));
}

QKeychain__DeletePasswordJob* q_keychain__deletepasswordjob_new(const char* service) {
    return QKeychain__DeletePasswordJob_new(qstring(service));
}

QKeychain__DeletePasswordJob* q_keychain__deletepasswordjob_new2(const char* service, void* parent) {
    return QKeychain__DeletePasswordJob_new2(qstring(service), (QObject*)parent);
}

const QMetaObject* q_keychain__deletepasswordjob_meta_object(void* self) {
    return QKeychain__DeletePasswordJob_MetaObject((QKeychain__DeletePasswordJob*)self);
}

void* q_keychain__deletepasswordjob_metacast(void* self, const char* param1) {
    return QKeychain__DeletePasswordJob_Metacast((QKeychain__DeletePasswordJob*)self, param1);
}

int32_t q_keychain__deletepasswordjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QKeychain__DeletePasswordJob_Metacall((QKeychain__DeletePasswordJob*)self, param1, param2, param3);
}

void q_keychain__deletepasswordjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QKeychain__DeletePasswordJob_OnMetacall((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__deletepasswordjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QKeychain__DeletePasswordJob_QBaseMetacall((QKeychain__DeletePasswordJob*)self, param1, param2, param3);
}

const char* q_keychain__deletepasswordjob_tr(const char* s) {
    libqt_string _str = QKeychain__DeletePasswordJob_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keychain__deletepasswordjob_tr2(const char* s, const char* c) {
    libqt_string _str = QKeychain__DeletePasswordJob_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_keychain__deletepasswordjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QKeychain__DeletePasswordJob_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSettings* q_keychain__deletepasswordjob_settings(void* self) {
    return QKeychain__Job_Settings((QKeychain__Job*)self);
}

void q_keychain__deletepasswordjob_set_settings(void* self, void* settings) {
    QKeychain__Job_SetSettings((QKeychain__Job*)self, (QSettings*)settings);
}

void q_keychain__deletepasswordjob_start(void* self) {
    QKeychain__Job_Start((QKeychain__Job*)self);
}

const char* q_keychain__deletepasswordjob_service(void* self) {
    libqt_string _str = QKeychain__Job_Service((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_keychain__deletepasswordjob_error(void* self) {
    return QKeychain__Job_Error((QKeychain__Job*)self);
}

const char* q_keychain__deletepasswordjob_error_string(void* self) {
    libqt_string _str = QKeychain__Job_ErrorString((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_keychain__deletepasswordjob_auto_delete(void* self) {
    return QKeychain__Job_AutoDelete((QKeychain__Job*)self);
}

void q_keychain__deletepasswordjob_set_auto_delete(void* self, bool autoDelete) {
    QKeychain__Job_SetAutoDelete((QKeychain__Job*)self, autoDelete);
}

bool q_keychain__deletepasswordjob_insecure_fallback(void* self) {
    return QKeychain__Job_InsecureFallback((QKeychain__Job*)self);
}

void q_keychain__deletepasswordjob_set_insecure_fallback(void* self, bool insecureFallback) {
    QKeychain__Job_SetInsecureFallback((QKeychain__Job*)self, insecureFallback);
}

const char* q_keychain__deletepasswordjob_key(void* self) {
    libqt_string _str = QKeychain__Job_Key((QKeychain__Job*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__deletepasswordjob_set_key(void* self, const char* key) {
    QKeychain__Job_SetKey((QKeychain__Job*)self, qstring(key));
}

void q_keychain__deletepasswordjob_emit_finished(void* self) {
    QKeychain__Job_EmitFinished((QKeychain__Job*)self);
}

void q_keychain__deletepasswordjob_emit_finished_with_error(void* self, int32_t param1, const char* errorString) {
    QKeychain__Job_EmitFinishedWithError((QKeychain__Job*)self, param1, qstring(errorString));
}

void q_keychain__deletepasswordjob_finished(void* self, void* param1) {
    QKeychain__Job_Finished((QKeychain__Job*)self, (QKeychain__Job*)param1);
}

void q_keychain__deletepasswordjob_on_finished(void* self, void (*callback)(void*, void*)) {
    QKeychain__Job_Connect_Finished((QKeychain__Job*)self, (intptr_t)callback);
}

const char* q_keychain__deletepasswordjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_keychain__deletepasswordjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_keychain__deletepasswordjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_keychain__deletepasswordjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_keychain__deletepasswordjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_keychain__deletepasswordjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_keychain__deletepasswordjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_keychain__deletepasswordjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_keychain__deletepasswordjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_keychain__deletepasswordjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_keychain__deletepasswordjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_keychain__deletepasswordjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_keychain__deletepasswordjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_keychain__deletepasswordjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_keychain__deletepasswordjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_keychain__deletepasswordjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_keychain__deletepasswordjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_keychain__deletepasswordjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_keychain__deletepasswordjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_keychain__deletepasswordjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_keychain__deletepasswordjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_keychain__deletepasswordjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_keychain__deletepasswordjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_keychain__deletepasswordjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_keychain__deletepasswordjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_keychain__deletepasswordjob_dynamic_property_names");
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

QBindingStorage* q_keychain__deletepasswordjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_keychain__deletepasswordjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_keychain__deletepasswordjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_keychain__deletepasswordjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_keychain__deletepasswordjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_keychain__deletepasswordjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_keychain__deletepasswordjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_keychain__deletepasswordjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_keychain__deletepasswordjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_keychain__deletepasswordjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_keychain__deletepasswordjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_keychain__deletepasswordjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_keychain__deletepasswordjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_keychain__deletepasswordjob_event(void* self, void* event) {
    return QKeychain__DeletePasswordJob_Event((QKeychain__DeletePasswordJob*)self, (QEvent*)event);
}

bool q_keychain__deletepasswordjob_qbase_event(void* self, void* event) {
    return QKeychain__DeletePasswordJob_QBaseEvent((QKeychain__DeletePasswordJob*)self, (QEvent*)event);
}

void q_keychain__deletepasswordjob_on_event(void* self, bool (*callback)(void*, void*)) {
    QKeychain__DeletePasswordJob_OnEvent((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

bool q_keychain__deletepasswordjob_event_filter(void* self, void* watched, void* event) {
    return QKeychain__DeletePasswordJob_EventFilter((QKeychain__DeletePasswordJob*)self, (QObject*)watched, (QEvent*)event);
}

bool q_keychain__deletepasswordjob_qbase_event_filter(void* self, void* watched, void* event) {
    return QKeychain__DeletePasswordJob_QBaseEventFilter((QKeychain__DeletePasswordJob*)self, (QObject*)watched, (QEvent*)event);
}

void q_keychain__deletepasswordjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QKeychain__DeletePasswordJob_OnEventFilter((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_timer_event(void* self, void* event) {
    QKeychain__DeletePasswordJob_TimerEvent((QKeychain__DeletePasswordJob*)self, (QTimerEvent*)event);
}

void q_keychain__deletepasswordjob_qbase_timer_event(void* self, void* event) {
    QKeychain__DeletePasswordJob_QBaseTimerEvent((QKeychain__DeletePasswordJob*)self, (QTimerEvent*)event);
}

void q_keychain__deletepasswordjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__DeletePasswordJob_OnTimerEvent((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_child_event(void* self, void* event) {
    QKeychain__DeletePasswordJob_ChildEvent((QKeychain__DeletePasswordJob*)self, (QChildEvent*)event);
}

void q_keychain__deletepasswordjob_qbase_child_event(void* self, void* event) {
    QKeychain__DeletePasswordJob_QBaseChildEvent((QKeychain__DeletePasswordJob*)self, (QChildEvent*)event);
}

void q_keychain__deletepasswordjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__DeletePasswordJob_OnChildEvent((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_custom_event(void* self, void* event) {
    QKeychain__DeletePasswordJob_CustomEvent((QKeychain__DeletePasswordJob*)self, (QEvent*)event);
}

void q_keychain__deletepasswordjob_qbase_custom_event(void* self, void* event) {
    QKeychain__DeletePasswordJob_QBaseCustomEvent((QKeychain__DeletePasswordJob*)self, (QEvent*)event);
}

void q_keychain__deletepasswordjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QKeychain__DeletePasswordJob_OnCustomEvent((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_connect_notify(void* self, void* signal) {
    QKeychain__DeletePasswordJob_ConnectNotify((QKeychain__DeletePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__deletepasswordjob_qbase_connect_notify(void* self, void* signal) {
    QKeychain__DeletePasswordJob_QBaseConnectNotify((QKeychain__DeletePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__deletepasswordjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QKeychain__DeletePasswordJob_OnConnectNotify((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_disconnect_notify(void* self, void* signal) {
    QKeychain__DeletePasswordJob_DisconnectNotify((QKeychain__DeletePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__deletepasswordjob_qbase_disconnect_notify(void* self, void* signal) {
    QKeychain__DeletePasswordJob_QBaseDisconnectNotify((QKeychain__DeletePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__deletepasswordjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QKeychain__DeletePasswordJob_OnDisconnectNotify((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_do_start(void* self) {
    QKeychain__DeletePasswordJob_DoStart((QKeychain__DeletePasswordJob*)self);
}

void q_keychain__deletepasswordjob_qbase_do_start(void* self) {
    QKeychain__DeletePasswordJob_QBaseDoStart((QKeychain__DeletePasswordJob*)self);
}

void q_keychain__deletepasswordjob_on_do_start(void* self, void (*callback)()) {
    QKeychain__DeletePasswordJob_OnDoStart((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

QObject* q_keychain__deletepasswordjob_sender(void* self) {
    return QKeychain__DeletePasswordJob_Sender((QKeychain__DeletePasswordJob*)self);
}

QObject* q_keychain__deletepasswordjob_qbase_sender(void* self) {
    return QKeychain__DeletePasswordJob_QBaseSender((QKeychain__DeletePasswordJob*)self);
}

void q_keychain__deletepasswordjob_on_sender(void* self, QObject* (*callback)()) {
    QKeychain__DeletePasswordJob_OnSender((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__deletepasswordjob_sender_signal_index(void* self) {
    return QKeychain__DeletePasswordJob_SenderSignalIndex((QKeychain__DeletePasswordJob*)self);
}

int32_t q_keychain__deletepasswordjob_qbase_sender_signal_index(void* self) {
    return QKeychain__DeletePasswordJob_QBaseSenderSignalIndex((QKeychain__DeletePasswordJob*)self);
}

void q_keychain__deletepasswordjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QKeychain__DeletePasswordJob_OnSenderSignalIndex((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

int32_t q_keychain__deletepasswordjob_receivers(void* self, const char* signal) {
    return QKeychain__DeletePasswordJob_Receivers((QKeychain__DeletePasswordJob*)self, signal);
}

int32_t q_keychain__deletepasswordjob_qbase_receivers(void* self, const char* signal) {
    return QKeychain__DeletePasswordJob_QBaseReceivers((QKeychain__DeletePasswordJob*)self, signal);
}

void q_keychain__deletepasswordjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QKeychain__DeletePasswordJob_OnReceivers((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

bool q_keychain__deletepasswordjob_is_signal_connected(void* self, void* signal) {
    return QKeychain__DeletePasswordJob_IsSignalConnected((QKeychain__DeletePasswordJob*)self, (QMetaMethod*)signal);
}

bool q_keychain__deletepasswordjob_qbase_is_signal_connected(void* self, void* signal) {
    return QKeychain__DeletePasswordJob_QBaseIsSignalConnected((QKeychain__DeletePasswordJob*)self, (QMetaMethod*)signal);
}

void q_keychain__deletepasswordjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QKeychain__DeletePasswordJob_OnIsSignalConnected((QKeychain__DeletePasswordJob*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_keychain__deletepasswordjob_delete(void* self) {
    QKeychain__DeletePasswordJob_Delete((QKeychain__DeletePasswordJob*)(self));
}

bool q_keychain_is_available() {
    return QKeychain_IsAvailable();
}
