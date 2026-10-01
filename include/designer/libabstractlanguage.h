#pragma once
#ifndef DESIGNER_LIBABSTRACTLANGUAGE_H
#define DESIGNER_LIBABSTRACTLANGUAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#dtor.QDesignerLanguageExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerLanguageExtension*
///
void q_designerlanguageextension_delete(void* self);

#endif
