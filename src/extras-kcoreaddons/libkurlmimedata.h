#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKURLMIMEDATA_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKURLMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kurlmimedata.html)

/// [Upstream resources](https://api.kde.org/kurlmimedata.html#setUrls)
///
/// @param urls libqt_list of QUrl*
/// @param mostLocalUrls libqt_list of QUrl*
/// @param mimeData QMimeData*
///
void k_urlmimedata_set_urls(libqt_list urls, libqt_list mostLocalUrls, void* mimeData);

/// [Upstream resources](https://api.kde.org/kurlmimedata.html#exportUrlsToPortal)
///
/// @param mimeData QMimeData*
///
bool k_urlmimedata_export_urls_to_portal(void* mimeData);

/// [Upstream resources](https://api.kde.org/kurlmimedata.html#setMetaData)
///
/// @param metaData libqt_map of const char* to const char*
/// @param mimeData QMimeData*
///
void k_urlmimedata_set_meta_data(libqt_map metaData, void* mimeData);

/// [Upstream resources](https://api.kde.org/kurlmimedata.html#mimeDataTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_urlmimedata_mime_data_types();

/// [Upstream resources](https://api.kde.org/kurlmimedata.html#urlsFromMimeData)
///
/// @param mimeData QMimeData*
/// @param decodeOptions flag of enum KUrlMimeData__DecodeOption
/// @param metaData libqt_map* of const char* to const char*
///
/// @return libqt_list of QUrl*
///
libqt_list k_urlmimedata_urls_from_mime_data(void* mimeData, int32_t decodeOptions, libqt_map* metaData);

/// [Upstream resources](https://api.kde.org/kurlmimedata.html#public-types)

typedef enum {
    KURLMIMEDATA_DECODEOPTION_PREFERKDEURLS = 0,
    KURLMIMEDATA_DECODEOPTION_PREFERLOCALURLS = 1
} KUrlMimeData__DecodeOption;

#endif
