#pragma once
#ifndef SRC_CBORQT6C_LIBQCBORCOMMON_H
#define SRC_CBORQT6C_LIBQCBORCOMMON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcborerror.html

/// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#operator)
///
/// @param self QCborError*
///
/// @return enum QCborError__Code
int64_t q_cborerror_to_q_cbor_error___code(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCborError*
const char* q_cborerror_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#dtor.QCborError)
///
/// Delete this object from C++ memory.
///
/// @param self QCborError*
void q_cborerror_delete(void* self);

/// https://doc.qt.io/qt-6/qcborcommon.html#types

typedef enum {
    QCBORSIMPLETYPE_FALSE = 20,
    QCBORSIMPLETYPE_TRUE = 21,
    QCBORSIMPLETYPE_NULL = 22,
    QCBORSIMPLETYPE_UNDEFINED = 23
} QCBORCOMMON_QCborSimpleType__;

typedef enum {
    QCborTag_dummy = 0
} QCborTag__;

typedef enum {
    QCBORKNOWNTAGS_DATETIMESTRING = 0,
    QCBORKNOWNTAGS_UNIXTIME_T = 1,
    QCBORKNOWNTAGS_POSITIVEBIGNUM = 2,
    QCBORKNOWNTAGS_NEGATIVEBIGNUM = 3,
    QCBORKNOWNTAGS_DECIMAL = 4,
    QCBORKNOWNTAGS_BIGFLOAT = 5,
    QCBORKNOWNTAGS_COSE_ENCRYPT0 = 16,
    QCBORKNOWNTAGS_COSE_MAC0 = 17,
    QCBORKNOWNTAGS_COSE_SIGN1 = 18,
    QCBORKNOWNTAGS_EXPECTEDBASE64URL = 21,
    QCBORKNOWNTAGS_EXPECTEDBASE64 = 22,
    QCBORKNOWNTAGS_EXPECTEDBASE16 = 23,
    QCBORKNOWNTAGS_ENCODEDCBOR = 24,
    QCBORKNOWNTAGS_URL = 32,
    QCBORKNOWNTAGS_BASE64URL = 33,
    QCBORKNOWNTAGS_BASE64 = 34,
    QCBORKNOWNTAGS_REGULAREXPRESSION = 35,
    QCBORKNOWNTAGS_MIMEMESSAGE = 36,
    QCBORKNOWNTAGS_UUID = 37,
    QCBORKNOWNTAGS_COSE_ENCRYPT = 96,
    QCBORKNOWNTAGS_COSE_MAC = 97,
    QCBORKNOWNTAGS_COSE_SIGN = 98,
    QCBORKNOWNTAGS_SIGNATURE = 55799
} QCborKnownTags__;

typedef enum {
    QCborNegativeInteger_dummy = 0
} QCborNegativeInteger__;

typedef enum {
    QCBORERROR_CODE_UNKNOWNERROR = 1,
    QCBORERROR_CODE_ADVANCEPASTEND = 3,
    QCBORERROR_CODE_INPUTOUTPUTERROR = 4,
    QCBORERROR_CODE_GARBAGEATEND = 256,
    QCBORERROR_CODE_ENDOFFILE = 257,
    QCBORERROR_CODE_UNEXPECTEDBREAK = 258,
    QCBORERROR_CODE_UNKNOWNTYPE = 259,
    QCBORERROR_CODE_ILLEGALTYPE = 260,
    QCBORERROR_CODE_ILLEGALNUMBER = 261,
    QCBORERROR_CODE_ILLEGALSIMPLETYPE = 262,
    QCBORERROR_CODE_INVALIDUTF8STRING = 516,
    QCBORERROR_CODE_DATATOOLARGE = 1024,
    QCBORERROR_CODE_NESTINGTOODEEP = 1025,
    QCBORERROR_CODE_UNSUPPORTEDTYPE = 1026,
    QCBORERROR_CODE_NOERROR = 0
} QCborError__Code;

#endif
