#pragma once
#ifndef SRCQT6C_LIBQMESSAGEAUTHENTICATIONCODE_H
#define SRCQT6C_LIBQMESSAGEAUTHENTICATIONCODE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiodevice.h"

QMessageAuthenticationCode* q_messageauthenticationcode_new(int64_t method);
QMessageAuthenticationCode* q_messageauthenticationcode_new2(int64_t method, const char* key);
void q_messageauthenticationcode_reset(void* self);
void q_messageauthenticationcode_set_key(void* self, const char* key);
void q_messageauthenticationcode_add_data(void* self, const char* data, int64_t length);
void q_messageauthenticationcode_add_data_with_data(void* self, const char* data);
bool q_messageauthenticationcode_add_data_with_device(void* self, void* device);
char* q_messageauthenticationcode_result(void* self);
char* q_messageauthenticationcode_hash(const char* message, const char* key, int64_t method);
void q_messageauthenticationcode_delete(void* self);

#endif
