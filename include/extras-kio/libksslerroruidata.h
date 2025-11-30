#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKSSLERRORUIDATA_H
#define SRC_EXTRAS_KIO_QT6C_LIBKSSLERRORUIDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksslerroruidata.html

/// k_sslerroruidata_new constructs a new KSslErrorUiData object.
///
KSslErrorUiData* k_sslerroruidata_new();

/// k_sslerroruidata_new2 constructs a new KSslErrorUiData object.
///
/// @param socket QSslSocket*
KSslErrorUiData* k_sslerroruidata_new2(void* socket);

/// k_sslerroruidata_new3 constructs a new KSslErrorUiData object.
///
/// @param reply QNetworkReply*
/// @param sslErrors libqt_list /* of QSslError* */
KSslErrorUiData* k_sslerroruidata_new3(void* reply, libqt_list sslErrors);

/// k_sslerroruidata_new4 constructs a new KSslErrorUiData object.
///
/// @param other KSslErrorUiData*
KSslErrorUiData* k_sslerroruidata_new4(void* other);

/// [Upstream resources](https://api.kde.org/ksslerroruidata.html#operator-eq)
///
/// @param self KSslErrorUiData*
/// @param param1 KSslErrorUiData*
void k_sslerroruidata_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksslerroruidata.html#dtor.KSslErrorUiData)
///
/// Delete this object from C++ memory.
///
/// @param self KSslErrorUiData*
void k_sslerroruidata_delete(void* self);

#endif
