#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEFULLSCREENREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEFULLSCREENREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqurl.h"

QWebEngineFullScreenRequest* q_webenginefullscreenrequest_new(void* other);
void q_webenginefullscreenrequest_operator_assign(void* self, void* other);
void q_webenginefullscreenrequest_reject(void* self);
void q_webenginefullscreenrequest_accept(void* self);
bool q_webenginefullscreenrequest_toggle_on(void* self);
QUrl* q_webenginefullscreenrequest_origin(void* self);
void q_webenginefullscreenrequest_delete(void* self);

#endif
