#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBTASKMENU_H
#define SRC_DESIGNER_QT6C_LIBTASKMENU_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html)

/// q_designertaskmenuextension_new constructs a new QDesignerTaskMenuExtension object.
///
QDesignerTaskMenuExtension* q_designertaskmenuextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
///
/// @param self QDesignerTaskMenuExtension*
///
QAction* q_designertaskmenuextension_preferred_edit_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerTaskMenuExtension*
/// @param callback QAction* func()
///
void q_designertaskmenuextension_on_preferred_edit_action(void* self, QAction* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#preferredEditAction)
///
/// Base class method implementation
///
/// @param self QDesignerTaskMenuExtension*
///
QAction* q_designertaskmenuextension_qbase_preferred_edit_action(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
///
/// @param self QDesignerTaskMenuExtension*
///
/// @return libqt_list of QAction*
///
libqt_list q_designertaskmenuextension_task_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerTaskMenuExtension*
/// @param callback QAction** func()
///
void q_designertaskmenuextension_on_task_actions(void* self, QAction** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#taskActions)
///
/// Base class method implementation
///
/// @param self QDesignerTaskMenuExtension*
///
/// @return libqt_list of QAction*
///
libqt_list q_designertaskmenuextension_qbase_task_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignertaskmenuextension.html#dtor.QDesignerTaskMenuExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerTaskMenuExtension*
///
void q_designertaskmenuextension_delete(void* self);

#endif
