#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPTCOLLECTION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPTCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "libqwebenginescript.h"

bool q_webenginescriptcollection_is_empty(void* self);
int32_t q_webenginescriptcollection_count(void* self);
bool q_webenginescriptcollection_contains(void* self, void* value);
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_find(void* self, const char* name);
void q_webenginescriptcollection_insert(void* self, void* param1);
void q_webenginescriptcollection_insert_with_list(void* self, void* list[]);
bool q_webenginescriptcollection_remove(void* self, void* param1);
void q_webenginescriptcollection_clear(void* self);
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_to_list(void* self);
void q_webenginescriptcollection_delete(void* self);

#endif
