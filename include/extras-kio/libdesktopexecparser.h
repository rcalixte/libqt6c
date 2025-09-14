#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBDESKTOPEXECPARSER_H
#define SRC_EXTRAS_KIOQT6C_LIBDESKTOPEXECPARSER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-desktopexecparser.html

/// k_io__desktopexecparser_new constructs a new KIO::DesktopExecParser object.
///
/// @param service KService*
/// @param urls libqt_list /* of QUrl* */
KIO__DesktopExecParser* k_io__desktopexecparser_new(void* service, libqt_list urls);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#setUrlsAreTempFiles)
///
/// @param self KIO__DesktopExecParser*
/// @param tempFiles bool
void k_io__desktopexecparser_set_urls_are_temp_files(void* self, bool tempFiles);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#setSuggestedFileName)
///
/// @param self KIO__DesktopExecParser*
/// @param suggestedFileName const char*
void k_io__desktopexecparser_set_suggested_file_name(void* self, const char* suggestedFileName);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#resultingArguments)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__DesktopExecParser*
const char** k_io__desktopexecparser_resulting_arguments(void* self);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#errorMessage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__DesktopExecParser*
const char* k_io__desktopexecparser_error_message(void* self);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#supportedProtocols)
///
/// Caller is responsible for freeing the returned memory
///
/// @param service KService*
const char** k_io__desktopexecparser_supported_protocols(void* service);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#isProtocolInSupportedList)
///
/// @param url QUrl*
/// @param supportedProtocols const char**
bool k_io__desktopexecparser_is_protocol_in_supported_list(void* url, const char* supportedProtocols[]);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#hasSchemeHandler)
///
/// @param url QUrl*
bool k_io__desktopexecparser_has_scheme_handler(void* url);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#executableName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param execLine const char*
const char* k_io__desktopexecparser_executable_name(const char* execLine);

/// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#executablePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param execLine const char*
const char* k_io__desktopexecparser_executable_path(const char* execLine);

/// Delete this object from C++ memory.
///
/// @param self KIO__DesktopExecParser*
void k_io__desktopexecparser_delete(void* self);

#endif
