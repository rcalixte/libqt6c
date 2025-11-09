#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONQT6C_LIBSESSIONDATA_H
#define SRC_POSIX_EXTRAS_SIGNONQT6C_LIBSESSIONDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html

/// q_signon__sessiondata_new constructs a new SignOn::SessionData object.
///
SignOn__SessionData* q_signon__sessiondata_new();

/// q_signon__sessiondata_new2 constructs a new SignOn::SessionData object.
///
/// @param other SignOn__SessionData*
SignOn__SessionData* q_signon__sessiondata_new2(void* other);

/// q_signon__sessiondata_new3 constructs a new SignOn::SessionData object.
///
/// @param data libqt_map /* of const char* to QVariant* */
SignOn__SessionData* q_signon__sessiondata_new3(libqt_map /* of const char* to QVariant* */ data);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param other SignOn__SessionData*
void q_signon__sessiondata_operator_assign(void* self, void* other);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param other SignOn__SessionData*
SignOn__SessionData* q_signon__sessiondata_operator_plus_assign(void* self, void* other);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SessionData*
const char** q_signon__sessiondata_property_names(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param propertyName const char*
const QVariant* q_signon__sessiondata_get_property(void* self, const char* propertyName);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SessionData*
const char** q_signon__sessiondata_get_access_control_tokens(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
libqt_map /* of const char* to QVariant* */ q_signon__sessiondata_to_map(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
void q_signon__sessiondata_set_secret(void* self, const char* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SessionData*
const char* q_signon__sessiondata_secret(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
void q_signon__sessiondata_set_user_name(void* self, const char* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SessionData*
const char* q_signon__sessiondata_user_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
void q_signon__sessiondata_set_realm(void* self, const char* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SessionData*
const char* q_signon__sessiondata_realm(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
void q_signon__sessiondata_set_network_proxy(void* self, const char* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SessionData*
const char* q_signon__sessiondata_network_proxy(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value int*
void q_signon__sessiondata_set_ui_policy(void* self, int* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
int32_t q_signon__sessiondata_ui_policy(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
void q_signon__sessiondata_set_caption(void* self, const char* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SessionData*
const char* q_signon__sessiondata_caption(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value uint32_t*
void q_signon__sessiondata_set_network_timeout(void* self, uint32_t* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
uint32_t q_signon__sessiondata_network_timeout(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value uint32_t*
void q_signon__sessiondata_set_window_id(void* self, uint32_t* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
uint32_t q_signon__sessiondata_window_id(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value bool*
void q_signon__sessiondata_set_renew_token(void* self, bool* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
bool q_signon__sessiondata_renew_token(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__SessionData*
void q_signon__sessiondata_delete(void* self);

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Sessiondata.html

typedef enum {
    SIGNON_SIGNONUIPOLICY_DEFAULTPOLICY = 0,
    SIGNON_SIGNONUIPOLICY_REQUESTPASSWORDPOLICY = 1,
    SIGNON_SIGNONUIPOLICY_NOUSERINTERACTIONPOLICY = 2,
    SIGNON_SIGNONUIPOLICY_VALIDATIONPOLICY = 3
} SignOn__SignonUiPolicy;

#endif
