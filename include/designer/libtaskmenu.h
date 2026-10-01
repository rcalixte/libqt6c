#pragma once
#ifndef DESIGNER_LIBTASKMENU_H
#define DESIGNER_LIBTASKMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html)

/// q_designertaskmenuextension_new constructs a new QDesignerTaskMenuExtension object.
///
QDesignerTaskMenuExtension* q_designertaskmenuextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
///
/// @param self const QDesignerTaskMenuExtension*
///
QAction* q_designertaskmenuextension_preferred_edit_action(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerTaskMenuExtension*
/// @param callback QAction* func(const QDesignerTaskMenuExtension* self)
///
void q_designertaskmenuextension_on_preferred_edit_action(const void* self, QAction* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
///
/// Base class method implementation
///
/// @param self const QDesignerTaskMenuExtension*
///
QAction* q_designertaskmenuextension_super_preferred_edit_action(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
///
/// @warning This method must be implemented with `q_designertaskmenuextension_on_task_actions` before it can be called.
///
/// @param self const QDesignerTaskMenuExtension*
///
/// @return libqt_list of QAction*
///
libqt_list q_designertaskmenuextension_task_actions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerTaskMenuExtension*
/// @param callback libqt_list of QAction* func(const QDesignerTaskMenuExtension* self)
///
void q_designertaskmenuextension_on_task_actions(const void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#dtor.QDesignerTaskMenuExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerTaskMenuExtension*
///
void q_designertaskmenuextension_delete(void* self);

#endif
