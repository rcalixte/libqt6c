#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBSECURITYCONTEXT_H
#define SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBSECURITYCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)

/// q_signon__securitycontext_new constructs a new SignOn::SecurityContext object.
///
SignOn__SecurityContext* q_signon__securitycontext_new();

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)

/// q_signon__securitycontext_new2 constructs a new SignOn::SecurityContext object.
///
/// @param systemContext const char*
/// @param applicationContext const char*
///
SignOn__SecurityContext* q_signon__securitycontext_new2(const char* systemContext, const char* applicationContext);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)

/// q_signon__securitycontext_new3 constructs a new SignOn::SecurityContext object.
///
/// @param param1 SignOn__SecurityContext*
///
SignOn__SecurityContext* q_signon__securitycontext_new3(void* param1);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
///
/// @param self SignOn__SecurityContext*
/// @param systemContext const char*
///
void q_signon__securitycontext_set_system_context(void* self, const char* systemContext);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SecurityContext*
///
const char* q_signon__securitycontext_system_context(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
///
/// @param self SignOn__SecurityContext*
/// @param applicationContext const char*
///
void q_signon__securitycontext_set_application_context(void* self, const char* applicationContext);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self SignOn__SecurityContext*
///
const char* q_signon__securitycontext_application_context(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1SecurityContext.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__SecurityContext*
///
void q_signon__securitycontext_delete(void* self);

#endif
