#include "../libqanystringview.hpp"
#include "libqsqldatabase.hpp"
#include "libqsqldriver.hpp"
#include "libqsqlerror.hpp"
#include "libqsqlrecord.hpp"
#include "libqsqlresult.hpp"
#include "../libqvariant.hpp"
#include "libqsqlquery.hpp"
#include "libqsqlquery.h"

QSqlQuery* q_sqlquery_new(void* r) {
    return QSqlQuery_new((QSqlResult*)r);
}

QSqlQuery* q_sqlquery_new2() {
    return QSqlQuery_new2();
}

QSqlQuery* q_sqlquery_new3(void* db) {
    return QSqlQuery_new3((QSqlDatabase*)db);
}

QSqlQuery* q_sqlquery_new4(void* other) {
    return QSqlQuery_new4((QSqlQuery*)other);
}

QSqlQuery* q_sqlquery_new5(const char* query) {
    return QSqlQuery_new5(qstring(query));
}

QSqlQuery* q_sqlquery_new6(const char* query, void* db) {
    return QSqlQuery_new6(qstring(query), (QSqlDatabase*)db);
}

void q_sqlquery_operator_assign(void* self, void* other) {
    QSqlQuery_OperatorAssign((QSqlQuery*)self, (QSqlQuery*)other);
}

void q_sqlquery_swap(void* self, void* other) {
    QSqlQuery_Swap((QSqlQuery*)self, (QSqlQuery*)other);
}

bool q_sqlquery_is_valid(void* self) {
    return QSqlQuery_IsValid((QSqlQuery*)self);
}

bool q_sqlquery_is_active(void* self) {
    return QSqlQuery_IsActive((QSqlQuery*)self);
}

bool q_sqlquery_is_null(void* self, int field) {
    return QSqlQuery_IsNull((QSqlQuery*)self, field);
}

bool q_sqlquery_is_null2(void* self, char* name) {
    return QSqlQuery_IsNull2((QSqlQuery*)self, name);
}

int32_t q_sqlquery_at(void* self) {
    return QSqlQuery_At((QSqlQuery*)self);
}

