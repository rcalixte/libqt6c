#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsqlerror.hpp"
#include "libqsqlfield.hpp"
#include "libqsqlindex.hpp"
#include "libqsqlrecord.hpp"
#include "libqsqlresult.hpp"
#include "../libqvariant.hpp"
#include "libqsqldriver.hpp"
#include "libqsqldriver.h"

QSqlDriver* q_sqldriver_new() {
    return QSqlDriver_New();
}

QSqlDriver* q_sqldriver_new2(void* parent) {
    return QSqlDriver_New2((QObject*)parent);
}

const QMetaObject* q_sqldriver_meta_object(const void* self) {
    return QSqlDriver_MetaObject((QSqlDriver*)self);
}

void q_sqldriver_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QSqlDriver_OnMetaObject((QSqlDriver*)self, (intptr_t)callback);
}

const QMetaObject* q_sqldriver_super_meta_object(const void* self) {
    return QSqlDriver_SuperMetaObject((QSqlDriver*)self);
}

void* q_sqldriver_metacast(void* self, const char* param1) {
    return QSqlDriver_Metacast((QSqlDriver*)self, param1);
}

void q_sqldriver_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSqlDriver_OnMetacast((QSqlDriver*)self, (intptr_t)callback);
}

void* q_sqldriver_super_metacast(void* self, const char* param1) {
    return QSqlDriver_SuperMetacast((QSqlDriver*)self, param1);
}

int32_t q_sqldriver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlDriver_Metacall((QSqlDriver*)self, param1, param2, param3);
}

void q_sqldriver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSqlDriver_OnMetacall((QSqlDriver*)self, (intptr_t)callback);
}

int32_t q_sqldriver_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSqlDriver_SuperMetacall((QSqlDriver*)self, param1, param2, param3);
}

const char* q_sqldriver_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sqldriver_is_open(const void* self) {
    return QSqlDriver_IsOpen((QSqlDriver*)self);
}

