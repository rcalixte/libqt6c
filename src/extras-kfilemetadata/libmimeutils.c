#include "../libqmimedatabase.hpp"
#include "../libqmimetype.hpp"
#include "libmimeutils.hpp"
#include "libmimeutils.h"

QMimeType* k_filemetadata__mimeutils_strict_mime_type(const char* param1, void* param2) {
    return KFileMetaData__MimeUtils_StrictMimeType(qstring(param1), (QMimeDatabase*)param2);
}
