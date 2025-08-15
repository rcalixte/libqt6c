#include "../libqdatetime.hpp"
#include "libqhttpheaders.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqabstractnetworkcache.hpp"
#include "libqabstractnetworkcache.h"

QNetworkCacheMetaData* q_networkcachemetadata_new() {
    return QNetworkCacheMetaData_new();
}

QNetworkCacheMetaData* q_networkcachemetadata_new2(void* other) {
    return QNetworkCacheMetaData_new2((QNetworkCacheMetaData*)other);
}

void q_networkcachemetadata_operator_assign(void* self, void* other) {
    QNetworkCacheMetaData_OperatorAssign((QNetworkCacheMetaData*)self, (QNetworkCacheMetaData*)other);
}

void q_networkcachemetadata_swap(void* self, void* other) {
    QNetworkCacheMetaData_Swap((QNetworkCacheMetaData*)self, (QNetworkCacheMetaData*)other);
}

bool q_networkcachemetadata_operator_equal(void* self, void* other) {
    return QNetworkCacheMetaData_OperatorEqual((QNetworkCacheMetaData*)self, (QNetworkCacheMetaData*)other);
}

bool q_networkcachemetadata_operator_not_equal(void* self, void* other) {
    return QNetworkCacheMetaData_OperatorNotEqual((QNetworkCacheMetaData*)self, (QNetworkCacheMetaData*)other);
}

bool q_networkcachemetadata_is_valid(void* self) {
    return QNetworkCacheMetaData_IsValid((QNetworkCacheMetaData*)self);
}

QUrl* q_networkcachemetadata_url(void* self) {
    return QNetworkCacheMetaData_Url((QNetworkCacheMetaData*)self);
}

void q_networkcachemetadata_set_url(void* self, void* url) {
    QNetworkCacheMetaData_SetUrl((QNetworkCacheMetaData*)self, (QUrl*)url);
}

libqt_list /* of libqt_pair  tuple of char* and char*  */ q_networkcachemetadata_raw_headers(void* self) {
    libqt_list _arr = QNetworkCacheMetaData_RawHeaders((QNetworkCacheMetaData*)self);
    return _arr;
}

void q_networkcachemetadata_set_raw_headers(void* self, libqt_list /* of libqt_pair  tuple of char* and char*  */ headers) {
    QNetworkCacheMetaData_SetRawHeaders((QNetworkCacheMetaData*)self, headers);
}

QHttpHeaders* q_networkcachemetadata_headers(void* self) {
    return QNetworkCacheMetaData_Headers((QNetworkCacheMetaData*)self);
}

void q_networkcachemetadata_set_headers(void* self, void* headers) {
    QNetworkCacheMetaData_SetHeaders((QNetworkCacheMetaData*)self, (QHttpHeaders*)headers);
}

QDateTime* q_networkcachemetadata_last_modified(void* self) {
    return QNetworkCacheMetaData_LastModified((QNetworkCacheMetaData*)self);
}

void q_networkcachemetadata_set_last_modified(void* self, void* dateTime) {
    QNetworkCacheMetaData_SetLastModified((QNetworkCacheMetaData*)self, (QDateTime*)dateTime);
}

QDateTime* q_networkcachemetadata_expiration_date(void* self) {
    return QNetworkCacheMetaData_ExpirationDate((QNetworkCacheMetaData*)self);
}

void q_networkcachemetadata_set_expiration_date(void* self, void* dateTime) {
    QNetworkCacheMetaData_SetExpirationDate((QNetworkCacheMetaData*)self, (QDateTime*)dateTime);
}

bool q_networkcachemetadata_save_to_disk(void* self) {
    return QNetworkCacheMetaData_SaveToDisk((QNetworkCacheMetaData*)self);
}

void q_networkcachemetadata_set_save_to_disk(void* self, bool allow) {
    QNetworkCacheMetaData_SetSaveToDisk((QNetworkCacheMetaData*)self, allow);
}

