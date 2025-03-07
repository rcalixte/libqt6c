#pragma once
#ifndef SRCQT6C_LIBQLOGGINGCATEGORY_H
#define SRCQT6C_LIBQLOGGINGCATEGORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

QLoggingCategory* q_loggingcategory_new(const char* category);
bool q_loggingcategory_is_debug_enabled(void* self);
bool q_loggingcategory_is_info_enabled(void* self);
bool q_loggingcategory_is_warning_enabled(void* self);
bool q_loggingcategory_is_critical_enabled(void* self);
const char* q_loggingcategory_category_name(void* self);
QLoggingCategory* q_loggingcategory_operator_call(void* self);
QLoggingCategory* q_loggingcategory_operator_call2(void* self);
QLoggingCategory* q_loggingcategory_default_category();
void q_loggingcategory_set_filter_rules(const char* rules);
void q_loggingcategory_delete(void* self);

#endif
