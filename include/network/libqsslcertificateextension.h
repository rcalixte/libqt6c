#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCERTIFICATEEXTENSION_H
#define SRC_NETWORKQT6C_LIBQSSLCERTIFICATEEXTENSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqvariant.h"

QSslCertificateExtension* q_sslcertificateextension_new();
QSslCertificateExtension* q_sslcertificateextension_new2(void* other);
void q_sslcertificateextension_operator_assign(void* self, void* other);
void q_sslcertificateextension_swap(void* self, void* other);
const char* q_sslcertificateextension_oid(void* self);
const char* q_sslcertificateextension_name(void* self);
QVariant* q_sslcertificateextension_value(void* self);
bool q_sslcertificateextension_is_critical(void* self);
bool q_sslcertificateextension_is_supported(void* self);
void q_sslcertificateextension_delete(void* self);

#endif
