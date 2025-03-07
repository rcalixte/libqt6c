#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEQUOTAREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEQUOTAREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqurl.h"

QWebEngineQuotaRequest* q_webenginequotarequest_new();
QWebEngineQuotaRequest* q_webenginequotarequest_new2(void* param1);
void q_webenginequotarequest_accept(void* self);
void q_webenginequotarequest_reject(void* self);
QUrl* q_webenginequotarequest_origin(void* self);
long long q_webenginequotarequest_requested_size(void* self);
bool q_webenginequotarequest_operator_equal(void* self, void* that);
bool q_webenginequotarequest_operator_not_equal(void* self, void* that);
void q_webenginequotarequest_delete(void* self);

#endif