void q_sqldriver_on_is_open(const void* self, bool (*callback)(const void*)) {
    QSqlDriver_OnIsOpen((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_is_open(const void* self) {
    return QSqlDriver_SuperIsOpen((QSqlDriver*)self);
}

bool q_sqldriver_is_open_error(const void* self) {
    return QSqlDriver_IsOpenError((QSqlDriver*)self);
}

bool q_sqldriver_begin_transaction(void* self) {
    return QSqlDriver_BeginTransaction((QSqlDriver*)self);
}

void q_sqldriver_on_begin_transaction(void* self, bool (*callback)(void*)) {
    QSqlDriver_OnBeginTransaction((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_begin_transaction(void* self) {
    return QSqlDriver_SuperBeginTransaction((QSqlDriver*)self);
}

bool q_sqldriver_commit_transaction(void* self) {
    return QSqlDriver_CommitTransaction((QSqlDriver*)self);
}

void q_sqldriver_on_commit_transaction(void* self, bool (*callback)(void*)) {
    QSqlDriver_OnCommitTransaction((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_commit_transaction(void* self) {
    return QSqlDriver_SuperCommitTransaction((QSqlDriver*)self);
}

bool q_sqldriver_rollback_transaction(void* self) {
    return QSqlDriver_RollbackTransaction((QSqlDriver*)self);
}

void q_sqldriver_on_rollback_transaction(void* self, bool (*callback)(void*)) {
    QSqlDriver_OnRollbackTransaction((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_rollback_transaction(void* self) {
    return QSqlDriver_SuperRollbackTransaction((QSqlDriver*)self);
}

const char** q_sqldriver_tables(const void* self, int32_t tableType) {
    libqt_list _arr = QSqlDriver_Tables((QSqlDriver*)self, tableType);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldriver_tables\n");
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

void q_sqldriver_on_tables(const void* self, const char** (*callback)(const void*, int32_t)) {
    QSqlDriver_OnTables((QSqlDriver*)self, (intptr_t)callback);
}

const char** q_sqldriver_super_tables(const void* self, int32_t tableType) {
    libqt_list _arr = QSqlDriver_SuperTables((QSqlDriver*)self, tableType);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldriver_tables\n");
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

QSqlIndex* q_sqldriver_primary_index(const void* self, const char* tableName) {
    return QSqlDriver_PrimaryIndex((QSqlDriver*)self, qstring(tableName));
}

void q_sqldriver_on_primary_index(const void* self, QSqlIndex* (*callback)(const void*, const char*)) {
    QSqlDriver_OnPrimaryIndex((QSqlDriver*)self, (intptr_t)callback);
}

QSqlIndex* q_sqldriver_super_primary_index(const void* self, const char* tableName) {
    return QSqlDriver_SuperPrimaryIndex((QSqlDriver*)self, qstring(tableName));
}

QSqlRecord* q_sqldriver_record(const void* self, const char* tableName) {
    return QSqlDriver_Record((QSqlDriver*)self, qstring(tableName));
}

void q_sqldriver_on_record(const void* self, QSqlRecord* (*callback)(const void*, const char*)) {
    QSqlDriver_OnRecord((QSqlDriver*)self, (intptr_t)callback);
}

QSqlRecord* q_sqldriver_super_record(const void* self, const char* tableName) {
    return QSqlDriver_SuperRecord((QSqlDriver*)self, qstring(tableName));
}

const char* q_sqldriver_format_value(const void* self, const void* field, bool trimStrings) {
    libqt_string _str = QSqlDriver_FormatValue((QSqlDriver*)self, (QSqlField*)field, trimStrings);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldriver_on_format_value(const void* self, const char* (*callback)(const void*, const void*, bool)) {
    QSqlDriver_OnFormatValue((QSqlDriver*)self, (intptr_t)callback);
}

const char* q_sqldriver_super_format_value(const void* self, const void* field, bool trimStrings) {
    libqt_string _str = QSqlDriver_SuperFormatValue((QSqlDriver*)self, (QSqlField*)field, trimStrings);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldriver_escape_identifier(const void* self, const char* identifier, int32_t type) {
    libqt_string _str = QSqlDriver_EscapeIdentifier((QSqlDriver*)self, qstring(identifier), type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldriver_on_escape_identifier(const void* self, const char* (*callback)(const void*, const char*, int32_t)) {
    QSqlDriver_OnEscapeIdentifier((QSqlDriver*)self, (intptr_t)callback);
}

const char* q_sqldriver_super_escape_identifier(const void* self, const char* identifier, int32_t type) {
    libqt_string _str = QSqlDriver_SuperEscapeIdentifier((QSqlDriver*)self, qstring(identifier), type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldriver_sql_statement(const void* self, int32_t type, const char* tableName, const void* rec, bool preparedStatement) {
    libqt_string _str = QSqlDriver_SqlStatement((QSqlDriver*)self, type, qstring(tableName), (QSqlRecord*)rec, preparedStatement);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldriver_on_sql_statement(const void* self, const char* (*callback)(const void*, int32_t, const char*, const void*, bool)) {
    QSqlDriver_OnSqlStatement((QSqlDriver*)self, (intptr_t)callback);
}

const char* q_sqldriver_super_sql_statement(const void* self, int32_t type, const char* tableName, const void* rec, bool preparedStatement) {
    libqt_string _str = QSqlDriver_SuperSqlStatement((QSqlDriver*)self, type, qstring(tableName), (QSqlRecord*)rec, preparedStatement);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSqlError* q_sqldriver_last_error(const void* self) {
    return QSqlDriver_LastError((QSqlDriver*)self);
}

QVariant* q_sqldriver_handle(const void* self) {
    return QSqlDriver_Handle((QSqlDriver*)self);
}

void q_sqldriver_on_handle(const void* self, QVariant* (*callback)(const void*)) {
    QSqlDriver_OnHandle((QSqlDriver*)self, (intptr_t)callback);
}

QVariant* q_sqldriver_super_handle(const void* self) {
    return QSqlDriver_SuperHandle((QSqlDriver*)self);
}

bool q_sqldriver_has_feature(const void* self, int32_t f) {
    return QSqlDriver_HasFeature((QSqlDriver*)self, f);
}

void q_sqldriver_on_has_feature(const void* self, bool (*callback)(const void*, int32_t)) {
    QSqlDriver_OnHasFeature((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_close(void* self) {
    QSqlDriver_Close((QSqlDriver*)self);
}

void q_sqldriver_on_close(void* self, void (*callback)(void*)) {
    QSqlDriver_OnClose((QSqlDriver*)self, (intptr_t)callback);
}

QSqlResult* q_sqldriver_create_result(const void* self) {
    return QSqlDriver_CreateResult((QSqlDriver*)self);
}

void q_sqldriver_on_create_result(const void* self, QSqlResult* (*callback)(const void*)) {
    QSqlDriver_OnCreateResult((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_open(void* self, const char* db, const char* user, const char* password, const char* host, int port, const char* connOpts) {
    return QSqlDriver_Open((QSqlDriver*)self, qstring(db), qstring(user), qstring(password), qstring(host), port, qstring(connOpts));
}

void q_sqldriver_on_open(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, int, const char*)) {
    QSqlDriver_OnOpen((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_subscribe_to_notification(void* self, const char* name) {
    return QSqlDriver_SubscribeToNotification((QSqlDriver*)self, qstring(name));
}

void q_sqldriver_on_subscribe_to_notification(void* self, bool (*callback)(void*, const char*)) {
    QSqlDriver_OnSubscribeToNotification((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_subscribe_to_notification(void* self, const char* name) {
    return QSqlDriver_SuperSubscribeToNotification((QSqlDriver*)self, qstring(name));
}

bool q_sqldriver_unsubscribe_from_notification(void* self, const char* name) {
    return QSqlDriver_UnsubscribeFromNotification((QSqlDriver*)self, qstring(name));
}

void q_sqldriver_on_unsubscribe_from_notification(void* self, bool (*callback)(void*, const char*)) {
    QSqlDriver_OnUnsubscribeFromNotification((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_unsubscribe_from_notification(void* self, const char* name) {
    return QSqlDriver_SuperUnsubscribeFromNotification((QSqlDriver*)self, qstring(name));
}

const char** q_sqldriver_subscribed_to_notifications(const void* self) {
    libqt_list _arr = QSqlDriver_SubscribedToNotifications((QSqlDriver*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldriver_subscribed_to_notifications\n");
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

void q_sqldriver_on_subscribed_to_notifications(const void* self, const char** (*callback)(const void*)) {
    QSqlDriver_OnSubscribedToNotifications((QSqlDriver*)self, (intptr_t)callback);
}

const char** q_sqldriver_super_subscribed_to_notifications(const void* self) {
    libqt_list _arr = QSqlDriver_SuperSubscribedToNotifications((QSqlDriver*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldriver_subscribed_to_notifications\n");
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

bool q_sqldriver_is_identifier_escaped(const void* self, const char* identifier, int32_t type) {
    return QSqlDriver_IsIdentifierEscaped((QSqlDriver*)self, qstring(identifier), type);
}

void q_sqldriver_on_is_identifier_escaped(const void* self, bool (*callback)(const void*, const char*, int32_t)) {
    QSqlDriver_OnIsIdentifierEscaped((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_is_identifier_escaped(const void* self, const char* identifier, int32_t type) {
    return QSqlDriver_SuperIsIdentifierEscaped((QSqlDriver*)self, qstring(identifier), type);
}

const char* q_sqldriver_strip_delimiters(const void* self, const char* identifier, int32_t type) {
    libqt_string _str = QSqlDriver_StripDelimiters((QSqlDriver*)self, qstring(identifier), type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldriver_on_strip_delimiters(const void* self, const char* (*callback)(const void*, const char*, int32_t)) {
    QSqlDriver_OnStripDelimiters((QSqlDriver*)self, (intptr_t)callback);
}

const char* q_sqldriver_super_strip_delimiters(const void* self, const char* identifier, int32_t type) {
    libqt_string _str = QSqlDriver_SuperStripDelimiters((QSqlDriver*)self, qstring(identifier), type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldriver_set_numerical_precision_policy(void* self, int32_t precisionPolicy) {
    QSqlDriver_SetNumericalPrecisionPolicy((QSqlDriver*)self, precisionPolicy);
}

int32_t q_sqldriver_numerical_precision_policy(const void* self) {
    return QSqlDriver_NumericalPrecisionPolicy((QSqlDriver*)self);
}

int32_t q_sqldriver_dbms_type(const void* self) {
    return QSqlDriver_DbmsType((QSqlDriver*)self);
}

int32_t q_sqldriver_maximum_identifier_length(const void* self, int32_t type) {
    return QSqlDriver_MaximumIdentifierLength((QSqlDriver*)self, type);
}

void q_sqldriver_on_maximum_identifier_length(const void* self, int32_t (*callback)(const void*, int32_t)) {
    QSqlDriver_OnMaximumIdentifierLength((QSqlDriver*)self, (intptr_t)callback);
}

int32_t q_sqldriver_super_maximum_identifier_length(const void* self, int32_t type) {
    return QSqlDriver_SuperMaximumIdentifierLength((QSqlDriver*)self, type);
}

bool q_sqldriver_cancel_query(void* self) {
    return QSqlDriver_CancelQuery((QSqlDriver*)self);
}

void q_sqldriver_on_cancel_query(void* self, bool (*callback)(void*)) {
    QSqlDriver_OnCancelQuery((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_super_cancel_query(void* self) {
    return QSqlDriver_SuperCancelQuery((QSqlDriver*)self);
}

void q_sqldriver_notification(void* self, const char* name, int32_t source, const void* payload) {
    QSqlDriver_Notification((QSqlDriver*)self, qstring(name), source, (QVariant*)payload);
}

void q_sqldriver_on_notification(void* self, void (*callback)(void*, const char*, int32_t, const void*)) {
    QSqlDriver_Connect_Notification((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_set_open(void* self, bool o) {
    QSqlDriver_SetOpen((QSqlDriver*)self, o);
}

void q_sqldriver_on_set_open(void* self, void (*callback)(void*, bool)) {
    QSqlDriver_OnSetOpen((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_super_set_open(void* self, bool o) {
    QSqlDriver_SuperSetOpen((QSqlDriver*)self, o);
}

void q_sqldriver_set_open_error(void* self, bool e) {
    QSqlDriver_SetOpenError((QSqlDriver*)self, e);
}

void q_sqldriver_on_set_open_error(void* self, void (*callback)(void*, bool)) {
    QSqlDriver_OnSetOpenError((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_super_set_open_error(void* self, bool e) {
    QSqlDriver_SuperSetOpenError((QSqlDriver*)self, e);
}

void q_sqldriver_set_last_error(void* self, const void* e) {
    QSqlDriver_SetLastError((QSqlDriver*)self, (QSqlError*)e);
}

void q_sqldriver_on_set_last_error(void* self, void (*callback)(void*, const void*)) {
    QSqlDriver_OnSetLastError((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_super_set_last_error(void* self, const void* e) {
    QSqlDriver_SuperSetLastError((QSqlDriver*)self, (QSqlError*)e);
}

const char* q_sqldriver_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldriver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldriver_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldriver_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sqldriver_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sqldriver_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sqldriver_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sqldriver_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sqldriver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sqldriver_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sqldriver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sqldriver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sqldriver_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sqldriver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sqldriver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sqldriver_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sqldriver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sqldriver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sqldriver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sqldriver_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sqldriver_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sqldriver_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sqldriver_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sqldriver_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sqldriver_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sqldriver_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sqldriver_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sqldriver_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sqldriver_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sqldriver_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sqldriver_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sqldriver_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldriver_dynamic_property_names\n");
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

QBindingStorage* q_sqldriver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sqldriver_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sqldriver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sqldriver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sqldriver_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sqldriver_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sqldriver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_sqldriver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sqldriver_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sqldriver_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sqldriver_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sqldriver_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sqldriver_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sqldriver_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sqldriver_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sqldriver_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sqldriver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sqldriver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sqldriver_event(void* self, void* event) {
    return QSqlDriver_Event((QSqlDriver*)self, (QEvent*)event);
}

bool q_sqldriver_super_event(void* self, void* event) {
    return QSqlDriver_SuperEvent((QSqlDriver*)self, (QEvent*)event);
}

void q_sqldriver_on_event(void* self, bool (*callback)(void*, void*)) {
    QSqlDriver_OnEvent((QSqlDriver*)self, (intptr_t)callback);
}

bool q_sqldriver_event_filter(void* self, void* watched, void* event) {
    return QSqlDriver_EventFilter((QSqlDriver*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sqldriver_super_event_filter(void* self, void* watched, void* event) {
    return QSqlDriver_SuperEventFilter((QSqlDriver*)self, (QObject*)watched, (QEvent*)event);
}

void q_sqldriver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSqlDriver_OnEventFilter((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_timer_event(void* self, void* event) {
    QSqlDriver_TimerEvent((QSqlDriver*)self, (QTimerEvent*)event);
}

void q_sqldriver_super_timer_event(void* self, void* event) {
    QSqlDriver_SuperTimerEvent((QSqlDriver*)self, (QTimerEvent*)event);
}

void q_sqldriver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSqlDriver_OnTimerEvent((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_child_event(void* self, void* event) {
    QSqlDriver_ChildEvent((QSqlDriver*)self, (QChildEvent*)event);
}

void q_sqldriver_super_child_event(void* self, void* event) {
    QSqlDriver_SuperChildEvent((QSqlDriver*)self, (QChildEvent*)event);
}

void q_sqldriver_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSqlDriver_OnChildEvent((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_custom_event(void* self, void* event) {
    QSqlDriver_CustomEvent((QSqlDriver*)self, (QEvent*)event);
}

void q_sqldriver_super_custom_event(void* self, void* event) {
    QSqlDriver_SuperCustomEvent((QSqlDriver*)self, (QEvent*)event);
}

void q_sqldriver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSqlDriver_OnCustomEvent((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_connect_notify(void* self, const void* signal) {
    QSqlDriver_ConnectNotify((QSqlDriver*)self, (QMetaMethod*)signal);
}

void q_sqldriver_super_connect_notify(void* self, const void* signal) {
    QSqlDriver_SuperConnectNotify((QSqlDriver*)self, (QMetaMethod*)signal);
}

void q_sqldriver_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QSqlDriver_OnConnectNotify((QSqlDriver*)self, (intptr_t)callback);
}

void q_sqldriver_disconnect_notify(void* self, const void* signal) {
    QSqlDriver_DisconnectNotify((QSqlDriver*)self, (QMetaMethod*)signal);
}

void q_sqldriver_super_disconnect_notify(void* self, const void* signal) {
    QSqlDriver_SuperDisconnectNotify((QSqlDriver*)self, (QMetaMethod*)signal);
}

void q_sqldriver_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QSqlDriver_OnDisconnectNotify((QSqlDriver*)self, (intptr_t)callback);
}

QObject* q_sqldriver_sender(const void* self) {
    return QSqlDriver_Sender((QSqlDriver*)self);
}

int32_t q_sqldriver_sender_signal_index(const void* self) {
    return QSqlDriver_SenderSignalIndex((QSqlDriver*)self);
}

int32_t q_sqldriver_receivers(const void* self, const char* signal) {
    return QSqlDriver_Receivers((QSqlDriver*)self, signal);
}

bool q_sqldriver_is_signal_connected(const void* self, const void* signal) {
    return QSqlDriver_IsSignalConnected((QSqlDriver*)self, (QMetaMethod*)signal);
}

void q_sqldriver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sqldriver_delete(void* self) {
    QSqlDriver_Delete((QSqlDriver*)(self));
}
