#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLKEY_H
#define SRC_NETWORKQT6C_LIBQSSLKEY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"

QSslKey* q_sslkey_new();
QSslKey* q_sslkey_new2(const char* encoded, int64_t algorithm);
QSslKey* q_sslkey_new3(void* device, int64_t algorithm);
QSslKey* q_sslkey_new4(void* handle);
QSslKey* q_sslkey_new5(void* other);
QSslKey* q_sslkey_new6(const char* encoded, int64_t algorithm, int64_t format);
QSslKey* q_sslkey_new7(const char* encoded, int64_t algorithm, int64_t format, int64_t typeVal);
QSslKey* q_sslkey_new8(const char* encoded, int64_t algorithm, int64_t format, int64_t typeVal, const char* passPhrase);
QSslKey* q_sslkey_new9(void* device, int64_t algorithm, int64_t format);
QSslKey* q_sslkey_new10(void* device, int64_t algorithm, int64_t format, int64_t typeVal);
QSslKey* q_sslkey_new11(void* device, int64_t algorithm, int64_t format, int64_t typeVal, const char* passPhrase);
QSslKey* q_sslkey_new12(void* handle, int64_t typeVal);
void q_sslkey_operator_assign(void* self, void* other);
void q_sslkey_swap(void* self, void* other);
bool q_sslkey_is_null(void* self);
void q_sslkey_clear(void* self);
int32_t q_sslkey_length(void* self);
int64_t q_sslkey_type(void* self);
int64_t q_sslkey_algorithm(void* self);
char* q_sslkey_to_pem(void* self);
char* q_sslkey_to_der(void* self);
void* q_sslkey_handle(void* self);
bool q_sslkey_operator_equal(void* self, void* key);
bool q_sslkey_operator_not_equal(void* self, void* key);
char* q_sslkey_to_pem1(void* self, const char* passPhrase);
char* q_sslkey_to_der1(void* self, const char* passPhrase);
void q_sslkey_delete(void* self);

#endif