const char* q_sqlquery_last_query(void* self) {
    libqt_string _str = QSqlQuery_LastQuery((QSqlQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sqlquery_num_rows_affected(void* self) {
    return QSqlQuery_NumRowsAffected((QSqlQuery*)self);
}

QSqlError* q_sqlquery_last_error(void* self) {
    return QSqlQuery_LastError((QSqlQuery*)self);
}

bool q_sqlquery_is_select(void* self) {
    return QSqlQuery_IsSelect((QSqlQuery*)self);
}

int32_t q_sqlquery_size(void* self) {
    return QSqlQuery_Size((QSqlQuery*)self);
}

const QSqlDriver* q_sqlquery_driver(void* self) {
    return QSqlQuery_Driver((QSqlQuery*)self);
}

const QSqlResult* q_sqlquery_result(void* self) {
    return QSqlQuery_Result((QSqlQuery*)self);
}

bool q_sqlquery_is_forward_only(void* self) {
    return QSqlQuery_IsForwardOnly((QSqlQuery*)self);
}

QSqlRecord* q_sqlquery_record(void* self) {
    return QSqlQuery_Record((QSqlQuery*)self);
}

void q_sqlquery_set_forward_only(void* self, bool forward) {
    QSqlQuery_SetForwardOnly((QSqlQuery*)self, forward);
}

bool q_sqlquery_exec(void* self, const char* query) {
    return QSqlQuery_Exec((QSqlQuery*)self, qstring(query));
}

QVariant* q_sqlquery_value(void* self, int i) {
    return QSqlQuery_Value((QSqlQuery*)self, i);
}

QVariant* q_sqlquery_value2(void* self, char* name) {
    return QSqlQuery_Value2((QSqlQuery*)self, name);
}

void q_sqlquery_set_numerical_precision_policy(void* self, int32_t precisionPolicy) {
    QSqlQuery_SetNumericalPrecisionPolicy((QSqlQuery*)self, precisionPolicy);
}

int32_t q_sqlquery_numerical_precision_policy(void* self) {
    return QSqlQuery_NumericalPrecisionPolicy((QSqlQuery*)self);
}

void q_sqlquery_set_positional_binding_enabled(void* self, bool enable) {
    QSqlQuery_SetPositionalBindingEnabled((QSqlQuery*)self, enable);
}

bool q_sqlquery_is_positional_binding_enabled(void* self) {
    return QSqlQuery_IsPositionalBindingEnabled((QSqlQuery*)self);
}

bool q_sqlquery_seek(void* self, int i) {
    return QSqlQuery_Seek((QSqlQuery*)self, i);
}

bool q_sqlquery_next(void* self) {
    return QSqlQuery_Next((QSqlQuery*)self);
}

bool q_sqlquery_previous(void* self) {
    return QSqlQuery_Previous((QSqlQuery*)self);
}

bool q_sqlquery_first(void* self) {
    return QSqlQuery_First((QSqlQuery*)self);
}

bool q_sqlquery_last(void* self) {
    return QSqlQuery_Last((QSqlQuery*)self);
}

void q_sqlquery_clear(void* self) {
    QSqlQuery_Clear((QSqlQuery*)self);
}

bool q_sqlquery_exec2(void* self) {
    return QSqlQuery_Exec2((QSqlQuery*)self);
}

bool q_sqlquery_exec_batch(void* self) {
    return QSqlQuery_ExecBatch((QSqlQuery*)self);
}

bool q_sqlquery_prepare(void* self, const char* query) {
    return QSqlQuery_Prepare((QSqlQuery*)self, qstring(query));
}

void q_sqlquery_bind_value(void* self, const char* placeholder, void* val) {
    QSqlQuery_BindValue((QSqlQuery*)self, qstring(placeholder), (QVariant*)val);
}

void q_sqlquery_bind_value2(void* self, int pos, void* val) {
    QSqlQuery_BindValue2((QSqlQuery*)self, pos, (QVariant*)val);
}

void q_sqlquery_add_bind_value(void* self, void* val) {
    QSqlQuery_AddBindValue((QSqlQuery*)self, (QVariant*)val);
}

QVariant* q_sqlquery_bound_value(void* self, const char* placeholder) {
    return QSqlQuery_BoundValue((QSqlQuery*)self, qstring(placeholder));
}

QVariant* q_sqlquery_bound_value2(void* self, int pos) {
    return QSqlQuery_BoundValue2((QSqlQuery*)self, pos);
}

libqt_list /* of QVariant* */ q_sqlquery_bound_values(void* self) {
    libqt_list _arr = QSqlQuery_BoundValues((QSqlQuery*)self);
    return _arr;
}

const char** q_sqlquery_bound_value_names(void* self) {
    libqt_list _arr = QSqlQuery_BoundValueNames((QSqlQuery*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqlquery_bound_value_names\n");
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

const char* q_sqlquery_bound_value_name(void* self, int pos) {
    libqt_string _str = QSqlQuery_BoundValueName((QSqlQuery*)self, pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqlquery_executed_query(void* self) {
    libqt_string _str = QSqlQuery_ExecutedQuery((QSqlQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_sqlquery_last_insert_id(void* self) {
    return QSqlQuery_LastInsertId((QSqlQuery*)self);
}

void q_sqlquery_finish(void* self) {
    QSqlQuery_Finish((QSqlQuery*)self);
}

bool q_sqlquery_next_result(void* self) {
    return QSqlQuery_NextResult((QSqlQuery*)self);
}

bool q_sqlquery_seek2(void* self, int i, bool relative) {
    return QSqlQuery_Seek2((QSqlQuery*)self, i, relative);
}

bool q_sqlquery_exec_batch1(void* self, int32_t mode) {
    return QSqlQuery_ExecBatch1((QSqlQuery*)self, mode);
}

void q_sqlquery_bind_value3(void* self, const char* placeholder, void* val, int32_t type) {
    QSqlQuery_BindValue3((QSqlQuery*)self, qstring(placeholder), (QVariant*)val, type);
}

void q_sqlquery_bind_value32(void* self, int pos, void* val, int32_t type) {
    QSqlQuery_BindValue32((QSqlQuery*)self, pos, (QVariant*)val, type);
}

void q_sqlquery_add_bind_value2(void* self, void* val, int32_t type) {
    QSqlQuery_AddBindValue2((QSqlQuery*)self, (QVariant*)val, type);
}

void q_sqlquery_delete(void* self) {
    QSqlQuery_Delete((QSqlQuery*)(self));
}
