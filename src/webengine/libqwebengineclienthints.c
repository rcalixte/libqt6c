#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqwebengineclienthints.hpp"
#include "libqwebengineclienthints.h"

const QMetaObject* q_webengineclienthints_meta_object(void* self) {
    return QWebEngineClientHints_MetaObject((QWebEngineClientHints*)self);
}

void* q_webengineclienthints_metacast(void* self, const char* param1) {
    return QWebEngineClientHints_Metacast((QWebEngineClientHints*)self, param1);
}

int32_t q_webengineclienthints_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebEngineClientHints_Metacall((QWebEngineClientHints*)self, param1, param2, param3);
}

const char* q_webengineclienthints_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineclienthints_arch(void* self) {
    libqt_string _str = QWebEngineClientHints_Arch((QWebEngineClientHints*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineclienthints_platform(void* self) {
    libqt_string _str = QWebEngineClientHints_Platform((QWebEngineClientHints*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineclienthints_model(void* self) {
    libqt_string _str = QWebEngineClientHints_Model((QWebEngineClientHints*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webengineclienthints_is_mobile(void* self) {
    return QWebEngineClientHints_IsMobile((QWebEngineClientHints*)self);
}

const char* q_webengineclienthints_full_version(void* self) {
    libqt_string _str = QWebEngineClientHints_FullVersion((QWebEngineClientHints*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineclienthints_platform_version(void* self) {
    libqt_string _str = QWebEngineClientHints_PlatformVersion((QWebEngineClientHints*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineclienthints_bitness(void* self) {
    libqt_string _str = QWebEngineClientHints_Bitness((QWebEngineClientHints*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to QVariant* */ q_webengineclienthints_full_version_list(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QWebEngineClientHints_FullVersionList((QWebEngineClientHints*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_webengineclienthints_full_version_list\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_webengineclienthints_full_version_list\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

bool q_webengineclienthints_is_wow64(void* self) {
    return QWebEngineClientHints_IsWow64((QWebEngineClientHints*)self);
}

void q_webengineclienthints_set_arch(void* self, const char* arch) {
    QWebEngineClientHints_SetArch((QWebEngineClientHints*)self, qstring(arch));
}

void q_webengineclienthints_set_platform(void* self, const char* platform) {
    QWebEngineClientHints_SetPlatform((QWebEngineClientHints*)self, qstring(platform));
}

void q_webengineclienthints_set_model(void* self, const char* model) {
    QWebEngineClientHints_SetModel((QWebEngineClientHints*)self, qstring(model));
}

void q_webengineclienthints_set_is_mobile(void* self, bool isMobile) {
    QWebEngineClientHints_SetIsMobile((QWebEngineClientHints*)self, isMobile);
}

void q_webengineclienthints_set_full_version(void* self, const char* fullVersion) {
    QWebEngineClientHints_SetFullVersion((QWebEngineClientHints*)self, qstring(fullVersion));
}

void q_webengineclienthints_set_platform_version(void* self, const char* platformVersion) {
    QWebEngineClientHints_SetPlatformVersion((QWebEngineClientHints*)self, qstring(platformVersion));
}

void q_webengineclienthints_set_bitness(void* self, const char* bitness) {
    QWebEngineClientHints_SetBitness((QWebEngineClientHints*)self, qstring(bitness));
}

void q_webengineclienthints_set_full_version_list(void* self, libqt_map /* of const char* to QVariant* */ fullVersionList) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map fullVersionList_ret;
    fullVersionList_ret.len = fullVersionList.len;
    fullVersionList_ret.keys = (libqt_string*)malloc(fullVersionList_ret.len * sizeof(libqt_string));
    if (fullVersionList_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_webengineclienthints_set_full_version_list\n");
        abort();
    }
    fullVersionList_ret.values = (QVariant**)malloc(fullVersionList_ret.len * sizeof(QVariant*));
    if (fullVersionList_ret.values == NULL) {
        free(fullVersionList_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_webengineclienthints_set_full_version_list\n");
        abort();
    }
    const char** fullVersionList_karr = (const char**)fullVersionList.keys;
    libqt_string* fullVersionList_kdest = (libqt_string*)fullVersionList_ret.keys;
    QVariant** fullVersionList_varr = (QVariant**)fullVersionList.values;
    QVariant** fullVersionList_vdest = (QVariant**)fullVersionList_ret.values;
    for (size_t i = 0; i < fullVersionList_ret.len; ++i) {
        fullVersionList_kdest[i] = qstring(fullVersionList_karr[i]);
        fullVersionList_vdest[i] = fullVersionList_varr[i];
    }
    QWebEngineClientHints_SetFullVersionList((QWebEngineClientHints*)self, fullVersionList_ret);
    free(fullVersionList_ret.keys);
    free(fullVersionList_ret.values);
}

void q_webengineclienthints_set_is_wow64(void* self, bool isWow64) {
    QWebEngineClientHints_SetIsWow64((QWebEngineClientHints*)self, isWow64);
}

bool q_webengineclienthints_is_all_client_hints_enabled(void* self) {
    return QWebEngineClientHints_IsAllClientHintsEnabled((QWebEngineClientHints*)self);
}

void q_webengineclienthints_set_all_client_hints_enabled(void* self, bool enabled) {
    QWebEngineClientHints_SetAllClientHintsEnabled((QWebEngineClientHints*)self, enabled);
}

void q_webengineclienthints_reset_all(void* self) {
    QWebEngineClientHints_ResetAll((QWebEngineClientHints*)self);
}

const char* q_webengineclienthints_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineclienthints_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webengineclienthints_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_webengineclienthints_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_webengineclienthints_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webengineclienthints_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_webengineclienthints_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_webengineclienthints_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_webengineclienthints_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_webengineclienthints_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_webengineclienthints_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_webengineclienthints_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_webengineclienthints_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_webengineclienthints_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_webengineclienthints_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_webengineclienthints_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_webengineclienthints_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_webengineclienthints_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_webengineclienthints_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_webengineclienthints_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_webengineclienthints_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_webengineclienthints_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_webengineclienthints_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_webengineclienthints_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_webengineclienthints_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_webengineclienthints_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_webengineclienthints_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_webengineclienthints_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_webengineclienthints_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_webengineclienthints_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_webengineclienthints_dynamic_property_names\n");
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

QBindingStorage* q_webengineclienthints_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_webengineclienthints_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_webengineclienthints_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_webengineclienthints_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_webengineclienthints_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_webengineclienthints_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_webengineclienthints_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_webengineclienthints_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_webengineclienthints_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_webengineclienthints_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_webengineclienthints_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_webengineclienthints_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_webengineclienthints_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_webengineclienthints_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_webengineclienthints_delete(void* self) {
    QWebEngineClientHints_Delete((QWebEngineClientHints*)(self));
}
