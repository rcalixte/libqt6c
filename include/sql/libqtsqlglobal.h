#pragma once
#ifndef SRC_SQL_QT6C_LIBQTSQLGLOBAL_H
#define SRC_SQL_QT6C_LIBQTSQLGLOBAL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtsqlglobal.html#public-types)

typedef enum {
    QSQL_LOCATION_BEFOREFIRSTROW = -1,
    QSQL_LOCATION_AFTERLASTROW = -2
} QSql__Location;

/// [Upstream resources](https://doc.qt.io/qt-6/qtsqlglobal.html#public-types)

typedef enum {
    QSQL_PARAMTYPEFLAG_IN = 1,
    QSQL_PARAMTYPEFLAG_OUT = 2,
    QSQL_PARAMTYPEFLAG_INOUT = 3,
    QSQL_PARAMTYPEFLAG_BINARY = 4
} QSql__ParamTypeFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qtsqlglobal.html#public-types)

typedef enum {
    QSQL_TABLETYPE_TABLES = 1,
    QSQL_TABLETYPE_SYSTEMTABLES = 2,
    QSQL_TABLETYPE_VIEWS = 4,
    QSQL_TABLETYPE_ALLTABLES = 255
} QSql__TableType;

/// [Upstream resources](https://doc.qt.io/qt-6/qtsqlglobal.html#public-types)

typedef enum {
    QSQL_NUMERICALPRECISIONPOLICY_LOWPRECISIONINT32 = 1,
    QSQL_NUMERICALPRECISIONPOLICY_LOWPRECISIONINT64 = 2,
    QSQL_NUMERICALPRECISIONPOLICY_LOWPRECISIONDOUBLE = 4,
    QSQL_NUMERICALPRECISIONPOLICY_HIGHPRECISION = 0
} QSql__NumericalPrecisionPolicy;

#endif
