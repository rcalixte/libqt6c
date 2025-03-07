#pragma once
#ifndef SRCQT6C_LIBQFILEINFO_H
#define SRCQT6C_LIBQFILEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdatetime.h"
#include "libqdir.h"
#include "libqfiledevice.h"
#include <string.h>

QFileInfo* q_fileinfo_new();
QFileInfo* q_fileinfo_new2(const char* file);
QFileInfo* q_fileinfo_new3(void* file);
QFileInfo* q_fileinfo_new4(void* dir, const char* file);
QFileInfo* q_fileinfo_new5(void* fileinfo);
void q_fileinfo_operator_assign(void* self, void* fileinfo);
void q_fileinfo_swap(void* self, void* other);
bool q_fileinfo_operator_equal(void* self, void* fileinfo);
bool q_fileinfo_operator_not_equal(void* self, void* fileinfo);
void q_fileinfo_set_file(void* self, const char* file);
void q_fileinfo_set_file_with_file(void* self, void* file);
void q_fileinfo_set_file2(void* self, void* dir, const char* file);
bool q_fileinfo_exists(void* self);
bool q_fileinfo_exists_with_file(const char* file);
void q_fileinfo_refresh(void* self);
const char* q_fileinfo_file_path(void* self);
const char* q_fileinfo_absolute_file_path(void* self);
const char* q_fileinfo_canonical_file_path(void* self);
const char* q_fileinfo_file_name(void* self);
const char* q_fileinfo_base_name(void* self);
const char* q_fileinfo_complete_base_name(void* self);
const char* q_fileinfo_suffix(void* self);
const char* q_fileinfo_bundle_name(void* self);
const char* q_fileinfo_complete_suffix(void* self);
const char* q_fileinfo_path(void* self);
const char* q_fileinfo_absolute_path(void* self);
const char* q_fileinfo_canonical_path(void* self);
QDir* q_fileinfo_dir(void* self);
QDir* q_fileinfo_absolute_dir(void* self);
bool q_fileinfo_is_readable(void* self);
bool q_fileinfo_is_writable(void* self);
bool q_fileinfo_is_executable(void* self);
bool q_fileinfo_is_hidden(void* self);
bool q_fileinfo_is_native_path(void* self);
bool q_fileinfo_is_relative(void* self);
bool q_fileinfo_is_absolute(void* self);
bool q_fileinfo_make_absolute(void* self);
bool q_fileinfo_is_file(void* self);
bool q_fileinfo_is_dir(void* self);
bool q_fileinfo_is_sym_link(void* self);
bool q_fileinfo_is_symbolic_link(void* self);
bool q_fileinfo_is_shortcut(void* self);
bool q_fileinfo_is_alias(void* self);
bool q_fileinfo_is_junction(void* self);
bool q_fileinfo_is_root(void* self);
bool q_fileinfo_is_bundle(void* self);
const char* q_fileinfo_sym_link_target(void* self);
const char* q_fileinfo_junction_target(void* self);
const char* q_fileinfo_owner(void* self);
uint32_t q_fileinfo_owner_id(void* self);
const char* q_fileinfo_group(void* self);
uint32_t q_fileinfo_group_id(void* self);
bool q_fileinfo_permission(void* self, int64_t permissions);
int64_t q_fileinfo_permissions(void* self);
long long q_fileinfo_size(void* self);
QDateTime* q_fileinfo_birth_time(void* self);
QDateTime* q_fileinfo_metadata_change_time(void* self);
QDateTime* q_fileinfo_last_modified(void* self);
QDateTime* q_fileinfo_last_read(void* self);
QDateTime* q_fileinfo_file_time(void* self, int64_t time);
bool q_fileinfo_caching(void* self);
void q_fileinfo_set_caching(void* self, bool on);
void q_fileinfo_stat(void* self);
void q_fileinfo_delete(void* self);

#endif
