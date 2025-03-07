#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESELECTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../network/libqsslcertificate.h"
#include "../libqurl.h"

QWebEngineClientCertificateSelection* q_webengineclientcertificateselection_new(void* param1);
void q_webengineclientcertificateselection_operator_assign(void* self, void* param1);
QUrl* q_webengineclientcertificateselection_host(void* self);
void q_webengineclientcertificateselection_select(void* self, void* certificate);
void q_webengineclientcertificateselection_select_none(void* self);
libqt_list /* of QSslCertificate* */ q_webengineclientcertificateselection_certificates(void* self);
void q_webengineclientcertificateselection_delete(void* self);

#endif
