#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSERROR_H
#define SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSERROR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbuserror.html

/// q_dbuserror_new constructs a new QDBusError object.
///
QDBusError* q_dbuserror_new();

/// q_dbuserror_new2 constructs a new QDBusError object.
///
/// @param msg QDBusMessage*
QDBusError* q_dbuserror_new2(void* msg);

/// q_dbuserror_new3 constructs a new QDBusError object.
///
/// @param errorVal enum QDBusError__ErrorType
/// @param message const char*
QDBusError* q_dbuserror_new3(int32_t errorVal, const char* message);

/// q_dbuserror_new4 constructs a new QDBusError object.
///
/// @param other QDBusError*
QDBusError* q_dbuserror_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
///
/// @param self QDBusError*
/// @param other QDBusError*
void q_dbuserror_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#operator-eq)
///
/// @param self QDBusError*
/// @param msg QDBusMessage*
void q_dbuserror_operator_assign2(void* self, void* msg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#swap)
///
/// @param self QDBusError*
/// @param other QDBusError*
void q_dbuserror_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#type)
///
/// @param self QDBusError*
///
/// @return enum QDBusError__ErrorType
int32_t q_dbuserror_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusError*
const char* q_dbuserror_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#message)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusError*
const char* q_dbuserror_message(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#isValid)
///
/// @param self QDBusError*
bool q_dbuserror_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param errorVal enum QDBusError__ErrorType
const char* q_dbuserror_error_string(int32_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdbuserror.html#dtor.QDBusError)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusError*
void q_dbuserror_delete(void* self);

/// https://doc.qt.io/qt-6/qdbuserror.html#types

typedef enum {
    QDBUSERROR_ERRORTYPE_NOERROR = 0,
    QDBUSERROR_ERRORTYPE_OTHER = 1,
    QDBUSERROR_ERRORTYPE_FAILED = 2,
    QDBUSERROR_ERRORTYPE_NOMEMORY = 3,
    QDBUSERROR_ERRORTYPE_SERVICEUNKNOWN = 4,
    QDBUSERROR_ERRORTYPE_NOREPLY = 5,
    QDBUSERROR_ERRORTYPE_BADADDRESS = 6,
    QDBUSERROR_ERRORTYPE_NOTSUPPORTED = 7,
    QDBUSERROR_ERRORTYPE_LIMITSEXCEEDED = 8,
    QDBUSERROR_ERRORTYPE_ACCESSDENIED = 9,
    QDBUSERROR_ERRORTYPE_NOSERVER = 10,
    QDBUSERROR_ERRORTYPE_TIMEOUT = 11,
    QDBUSERROR_ERRORTYPE_NONETWORK = 12,
    QDBUSERROR_ERRORTYPE_ADDRESSINUSE = 13,
    QDBUSERROR_ERRORTYPE_DISCONNECTED = 14,
    QDBUSERROR_ERRORTYPE_INVALIDARGS = 15,
    QDBUSERROR_ERRORTYPE_UNKNOWNMETHOD = 16,
    QDBUSERROR_ERRORTYPE_TIMEDOUT = 17,
    QDBUSERROR_ERRORTYPE_INVALIDSIGNATURE = 18,
    QDBUSERROR_ERRORTYPE_UNKNOWNINTERFACE = 19,
    QDBUSERROR_ERRORTYPE_UNKNOWNOBJECT = 20,
    QDBUSERROR_ERRORTYPE_UNKNOWNPROPERTY = 21,
    QDBUSERROR_ERRORTYPE_PROPERTYREADONLY = 22,
    QDBUSERROR_ERRORTYPE_INTERNALERROR = 23,
    QDBUSERROR_ERRORTYPE_INVALIDSERVICE = 24,
    QDBUSERROR_ERRORTYPE_INVALIDOBJECTPATH = 25,
    QDBUSERROR_ERRORTYPE_INVALIDINTERFACE = 26,
    QDBUSERROR_ERRORTYPE_INVALIDMEMBER = 27,
    QDBUSERROR_ERRORTYPE_LASTERRORTYPE = 27
} QDBusError__ErrorType;

#endif
