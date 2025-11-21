#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLERROR_H
#define SRC_SQL_QT6C_LIBQSQLERROR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsqlerror.html

/// q_sqlerror_new constructs a new QSqlError object.
///
QSqlError* q_sqlerror_new();

/// q_sqlerror_new2 constructs a new QSqlError object.
///
/// @param other QSqlError*
QSqlError* q_sqlerror_new2(void* other);

/// q_sqlerror_new3 constructs a new QSqlError object.
///
/// @param driverText const char*
QSqlError* q_sqlerror_new3(const char* driverText);

/// q_sqlerror_new4 constructs a new QSqlError object.
///
/// @param driverText const char*
/// @param databaseText const char*
QSqlError* q_sqlerror_new4(const char* driverText, const char* databaseText);

/// q_sqlerror_new5 constructs a new QSqlError object.
///
/// @param driverText const char*
/// @param databaseText const char*
/// @param type enum QSqlError__ErrorType
QSqlError* q_sqlerror_new5(const char* driverText, const char* databaseText, int32_t type);

/// q_sqlerror_new6 constructs a new QSqlError object.
///
/// @param driverText const char*
/// @param databaseText const char*
/// @param type enum QSqlError__ErrorType
/// @param errorCode const char*
QSqlError* q_sqlerror_new6(const char* driverText, const char* databaseText, int32_t type, const char* errorCode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq)
///
/// @param self QSqlError*
/// @param other QSqlError*
void q_sqlerror_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#operator-eq-eq)
///
/// @param self QSqlError*
/// @param other QSqlError*
bool q_sqlerror_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#operator-not-eq)
///
/// @param self QSqlError*
/// @param other QSqlError*
bool q_sqlerror_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#swap)
///
/// @param self QSqlError*
/// @param other QSqlError*
void q_sqlerror_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#driverText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlError*
const char* q_sqlerror_driver_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#databaseText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlError*
const char* q_sqlerror_database_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#type)
///
/// @param self QSqlError*
///
/// @return enum QSqlError__ErrorType
int32_t q_sqlerror_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#nativeErrorCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlError*
const char* q_sqlerror_native_error_code(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlError*
const char* q_sqlerror_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#isValid)
///
/// @param self QSqlError*
bool q_sqlerror_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlerror.html#dtor.QSqlError)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlError*
void q_sqlerror_delete(void* self);

/// https://doc.qt.io/qt-6/qsqlerror.html#types

typedef enum {
    QSQLERROR_ERRORTYPE_NOERROR = 0,
    QSQLERROR_ERRORTYPE_CONNECTIONERROR = 1,
    QSQLERROR_ERRORTYPE_STATEMENTERROR = 2,
    QSQLERROR_ERRORTYPE_TRANSACTIONERROR = 3,
    QSQLERROR_ERRORTYPE_UNKNOWNERROR = 4
} QSqlError__ErrorType;

#endif
