#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBSESSIONDATA_H
#define SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBSESSIONDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)

/// q_signon__sessiondata_new constructs a new SignOn::SessionData object.
///
SignOn__SessionData* q_signon__sessiondata_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)

/// q_signon__sessiondata_new2 constructs a new SignOn::SessionData object.
///
/// @param other SignOn__SessionData*
///
SignOn__SessionData* q_signon__sessiondata_new2(void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)

/// q_signon__sessiondata_new3 constructs a new SignOn::SessionData object.
///
/// @param data libqt_map /* of const char* to QVariant* */
///
SignOn__SessionData* q_signon__sessiondata_new3(libqt_map /* of const char* to QVariant* */ data);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param other SignOn__SessionData*
///
void q_signon__sessiondata_operator_assign(void* self, void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param other SignOn__SessionData*
///
SignOn__SessionData* q_signon__sessiondata_operator_plus_assign(void* self, void* other);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self SignOn__SessionData*
///
const char** q_signon__sessiondata_property_names(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param propertyName const char*
///
const QVariant* q_signon__sessiondata_get_property(void* self, const char* propertyName);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self SignOn__SessionData*
///
const char** q_signon__sessiondata_get_access_control_tokens(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self SignOn__SessionData*
///
libqt_map /* of const char* to QVariant* */ q_signon__sessiondata_to_map(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
///
void q_signon__sessiondata_set_secret(void* self, const char* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self SignOn__SessionData*
///
const char* q_signon__sessiondata_secret(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
///
void q_signon__sessiondata_set_user_name(void* self, const char* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self SignOn__SessionData*
///
const char* q_signon__sessiondata_user_name(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
///
void q_signon__sessiondata_set_realm(void* self, const char* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self SignOn__SessionData*
///
const char* q_signon__sessiondata_realm(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
///
void q_signon__sessiondata_set_network_proxy(void* self, const char* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self SignOn__SessionData*
///
const char* q_signon__sessiondata_network_proxy(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value int*
///
void q_signon__sessiondata_set_ui_policy(void* self, int* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
///
int32_t q_signon__sessiondata_ui_policy(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value const char*
///
void q_signon__sessiondata_set_caption(void* self, const char* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self SignOn__SessionData*
///
const char* q_signon__sessiondata_caption(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value uint32_t*
///
void q_signon__sessiondata_set_network_timeout(void* self, uint32_t* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
///
uint32_t q_signon__sessiondata_network_timeout(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value uint32_t*
///
void q_signon__sessiondata_set_window_id(void* self, uint32_t* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
///
uint32_t q_signon__sessiondata_window_id(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
/// @param value bool*
///
void q_signon__sessiondata_set_renew_token(void* self, bool* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// @param self SignOn__SessionData*
///
bool q_signon__sessiondata_renew_token(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SessionData.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__SessionData*
///
void q_signon__sessiondata_delete(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Sessiondata.html)

typedef enum {
    SIGNON_SIGNONUIPOLICY_DEFAULTPOLICY = 0,
    SIGNON_SIGNONUIPOLICY_REQUESTPASSWORDPOLICY = 1,
    SIGNON_SIGNONUIPOLICY_NOUSERINTERACTIONPOLICY = 2,
    SIGNON_SIGNONUIPOLICY_VALIDATIONPOLICY = 3
} SignOn__SignonUiPolicy;

#endif
