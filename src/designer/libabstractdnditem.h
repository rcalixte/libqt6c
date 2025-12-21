#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTDNDITEM_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTDNDITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#widget)
///
/// @param self QDesignerDnDItemInterface*
///
QWidget* q_designerdnditeminterface_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#decoration)
///
/// @param self QDesignerDnDItemInterface*
///
QWidget* q_designerdnditeminterface_decoration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#hotSpot)
///
/// @param self QDesignerDnDItemInterface*
///
QPoint* q_designerdnditeminterface_hot_spot(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#type)
///
/// @param self QDesignerDnDItemInterface*
///
/// @return enum QDesignerDnDItemInterface__DropType
///
int32_t q_designerdnditeminterface_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#source)
///
/// @param self QDesignerDnDItemInterface*
///
QWidget* q_designerdnditeminterface_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerdnditeminterface.html#dtor.QDesignerDnDItemInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerDnDItemInterface*
///
void q_designerdnditeminterface_delete(void* self);

/// [Upstream resources](https://api.kde.org/abstractdnditem.html#public-types)

typedef enum {
    QDESIGNERDNDITEMINTERFACE_DROPTYPE_MOVEDROP = 0,
    QDESIGNERDNDITEMINTERFACE_DROPTYPE_COPYDROP = 1
} QDesignerDnDItemInterface__DropType;

#endif
