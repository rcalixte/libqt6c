#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTOBJECTINSPECTOR_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTOBJECTINSPECTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html)

/// q_designerobjectinspectorinterface_new constructs a new QDesignerObjectInspectorInterface object.
///
/// @param parent QWidget*
///
QDesignerObjectInspectorInterface* q_designerobjectinspectorinterface_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html)

/// q_designerobjectinspectorinterface_new2 constructs a new QDesignerObjectInspectorInterface object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QDesignerObjectInspectorInterface* q_designerobjectinspectorinterface_new2(void* parent, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerObjectInspectorInterface*
///
const QMetaObject* q_designerobjectinspectorinterface_meta_object(void* self);

/// @param self QDesignerObjectInspectorInterface*
/// @param param1 const char*
///
void* q_designerobjectinspectorinterface_metacast(void* self, const char* param1);

/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerobjectinspectorinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback int32_t func(QDesignerObjectInspectorInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerobjectinspectorinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerobjectinspectorinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerobjectinspectorinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html#core)
///
/// @param self QDesignerObjectInspectorInterface*
///
QDesignerFormEditorInterface* q_designerobjectinspectorinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designerobjectinspectorinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerObjectInspectorInterface*
///
QDesignerFormEditorInterface* q_designerobjectinspectorinterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html#setFormWindow)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerobjectinspectorinterface_set_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html#setFormWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QDesignerFormWindowInterface* formWindow)
///
void q_designerobjectinspectorinterface_on_set_form_window(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html#setFormWindow)
///
/// Base class method implementation
///
/// @param self QDesignerObjectInspectorInterface*
/// @param formWindow QDesignerFormWindowInterface*
///
void q_designerobjectinspectorinterface_qbase_set_form_window(void* self, void* formWindow);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerobjectinspectorinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerobjectinspectorinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDesignerObjectInspectorInterface*
///
uintptr_t q_designerobjectinspectorinterface_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDesignerObjectInspectorInterface*
///
uintptr_t q_designerobjectinspectorinterface_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDesignerObjectInspectorInterface*
///
uintptr_t q_designerobjectinspectorinterface_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDesignerObjectInspectorInterface*
///
QStyle* q_designerobjectinspectorinterface_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param style QStyle*
///
void q_designerobjectinspectorinterface_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return enum Qt__WindowModality
///
int32_t q_designerobjectinspectorinterface_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param windowModality enum Qt__WindowModality
///
void q_designerobjectinspectorinterface_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QWidget*
///
bool q_designerobjectinspectorinterface_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param enabled bool
///
void q_designerobjectinspectorinterface_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param disabled bool
///
void q_designerobjectinspectorinterface_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param windowModified bool
///
void q_designerobjectinspectorinterface_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRect* q_designerobjectinspectorinterface_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDesignerObjectInspectorInterface*
///
const QRect* q_designerobjectinspectorinterface_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRect* q_designerobjectinspectorinterface_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDesignerObjectInspectorInterface*
///
QPoint* q_designerobjectinspectorinterface_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRect* q_designerobjectinspectorinterface_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRect* q_designerobjectinspectorinterface_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRegion* q_designerobjectinspectorinterface_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param minimumSize QSize*
///
void q_designerobjectinspectorinterface_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param minw int
/// @param minh int
///
void q_designerobjectinspectorinterface_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param maximumSize QSize*
///
void q_designerobjectinspectorinterface_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param maxw int
/// @param maxh int
///
void q_designerobjectinspectorinterface_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param minw int
///
void q_designerobjectinspectorinterface_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param minh int
///
void q_designerobjectinspectorinterface_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param maxw int
///
void q_designerobjectinspectorinterface_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param maxh int
///
void q_designerobjectinspectorinterface_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param sizeIncrement QSize*
///
void q_designerobjectinspectorinterface_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param w int
/// @param h int
///
void q_designerobjectinspectorinterface_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param baseSize QSize*
///
void q_designerobjectinspectorinterface_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param basew int
/// @param baseh int
///
void q_designerobjectinspectorinterface_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param fixedSize QSize*
///
void q_designerobjectinspectorinterface_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param w int
/// @param h int
///
void q_designerobjectinspectorinterface_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param w int
///
void q_designerobjectinspectorinterface_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param h int
///
void q_designerobjectinspectorinterface_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerobjectinspectorinterface_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerobjectinspectorinterface_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerobjectinspectorinterface_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerobjectinspectorinterface_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerobjectinspectorinterface_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerobjectinspectorinterface_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerobjectinspectorinterface_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerobjectinspectorinterface_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerobjectinspectorinterface_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerobjectinspectorinterface_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerobjectinspectorinterface_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerobjectinspectorinterface_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDesignerObjectInspectorInterface*
///
const QPalette* q_designerobjectinspectorinterface_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param palette QPalette*
///
void q_designerobjectinspectorinterface_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_designerobjectinspectorinterface_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerobjectinspectorinterface_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_designerobjectinspectorinterface_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerobjectinspectorinterface_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDesignerObjectInspectorInterface*
///
const QFont* q_designerobjectinspectorinterface_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param font QFont*
///
void q_designerobjectinspectorinterface_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDesignerObjectInspectorInterface*
///
QFontMetrics* q_designerobjectinspectorinterface_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDesignerObjectInspectorInterface*
///
QFontInfo* q_designerobjectinspectorinterface_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDesignerObjectInspectorInterface*
///
QCursor* q_designerobjectinspectorinterface_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param cursor QCursor*
///
void q_designerobjectinspectorinterface_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param enable bool
///
void q_designerobjectinspectorinterface_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param enable bool
///
void q_designerobjectinspectorinterface_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param mask QBitmap*
///
void q_designerobjectinspectorinterface_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param mask QRegion*
///
void q_designerobjectinspectorinterface_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRegion* q_designerobjectinspectorinterface_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param target QPaintDevice*
///
void q_designerobjectinspectorinterface_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param painter QPainter*
///
void q_designerobjectinspectorinterface_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerObjectInspectorInterface*
///
QPixmap* q_designerobjectinspectorinterface_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDesignerObjectInspectorInterface*
///
QGraphicsEffect* q_designerobjectinspectorinterface_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param effect QGraphicsEffect*
///
void q_designerobjectinspectorinterface_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param type enum Qt__GestureType
///
void q_designerobjectinspectorinterface_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param type enum Qt__GestureType
///
void q_designerobjectinspectorinterface_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param windowTitle const char*
///
void q_designerobjectinspectorinterface_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param styleSheet const char*
///
void q_designerobjectinspectorinterface_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param icon QIcon*
///
void q_designerobjectinspectorinterface_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDesignerObjectInspectorInterface*
///
QIcon* q_designerobjectinspectorinterface_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param windowIconText const char*
///
void q_designerobjectinspectorinterface_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param windowRole const char*
///
void q_designerobjectinspectorinterface_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param filePath const char*
///
void q_designerobjectinspectorinterface_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param level double
///
void q_designerobjectinspectorinterface_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDesignerObjectInspectorInterface*
///
double q_designerobjectinspectorinterface_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param toolTip const char*
///
void q_designerobjectinspectorinterface_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param msec int
///
void q_designerobjectinspectorinterface_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param statusTip const char*
///
void q_designerobjectinspectorinterface_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param whatsThis const char*
///
void q_designerobjectinspectorinterface_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param name const char*
///
void q_designerobjectinspectorinterface_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param description const char*
///
void q_designerobjectinspectorinterface_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param direction enum Qt__LayoutDirection
///
void q_designerobjectinspectorinterface_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_designerobjectinspectorinterface_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param locale QLocale*
///
void q_designerobjectinspectorinterface_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDesignerObjectInspectorInterface*
///
QLocale* q_designerobjectinspectorinterface_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param reason enum Qt__FocusReason
///
void q_designerobjectinspectorinterface_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_designerobjectinspectorinterface_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param policy enum Qt__FocusPolicy
///
void q_designerobjectinspectorinterface_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_designerobjectinspectorinterface_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param focusProxy QWidget*
///
void q_designerobjectinspectorinterface_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_designerobjectinspectorinterface_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_designerobjectinspectorinterface_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QCursor*
///
void q_designerobjectinspectorinterface_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param key QKeySequence*
///
int32_t q_designerobjectinspectorinterface_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param id int
///
void q_designerobjectinspectorinterface_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param id int
///
void q_designerobjectinspectorinterface_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param id int
///
void q_designerobjectinspectorinterface_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_designerobjectinspectorinterface_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_designerobjectinspectorinterface_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param enable bool
///
void q_designerobjectinspectorinterface_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDesignerObjectInspectorInterface*
///
QGraphicsProxyWidget* q_designerobjectinspectorinterface_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerobjectinspectorinterface_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QRect*
///
void q_designerobjectinspectorinterface_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QRegion*
///
void q_designerobjectinspectorinterface_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerobjectinspectorinterface_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QRect*
///
void q_designerobjectinspectorinterface_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QRegion*
///
void q_designerobjectinspectorinterface_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param hidden bool
///
void q_designerobjectinspectorinterface_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QWidget*
///
void q_designerobjectinspectorinterface_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param x int
/// @param y int
///
void q_designerobjectinspectorinterface_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QPoint*
///
void q_designerobjectinspectorinterface_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param w int
/// @param h int
///
void q_designerobjectinspectorinterface_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QSize*
///
void q_designerobjectinspectorinterface_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerobjectinspectorinterface_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param geometry QRect*
///
void q_designerobjectinspectorinterface_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
char* q_designerobjectinspectorinterface_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param geometry const char*
///
bool q_designerobjectinspectorinterface_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QWidget*
///
bool q_designerobjectinspectorinterface_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_designerobjectinspectorinterface_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerobjectinspectorinterface_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerobjectinspectorinterface_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDesignerObjectInspectorInterface*
///
QSizePolicy* q_designerobjectinspectorinterface_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param sizePolicy QSizePolicy*
///
void q_designerobjectinspectorinterface_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_designerobjectinspectorinterface_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRegion* q_designerobjectinspectorinterface_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_designerobjectinspectorinterface_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param margins QMargins*
///
void q_designerobjectinspectorinterface_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDesignerObjectInspectorInterface*
///
QMargins* q_designerobjectinspectorinterface_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDesignerObjectInspectorInterface*
///
QRect* q_designerobjectinspectorinterface_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDesignerObjectInspectorInterface*
///
QLayout* q_designerobjectinspectorinterface_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param layout QLayout*
///
void q_designerobjectinspectorinterface_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param parent QWidget*
///
void q_designerobjectinspectorinterface_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_designerobjectinspectorinterface_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param dx int
/// @param dy int
///
void q_designerobjectinspectorinterface_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_designerobjectinspectorinterface_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param on bool
///
void q_designerobjectinspectorinterface_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param action QAction*
///
void q_designerobjectinspectorinterface_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param actions libqt_list of QAction*
///
void q_designerobjectinspectorinterface_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_designerobjectinspectorinterface_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param before QAction*
/// @param action QAction*
///
void q_designerobjectinspectorinterface_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param action QAction*
///
void q_designerobjectinspectorinterface_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return libqt_list of QAction*
///
libqt_list q_designerobjectinspectorinterface_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param text const char*
///
QAction* q_designerobjectinspectorinterface_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_designerobjectinspectorinterface_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerobjectinspectorinterface_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerobjectinspectorinterface_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWidget* q_designerobjectinspectorinterface_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerobjectinspectorinterface_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_designerobjectinspectorinterface_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum Qt__WindowType
///
void q_designerobjectinspectorinterface_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerobjectinspectorinterface_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return enum Qt__WindowType
///
int32_t q_designerobjectinspectorinterface_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_designerobjectinspectorinterface_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param x int
/// @param y int
///
QWidget* q_designerobjectinspectorinterface_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param p QPoint*
///
QWidget* q_designerobjectinspectorinterface_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param p QPointF*
///
QWidget* q_designerobjectinspectorinterface_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum Qt__WidgetAttribute
///
void q_designerobjectinspectorinterface_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_designerobjectinspectorinterface_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param child QWidget*
///
bool q_designerobjectinspectorinterface_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param enabled bool
///
void q_designerobjectinspectorinterface_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDesignerObjectInspectorInterface*
///
QBackingStore* q_designerobjectinspectorinterface_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDesignerObjectInspectorInterface*
///
QWindow* q_designerobjectinspectorinterface_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDesignerObjectInspectorInterface*
///
QScreen* q_designerobjectinspectorinterface_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param screen QScreen*
///
void q_designerobjectinspectorinterface_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_designerobjectinspectorinterface_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param title const char*
///
void q_designerobjectinspectorinterface_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, const char* title)
///
void q_designerobjectinspectorinterface_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param icon QIcon*
///
void q_designerobjectinspectorinterface_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QIcon* icon)
///
void q_designerobjectinspectorinterface_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param iconText const char*
///
void q_designerobjectinspectorinterface_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, const char* iconText)
///
void q_designerobjectinspectorinterface_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param pos QPoint*
///
void q_designerobjectinspectorinterface_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QPoint* pos)
///
void q_designerobjectinspectorinterface_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_designerobjectinspectorinterface_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_designerobjectinspectorinterface_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_designerobjectinspectorinterface_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerobjectinspectorinterface_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerobjectinspectorinterface_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_designerobjectinspectorinterface_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerobjectinspectorinterface_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerobjectinspectorinterface_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param rectangle QRect*
///
QPixmap* q_designerobjectinspectorinterface_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_designerobjectinspectorinterface_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_designerobjectinspectorinterface_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param id int
/// @param enable bool
///
void q_designerobjectinspectorinterface_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param id int
/// @param enable bool
///
void q_designerobjectinspectorinterface_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_designerobjectinspectorinterface_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_designerobjectinspectorinterface_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_designerobjectinspectorinterface_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_designerobjectinspectorinterface_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char* q_designerobjectinspectorinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param name char*
///
void q_designerobjectinspectorinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param b bool
///
bool q_designerobjectinspectorinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerObjectInspectorInterface*
///
QThread* q_designerobjectinspectorinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param thread QThread*
///
bool q_designerobjectinspectorinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param interval int
///
int32_t q_designerobjectinspectorinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param id int
///
void q_designerobjectinspectorinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param id enum Qt__TimerId
///
void q_designerobjectinspectorinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerObjectInspectorInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerobjectinspectorinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param filterObj QObject*
///
void q_designerobjectinspectorinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param obj QObject*
///
void q_designerobjectinspectorinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerobjectinspectorinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerobjectinspectorinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerobjectinspectorinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerobjectinspectorinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerobjectinspectorinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param name const char*
///
QVariant* q_designerobjectinspectorinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerObjectInspectorInterface*
///
const char** q_designerobjectinspectorinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerObjectInspectorInterface*
///
QBindingStorage* q_designerobjectinspectorinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerObjectInspectorInterface*
///
const QBindingStorage* q_designerobjectinspectorinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self)
///
void q_designerobjectinspectorinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerObjectInspectorInterface*
///
QObject* q_designerobjectinspectorinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param classname const char*
///
bool q_designerobjectinspectorinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_designerobjectinspectorinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerobjectinspectorinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerobjectinspectorinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerobjectinspectorinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QObject*
///
void q_designerobjectinspectorinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QObject* param1)
///
void q_designerobjectinspectorinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDesignerObjectInspectorInterface*
///
double q_designerobjectinspectorinterface_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDesignerObjectInspectorInterface*
///
double q_designerobjectinspectorinterface_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_designerobjectinspectorinterface_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_designerobjectinspectorinterface_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback int32_t func()
///
void q_designerobjectinspectorinterface_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param visible bool
///
void q_designerobjectinspectorinterface_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param visible bool
///
void q_designerobjectinspectorinterface_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, bool visible)
///
void q_designerobjectinspectorinterface_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QSize* func()
///
void q_designerobjectinspectorinterface_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QSize* q_designerobjectinspectorinterface_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QSize* func()
///
void q_designerobjectinspectorinterface_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 int
///
int32_t q_designerobjectinspectorinterface_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 int
///
int32_t q_designerobjectinspectorinterface_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback int32_t func(QDesignerObjectInspectorInterface* self, int param1)
///
void q_designerobjectinspectorinterface_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func()
///
void q_designerobjectinspectorinterface_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QPaintEngine* q_designerobjectinspectorinterface_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QPaintEngine* q_designerobjectinspectorinterface_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QPaintEngine* func()
///
void q_designerobjectinspectorinterface_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEvent*
///
bool q_designerobjectinspectorinterface_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEvent*
///
bool q_designerobjectinspectorinterface_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func(QDesignerObjectInspectorInterface* self, QEvent* event)
///
void q_designerobjectinspectorinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QMouseEvent* event)
///
void q_designerobjectinspectorinterface_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QMouseEvent* event)
///
void q_designerobjectinspectorinterface_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QMouseEvent* event)
///
void q_designerobjectinspectorinterface_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMouseEvent*
///
void q_designerobjectinspectorinterface_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QMouseEvent* event)
///
void q_designerobjectinspectorinterface_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QWheelEvent*
///
void q_designerobjectinspectorinterface_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QWheelEvent*
///
void q_designerobjectinspectorinterface_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QWheelEvent* event)
///
void q_designerobjectinspectorinterface_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QKeyEvent*
///
void q_designerobjectinspectorinterface_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QKeyEvent*
///
void q_designerobjectinspectorinterface_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QKeyEvent* event)
///
void q_designerobjectinspectorinterface_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QKeyEvent*
///
void q_designerobjectinspectorinterface_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QKeyEvent*
///
void q_designerobjectinspectorinterface_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QKeyEvent* event)
///
void q_designerobjectinspectorinterface_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QFocusEvent*
///
void q_designerobjectinspectorinterface_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QFocusEvent*
///
void q_designerobjectinspectorinterface_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QFocusEvent* event)
///
void q_designerobjectinspectorinterface_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QFocusEvent*
///
void q_designerobjectinspectorinterface_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QFocusEvent*
///
void q_designerobjectinspectorinterface_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QFocusEvent* event)
///
void q_designerobjectinspectorinterface_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEnterEvent*
///
void q_designerobjectinspectorinterface_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEnterEvent*
///
void q_designerobjectinspectorinterface_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QEnterEvent* event)
///
void q_designerobjectinspectorinterface_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEvent*
///
void q_designerobjectinspectorinterface_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEvent*
///
void q_designerobjectinspectorinterface_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QEvent* event)
///
void q_designerobjectinspectorinterface_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QPaintEvent*
///
void q_designerobjectinspectorinterface_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QPaintEvent*
///
void q_designerobjectinspectorinterface_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QPaintEvent* event)
///
void q_designerobjectinspectorinterface_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMoveEvent*
///
void q_designerobjectinspectorinterface_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QMoveEvent*
///
void q_designerobjectinspectorinterface_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QMoveEvent* event)
///
void q_designerobjectinspectorinterface_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QResizeEvent*
///
void q_designerobjectinspectorinterface_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QResizeEvent*
///
void q_designerobjectinspectorinterface_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QResizeEvent* event)
///
void q_designerobjectinspectorinterface_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QCloseEvent*
///
void q_designerobjectinspectorinterface_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QCloseEvent*
///
void q_designerobjectinspectorinterface_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QCloseEvent* event)
///
void q_designerobjectinspectorinterface_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QContextMenuEvent*
///
void q_designerobjectinspectorinterface_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QContextMenuEvent*
///
void q_designerobjectinspectorinterface_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event)
///
void q_designerobjectinspectorinterface_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QTabletEvent*
///
void q_designerobjectinspectorinterface_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QTabletEvent*
///
void q_designerobjectinspectorinterface_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QTabletEvent* event)
///
void q_designerobjectinspectorinterface_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QActionEvent*
///
void q_designerobjectinspectorinterface_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QActionEvent*
///
void q_designerobjectinspectorinterface_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QActionEvent* event)
///
void q_designerobjectinspectorinterface_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDragEnterEvent*
///
void q_designerobjectinspectorinterface_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDragEnterEvent*
///
void q_designerobjectinspectorinterface_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event)
///
void q_designerobjectinspectorinterface_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDragMoveEvent*
///
void q_designerobjectinspectorinterface_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDragMoveEvent*
///
void q_designerobjectinspectorinterface_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event)
///
void q_designerobjectinspectorinterface_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDragLeaveEvent*
///
void q_designerobjectinspectorinterface_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDragLeaveEvent*
///
void q_designerobjectinspectorinterface_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event)
///
void q_designerobjectinspectorinterface_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDropEvent*
///
void q_designerobjectinspectorinterface_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QDropEvent*
///
void q_designerobjectinspectorinterface_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QDropEvent* event)
///
void q_designerobjectinspectorinterface_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QShowEvent*
///
void q_designerobjectinspectorinterface_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QShowEvent*
///
void q_designerobjectinspectorinterface_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QShowEvent* event)
///
void q_designerobjectinspectorinterface_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QHideEvent*
///
void q_designerobjectinspectorinterface_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QHideEvent*
///
void q_designerobjectinspectorinterface_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QHideEvent* event)
///
void q_designerobjectinspectorinterface_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerobjectinspectorinterface_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerobjectinspectorinterface_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func(QDesignerObjectInspectorInterface* self, const char* eventType, void* message, intptr_t* result)
///
void q_designerobjectinspectorinterface_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QEvent*
///
void q_designerobjectinspectorinterface_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QEvent*
///
void q_designerobjectinspectorinterface_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QEvent* param1)
///
void q_designerobjectinspectorinterface_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerobjectinspectorinterface_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerobjectinspectorinterface_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback int32_t func(QDesignerObjectInspectorInterface* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_designerobjectinspectorinterface_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param painter QPainter*
///
void q_designerobjectinspectorinterface_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param painter QPainter*
///
void q_designerobjectinspectorinterface_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QPainter* painter)
///
void q_designerobjectinspectorinterface_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerobjectinspectorinterface_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerobjectinspectorinterface_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QPaintDevice* func(QDesignerObjectInspectorInterface* self, QPoint* offset)
///
void q_designerobjectinspectorinterface_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QPainter* q_designerobjectinspectorinterface_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QPainter* q_designerobjectinspectorinterface_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QPainter* func()
///
void q_designerobjectinspectorinterface_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerobjectinspectorinterface_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerobjectinspectorinterface_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1)
///
void q_designerobjectinspectorinterface_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerobjectinspectorinterface_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerobjectinspectorinterface_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QVariant* func(QDesignerObjectInspectorInterface* self, enum Qt__InputMethodQuery param1)
///
void q_designerobjectinspectorinterface_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param next bool
///
bool q_designerobjectinspectorinterface_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param next bool
///
bool q_designerobjectinspectorinterface_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func(QDesignerObjectInspectorInterface* self, bool next)
///
void q_designerobjectinspectorinterface_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerobjectinspectorinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerobjectinspectorinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func(QDesignerObjectInspectorInterface* self, QObject* watched, QEvent* event)
///
void q_designerobjectinspectorinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QTimerEvent*
///
void q_designerobjectinspectorinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QTimerEvent*
///
void q_designerobjectinspectorinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QTimerEvent* event)
///
void q_designerobjectinspectorinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QChildEvent*
///
void q_designerobjectinspectorinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QChildEvent*
///
void q_designerobjectinspectorinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QChildEvent* event)
///
void q_designerobjectinspectorinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEvent*
///
void q_designerobjectinspectorinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param event QEvent*
///
void q_designerobjectinspectorinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QEvent* event)
///
void q_designerobjectinspectorinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal QMetaMethod*
///
void q_designerobjectinspectorinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal QMetaMethod*
///
void q_designerobjectinspectorinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QMetaMethod* signal)
///
void q_designerobjectinspectorinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal QMetaMethod*
///
void q_designerobjectinspectorinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal QMetaMethod*
///
void q_designerobjectinspectorinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, QMetaMethod* signal)
///
void q_designerobjectinspectorinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func()
///
void q_designerobjectinspectorinterface_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func()
///
void q_designerobjectinspectorinterface_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func()
///
void q_designerobjectinspectorinterface_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func()
///
void q_designerobjectinspectorinterface_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
bool q_designerobjectinspectorinterface_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func()
///
void q_designerobjectinspectorinterface_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QObject* q_designerobjectinspectorinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
QObject* q_designerobjectinspectorinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback QObject* func()
///
void q_designerobjectinspectorinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
///
int32_t q_designerobjectinspectorinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback int32_t func()
///
void q_designerobjectinspectorinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal const char*
///
int32_t q_designerobjectinspectorinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal const char*
///
int32_t q_designerobjectinspectorinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback int32_t func(QDesignerObjectInspectorInterface* self, const char* signal)
///
void q_designerobjectinspectorinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal QMetaMethod*
///
bool q_designerobjectinspectorinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param signal QMetaMethod*
///
bool q_designerobjectinspectorinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback bool func(QDesignerObjectInspectorInterface* self, QMetaMethod* signal)
///
void q_designerobjectinspectorinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerobjectinspectorinterface_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerobjectinspectorinterface_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback double func(QDesignerObjectInspectorInterface* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_designerobjectinspectorinterface_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerObjectInspectorInterface*
/// @param callback void func(QDesignerObjectInspectorInterface* self, const char* objectName)
///
void q_designerobjectinspectorinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerobjectinspectorinterface.html#dtor.QDesignerObjectInspectorInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerObjectInspectorInterface*
///
void q_designerobjectinspectorinterface_delete(void* self);

#endif
