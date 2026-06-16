#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKTEXTTOHTML_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKTEXTTOHTML_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexttohtml.html)

/// [Upstream resources](https://api.kde.org/ktexttohtml.html#convertToHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param plainText const char*
/// @param options flag of enum KTextToHTML__Option*
/// @param maxUrlLen int
/// @param maxAddressLen int
///
const char* k_texttohtml_convert_to_html(const char* plainText, const int32_t* options, int maxUrlLen, int maxAddressLen);

/// [Upstream resources](https://api.kde.org/ktexttohtml.html#public-types)

typedef enum {
    KTEXTTOHTML_OPTION_PRESERVESPACES = 2,
    KTEXTTOHTML_OPTION_REPLACESMILEYS = 4,
    KTEXTTOHTML_OPTION_IGNOREURLS = 8,
    KTEXTTOHTML_OPTION_HIGHLIGHTTEXT = 16,
    KTEXTTOHTML_OPTION_CONVERTPHONENUMBERS = 32
} KTextToHTML__Option;

#endif
