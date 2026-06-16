#include "../libqmimedatabase.hpp"
#include "../libqmimetype.hpp"
#include "libmimeutils.hpp"
#include "libmimeutils.h"

QMimeType* k_filemetadata__mimeutils_strict_mime_type(const char* filePath, void* db) {
    return KFileMetaData__MimeUtils_StrictMimeType(qstring(filePath), (QMimeDatabase*)db);
}
