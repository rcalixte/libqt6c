#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)

/// k_textautocorrectioncore__autocorrection_new constructs a new TextAutoCorrectionCore::AutoCorrection object.
///
TextAutoCorrectionCore__AutoCorrection* k_textautocorrectioncore__autocorrection_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
///
void k_textautocorrectioncore__autocorrection_write_config(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
///
void k_textautocorrectioncore__autocorrection_read_config(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
/// @param htmlMode bool
/// @param document QTextDocument*
/// @param position int*
///
bool k_textautocorrectioncore__autocorrection_autocorrect(void* self, bool htmlMode, void* document, int* position);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
/// @param fname const char*
///
void k_textautocorrectioncore__autocorrection_load_global_file_name(void* self, const char* fname);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
///
TextAutoCorrectionCore__AutoCorrectionSettings* k_textautocorrectioncore__autocorrection_auto_correction_settings(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
/// @param newAutoCorrectionSettings TextAutoCorrectionCore__AutoCorrectionSettings*
///
void k_textautocorrectioncore__autocorrection_set_auto_correction_settings(void* self, void* newAutoCorrectionSettings);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
/// @param filename const char*
///
void k_textautocorrectioncore__autocorrection_write_auto_correction_xml_file(void* self, const char* filename);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionCore_1_1AutoCorrection.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionCore__AutoCorrection*
///
void k_textautocorrectioncore__autocorrection_delete(void* self);

#endif
