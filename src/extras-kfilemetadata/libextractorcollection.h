#pragma once
#ifndef EXTRAS_KFILEMETADATA_LIBEXTRACTORCOLLECTION_H
#define EXTRAS_KFILEMETADATA_LIBEXTRACTORCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorcollection.html)

/// k_filemetadata__extractorcollection_new constructs a new KFileMetaData::ExtractorCollection object.
///
KFileMetaData__ExtractorCollection* k_filemetadata__extractorcollection_new();

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorcollection.html#fetchExtractors)
///
/// @param self KFileMetaData__ExtractorCollection*
/// @param mimetype const char*
///
/// @return libqt_list of KFileMetaData__Extractor*
///
libqt_list k_filemetadata__extractorcollection_fetch_extractors(void* self, const char* mimetype);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__ExtractorCollection*
///
void k_filemetadata__extractorcollection_delete(void* self);

#endif