libqt_map /* of int64_t to QVariant* */ q_networkcachemetadata_attributes(void* self) {
    return QNetworkCacheMetaData_Attributes((QNetworkCacheMetaData*)self);
}

void q_networkcachemetadata_set_attributes(void* self, libqt_map /* of int64_t to QVariant* */ attributes) {
    QNetworkCacheMetaData_SetAttributes((QNetworkCacheMetaData*)self, attributes);
}

void q_networkcachemetadata_delete(void* self) {
    QNetworkCacheMetaData_Delete((QNetworkCacheMetaData*)(self));
}

const QMetaObject* q_abstractnetworkcache_meta_object(void* self) {
    return QAbstractNetworkCache_MetaObject((QAbstractNetworkCache*)self);
}

void* q_abstractnetworkcache_metacast(void* self, const char* param1) {
    return QAbstractNetworkCache_Metacast((QAbstractNetworkCache*)self, param1);
}

int32_t q_abstractnetworkcache_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractNetworkCache_Metacall((QAbstractNetworkCache*)self, param1, param2, param3);
}

const char* q_abstractnetworkcache_tr(const char* s) {
    libqt_string _str = QAbstractNetworkCache_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QNetworkCacheMetaData* q_abstractnetworkcache_meta_data(void* self, void* url) {
    return QAbstractNetworkCache_MetaData((QAbstractNetworkCache*)self, (QUrl*)url);
}

void q_abstractnetworkcache_update_meta_data(void* self, void* metaData) {
    QAbstractNetworkCache_UpdateMetaData((QAbstractNetworkCache*)self, (QNetworkCacheMetaData*)metaData);
}

QIODevice* q_abstractnetworkcache_data(void* self, void* url) {
    return QAbstractNetworkCache_Data((QAbstractNetworkCache*)self, (QUrl*)url);
}

bool q_abstractnetworkcache_remove(void* self, void* url) {
    return QAbstractNetworkCache_Remove((QAbstractNetworkCache*)self, (QUrl*)url);
}

long long q_abstractnetworkcache_cache_size(void* self) {
    return QAbstractNetworkCache_CacheSize((QAbstractNetworkCache*)self);
}

QIODevice* q_abstractnetworkcache_prepare(void* self, void* metaData) {
    return QAbstractNetworkCache_Prepare((QAbstractNetworkCache*)self, (QNetworkCacheMetaData*)metaData);
}

void q_abstractnetworkcache_insert(void* self, void* device) {
    QAbstractNetworkCache_Insert((QAbstractNetworkCache*)self, (QIODevice*)device);
}

void q_abstractnetworkcache_clear(void* self) {
    QAbstractNetworkCache_Clear((QAbstractNetworkCache*)self);
}

const char* q_abstractnetworkcache_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractNetworkCache_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractnetworkcache_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractNetworkCache_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractnetworkcache_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_abstractnetworkcache_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_abstractnetworkcache_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractnetworkcache_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractnetworkcache_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractnetworkcache_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractnetworkcache_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractnetworkcache_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractnetworkcache_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractnetworkcache_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractnetworkcache_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractnetworkcache_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractnetworkcache_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractnetworkcache_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractnetworkcache_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractnetworkcache_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractnetworkcache_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractnetworkcache_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractnetworkcache_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractnetworkcache_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractnetworkcache_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractnetworkcache_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractnetworkcache_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractnetworkcache_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractnetworkcache_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractnetworkcache_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractnetworkcache_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_abstractnetworkcache_dynamic_property_names");
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

QBindingStorage* q_abstractnetworkcache_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractnetworkcache_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractnetworkcache_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractnetworkcache_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstractnetworkcache_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractnetworkcache_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractnetworkcache_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractnetworkcache_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractnetworkcache_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractnetworkcache_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractnetworkcache_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractnetworkcache_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractnetworkcache_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_abstractnetworkcache_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractnetworkcache_delete(void* self) {
    QAbstractNetworkCache_Delete((QAbstractNetworkCache*)(self));
}
