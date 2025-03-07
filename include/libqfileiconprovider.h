#pragma once
#ifndef SRCQT6C_LIBQFILEICONPROVIDER_H
#define SRCQT6C_LIBQFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractfileiconprovider.h"
#include "libqfileinfo.h"
#include "libqicon.h"
#include <string.h>

QFileIconProvider* q_fileiconprovider_new();
QIcon* q_fileiconprovider_icon(void* self, int64_t typeVal);
void q_fileiconprovider_on_icon(void* self, QIcon* (*slot)(void*, int64_t));
QIcon* q_fileiconprovider_qbase_icon(void* self, int64_t typeVal);
QIcon* q_fileiconprovider_icon_with_info(void* self, void* info);
void q_fileiconprovider_on_icon_with_info(void* self, QIcon* (*slot)(void*, void*));
QIcon* q_fileiconprovider_qbase_icon_with_info(void* self, void* info);
QIcon* q_fileiconprovider_icon_with_q_file_info(void* self, void* param1);
void q_fileiconprovider_on_icon_with_q_file_info(void* self, QIcon* (*slot)(void*, void*));
QIcon* q_fileiconprovider_qbase_icon_with_q_file_info(void* self, void* param1);
const char* q_fileiconprovider_type(void* self, void* param1);
const char* q_fileiconprovider_qbase_type(void* self, void* param1);
void q_fileiconprovider_on_type(void* self, const char* (*slot)(void*, void*));
void q_fileiconprovider_set_options(void* self, int64_t options);
void q_fileiconprovider_qbase_set_options(void* self, int64_t options);
void q_fileiconprovider_on_set_options(void* self, void (*slot)(void*, int64_t));
int64_t q_fileiconprovider_options(void* self);
int64_t q_fileiconprovider_qbase_options(void* self);
void q_fileiconprovider_on_options(void* self, int64_t (*slot)());
void q_fileiconprovider_delete(void* self);

#endif
