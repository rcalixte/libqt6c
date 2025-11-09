#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNONQT6C_LIBIDENTITYINFO_H
#define SRC_POSIX_EXTRAS_SIGNONQT6C_LIBIDENTITYINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html

/// q_signon__identityinfo_new constructs a new SignOn::IdentityInfo object.
///
SignOn__IdentityInfo* q_signon__identityinfo_new();

/// q_signon__identityinfo_new2 constructs a new SignOn::IdentityInfo object.
///
/// @param other SignOn__IdentityInfo*
SignOn__IdentityInfo* q_signon__identityinfo_new2(void* other);

/// q_signon__identityinfo_new3 constructs a new SignOn::IdentityInfo object.
///
/// @param caption const char*
/// @param userName const char*
/// @param methods libqt_map /* of const char* to SignOn__MechanismsList */
SignOn__IdentityInfo* q_signon__identityinfo_new3(const char* caption, const char* userName, libqt_map /* of const char* to SignOn__MechanismsList */ methods);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param other SignOn__IdentityInfo*
void q_signon__identityinfo_operator_assign(void* self, void* other);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param id uint32_t
void q_signon__identityinfo_set_id(void* self, uint32_t id);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
uint32_t q_signon__identityinfo_id(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param secret const char*
void q_signon__identityinfo_set_secret(void* self, const char* secret);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
const char* q_signon__identityinfo_secret(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
bool q_signon__identityinfo_is_storing_secret(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param storeSecret bool
void q_signon__identityinfo_set_store_secret(void* self, bool storeSecret);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param userName const char*
void q_signon__identityinfo_set_user_name(void* self, const char* userName);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
const char* q_signon__identityinfo_user_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param caption const char*
void q_signon__identityinfo_set_caption(void* self, const char* caption);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
const char* q_signon__identityinfo_caption(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param realms const char**
void q_signon__identityinfo_set_realms(void* self, const char* realms[static 1]);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
const char** q_signon__identityinfo_realms(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param ownerToken const char*
void q_signon__identityinfo_set_owner(void* self, const char* ownerToken);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
const char* q_signon__identityinfo_owner(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param accessControlList const char**
void q_signon__identityinfo_set_access_control_list(void* self, const char* accessControlList[static 1]);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param accessControlList libqt_list /* of SignOn__SecurityContext* */
void q_signon__identityinfo_set_access_control_list2(void* self, libqt_list accessControlList);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
const char** q_signon__identityinfo_access_control_list(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
libqt_list /* of SignOn__SecurityContext* */ q_signon__identityinfo_access_control_list_full(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param method const char*
/// @param mechanismsList const char**
void q_signon__identityinfo_set_method(void* self, const char* method, const char* mechanismsList[static 1]);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param method const char*
void q_signon__identityinfo_remove_method(void* self, const char* method);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param type enum SignOn__IdentityInfo__CredentialsType
void q_signon__identityinfo_set_type(void* self, int32_t type);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
///
/// @return enum SignOn__IdentityInfo__CredentialsType
int32_t q_signon__identityinfo_type(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
const char** q_signon__identityinfo_methods(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__IdentityInfo*
/// @param method const char*
const char** q_signon__identityinfo_mechanisms(void* self, const char* method);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param refCount int
void q_signon__identityinfo_set_ref_count(void* self, int refCount);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
int32_t q_signon__identityinfo_ref_count(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// @param self SignOn__IdentityInfo*
/// @param secret const char*
/// @param storeSecret bool
void q_signon__identityinfo_set_secret2(void* self, const char* secret, bool storeSecret);

/// [Qt documentation](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__IdentityInfo*
void q_signon__identityinfo_delete(void* self);

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identityinfo.html

typedef enum {
    SIGNON_IDENTITYINFO_CREDENTIALSTYPE_OTHER = 0,
    SIGNON_IDENTITYINFO_CREDENTIALSTYPE_APPLICATION = 1,
    SIGNON_IDENTITYINFO_CREDENTIALSTYPE_WEB = 2,
    SIGNON_IDENTITYINFO_CREDENTIALSTYPE_NETWORK = 4
} SignOn__IdentityInfo__CredentialsType;

#endif
