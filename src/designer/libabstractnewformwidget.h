#pragma once
#ifndef DESIGNER_LIBABSTRACTNEWFORMWIDGET_H
#define DESIGNER_LIBABSTRACTNEWFORMWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const QMetaObject* q_designernewformwidgetinterface_meta_object(const void* self);

/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 const char*
///
void* q_designernewformwidgetinterface_metacast(void* self, const char* param1);

/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designernewformwidgetinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designernewformwidgetinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#hasCurrentTemplate)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_has_current_template(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#createNewFormWidget)
///
/// @param core QDesignerFormEditorInterface*
///
QDesignerNewFormWidgetInterface* q_designernewformwidgetinterface_create_new_form_widget(void* core);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#templateActivated)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_template_activated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#templateActivated)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self)
///
void q_designernewformwidgetinterface_on_template_activated(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#currentTemplateChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param templateSelected bool
///
void q_designernewformwidgetinterface_current_template_changed(void* self, bool templateSelected);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#currentTemplateChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self, bool templateSelected)
///
void q_designernewformwidgetinterface_on_current_template_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designernewformwidgetinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designernewformwidgetinterface_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#createNewFormWidget)
///
/// @param core QDesignerFormEditorInterface*
/// @param parent QWidget*
///
QDesignerNewFormWidgetInterface* q_designernewformwidgetinterface_create_new_form_widget2(void* core, void* parent);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QPaintDevice* q_designernewformwidgetinterface_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QDesignerNewFormWidgetInterface object
///
/// @param _qpaintdevice QPaintDevice*
///
QDesignerNewFormWidgetInterface* q_designernewformwidgetinterface_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
uintptr_t q_designernewformwidgetinterface_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
uintptr_t q_designernewformwidgetinterface_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
uintptr_t q_designernewformwidgetinterface_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QStyle* q_designernewformwidgetinterface_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param style QStyle*
///
void q_designernewformwidgetinterface_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return enum Qt__WindowModality
///
int32_t q_designernewformwidgetinterface_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param windowModality enum Qt__WindowModality
///
void q_designernewformwidgetinterface_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QWidget*
///
bool q_designernewformwidgetinterface_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param enabled bool
///
void q_designernewformwidgetinterface_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param disabled bool
///
void q_designernewformwidgetinterface_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param windowModified bool
///
void q_designernewformwidgetinterface_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRect* q_designernewformwidgetinterface_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const QRect* q_designernewformwidgetinterface_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRect* q_designernewformwidgetinterface_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QPoint* q_designernewformwidgetinterface_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRect* q_designernewformwidgetinterface_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRect* q_designernewformwidgetinterface_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRegion* q_designernewformwidgetinterface_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param minimumSize QSize*
///
void q_designernewformwidgetinterface_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param minw int
/// @param minh int
///
void q_designernewformwidgetinterface_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param maximumSize QSize*
///
void q_designernewformwidgetinterface_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param maxw int
/// @param maxh int
///
void q_designernewformwidgetinterface_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param minw int
///
void q_designernewformwidgetinterface_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param minh int
///
void q_designernewformwidgetinterface_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param maxw int
///
void q_designernewformwidgetinterface_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param maxh int
///
void q_designernewformwidgetinterface_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param sizeIncrement QSize*
///
void q_designernewformwidgetinterface_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param w int
/// @param h int
///
void q_designernewformwidgetinterface_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param baseSize QSize*
///
void q_designernewformwidgetinterface_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param basew int
/// @param baseh int
///
void q_designernewformwidgetinterface_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param fixedSize QSize*
///
void q_designernewformwidgetinterface_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param w int
/// @param h int
///
void q_designernewformwidgetinterface_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param w int
///
void q_designernewformwidgetinterface_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param h int
///
void q_designernewformwidgetinterface_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPointF*
///
QPointF* q_designernewformwidgetinterface_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPoint*
///
QPoint* q_designernewformwidgetinterface_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPointF*
///
QPointF* q_designernewformwidgetinterface_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPoint*
///
QPoint* q_designernewformwidgetinterface_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPointF*
///
QPointF* q_designernewformwidgetinterface_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPoint*
///
QPoint* q_designernewformwidgetinterface_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPointF*
///
QPointF* q_designernewformwidgetinterface_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QPoint*
///
QPoint* q_designernewformwidgetinterface_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designernewformwidgetinterface_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designernewformwidgetinterface_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designernewformwidgetinterface_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designernewformwidgetinterface_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const QPalette* q_designernewformwidgetinterface_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param palette QPalette*
///
void q_designernewformwidgetinterface_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_designernewformwidgetinterface_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designernewformwidgetinterface_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_designernewformwidgetinterface_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designernewformwidgetinterface_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const QFont* q_designernewformwidgetinterface_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param font QFont*
///
void q_designernewformwidgetinterface_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QFontMetrics* q_designernewformwidgetinterface_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QFontInfo* q_designernewformwidgetinterface_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QCursor* q_designernewformwidgetinterface_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param cursor QCursor*
///
void q_designernewformwidgetinterface_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param enable bool
///
void q_designernewformwidgetinterface_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param enable bool
///
void q_designernewformwidgetinterface_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param mask QBitmap*
///
void q_designernewformwidgetinterface_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param mask QRegion*
///
void q_designernewformwidgetinterface_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRegion* q_designernewformwidgetinterface_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param target QPaintDevice*
///
void q_designernewformwidgetinterface_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param painter QPainter*
///
void q_designernewformwidgetinterface_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerNewFormWidgetInterface*
///
QPixmap* q_designernewformwidgetinterface_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QGraphicsEffect* q_designernewformwidgetinterface_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param effect QGraphicsEffect*
///
void q_designernewformwidgetinterface_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param type enum Qt__GestureType
///
void q_designernewformwidgetinterface_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param type enum Qt__GestureType
///
void q_designernewformwidgetinterface_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param windowTitle const char*
///
void q_designernewformwidgetinterface_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param styleSheet const char*
///
void q_designernewformwidgetinterface_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param icon QIcon*
///
void q_designernewformwidgetinterface_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QIcon* q_designernewformwidgetinterface_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param windowIconText const char*
///
void q_designernewformwidgetinterface_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param windowRole const char*
///
void q_designernewformwidgetinterface_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param filePath const char*
///
void q_designernewformwidgetinterface_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param level double
///
void q_designernewformwidgetinterface_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
double q_designernewformwidgetinterface_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param toolTip const char*
///
void q_designernewformwidgetinterface_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param msec int
///
void q_designernewformwidgetinterface_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param statusTip const char*
///
void q_designernewformwidgetinterface_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param whatsThis const char*
///
void q_designernewformwidgetinterface_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param name const char*
///
void q_designernewformwidgetinterface_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param description const char*
///
void q_designernewformwidgetinterface_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param direction enum Qt__LayoutDirection
///
void q_designernewformwidgetinterface_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_designernewformwidgetinterface_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param locale QLocale*
///
void q_designernewformwidgetinterface_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QLocale* q_designernewformwidgetinterface_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param reason enum Qt__FocusReason
///
void q_designernewformwidgetinterface_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_designernewformwidgetinterface_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param policy enum Qt__FocusPolicy
///
void q_designernewformwidgetinterface_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_designernewformwidgetinterface_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param focusProxy QWidget*
///
void q_designernewformwidgetinterface_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_designernewformwidgetinterface_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_designernewformwidgetinterface_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QCursor*
///
void q_designernewformwidgetinterface_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param key QKeySequence*
///
int32_t q_designernewformwidgetinterface_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param id int
///
void q_designernewformwidgetinterface_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param id int
///
void q_designernewformwidgetinterface_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param id int
///
void q_designernewformwidgetinterface_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_designernewformwidgetinterface_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_designernewformwidgetinterface_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param enable bool
///
void q_designernewformwidgetinterface_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QGraphicsProxyWidget* q_designernewformwidgetinterface_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designernewformwidgetinterface_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QRect*
///
void q_designernewformwidgetinterface_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QRegion*
///
void q_designernewformwidgetinterface_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designernewformwidgetinterface_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QRect*
///
void q_designernewformwidgetinterface_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QRegion*
///
void q_designernewformwidgetinterface_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param visible bool
///
void q_designernewformwidgetinterface_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param hidden bool
///
void q_designernewformwidgetinterface_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QWidget*
///
void q_designernewformwidgetinterface_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param x int
/// @param y int
///
void q_designernewformwidgetinterface_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QPoint*
///
void q_designernewformwidgetinterface_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param w int
/// @param h int
///
void q_designernewformwidgetinterface_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QSize*
///
void q_designernewformwidgetinterface_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designernewformwidgetinterface_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param geometry QRect*
///
void q_designernewformwidgetinterface_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
char* q_designernewformwidgetinterface_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param geometry char*
///
bool q_designernewformwidgetinterface_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 QWidget*
///
bool q_designernewformwidgetinterface_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_designernewformwidgetinterface_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designernewformwidgetinterface_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designernewformwidgetinterface_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSize* q_designernewformwidgetinterface_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QSizePolicy* q_designernewformwidgetinterface_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param sizePolicy QSizePolicy*
///
void q_designernewformwidgetinterface_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_designernewformwidgetinterface_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 int
///
int32_t q_designernewformwidgetinterface_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRegion* q_designernewformwidgetinterface_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_designernewformwidgetinterface_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param margins QMargins*
///
void q_designernewformwidgetinterface_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QMargins* q_designernewformwidgetinterface_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QRect* q_designernewformwidgetinterface_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QLayout* q_designernewformwidgetinterface_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param layout QLayout*
///
void q_designernewformwidgetinterface_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param parent QWidget*
///
void q_designernewformwidgetinterface_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_designernewformwidgetinterface_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param dx int
/// @param dy int
///
void q_designernewformwidgetinterface_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_designernewformwidgetinterface_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param on bool
///
void q_designernewformwidgetinterface_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param action QAction*
///
void q_designernewformwidgetinterface_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param actions libqt_list of QAction*
///
void q_designernewformwidgetinterface_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_designernewformwidgetinterface_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param before QAction*
/// @param action QAction*
///
void q_designernewformwidgetinterface_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param action QAction*
///
void q_designernewformwidgetinterface_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return libqt_list of QAction*
///
libqt_list q_designernewformwidgetinterface_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param text const char*
///
QAction* q_designernewformwidgetinterface_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_designernewformwidgetinterface_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designernewformwidgetinterface_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designernewformwidgetinterface_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWidget* q_designernewformwidgetinterface_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designernewformwidgetinterface_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_designernewformwidgetinterface_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 enum Qt__WindowType
///
void q_designernewformwidgetinterface_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designernewformwidgetinterface_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return enum Qt__WindowType
///
int32_t q_designernewformwidgetinterface_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_designernewformwidgetinterface_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param x int
/// @param y int
///
QWidget* q_designernewformwidgetinterface_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param p QPoint*
///
QWidget* q_designernewformwidgetinterface_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param p QPointF*
///
QWidget* q_designernewformwidgetinterface_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 enum Qt__WidgetAttribute
///
void q_designernewformwidgetinterface_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_designernewformwidgetinterface_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QPaintEngine* q_designernewformwidgetinterface_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param child QWidget*
///
bool q_designernewformwidgetinterface_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param enabled bool
///
void q_designernewformwidgetinterface_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QBackingStore* q_designernewformwidgetinterface_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QWindow* q_designernewformwidgetinterface_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QScreen* q_designernewformwidgetinterface_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param screen QScreen*
///
void q_designernewformwidgetinterface_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_designernewformwidgetinterface_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param title const char*
///
void q_designernewformwidgetinterface_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self, const char* title)
///
void q_designernewformwidgetinterface_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param icon QIcon*
///
void q_designernewformwidgetinterface_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self, QIcon* icon)
///
void q_designernewformwidgetinterface_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param iconText const char*
///
void q_designernewformwidgetinterface_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self, const char* iconText)
///
void q_designernewformwidgetinterface_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param pos QPoint*
///
void q_designernewformwidgetinterface_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self, QPoint* pos)
///
void q_designernewformwidgetinterface_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designernewformwidgetinterface_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_designernewformwidgetinterface_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_designernewformwidgetinterface_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_designernewformwidgetinterface_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designernewformwidgetinterface_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designernewformwidgetinterface_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_designernewformwidgetinterface_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designernewformwidgetinterface_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designernewformwidgetinterface_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param rectangle QRect*
///
QPixmap* q_designernewformwidgetinterface_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_designernewformwidgetinterface_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_designernewformwidgetinterface_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param id int
/// @param enable bool
///
void q_designernewformwidgetinterface_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param id int
/// @param enable bool
///
void q_designernewformwidgetinterface_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_designernewformwidgetinterface_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_designernewformwidgetinterface_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_designernewformwidgetinterface_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_designernewformwidgetinterface_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designernewformwidgetinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char* q_designernewformwidgetinterface_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param name const char*
///
void q_designernewformwidgetinterface_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param b bool
///
bool q_designernewformwidgetinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QThread* q_designernewformwidgetinterface_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param thread QThread*
///
bool q_designernewformwidgetinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param interval int
///
int32_t q_designernewformwidgetinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designernewformwidgetinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param id int
///
void q_designernewformwidgetinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param id enum Qt__TimerId
///
void q_designernewformwidgetinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designernewformwidgetinterface_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param filterObj QObject*
///
void q_designernewformwidgetinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param obj QObject*
///
void q_designernewformwidgetinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designernewformwidgetinterface_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designernewformwidgetinterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designernewformwidgetinterface_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designernewformwidgetinterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designernewformwidgetinterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param receiver QObject*
///
bool q_designernewformwidgetinterface_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designernewformwidgetinterface_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designernewformwidgetinterface_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param name const char*
///
QVariant* q_designernewformwidgetinterface_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const char** q_designernewformwidgetinterface_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerNewFormWidgetInterface*
///
QBindingStorage* q_designernewformwidgetinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
const QBindingStorage* q_designernewformwidgetinterface_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self)
///
void q_designernewformwidgetinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
QObject* q_designernewformwidgetinterface_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param classname const char*
///
bool q_designernewformwidgetinterface_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designernewformwidgetinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designernewformwidgetinterface_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_designernewformwidgetinterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designernewformwidgetinterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designernewformwidgetinterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param signal const char*
///
bool q_designernewformwidgetinterface_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designernewformwidgetinterface_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designernewformwidgetinterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDesignerNewFormWidgetInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designernewformwidgetinterface_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param param1 QObject*
///
void q_designernewformwidgetinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self, QObject* param1)
///
void q_designernewformwidgetinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
bool q_designernewformwidgetinterface_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
double q_designernewformwidgetinterface_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
double q_designernewformwidgetinterface_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QDesignerNewFormWidgetInterface*
///
int32_t q_designernewformwidgetinterface_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_designernewformwidgetinterface_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_designernewformwidgetinterface_encode_metric_f(int32_t metric, double value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerNewFormWidgetInterface*
/// @param callback void func(QDesignerNewFormWidgetInterface* self, const char* objectName)
///
void q_designernewformwidgetinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignernewformwidgetinterface.html#dtor.QDesignerNewFormWidgetInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerNewFormWidgetInterface*
///
void q_designernewformwidgetinterface_delete(void* self);

#endif
