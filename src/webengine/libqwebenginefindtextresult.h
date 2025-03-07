#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEFINDTEXTRESULT_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEFINDTEXTRESULT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

QWebEngineFindTextResult* q_webenginefindtextresult_new();
QWebEngineFindTextResult* q_webenginefindtextresult_new2(void* other);
int32_t q_webenginefindtextresult_number_of_matches(void* self);
int32_t q_webenginefindtextresult_active_match(void* self);
void q_webenginefindtextresult_operator_assign(void* self, void* other);
void q_webenginefindtextresult_delete(void* self);

#endif
