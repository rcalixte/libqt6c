#pragma once
#ifndef SRCQT6C_LIBQWIDGET_H
#define SRCQT6C_LIBQWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qwidgetdata.html

/// q_widgetdata_new constructs a new QWidgetData object.
///
/// @param param1 QWidgetData*
QWidgetData* q_widgetdata_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetdata.html#operator-eq)
///
/// @param self QWidgetData*
/// @param param1 QWidgetData*
void q_widgetdata_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetdata.html#dtor.QWidgetData)
///
/// Delete this object from C++ memory.
///
/// @param self QWidgetData*
void q_widgetdata_delete(void* self);

/// https://doc.qt.io/qt-6/qwidget.html

/// q_widget_new constructs a new QWidget object.
///
/// @param parent QWidget*
QWidget* q_widget_new(void* parent);

/// q_widget_new2 constructs a new QWidget object.
///
QWidget* q_widget_new2();

/// q_widget_new3 constructs a new QWidget object.
///
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
QWidget* q_widget_new3(void* parent, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWidget*
const QMetaObject* q_widget_meta_object(void* self);

/// @param self QWidget*
/// @param param1 const char*
void* q_widget_metacast(void* self, const char* param1);

/// @param self QWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_widget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback int32_t fn(QWidget*, enum QMetaObject__Call, int, void*)
void q_widget_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_widget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_widget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// @param self QWidget*
int32_t q_widget_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback int32_t fn()
void q_widget_on_dev_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Base class method implementation
///
/// @param self QWidget*
int32_t q_widget_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QWidget*
uintptr_t q_widget_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QWidget*
void q_widget_create_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QWidget*
uintptr_t q_widget_internal_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QWidget*
uintptr_t q_widget_effective_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QWidget*
QStyle* q_widget_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QWidget*
/// @param style QStyle*
void q_widget_set_style(void* self, void* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QWidget*
bool q_widget_is_top_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QWidget*
bool q_widget_is_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QWidget*
bool q_widget_is_modal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QWidget*
///
/// @return enum Qt__WindowModality
int64_t q_widget_window_modality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QWidget*
/// @param windowModality enum Qt__WindowModality
void q_widget_set_window_modality(void* self, int64_t windowModality);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QWidget*
bool q_widget_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QWidget*
/// @param param1 QWidget*
bool q_widget_is_enabled_to(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QWidget*
/// @param enabled bool
void q_widget_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QWidget*
/// @param disabled bool
void q_widget_set_disabled(void* self, bool disabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QWidget*
/// @param windowModified bool
void q_widget_set_window_modified(void* self, bool windowModified);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QWidget*
QRect* q_widget_frame_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QWidget*
const QRect* q_widget_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QWidget*
QRect* q_widget_normal_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QWidget*
int32_t q_widget_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QWidget*
int32_t q_widget_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QWidget*
QPoint* q_widget_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QWidget*
QSize* q_widget_frame_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QWidget*
QSize* q_widget_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QWidget*
int32_t q_widget_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QWidget*
int32_t q_widget_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QWidget*
QRect* q_widget_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QWidget*
QRect* q_widget_children_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QWidget*
QRegion* q_widget_children_region(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QWidget*
QSize* q_widget_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QWidget*
QSize* q_widget_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QWidget*
int32_t q_widget_minimum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QWidget*
int32_t q_widget_minimum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QWidget*
int32_t q_widget_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QWidget*
int32_t q_widget_maximum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWidget*
/// @param minimumSize QSize*
void q_widget_set_minimum_size(void* self, void* minimumSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWidget*
/// @param minw int
/// @param minh int
void q_widget_set_minimum_size2(void* self, int minw, int minh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWidget*
/// @param maximumSize QSize*
void q_widget_set_maximum_size(void* self, void* maximumSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWidget*
/// @param maxw int
/// @param maxh int
void q_widget_set_maximum_size2(void* self, int maxw, int maxh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QWidget*
/// @param minw int
void q_widget_set_minimum_width(void* self, int minw);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QWidget*
/// @param minh int
void q_widget_set_minimum_height(void* self, int minh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QWidget*
/// @param maxw int
void q_widget_set_maximum_width(void* self, int maxw);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QWidget*
/// @param maxh int
void q_widget_set_maximum_height(void* self, int maxh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QWidget*
QSize* q_widget_size_increment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWidget*
/// @param sizeIncrement QSize*
void q_widget_set_size_increment(void* self, void* sizeIncrement);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWidget*
/// @param w int
/// @param h int
void q_widget_set_size_increment2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QWidget*
QSize* q_widget_base_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWidget*
/// @param baseSize QSize*
void q_widget_set_base_size(void* self, void* baseSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWidget*
/// @param basew int
/// @param baseh int
void q_widget_set_base_size2(void* self, int basew, int baseh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWidget*
/// @param fixedSize QSize*
void q_widget_set_fixed_size(void* self, void* fixedSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWidget*
/// @param w int
/// @param h int
void q_widget_set_fixed_size2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QWidget*
/// @param w int
void q_widget_set_fixed_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QWidget*
/// @param h int
void q_widget_set_fixed_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWidget*
/// @param param1 QPointF*
QPointF* q_widget_map_to_global(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWidget*
/// @param param1 QPoint*
QPoint* q_widget_map_to_global2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWidget*
/// @param param1 QPointF*
QPointF* q_widget_map_from_global(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWidget*
/// @param param1 QPoint*
QPoint* q_widget_map_from_global2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWidget*
/// @param param1 QPointF*
QPointF* q_widget_map_to_parent(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWidget*
/// @param param1 QPoint*
QPoint* q_widget_map_to_parent2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWidget*
/// @param param1 QPointF*
QPointF* q_widget_map_from_parent(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWidget*
/// @param param1 QPoint*
QPoint* q_widget_map_from_parent2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_widget_map_to(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_widget_map_to2(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_widget_map_from(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_widget_map_from2(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QWidget*
QWidget* q_widget_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QWidget*
QWidget* q_widget_native_parent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QWidget*
QWidget* q_widget_top_level_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QWidget*
const QPalette* q_widget_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QWidget*
/// @param palette QPalette*
void q_widget_set_palette(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QWidget*
/// @param backgroundRole enum QPalette__ColorRole
void q_widget_set_background_role(void* self, int64_t backgroundRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QWidget*
///
/// @return enum QPalette__ColorRole
int64_t q_widget_background_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QWidget*
/// @param foregroundRole enum QPalette__ColorRole
void q_widget_set_foreground_role(void* self, int64_t foregroundRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QWidget*
///
/// @return enum QPalette__ColorRole
int64_t q_widget_foreground_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QWidget*
const QFont* q_widget_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QWidget*
/// @param font QFont*
void q_widget_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QWidget*
QFontMetrics* q_widget_font_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QWidget*
QFontInfo* q_widget_font_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QWidget*
QCursor* q_widget_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QWidget*
/// @param cursor QCursor*
void q_widget_set_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QWidget*
void q_widget_unset_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QWidget*
/// @param enable bool
void q_widget_set_mouse_tracking(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QWidget*
bool q_widget_has_mouse_tracking(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QWidget*
bool q_widget_under_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QWidget*
/// @param enable bool
void q_widget_set_tablet_tracking(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QWidget*
bool q_widget_has_tablet_tracking(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWidget*
/// @param mask QBitmap*
void q_widget_set_mask(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWidget*
/// @param mask QRegion*
void q_widget_set_mask2(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QWidget*
QRegion* q_widget_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QWidget*
void q_widget_clear_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param target QPaintDevice*
void q_widget_render(void* self, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param painter QPainter*
void q_widget_render2(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWidget*
QPixmap* q_widget_grab(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QWidget*
QGraphicsEffect* q_widget_graphics_effect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QWidget*
/// @param effect QGraphicsEffect*
void q_widget_set_graphics_effect(void* self, void* effect);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWidget*
/// @param typeVal enum Qt__GestureType
void q_widget_grab_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QWidget*
/// @param typeVal enum Qt__GestureType
void q_widget_ungrab_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QWidget*
/// @param windowTitle const char*
void q_widget_set_window_title(void* self, const char* windowTitle);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QWidget*
/// @param styleSheet const char*
void q_widget_set_style_sheet(void* self, const char* styleSheet);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_style_sheet(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_window_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QWidget*
/// @param icon QIcon*
void q_widget_set_window_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QWidget*
QIcon* q_widget_window_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QWidget*
/// @param windowIconText const char*
void q_widget_set_window_icon_text(void* self, const char* windowIconText);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_window_icon_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QWidget*
/// @param windowRole const char*
void q_widget_set_window_role(void* self, const char* windowRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_window_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QWidget*
/// @param filePath const char*
void q_widget_set_window_file_path(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_window_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QWidget*
/// @param level double
void q_widget_set_window_opacity(void* self, double level);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QWidget*
double q_widget_window_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QWidget*
bool q_widget_is_window_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QWidget*
/// @param toolTip const char*
void q_widget_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QWidget*
/// @param msec int
void q_widget_set_tool_tip_duration(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QWidget*
int32_t q_widget_tool_tip_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QWidget*
/// @param statusTip const char*
void q_widget_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QWidget*
/// @param whatsThis const char*
void q_widget_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_accessible_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QWidget*
/// @param name const char*
void q_widget_set_accessible_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_accessible_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QWidget*
/// @param description const char*
void q_widget_set_accessible_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QWidget*
/// @param direction enum Qt__LayoutDirection
void q_widget_set_layout_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QWidget*
///
/// @return enum Qt__LayoutDirection
int64_t q_widget_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QWidget*
void q_widget_unset_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QWidget*
/// @param locale QLocale*
void q_widget_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QWidget*
QLocale* q_widget_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QWidget*
void q_widget_unset_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QWidget*
bool q_widget_is_right_to_left(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QWidget*
bool q_widget_is_left_to_right(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWidget*
void q_widget_set_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QWidget*
bool q_widget_is_active_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QWidget*
void q_widget_activate_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QWidget*
void q_widget_clear_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWidget*
/// @param reason enum Qt__FocusReason
void q_widget_set_focus2(void* self, int64_t reason);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QWidget*
///
/// @return enum Qt__FocusPolicy
int64_t q_widget_focus_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QWidget*
/// @param policy enum Qt__FocusPolicy
void q_widget_set_focus_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QWidget*
bool q_widget_has_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_widget_set_tab_order(void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QWidget*
/// @param focusProxy QWidget*
void q_widget_set_focus_proxy(void* self, void* focusProxy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QWidget*
QWidget* q_widget_focus_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QWidget*
///
/// @return enum Qt__ContextMenuPolicy
int64_t q_widget_context_menu_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QWidget*
/// @param policy enum Qt__ContextMenuPolicy
void q_widget_set_context_menu_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWidget*
void q_widget_grab_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWidget*
/// @param param1 QCursor*
void q_widget_grab_mouse2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QWidget*
void q_widget_release_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QWidget*
void q_widget_grab_keyboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QWidget*
void q_widget_release_keyboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWidget*
/// @param key QKeySequence*
int32_t q_widget_grab_shortcut(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QWidget*
/// @param id int
void q_widget_release_shortcut(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWidget*
/// @param id int
void q_widget_set_shortcut_enabled(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWidget*
/// @param id int
void q_widget_set_shortcut_auto_repeat(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_widget_mouse_grabber();

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_widget_keyboard_grabber();

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QWidget*
bool q_widget_updates_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QWidget*
/// @param enable bool
void q_widget_set_updates_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QWidget*
QGraphicsProxyWidget* q_widget_graphics_proxy_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWidget*
void q_widget_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWidget*
void q_widget_repaint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_widget_update2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWidget*
/// @param param1 QRect*
void q_widget_update3(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWidget*
/// @param param1 QRegion*
void q_widget_update4(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_widget_repaint2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWidget*
/// @param param1 QRect*
void q_widget_repaint3(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWidget*
/// @param param1 QRegion*
void q_widget_repaint4(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// @param self QWidget*
/// @param visible bool
void q_widget_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, bool)
void q_widget_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param visible bool
void q_widget_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QWidget*
/// @param hidden bool
void q_widget_set_hidden(void* self, bool hidden);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QWidget*
void q_widget_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QWidget*
void q_widget_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QWidget*
void q_widget_show_minimized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QWidget*
void q_widget_show_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QWidget*
void q_widget_show_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QWidget*
void q_widget_show_normal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QWidget*
bool q_widget_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QWidget*
void q_widget_raise(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QWidget*
void q_widget_lower(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QWidget*
/// @param param1 QWidget*
void q_widget_stack_under(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWidget*
/// @param x int
/// @param y int
void q_widget_move(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWidget*
/// @param param1 QPoint*
void q_widget_move2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWidget*
/// @param w int
/// @param h int
void q_widget_resize(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWidget*
/// @param param1 QSize*
void q_widget_resize2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_widget_set_geometry(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWidget*
/// @param geometry QRect*
void q_widget_set_geometry2(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
char* q_widget_save_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QWidget*
/// @param geometry const char*
bool q_widget_restore_geometry(void* self, const char* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QWidget*
void q_widget_adjust_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QWidget*
bool q_widget_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QWidget*
/// @param param1 QWidget*
bool q_widget_is_visible_to(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QWidget*
bool q_widget_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QWidget*
bool q_widget_is_minimized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QWidget*
bool q_widget_is_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QWidget*
bool q_widget_is_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QWidget*
///
/// @return flag of enum Qt__WindowState
int64_t q_widget_window_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QWidget*
/// @param state flag of enum Qt__WindowState
void q_widget_set_window_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QWidget*
/// @param state flag of enum Qt__WindowState
void q_widget_override_window_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// @param self QWidget*
QSize* q_widget_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback QSize* fn()
void q_widget_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QWidget*
QSize* q_widget_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// @param self QWidget*
QSize* q_widget_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback QSize* fn()
void q_widget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QWidget*
QSize* q_widget_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QWidget*
QSizePolicy* q_widget_size_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWidget*
/// @param sizePolicy QSizePolicy*
void q_widget_set_size_policy(void* self, void* sizePolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_widget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// @param self QWidget*
/// @param param1 int
int32_t q_widget_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback int32_t fn(QWidget*, int)
void q_widget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 int
int32_t q_widget_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// @param self QWidget*
bool q_widget_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback bool fn()
void q_widget_on_has_height_for_width(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Base class method implementation
///
/// @param self QWidget*
bool q_widget_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QWidget*
QRegion* q_widget_visible_region(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_widget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWidget*
/// @param margins QMargins*
void q_widget_set_contents_margins2(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QWidget*
QMargins* q_widget_contents_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QWidget*
QRect* q_widget_contents_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QWidget*
QLayout* q_widget_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QWidget*
/// @param layout QLayout*
void q_widget_set_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QWidget*
void q_widget_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWidget*
/// @param parent QWidget*
void q_widget_set_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_widget_set_parent2(void* self, void* parent, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWidget*
/// @param dx int
/// @param dy int
void q_widget_scroll(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_widget_scroll2(void* self, int dx, int dy, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QWidget*
QWidget* q_widget_focus_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QWidget*
QWidget* q_widget_next_in_focus_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QWidget*
QWidget* q_widget_previous_in_focus_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QWidget*
bool q_widget_accept_drops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QWidget*
/// @param on bool
void q_widget_set_accept_drops(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWidget*
/// @param action QAction*
void q_widget_add_action(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QWidget*
/// @param actions libqt_list /* of QAction* */
void q_widget_add_actions(void* self, libqt_list actions);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_widget_insert_actions(void* self, void* before, libqt_list actions);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QWidget*
/// @param before QAction*
/// @param action QAction*
void q_widget_insert_action(void* self, void* before, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QWidget*
/// @param action QAction*
void q_widget_remove_action(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QWidget*
libqt_list /* of QAction* */ q_widget_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWidget*
/// @param text const char*
QAction* q_widget_add_action2(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWidget*
/// @param icon QIcon*
/// @param text const char*
QAction* q_widget_add_action3(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_widget_add_action4(void* self, const char* text, void* shortcut);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_widget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QWidget*
QWidget* q_widget_parent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QWidget*
/// @param typeVal flag of enum Qt__WindowType
void q_widget_set_window_flags(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QWidget*
///
/// @return flag of enum Qt__WindowType
int64_t q_widget_window_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWidget*
/// @param param1 enum Qt__WindowType
void q_widget_set_window_flag(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QWidget*
/// @param typeVal flag of enum Qt__WindowType
void q_widget_override_window_flags(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QWidget*
///
/// @return enum Qt__WindowType
int64_t q_widget_window_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_widget_find(uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWidget*
/// @param x int
/// @param y int
QWidget* q_widget_child_at(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWidget*
/// @param p QPoint*
QWidget* q_widget_child_at2(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWidget*
/// @param p QPointF*
QWidget* q_widget_child_at3(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWidget*
/// @param param1 enum Qt__WidgetAttribute
void q_widget_set_attribute(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QWidget*
/// @param param1 enum Qt__WidgetAttribute
bool q_widget_test_attribute(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// @param self QWidget*
QPaintEngine* q_widget_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback QPaintEngine* fn()
void q_widget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QWidget*
QPaintEngine* q_widget_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QWidget*
void q_widget_ensure_polished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QWidget*
/// @param child QWidget*
bool q_widget_is_ancestor_of(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QWidget*
bool q_widget_auto_fill_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QWidget*
/// @param enabled bool
void q_widget_set_auto_fill_background(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QWidget*
QBackingStore* q_widget_backing_store(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QWidget*
QWindow* q_widget_window_handle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QWidget*
QScreen* q_widget_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QWidget*
/// @param screen QScreen*
void q_widget_set_screen(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_widget_create_window_container(void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWidget*
/// @param title const char*
void q_widget_window_title_changed(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, const char*)
void q_widget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWidget*
/// @param icon QIcon*
void q_widget_window_icon_changed(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QIcon*)
void q_widget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWidget*
/// @param iconText const char*
void q_widget_window_icon_text_changed(void* self, const char* iconText);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, const char*)
void q_widget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWidget*
/// @param pos QPoint*
void q_widget_custom_context_menu_requested(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QPoint*)
void q_widget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// @param self QWidget*
/// @param event QEvent*
bool q_widget_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback bool fn(QWidget*, QEvent*)
void q_widget_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QEvent*
bool q_widget_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QMouseEvent*)
void q_widget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QMouseEvent*)
void q_widget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QMouseEvent*)
void q_widget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QMouseEvent*)
void q_widget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QMouseEvent*
void q_widget_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// @param self QWidget*
/// @param event QWheelEvent*
void q_widget_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QWheelEvent*)
void q_widget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QWheelEvent*
void q_widget_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// @param self QWidget*
/// @param event QKeyEvent*
void q_widget_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QKeyEvent*)
void q_widget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QKeyEvent*
void q_widget_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// @param self QWidget*
/// @param event QKeyEvent*
void q_widget_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QKeyEvent*)
void q_widget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QKeyEvent*
void q_widget_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// @param self QWidget*
/// @param event QFocusEvent*
void q_widget_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QFocusEvent*)
void q_widget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QFocusEvent*
void q_widget_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// @param self QWidget*
/// @param event QFocusEvent*
void q_widget_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QFocusEvent*)
void q_widget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QFocusEvent*
void q_widget_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// @param self QWidget*
/// @param event QEnterEvent*
void q_widget_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QEnterEvent*)
void q_widget_on_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QEnterEvent*
void q_widget_qbase_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// @param self QWidget*
/// @param event QEvent*
void q_widget_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QEvent*)
void q_widget_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QEvent*
void q_widget_qbase_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// @param self QWidget*
/// @param event QPaintEvent*
void q_widget_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QPaintEvent*)
void q_widget_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QPaintEvent*
void q_widget_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// @param self QWidget*
/// @param event QMoveEvent*
void q_widget_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QMoveEvent*)
void q_widget_on_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QMoveEvent*
void q_widget_qbase_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// @param self QWidget*
/// @param event QResizeEvent*
void q_widget_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QResizeEvent*)
void q_widget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QResizeEvent*
void q_widget_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// @param self QWidget*
/// @param event QCloseEvent*
void q_widget_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QCloseEvent*)
void q_widget_on_close_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QCloseEvent*
void q_widget_qbase_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// @param self QWidget*
/// @param event QContextMenuEvent*
void q_widget_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QContextMenuEvent*)
void q_widget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QContextMenuEvent*
void q_widget_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// @param self QWidget*
/// @param event QTabletEvent*
void q_widget_tablet_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QTabletEvent*)
void q_widget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QTabletEvent*
void q_widget_qbase_tablet_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// @param self QWidget*
/// @param event QActionEvent*
void q_widget_action_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QActionEvent*)
void q_widget_on_action_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QActionEvent*
void q_widget_qbase_action_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// @param self QWidget*
/// @param event QDragEnterEvent*
void q_widget_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QDragEnterEvent*)
void q_widget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QDragEnterEvent*
void q_widget_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// @param self QWidget*
/// @param event QDragMoveEvent*
void q_widget_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QDragMoveEvent*)
void q_widget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QDragMoveEvent*
void q_widget_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// @param self QWidget*
/// @param event QDragLeaveEvent*
void q_widget_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QDragLeaveEvent*)
void q_widget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QDragLeaveEvent*
void q_widget_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// @param self QWidget*
/// @param event QDropEvent*
void q_widget_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QDropEvent*)
void q_widget_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QDropEvent*
void q_widget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// @param self QWidget*
/// @param event QShowEvent*
void q_widget_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QShowEvent*)
void q_widget_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QShowEvent*
void q_widget_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// @param self QWidget*
/// @param event QHideEvent*
void q_widget_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QHideEvent*)
void q_widget_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param event QHideEvent*
void q_widget_qbase_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// @param self QWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_widget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback bool fn(QWidget*, const char*, void*, intptr_t*)
void q_widget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_widget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// @param self QWidget*
/// @param param1 QEvent*
void q_widget_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QEvent*)
void q_widget_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 QEvent*
void q_widget_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// @param self QWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_widget_metric(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback int32_t fn(QWidget*, enum QPaintDevice__PaintDeviceMetric)
void q_widget_on_metric(void* self, int32_t (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_widget_qbase_metric(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// @param self QWidget*
/// @param painter QPainter*
void q_widget_init_painter(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QPainter*)
void q_widget_on_init_painter(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param painter QPainter*
void q_widget_qbase_init_painter(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// @param self QWidget*
/// @param offset QPoint*
QPaintDevice* q_widget_redirected(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback QPaintDevice* fn(QWidget*, QPoint*)
void q_widget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param offset QPoint*
QPaintDevice* q_widget_qbase_redirected(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// @param self QWidget*
QPainter* q_widget_shared_painter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback QPainter* fn()
void q_widget_on_shared_painter(void* self, QPainter* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Base class method implementation
///
/// @param self QWidget*
QPainter* q_widget_qbase_shared_painter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// @param self QWidget*
/// @param param1 QInputMethodEvent*
void q_widget_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QInputMethodEvent*)
void q_widget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 QInputMethodEvent*
void q_widget_qbase_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// @param self QWidget*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_widget_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback QVariant* fn(QWidget*, enum Qt__InputMethodQuery)
void q_widget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_widget_qbase_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QWidget*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_widget_input_method_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QWidget*
/// @param hints flag of enum Qt__InputMethodHint
void q_widget_set_input_method_hints(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// @param self QWidget*
void q_widget_update_micro_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn()
void q_widget_on_update_micro_focus(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Base class method implementation
///
/// @param self QWidget*
void q_widget_qbase_update_micro_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// @param self QWidget*
void q_widget_create(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn()
void q_widget_on_create(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Base class method implementation
///
/// @param self QWidget*
void q_widget_qbase_create(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// @param self QWidget*
void q_widget_destroy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn()
void q_widget_on_destroy(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Base class method implementation
///
/// @param self QWidget*
void q_widget_qbase_destroy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// @param self QWidget*
/// @param next bool
bool q_widget_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback bool fn(QWidget*, bool)
void q_widget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param next bool
bool q_widget_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// @param self QWidget*
bool q_widget_focus_next_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback bool fn()
void q_widget_on_focus_next_child(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Base class method implementation
///
/// @param self QWidget*
bool q_widget_qbase_focus_next_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// @param self QWidget*
bool q_widget_focus_previous_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback bool fn()
void q_widget_on_focus_previous_child(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Base class method implementation
///
/// @param self QWidget*
bool q_widget_qbase_focus_previous_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_widget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_widget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_widget_render22(void* self, void* target, void* targetOffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_widget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_widget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_widget_render23(void* self, void* painter, void* targetOffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_widget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_widget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWidget*
/// @param rectangle QRect*
QPixmap* q_widget_grab1(void* self, void* rectangle);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWidget*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_widget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_widget_grab_shortcut2(void* self, void* key, int64_t context);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWidget*
/// @param id int
/// @param enable bool
void q_widget_set_shortcut_enabled2(void* self, int id, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWidget*
/// @param id int
/// @param enable bool
void q_widget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_widget_set_window_flag2(void* self, int64_t param1, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_widget_set_attribute2(void* self, int64_t param1, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_widget_create_window_container2(void* window, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_widget_create_window_container3(void* window, void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// @param self QWidget*
/// @param query enum Qt__InputMethodQuery
void q_widget_update_micro_focus1(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, enum Qt__InputMethodQuery)
void q_widget_on_update_micro_focus1(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param query enum Qt__InputMethodQuery
void q_widget_qbase_update_micro_focus1(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// @param self QWidget*
/// @param param1 uint64_t
void q_widget_create1(void* self, uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, uint64_t)
void q_widget_on_create1(void* self, void (*callback)(void*, uint64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 uint64_t
void q_widget_qbase_create1(void* self, uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// @param self QWidget*
/// @param param1 uint64_t
/// @param initializeWindow bool
void q_widget_create2(void* self, uint64_t param1, bool initializeWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, uint64_t, bool)
void q_widget_on_create2(void* self, void (*callback)(void*, uint64_t, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 uint64_t
/// @param initializeWindow bool
void q_widget_qbase_create2(void* self, uint64_t param1, bool initializeWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// @param self QWidget*
/// @param param1 uint64_t
/// @param initializeWindow bool
/// @param destroyOldWindow bool
void q_widget_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, uint64_t, bool, bool)
void q_widget_on_create3(void* self, void (*callback)(void*, uint64_t, bool, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param param1 uint64_t
/// @param initializeWindow bool
/// @param destroyOldWindow bool
void q_widget_qbase_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// @param self QWidget*
/// @param destroyWindow bool
void q_widget_destroy1(void* self, bool destroyWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, bool)
void q_widget_on_destroy1(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param destroyWindow bool
void q_widget_qbase_destroy1(void* self, bool destroyWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// @param self QWidget*
/// @param destroyWindow bool
/// @param destroySubWindows bool
void q_widget_destroy2(void* self, bool destroyWindow, bool destroySubWindows);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Allows for overriding the related default method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, bool, bool)
void q_widget_on_destroy2(void* self, void (*callback)(void*, bool, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Base class method implementation
///
/// @param self QWidget*
/// @param destroyWindow bool
/// @param destroySubWindows bool
void q_widget_qbase_destroy2(void* self, bool destroyWindow, bool destroySubWindows);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char* q_widget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWidget*
/// @param name char*
void q_widget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWidget*
bool q_widget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWidget*
bool q_widget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWidget*
bool q_widget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWidget*
bool q_widget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWidget*
/// @param b bool
bool q_widget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWidget*
QThread* q_widget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWidget*
/// @param thread QThread*
bool q_widget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWidget*
/// @param interval int
int32_t q_widget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWidget*
/// @param id int
void q_widget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWidget*
/// @param id enum Qt__TimerId
void q_widget_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWidget*
libqt_list /* of QObject* */ q_widget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWidget*
/// @param filterObj QObject*
void q_widget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWidget*
/// @param obj QObject*
void q_widget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_widget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_widget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_widget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_widget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWidget*
void q_widget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWidget*
void q_widget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWidget*
/// @param name const char*
/// @param value QVariant*
bool q_widget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWidget*
/// @param name const char*
QVariant* q_widget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWidget*
const char** q_widget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWidget*
QBindingStorage* q_widget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWidget*
const QBindingStorage* q_widget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidget*
void q_widget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidget*
/// @param callback void fn(QWidget*)
void q_widget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWidget*
QObject* q_widget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWidget*
/// @param classname const char*
bool q_widget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWidget*
void q_widget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_widget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_widget_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_widget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_widget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidget*
/// @param param1 QObject*
void q_widget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QObject*)
void q_widget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QWidget*
bool q_widget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QWidget*
int32_t q_widget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QWidget*
int32_t q_widget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QWidget*
int32_t q_widget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QWidget*
int32_t q_widget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QWidget*
int32_t q_widget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QWidget*
int32_t q_widget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QWidget*
double q_widget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QWidget*
double q_widget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QWidget*
int32_t q_widget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QWidget*
int32_t q_widget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_widget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_widget_encode_metric_f(int64_t metric, double value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param watched QObject*
/// @param event QEvent*
bool q_widget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param watched QObject*
/// @param event QEvent*
bool q_widget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback bool fn(QWidget*, QObject*, QEvent*)
void q_widget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param event QTimerEvent*
void q_widget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param event QTimerEvent*
void q_widget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QTimerEvent*)
void q_widget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param event QChildEvent*
void q_widget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param event QChildEvent*
void q_widget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QChildEvent*)
void q_widget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param event QEvent*
void q_widget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param event QEvent*
void q_widget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QEvent*)
void q_widget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param signal QMetaMethod*
void q_widget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param signal QMetaMethod*
void q_widget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QMetaMethod*)
void q_widget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param signal QMetaMethod*
void q_widget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param signal QMetaMethod*
void q_widget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, QMetaMethod*)
void q_widget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
QObject* q_widget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
QObject* q_widget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback QObject* fn()
void q_widget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
int32_t q_widget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
int32_t q_widget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback int32_t fn()
void q_widget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param signal const char*
int32_t q_widget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param signal const char*
int32_t q_widget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback int32_t fn(QWidget*, const char*)
void q_widget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param signal QMetaMethod*
bool q_widget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param signal QMetaMethod*
bool q_widget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback bool fn(QWidget*, QMetaMethod*)
void q_widget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_widget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_widget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWidget*
/// @param callback double fn(QWidget*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_widget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWidget*
/// @param callback void fn(QWidget*, const char*)
void q_widget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dtor.QWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QWidget*
void q_widget_delete(void* self);

/// https://doc.qt.io/qt-6/qwidget.html#types

typedef enum {
    QWIDGET_RENDERFLAG_DRAWWINDOWBACKGROUND = 1,
    QWIDGET_RENDERFLAG_DRAWCHILDREN = 2,
    QWIDGET_RENDERFLAG_IGNOREMASK = 4
} QWidget__RenderFlag;

#endif
