#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libqwebengineurlrequestjob.hpp"
#include "libqwebengineurlrequestjob.h"

const QMetaObject* q_webengineurlrequestjob_meta_object(void* self) {
    return QWebEngineUrlRequestJob_MetaObject((QWebEngineUrlRequestJob*)self);
}

void* q_webengineurlrequestjob_metacast(void* self, const char* param1) {
    return QWebEngineUrlRequestJob_Metacast((QWebEngineUrlRequestJob*)self, param1);
}

int32_t q_webengineurlrequestjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineUrlRequestJob_Metacall((QWebEngineUrlRequestJob*)self, param1, param2, param3);
}

const char* q_webengineurlrequestjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_webengineurlrequestjob_request_url(void* self) {
    return QWebEngineUrlRequestJob_RequestUrl((QWebEngineUrlRequestJob*)self);
}

char* q_webengineurlrequestjob_request_method(void* self) {
    libqt_string _str = QWebEngineUrlRequestJob_RequestMethod((QWebEngineUrlRequestJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_webengineurlrequestjob_initiator(void* self) {
    return QWebEngineUrlRequestJob_Initiator((QWebEngineUrlRequestJob*)self);
}

libqt_map /* of char* to char* */ q_webengineurlrequestjob_request_headers(void* self) {
    // Convert QMap<QByteArray,QByteArray> to libqt_map
    libqt_map _out = QWebEngineUrlRequestJob_RequestHeaders((QWebEngineUrlRequestJob*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_webengineurlrequestjob_request_headers\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in q_webengineurlrequestjob_request_headers\n");
        free(_out.keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_webengineurlrequestjob_request_headers\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in q_webengineurlrequestjob_request_headers\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

QIODevice* q_webengineurlrequestjob_request_body(void* self) {
    return QWebEngineUrlRequestJob_RequestBody((QWebEngineUrlRequestJob*)self);
}

void q_webengineurlrequestjob_reply(void* self, const char* contentType, void* device) {
    QWebEngineUrlRequestJob_Reply((QWebEngineUrlRequestJob*)self, qstring(contentType), (QIODevice*)device);
}

void q_webengineurlrequestjob_fail(void* self, int32_t error) {
    QWebEngineUrlRequestJob_Fail((QWebEngineUrlRequestJob*)self, error);
}

void q_webengineurlrequestjob_redirect(void* self, void* url) {
    QWebEngineUrlRequestJob_Redirect((QWebEngineUrlRequestJob*)self, (QUrl*)url);
}

void q_webengineurlrequestjob_set_additional_response_headers(void* self, libqt_map /* of char* to char** */ additionalResponseHeaders) {
    // Convert libqt_map to QMultiMap<QByteArray,QByteArray>
    libqt_map additionalResponseHeaders_ret;
    additionalResponseHeaders_ret.len = additionalResponseHeaders.len;
    additionalResponseHeaders_ret.keys = (libqt_string*)malloc(additionalResponseHeaders_ret.len * sizeof(libqt_string));
    if (additionalResponseHeaders_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_webengineurlrequestjob_set_additional_response_headers\n");
        abort();
    }
    additionalResponseHeaders_ret.values = (libqt_list*)malloc(additionalResponseHeaders_ret.len * sizeof(libqt_list));
    if (additionalResponseHeaders_ret.values == NULL) {
        free(additionalResponseHeaders_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_webengineurlrequestjob_set_additional_response_headers\n");
        abort();
    }
    char** additionalResponseHeaders_karr = (char**)additionalResponseHeaders.keys;
    libqt_string* additionalResponseHeaders_kdest = (libqt_string*)additionalResponseHeaders_ret.keys;
    char*** additionalResponseHeaders_varr = (char***)additionalResponseHeaders.values;
    libqt_list* additionalResponseHeaders_vdest = (libqt_list*)additionalResponseHeaders_ret.values;
    for (size_t i = 0; i < additionalResponseHeaders_ret.len; ++i) {
        additionalResponseHeaders_kdest[i] = qstring(additionalResponseHeaders_karr[i]);
        char** additionalResponseHeaders_array = additionalResponseHeaders_varr[i];
        size_t additionalResponseHeaders_value_count = libqt_strv_length((const char**)additionalResponseHeaders_array);
        libqt_string* additionalResponseHeaders_value_strings = (libqt_string*)malloc(additionalResponseHeaders_value_count * sizeof(libqt_string));
        if (additionalResponseHeaders_value_strings == NULL) {
            for (size_t j = 0; j < i; j++) {
                free(((libqt_list*)additionalResponseHeaders_ret.values)[j].data.ptr);
            }
            free(additionalResponseHeaders_ret.keys);
            free(additionalResponseHeaders_ret.values);
            fprintf(stderr, "Failed to allocate memory for map string key in q_webengineurlrequestjob_set_additional_response_headers\n");
            abort();
        }
        for (size_t j = 0; j < additionalResponseHeaders_value_count; j++) {
            additionalResponseHeaders_value_strings[j] = qstring(additionalResponseHeaders_array[j]);
        }
        additionalResponseHeaders_vdest[i].len = additionalResponseHeaders_value_count;
        additionalResponseHeaders_vdest[i].data.ptr = additionalResponseHeaders_value_strings;
    }
    QWebEngineUrlRequestJob_SetAdditionalResponseHeaders((QWebEngineUrlRequestJob*)self, additionalResponseHeaders_ret);
    for (size_t i = 0; i < additionalResponseHeaders_ret.len; ++i) {
        free(((libqt_list*)additionalResponseHeaders_ret.values)[i].data.ptr);
    }

    free(additionalResponseHeaders_ret.keys);
    free(additionalResponseHeaders_ret.values);
}

const char* q_webengineurlrequestjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineurlrequestjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webengineurlrequestjob_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webengineurlrequestjob_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webengineurlrequestjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineurlrequestjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webengineurlrequestjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webengineurlrequestjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webengineurlrequestjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webengineurlrequestjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webengineurlrequestjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webengineurlrequestjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webengineurlrequestjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webengineurlrequestjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webengineurlrequestjob_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webengineurlrequestjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webengineurlrequestjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webengineurlrequestjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webengineurlrequestjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webengineurlrequestjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webengineurlrequestjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webengineurlrequestjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webengineurlrequestjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webengineurlrequestjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webengineurlrequestjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webengineurlrequestjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webengineurlrequestjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webengineurlrequestjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webengineurlrequestjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webengineurlrequestjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webengineurlrequestjob_dynamic_property_names\n");
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

QBindingStorage* q_webengineurlrequestjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webengineurlrequestjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webengineurlrequestjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webengineurlrequestjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webengineurlrequestjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webengineurlrequestjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webengineurlrequestjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_webengineurlrequestjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_webengineurlrequestjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webengineurlrequestjob_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webengineurlrequestjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webengineurlrequestjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_webengineurlrequestjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webengineurlrequestjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_webengineurlrequestjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webengineurlrequestjob_delete(void* self) {
    QWebEngineUrlRequestJob_Delete((QWebEngineUrlRequestJob*)(self));
}
