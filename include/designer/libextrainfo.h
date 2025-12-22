#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBEXTRAINFO_H
#define SRC_DESIGNER_QT6C_LIBEXTRAINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#core)
///
/// @param self QDesignerExtraInfoExtension*
///
QDesignerFormEditorInterface* q_designerextrainfoextension_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#widget)
///
/// @param self QDesignerExtraInfoExtension*
///
QWidget* q_designerextrainfoextension_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerextrainfoextension.html#workingDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerExtraInfoExtension*
///
const char* q_designerextrainfoextension_working_directory(void* self);

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
