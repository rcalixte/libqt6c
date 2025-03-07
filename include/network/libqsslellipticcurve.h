#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLELLIPTICCURVE_H
#define SRC_NETWORKQT6C_LIBQSSLELLIPTICCURVE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>

QSslEllipticCurve* q_sslellipticcurve_new(void* other);
QSslEllipticCurve* q_sslellipticcurve_new2(void* other);
QSslEllipticCurve* q_sslellipticcurve_new3();
QSslEllipticCurve* q_sslellipticcurve_new4(void* param1);
void q_sslellipticcurve_copy_assign(void* self, void* other);
void q_sslellipticcurve_move_assign(void* self, void* other);
QSslEllipticCurve* q_sslellipticcurve_from_short_name(const char* name);
QSslEllipticCurve* q_sslellipticcurve_from_long_name(const char* name);
const char* q_sslellipticcurve_short_name(void* self);
const char* q_sslellipticcurve_long_name(void* self);
bool q_sslellipticcurve_is_valid(void* self);
bool q_sslellipticcurve_is_tls_named_curve(void* self);
void q_sslellipticcurve_delete(void* self);

#endif
