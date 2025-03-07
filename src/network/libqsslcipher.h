#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCIPHER_H
#define SRC_NETWORKQT6C_LIBQSSLCIPHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>

QSslCipher* q_sslcipher_new();
QSslCipher* q_sslcipher_new2(const char* name);
QSslCipher* q_sslcipher_new3(const char* name, int64_t protocol);
QSslCipher* q_sslcipher_new4(void* other);
void q_sslcipher_operator_assign(void* self, void* other);
void q_sslcipher_swap(void* self, void* other);
bool q_sslcipher_operator_equal(void* self, void* other);
bool q_sslcipher_operator_not_equal(void* self, void* other);
bool q_sslcipher_is_null(void* self);
const char* q_sslcipher_name(void* self);
int32_t q_sslcipher_supported_bits(void* self);
int32_t q_sslcipher_used_bits(void* self);
const char* q_sslcipher_key_exchange_method(void* self);
const char* q_sslcipher_authentication_method(void* self);
const char* q_sslcipher_encryption_method(void* self);
const char* q_sslcipher_protocol_string(void* self);
int64_t q_sslcipher_protocol(void* self);
void q_sslcipher_delete(void* self);

#endif
