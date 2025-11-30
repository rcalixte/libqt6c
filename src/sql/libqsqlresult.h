#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLRESULT_H
#define SRC_SQL_QT6C_LIBQSQLRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsqlresult.html

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#handle)
///
/// @param self QSqlResult*
QVariant* q_sqlresult_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlresult.html#dtor.QSqlResult)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlResult*
void q_sqlresult_delete(void* self);

/// https://doc.qt.io/qt-6/qsqlresult.html#types

typedef enum {
    QSQLRESULT_BINDINGSYNTAX_POSITIONALBINDING = 0,
    QSQLRESULT_BINDINGSYNTAX_NAMEDBINDING = 1
} QSqlResult__BindingSyntax;

#endif
