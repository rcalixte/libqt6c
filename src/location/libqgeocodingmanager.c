#include "libqgeocodereply.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqgeocodingmanager.hpp"
#include "libqgeocodingmanager.h"

const QMetaObject* q_geocodingmanager_meta_object(void* self) {
    return QGeoCodingManager_MetaObject((QGeoCodingManager*)self);
}

void* q_geocodingmanager_metacast(void* self, const char* param1) {
    return QGeoCodingManager_Metacast((QGeoCodingManager*)self, param1);
}

int32_t q_geocodingmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGeoCodingManager_Metacall((QGeoCodingManager*)self, param1, param2, param3);
}

const char* q_geocodingmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geocodingmanager_manager_name(void* self) {
    libqt_string _str = QGeoCodingManager_ManagerName((QGeoCodingManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_geocodingmanager_manager_version(void* self) {
    return QGeoCodingManager_ManagerVersion((QGeoCodingManager*)self);
}

QGeoCodeReply* q_geocodingmanager_geocode(void* self, void* address) {
    return QGeoCodingManager_Geocode((QGeoCodingManager*)self, (QGeoAddress*)address);
}

QGeoCodeReply* q_geocodingmanager_geocode2(void* self, const char* searchString) {
    return QGeoCodingManager_Geocode2((QGeoCodingManager*)self, qstring(searchString));
}

QGeoCodeReply* q_geocodingmanager_reverse_geocode(void* self, void* coordinate) {
    return QGeoCodingManager_ReverseGeocode((QGeoCodingManager*)self, (QGeoCoordinate*)coordinate);
}

void q_geocodingmanager_set_locale(void* self, void* locale) {
    QGeoCodingManager_SetLocale((QGeoCodingManager*)self, (QLocale*)locale);
}

QLocale* q_geocodingmanager_locale(void* self) {
    return QGeoCodingManager_Locale((QGeoCodingManager*)self);
}

void q_geocodingmanager_finished(void* self, void* reply) {
    QGeoCodingManager_Finished((QGeoCodingManager*)self, (QGeoCodeReply*)reply);
}

void q_geocodingmanager_on_finished(void* self, void (*callback)(void*, void*)) {
    QGeoCodingManager_Connect_Finished((QGeoCodingManager*)self, (intptr_t)callback);
}

void q_geocodingmanager_error_occurred(void* self, void* reply, int32_t error) {
    QGeoCodingManager_ErrorOccurred((QGeoCodingManager*)self, (QGeoCodeReply*)reply, error);
}

void q_geocodingmanager_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t)) {
    QGeoCodingManager_Connect_ErrorOccurred((QGeoCodingManager*)self, (intptr_t)callback);
}

const char* q_geocodingmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_geocodingmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QGeoCodeReply* q_geocodingmanager_geocode22(void* self, void* address, void* bounds) {
    return QGeoCodingManager_Geocode22((QGeoCodingManager*)self, (QGeoAddress*)address, (QGeoShape*)bounds);
}

QGeoCodeReply* q_geocodingmanager_geocode23(void* self, const char* searchString, int limit) {
    return QGeoCodingManager_Geocode23((QGeoCodingManager*)self, qstring(searchString), limit);
}

QGeoCodeReply* q_geocodingmanager_geocode3(void* self, const char* searchString, int limit, int offset) {
    return QGeoCodingManager_Geocode3((QGeoCodingManager*)self, qstring(searchString), limit, offset);
}

QGeoCodeReply* q_geocodingmanager_geocode4(void* self, const char* searchString, int limit, int offset, void* bounds) {
    return QGeoCodingManager_Geocode4((QGeoCodingManager*)self, qstring(searchString), limit, offset, (QGeoShape*)bounds);
}

QGeoCodeReply* q_geocodingmanager_reverse_geocode2(void* self, void* coordinate, void* bounds) {
    return QGeoCodingManager_ReverseGeocode2((QGeoCodingManager*)self, (QGeoCoordinate*)coordinate, (QGeoShape*)bounds);
}

void q_geocodingmanager_error_occurred3(void* self, void* reply, int32_t error, const char* errorString) {
    QGeoCodingManager_ErrorOccurred3((QGeoCodingManager*)self, (QGeoCodeReply*)reply, error, qstring(errorString));
}

void q_geocodingmanager_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*)) {
    QGeoCodingManager_Connect_ErrorOccurred3((QGeoCodingManager*)self, (intptr_t)callback);
}

bool q_geocodingmanager_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_geocodingmanager_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_geocodingmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geocodingmanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_geocodingmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_geocodingmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_geocodingmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_geocodingmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_geocodingmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_geocodingmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_geocodingmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_geocodingmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_geocodingmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_geocodingmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_geocodingmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_geocodingmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_geocodingmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_geocodingmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_geocodingmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_geocodingmanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_geocodingmanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_geocodingmanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_geocodingmanager_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_geocodingmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_geocodingmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_geocodingmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_geocodingmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_geocodingmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_geocodingmanager_dynamic_property_names\n");
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

QBindingStorage* q_geocodingmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_geocodingmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_geocodingmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_geocodingmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_geocodingmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_geocodingmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_geocodingmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_geocodingmanager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_geocodingmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_geocodingmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_geocodingmanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_geocodingmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_geocodingmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_geocodingmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_geocodingmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_geocodingmanager_delete(void* self) {
    QGeoCodingManager_Delete((QGeoCodingManager*)(self));
}
