#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPASSWORD_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPASSWORD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpassword.html)

/// [Upstream resources](https://api.kde.org/kpassword.html#qt_getEnumMetaObject)
///
/// @param param1 enum KPassword__RevealMode
///
const QMetaObject* k_password_get_enum_meta_object(int32_t param1);

/// [Upstream resources](https://api.kde.org/kpassword.html#qt_getEnumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 enum KPassword__RevealMode
///
const char* k_password_get_enum_name(int32_t param1);

/// [Upstream resources](https://api.kde.org/kpassword.html#public-types)

typedef enum {
    KPASSWORD_REVEALMODE_ONLYNEW = 0,
    KPASSWORD_REVEALMODE_NEVER = 1,
    KPASSWORD_REVEALMODE_ALWAYS = 2
} KPassword__RevealMode;

#endif
