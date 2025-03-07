#pragma once
#ifndef SRCQT6C_LIBQTEMPORARYDIR_H
#define SRCQT6C_LIBQTEMPORARYDIR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

QTemporaryDir* q_temporarydir_new();
QTemporaryDir* q_temporarydir_new2(const char* templateName);
void q_temporarydir_swap(void* self, void* other);
bool q_temporarydir_is_valid(void* self);
const char* q_temporarydir_error_string(void* self);
bool q_temporarydir_auto_remove(void* self);
void q_temporarydir_set_auto_remove(void* self, bool b);
bool q_temporarydir_remove(void* self);
const char* q_temporarydir_path(void* self);
const char* q_temporarydir_file_path(void* self, const char* fileName);
void q_temporarydir_delete(void* self);

#endif
