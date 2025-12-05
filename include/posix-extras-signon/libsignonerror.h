#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBSIGNONERROR_H
#define SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBSIGNONERROR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)

/// q_signon__error_new constructs a new SignOn::Error object.
///
SignOn__Error* q_signon__error_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)

/// q_signon__error_new2 constructs a new SignOn::Error object.
///
/// @param src SignOn__Error*
///
SignOn__Error* q_signon__error_new2(void* src);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)

/// q_signon__error_new3 constructs a new SignOn::Error object.
///
/// @param type int
///
SignOn__Error* q_signon__error_new3(int type);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)

/// q_signon__error_new4 constructs a new SignOn::Error object.
///
/// @param type int
/// @param message const char*
///
SignOn__Error* q_signon__error_new4(int type, const char* message);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
///
/// @param self SignOn__Error*
/// @param src SignOn__Error*
///
void q_signon__error_operator_assign(void* self, void* src);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
///
/// @param self SignOn__Error*
/// @param type int
///
void q_signon__error_set_type(void* self, int type);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
///
/// @param self SignOn__Error*
/// @param message const char*
///
void q_signon__error_set_message(void* self, const char* message);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
///
/// @param self SignOn__Error*
///
int32_t q_signon__error_type(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__Error*
///
const char* q_signon__error_message(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Error.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__Error*
///
void q_signon__error_delete(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Signonerror.html)

typedef enum {
    SIGNON_ERROR_ERRORTYPE_UNKNOWN = 1,
    SIGNON_ERROR_ERRORTYPE_INTERNALSERVER = 2,
    SIGNON_ERROR_ERRORTYPE_INTERNALCOMMUNICATION = 3,
    SIGNON_ERROR_ERRORTYPE_PERMISSIONDENIED = 4,
    SIGNON_ERROR_ERRORTYPE_ENCRYPTIONFAILURE = 5,
    SIGNON_ERROR_ERRORTYPE_AUTHSERVICEERR = 100,
    SIGNON_ERROR_ERRORTYPE_METHODNOTKNOWN = 101,
    SIGNON_ERROR_ERRORTYPE_SERVICENOTAVAILABLE = 102,
    SIGNON_ERROR_ERRORTYPE_INVALIDQUERY = 103,
    SIGNON_ERROR_ERRORTYPE_IDENTITYERR = 200,
    SIGNON_ERROR_ERRORTYPE_METHODNOTAVAILABLE = 201,
    SIGNON_ERROR_ERRORTYPE_IDENTITYNOTFOUND = 202,
    SIGNON_ERROR_ERRORTYPE_STOREFAILED = 203,
    SIGNON_ERROR_ERRORTYPE_REMOVEFAILED = 204,
    SIGNON_ERROR_ERRORTYPE_SIGNOUTFAILED = 205,
    SIGNON_ERROR_ERRORTYPE_IDENTITYOPERATIONCANCELED = 206,
    SIGNON_ERROR_ERRORTYPE_CREDENTIALSNOTAVAILABLE = 207,
    SIGNON_ERROR_ERRORTYPE_REFERENCENOTFOUND = 208,
    SIGNON_ERROR_ERRORTYPE_AUTHSESSIONERR = 300,
    SIGNON_ERROR_ERRORTYPE_MECHANISMNOTAVAILABLE = 301,
    SIGNON_ERROR_ERRORTYPE_MISSINGDATA = 302,
    SIGNON_ERROR_ERRORTYPE_INVALIDCREDENTIALS = 303,
    SIGNON_ERROR_ERRORTYPE_NOTAUTHORIZED = 304,
    SIGNON_ERROR_ERRORTYPE_WRONGSTATE = 305,
    SIGNON_ERROR_ERRORTYPE_OPERATIONNOTSUPPORTED = 306,
    SIGNON_ERROR_ERRORTYPE_NOCONNECTION = 307,
    SIGNON_ERROR_ERRORTYPE_NETWORK = 308,
    SIGNON_ERROR_ERRORTYPE_SSL = 309,
    SIGNON_ERROR_ERRORTYPE_RUNTIME = 310,
    SIGNON_ERROR_ERRORTYPE_SESSIONCANCELED = 311,
    SIGNON_ERROR_ERRORTYPE_TIMEDOUT = 312,
    SIGNON_ERROR_ERRORTYPE_USERINTERACTION = 313,
    SIGNON_ERROR_ERRORTYPE_OPERATIONFAILED = 314,
    SIGNON_ERROR_ERRORTYPE_ENCRYPTIONFAILED = 315,
    SIGNON_ERROR_ERRORTYPE_TOSNOTACCEPTED = 316,
    SIGNON_ERROR_ERRORTYPE_FORGOTPASSWORD = 317,
    SIGNON_ERROR_ERRORTYPE_METHODORMECHANISMNOTALLOWED = 318,
    SIGNON_ERROR_ERRORTYPE_INCORRECTDATE = 319,
    SIGNON_ERROR_ERRORTYPE_USERERR = 400
} SignOn__Error__ErrorType;

#endif
