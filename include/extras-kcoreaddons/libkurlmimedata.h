#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKURLMIMEDATA_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKURLMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kurlmimedata.html

/// [Qt documentation](https://api.kde.org/kurlmimedata.html#setUrls)
///
/// @param param1 libqt_list /* of QUrl* */
/// @param param2 libqt_list /* of QUrl* */
/// @param param3 QMimeData*
void k_urlmimedata_set_urls(libqt_list param1, libqt_list param2, void* param3);

/// [Qt documentation](https://api.kde.org/kurlmimedata.html#exportUrlsToPortal)
///
/// @param param1 QMimeData*
bool k_urlmimedata_export_urls_to_portal(void* param1);

/// [Qt documentation](https://api.kde.org/kurlmimedata.html#setMetaData)
///
/// @param param1 libqt_map /* of const char* to const char* */
/// @param param2 QMimeData*
void k_urlmimedata_set_meta_data(libqt_map /* of const char* to const char* */ param1, void* param2);

/// [Qt documentation](https://api.kde.org/kurlmimedata.html#mimeDataTypes)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_urlmimedata_mime_data_types();

/// [Qt documentation](https://api.kde.org/kurlmimedata.html#urlsFromMimeData)
///
/// @param param1 QMimeData*
/// @param param2 flag of enum KUrlMimeData__DecodeOption
/// @param param3 libqt_map* /* of const char* to const char* */
libqt_list /* of QUrl* */ k_urlmimedata_urls_from_mime_data(void* param1, int32_t param2, libqt_map* /* of const char* to const char* */ param3);

/// https://api.kde.org/kurlmimedata.html#types

typedef enum {
    KURLMIMEDATA_DECODEOPTION_PREFERKDEURLS = 0,
    KURLMIMEDATA_DECODEOPTION_PREFERLOCALURLS = 1
} KUrlMimeData__DecodeOption;

#endif
