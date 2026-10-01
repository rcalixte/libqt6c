#pragma once
#ifndef DESIGNER_LIBABSTRACTDNDITEM_H
#define DESIGNER_LIBABSTRACTDNDITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#dtor.QDesignerDnDItemInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerDnDItemInterface*
///
void q_designerdnditeminterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/abstractdnditem.html#public-types)

typedef enum {
    QDESIGNERDNDITEMINTERFACE_DROPTYPE_MOVEDROP = 0,
    QDESIGNERDNDITEMINTERFACE_DROPTYPE_COPYDROP = 1
} QDesignerDnDItemInterface__DropType;

#endif
