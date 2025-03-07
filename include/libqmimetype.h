#pragma once
#ifndef SRCQT6C_LIBQMIMETYPE_H
#define SRCQT6C_LIBQMIMETYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

QMimeType* q_mimetype_new();
QMimeType* q_mimetype_new2(void* other);
void q_mimetype_operator_assign(void* self, void* other);
void q_mimetype_swap(void* self, void* other);
bool q_mimetype_operator_equal(void* self, void* other);
bool q_mimetype_operator_not_equal(void* self, void* other);
bool q_mimetype_is_valid(void* self);
bool q_mimetype_is_default(void* self);
const char* q_mimetype_name(void* self);
const char* q_mimetype_comment(void* self);
const char* q_mimetype_generic_icon_name(void* self);
const char* q_mimetype_icon_name(void* self);
const char** q_mimetype_glob_patterns(void* self);
const char** q_mimetype_parent_mime_types(void* self);
const char** q_mimetype_all_ancestors(void* self);
const char** q_mimetype_aliases(void* self);
const char** q_mimetype_suffixes(void* self);
const char* q_mimetype_preferred_suffix(void* self);
bool q_mimetype_inherits(void* self, const char* mimeTypeName);
const char* q_mimetype_filter_string(void* self);
void q_mimetype_delete(void* self);

#endif
