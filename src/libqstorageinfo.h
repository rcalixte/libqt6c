#pragma once
#ifndef SRCQT6C_LIBQSTORAGEINFO_H
#define SRCQT6C_LIBQSTORAGEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdir.h"
#include <string.h>

QStorageInfo* q_storageinfo_new();
QStorageInfo* q_storageinfo_new2(const char* path);
QStorageInfo* q_storageinfo_new3(void* dir);
QStorageInfo* q_storageinfo_new4(void* other);
void q_storageinfo_operator_assign(void* self, void* other);
void q_storageinfo_swap(void* self, void* other);
void q_storageinfo_set_path(void* self, const char* path);
const char* q_storageinfo_root_path(void* self);
char* q_storageinfo_device(void* self);
char* q_storageinfo_subvolume(void* self);
char* q_storageinfo_file_system_type(void* self);
const char* q_storageinfo_name(void* self);
const char* q_storageinfo_display_name(void* self);
long long q_storageinfo_bytes_total(void* self);
long long q_storageinfo_bytes_free(void* self);
long long q_storageinfo_bytes_available(void* self);
int32_t q_storageinfo_block_size(void* self);
bool q_storageinfo_is_root(void* self);
bool q_storageinfo_is_read_only(void* self);
bool q_storageinfo_is_ready(void* self);
bool q_storageinfo_is_valid(void* self);
void q_storageinfo_refresh(void* self);
libqt_list /* of QStorageInfo* */ q_storageinfo_mounted_volumes();
QStorageInfo* q_storageinfo_root();
void q_storageinfo_delete(void* self);

#endif
