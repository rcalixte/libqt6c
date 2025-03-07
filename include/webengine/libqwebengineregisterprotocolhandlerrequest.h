#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEREGISTERPROTOCOLHANDLERREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqurl.h"

QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new();
QWebEngineRegisterProtocolHandlerRequest* q_webengineregisterprotocolhandlerrequest_new2(void* param1);
void q_webengineregisterprotocolhandlerrequest_accept(void* self);
void q_webengineregisterprotocolhandlerrequest_reject(void* self);
QUrl* q_webengineregisterprotocolhandlerrequest_origin(void* self);
const char* q_webengineregisterprotocolhandlerrequest_scheme(void* self);
bool q_webengineregisterprotocolhandlerrequest_operator_equal(void* self, void* that);
bool q_webengineregisterprotocolhandlerrequest_operator_not_equal(void* self, void* that);
void q_webengineregisterprotocolhandlerrequest_delete(void* self);

#endif
