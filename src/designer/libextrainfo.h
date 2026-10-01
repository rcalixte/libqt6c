#pragma once
#ifndef DESIGNER_LIBEXTRAINFO_H
#define DESIGNER_LIBEXTRAINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#workingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerExtraInfoExtension*
///
const char* q_designerextrainfoextension_working_directory(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#setWorkingDirectory)
///
/// @param self QDesignerExtraInfoExtension*
/// @param workingDirectory const char*
///
void q_designerextrainfoextension_set_working_directory(void* self, const char* workingDirectory);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#dtor.QDesignerExtraInfoExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerExtraInfoExtension*
///
void q_designerextrainfoextension_delete(void* self);

#endif
