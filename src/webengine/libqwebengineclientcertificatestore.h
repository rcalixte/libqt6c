#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESTORE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../network/libqsslcertificate.h"
#include "../network/libqsslkey.h"

void q_webengineclientcertificatestore_add(void* self, void* certificate, void* privateKey);
libqt_list /* of QSslCertificate* */ q_webengineclientcertificatestore_certificates(void* self);
void q_webengineclientcertificatestore_remove(void* self, void* certificate);
void q_webengineclientcertificatestore_clear(void* self);
#endif
