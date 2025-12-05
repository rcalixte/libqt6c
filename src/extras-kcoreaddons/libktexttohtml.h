#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKTEXTTOHTML_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKTEXTTOHTML_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexttohtml.html)

/// [Upstream resources](https://api.kde.org/ktexttohtml.html#convertToHtml)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 flag of enum KTextToHTML__Option
/// @param param3 int
/// @param param4 int
///
const char* k_texttohtml_convert_to_html(const char* param1, const int32_t* param2, int param3, int param4);

/// [Upstream resources](https://api.kde.org/ktexttohtml.html#public-types)

typedef enum {
    KTEXTTOHTML_OPTION_PRESERVESPACES = 2,
    KTEXTTOHTML_OPTION_REPLACESMILEYS = 4,
    KTEXTTOHTML_OPTION_IGNOREURLS = 8,
    KTEXTTOHTML_OPTION_HIGHLIGHTTEXT = 16,
    KTEXTTOHTML_OPTION_CONVERTPHONENUMBERS = 32
} KTextToHTML__Option;

#endif
