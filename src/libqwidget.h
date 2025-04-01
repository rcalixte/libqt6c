#pragma once
#ifndef SRCQT6C_LIBQWIDGET_H
#define SRCQT6C_LIBQWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qwidgetdata.html

/// q_widgetdata_new constructs a new QWidgetData object.
///
/// ``` QWidgetData* param1 ```
QWidgetData* q_widgetdata_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetdata.html#operator=)
///
/// ``` QWidgetData* self, QWidgetData* param1 ```
void q_widgetdata_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QWidgetData* self ```
void q_widgetdata_delete(void* self);

/// https://doc.qt.io/qt-6/qwidget.html

/// q_widget_new constructs a new QWidget object.
///
/// ``` QWidget* parent ```
QWidget* q_widget_new(void* parent);

/// q_widget_new2 constructs a new QWidget object.
///
///
QWidget* q_widget_new2();

/// q_widget_new3 constructs a new QWidget object.
///
/// ``` QWidget* parent, int f ```
QWidget* q_widget_new3(void* parent, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWidget* self ```
QMetaObject* q_widget_meta_object(void* self);

/// ``` QWidget* self, const char* param1 ```
void* q_widget_metacast(void* self, const char* param1);

/// ``` QWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, enum QMetaObject__Call, int, void*) ```
void q_widget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_widget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// ``` QWidget* self ```
int32_t q_widget_dev_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)() ```
void q_widget_on_dev_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
int32_t q_widget_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QWidget* self ```
uintptr_t q_widget_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QWidget* self ```
void q_widget_create_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QWidget* self ```
uintptr_t q_widget_internal_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QWidget* self ```
uintptr_t q_widget_effective_win_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QWidget* self ```
QStyle* q_widget_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QWidget* self, QStyle* style ```
void q_widget_set_style(void* self, void* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QWidget* self ```
bool q_widget_is_top_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QWidget* self ```
bool q_widget_is_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QWidget* self ```
bool q_widget_is_modal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QWidget* self ```
int64_t q_widget_window_modality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QWidget* self, enum Qt__WindowModality windowModality ```
void q_widget_set_window_modality(void* self, int64_t windowModality);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QWidget* self ```
bool q_widget_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QWidget* self, QWidget* param1 ```
bool q_widget_is_enabled_to(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QWidget* self, bool enabled ```
void q_widget_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QWidget* self, bool disabled ```
void q_widget_set_disabled(void* self, bool disabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QWidget* self, bool windowModified ```
void q_widget_set_window_modified(void* self, bool windowModified);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QWidget* self ```
QRect* q_widget_frame_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QWidget* self ```
QRect* q_widget_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QWidget* self ```
QRect* q_widget_normal_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QWidget* self ```
int32_t q_widget_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QWidget* self ```
int32_t q_widget_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QWidget* self ```
QPoint* q_widget_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QWidget* self ```
QSize* q_widget_frame_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QWidget* self ```
QSize* q_widget_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QWidget* self ```
int32_t q_widget_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QWidget* self ```
int32_t q_widget_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QWidget* self ```
QRect* q_widget_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QWidget* self ```
QRect* q_widget_children_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QWidget* self ```
QRegion* q_widget_children_region(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QWidget* self ```
QSize* q_widget_minimum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QWidget* self ```
QSize* q_widget_maximum_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QWidget* self ```
int32_t q_widget_minimum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QWidget* self ```
int32_t q_widget_minimum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QWidget* self ```
int32_t q_widget_maximum_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QWidget* self ```
int32_t q_widget_maximum_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWidget* self, QSize* minimumSize ```
void q_widget_set_minimum_size(void* self, void* minimumSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QWidget* self, int minw, int minh ```
void q_widget_set_minimum_size2(void* self, int minw, int minh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWidget* self, QSize* maximumSize ```
void q_widget_set_maximum_size(void* self, void* maximumSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QWidget* self, int maxw, int maxh ```
void q_widget_set_maximum_size2(void* self, int maxw, int maxh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QWidget* self, int minw ```
void q_widget_set_minimum_width(void* self, int minw);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QWidget* self, int minh ```
void q_widget_set_minimum_height(void* self, int minh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QWidget* self, int maxw ```
void q_widget_set_maximum_width(void* self, int maxw);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QWidget* self, int maxh ```
void q_widget_set_maximum_height(void* self, int maxh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QWidget* self ```
QSize* q_widget_size_increment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWidget* self, QSize* sizeIncrement ```
void q_widget_set_size_increment(void* self, void* sizeIncrement);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QWidget* self, int w, int h ```
void q_widget_set_size_increment2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QWidget* self ```
QSize* q_widget_base_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWidget* self, QSize* baseSize ```
void q_widget_set_base_size(void* self, void* baseSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QWidget* self, int basew, int baseh ```
void q_widget_set_base_size2(void* self, int basew, int baseh);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWidget* self, QSize* fixedSize ```
void q_widget_set_fixed_size(void* self, void* fixedSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QWidget* self, int w, int h ```
void q_widget_set_fixed_size2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QWidget* self, int w ```
void q_widget_set_fixed_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QWidget* self, int h ```
void q_widget_set_fixed_height(void* self, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_to_global(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_to_global_with_q_point(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_from_global(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_from_global_with_q_point(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_to_parent(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_to_parent_with_q_point(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWidget* self, QPointF* param1 ```
QPointF* q_widget_map_from_parent(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QWidget* self, QPoint* param1 ```
QPoint* q_widget_map_from_parent_with_q_point(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_widget_map_to(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_widget_map_to2(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_widget_map_from(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_widget_map_from2(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QWidget* self ```
QWidget* q_widget_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_native_parent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_top_level_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QWidget* self ```
QPalette* q_widget_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QWidget* self, QPalette* palette ```
void q_widget_set_palette(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_widget_set_background_role(void* self, int64_t backgroundRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QWidget* self ```
int64_t q_widget_background_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_widget_set_foreground_role(void* self, int64_t foregroundRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QWidget* self ```
int64_t q_widget_foreground_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QWidget* self ```
QFont* q_widget_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QWidget* self, QFont* font ```
void q_widget_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QWidget* self ```
QFontMetrics* q_widget_font_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QWidget* self ```
QFontInfo* q_widget_font_info(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QWidget* self ```
QCursor* q_widget_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QWidget* self, QCursor* cursor ```
void q_widget_set_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QWidget* self ```
void q_widget_unset_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QWidget* self, bool enable ```
void q_widget_set_mouse_tracking(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QWidget* self ```
bool q_widget_has_mouse_tracking(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QWidget* self ```
bool q_widget_under_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QWidget* self, bool enable ```
void q_widget_set_tablet_tracking(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QWidget* self ```
bool q_widget_has_tablet_tracking(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWidget* self, QBitmap* mask ```
void q_widget_set_mask(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QWidget* self, QRegion* mask ```
void q_widget_set_mask_with_mask(void* self, void* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QWidget* self ```
QRegion* q_widget_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QWidget* self ```
void q_widget_clear_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target ```
void q_widget_render(void* self, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter ```
void q_widget_render_with_painter(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWidget* self ```
QPixmap* q_widget_grab(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QWidget* self ```
QGraphicsEffect* q_widget_graphics_effect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QWidget* self, QGraphicsEffect* effect ```
void q_widget_set_graphics_effect(void* self, void* effect);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWidget* self, enum Qt__GestureType typeVal ```
void q_widget_grab_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QWidget* self, enum Qt__GestureType typeVal ```
void q_widget_ungrab_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QWidget* self, const char* windowTitle ```
void q_widget_set_window_title(void* self, const char* windowTitle);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QWidget* self, const char* styleSheet ```
void q_widget_set_style_sheet(void* self, const char* styleSheet);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QWidget* self ```
const char* q_widget_style_sheet(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QWidget* self ```
const char* q_widget_window_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QWidget* self, QIcon* icon ```
void q_widget_set_window_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QWidget* self ```
QIcon* q_widget_window_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QWidget* self, const char* windowIconText ```
void q_widget_set_window_icon_text(void* self, const char* windowIconText);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QWidget* self ```
const char* q_widget_window_icon_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QWidget* self, const char* windowRole ```
void q_widget_set_window_role(void* self, const char* windowRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QWidget* self ```
const char* q_widget_window_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QWidget* self, const char* filePath ```
void q_widget_set_window_file_path(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QWidget* self ```
const char* q_widget_window_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QWidget* self, double level ```
void q_widget_set_window_opacity(void* self, double level);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QWidget* self ```
double q_widget_window_opacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QWidget* self ```
bool q_widget_is_window_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QWidget* self, const char* toolTip ```
void q_widget_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QWidget* self ```
const char* q_widget_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QWidget* self, int msec ```
void q_widget_set_tool_tip_duration(void* self, int msec);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QWidget* self ```
int32_t q_widget_tool_tip_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QWidget* self, const char* statusTip ```
void q_widget_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QWidget* self ```
const char* q_widget_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QWidget* self, const char* whatsThis ```
void q_widget_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QWidget* self ```
const char* q_widget_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QWidget* self ```
const char* q_widget_accessible_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QWidget* self, const char* name ```
void q_widget_set_accessible_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QWidget* self ```
const char* q_widget_accessible_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QWidget* self, const char* description ```
void q_widget_set_accessible_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QWidget* self, enum Qt__LayoutDirection direction ```
void q_widget_set_layout_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QWidget* self ```
int64_t q_widget_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QWidget* self ```
void q_widget_unset_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QWidget* self, QLocale* locale ```
void q_widget_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QWidget* self ```
QLocale* q_widget_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QWidget* self ```
void q_widget_unset_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QWidget* self ```
bool q_widget_is_right_to_left(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QWidget* self ```
bool q_widget_is_left_to_right(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWidget* self ```
void q_widget_set_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QWidget* self ```
bool q_widget_is_active_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QWidget* self ```
void q_widget_activate_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QWidget* self ```
void q_widget_clear_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QWidget* self, enum Qt__FocusReason reason ```
void q_widget_set_focus_with_reason(void* self, int64_t reason);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QWidget* self ```
int64_t q_widget_focus_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QWidget* self, enum Qt__FocusPolicy policy ```
void q_widget_set_focus_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QWidget* self ```
bool q_widget_has_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_widget_set_tab_order(void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QWidget* self, QWidget* focusProxy ```
void q_widget_set_focus_proxy(void* self, void* focusProxy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QWidget* self ```
QWidget* q_widget_focus_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QWidget* self ```
int64_t q_widget_context_menu_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_widget_set_context_menu_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWidget* self ```
void q_widget_grab_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QWidget* self, QCursor* param1 ```
void q_widget_grab_mouse_with_q_cursor(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QWidget* self ```
void q_widget_release_mouse(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QWidget* self ```
void q_widget_grab_keyboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QWidget* self ```
void q_widget_release_keyboard(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWidget* self, QKeySequence* key ```
int32_t q_widget_grab_shortcut(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QWidget* self, int id ```
void q_widget_release_shortcut(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWidget* self, int id ```
void q_widget_set_shortcut_enabled(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWidget* self, int id ```
void q_widget_set_shortcut_auto_repeat(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_widget_mouse_grabber();

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_widget_keyboard_grabber();

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QWidget* self ```
bool q_widget_updates_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QWidget* self, bool enable ```
void q_widget_set_updates_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QWidget* self ```
QGraphicsProxyWidget* q_widget_graphics_proxy_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self ```
void q_widget_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self ```
void q_widget_repaint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self, int x, int y, int w, int h ```
void q_widget_update2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self, QRect* param1 ```
void q_widget_update_with_q_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QWidget* self, QRegion* param1 ```
void q_widget_update_with_q_region(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self, int x, int y, int w, int h ```
void q_widget_repaint2(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self, QRect* param1 ```
void q_widget_repaint_with_q_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QWidget* self, QRegion* param1 ```
void q_widget_repaint_with_q_region(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// ``` QWidget* self, bool visible ```
void q_widget_set_visible(void* self, bool visible);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, bool) ```
void q_widget_on_set_visible(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QWidget* self, bool visible ```
void q_widget_qbase_set_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QWidget* self, bool hidden ```
void q_widget_set_hidden(void* self, bool hidden);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QWidget* self ```
void q_widget_show(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QWidget* self ```
void q_widget_hide(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QWidget* self ```
void q_widget_show_minimized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QWidget* self ```
void q_widget_show_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QWidget* self ```
void q_widget_show_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QWidget* self ```
void q_widget_show_normal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QWidget* self ```
bool q_widget_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QWidget* self ```
void q_widget_raise(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QWidget* self ```
void q_widget_lower(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QWidget* self, QWidget* param1 ```
void q_widget_stack_under(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWidget* self, int x, int y ```
void q_widget_move(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QWidget* self, QPoint* param1 ```
void q_widget_move_with_q_point(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWidget* self, int w, int h ```
void q_widget_resize(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QWidget* self, QSize* param1 ```
void q_widget_resize_with_q_size(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWidget* self, int x, int y, int w, int h ```
void q_widget_set_geometry(void* self, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QWidget* self, QRect* geometry ```
void q_widget_set_geometry_with_geometry(void* self, void* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QWidget* self ```
char* q_widget_save_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QWidget* self, const char* geometry ```
bool q_widget_restore_geometry(void* self, const char* geometry);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QWidget* self ```
void q_widget_adjust_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QWidget* self ```
bool q_widget_is_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QWidget* self, QWidget* param1 ```
bool q_widget_is_visible_to(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QWidget* self ```
bool q_widget_is_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QWidget* self ```
bool q_widget_is_minimized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QWidget* self ```
bool q_widget_is_maximized(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QWidget* self ```
bool q_widget_is_full_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QWidget* self ```
int64_t q_widget_window_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QWidget* self, int state ```
void q_widget_set_window_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QWidget* self, int state ```
void q_widget_override_window_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// ``` QWidget* self ```
QSize* q_widget_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QSize* (*slot)() ```
void q_widget_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
QSize* q_widget_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// ``` QWidget* self ```
QSize* q_widget_minimum_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QSize* (*slot)() ```
void q_widget_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
QSize* q_widget_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QWidget* self ```
QSizePolicy* q_widget_size_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWidget* self, QSizePolicy* sizePolicy ```
void q_widget_set_size_policy(void* self, void* sizePolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_widget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// ``` QWidget* self, int param1 ```
int32_t q_widget_height_for_width(void* self, int param1);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, int) ```
void q_widget_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QWidget* self, int param1 ```
int32_t q_widget_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// ``` QWidget* self ```
bool q_widget_has_height_for_width(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)() ```
void q_widget_on_has_height_for_width(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
bool q_widget_qbase_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QWidget* self ```
QRegion* q_widget_visible_region(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWidget* self, int left, int top, int right, int bottom ```
void q_widget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QWidget* self, QMargins* margins ```
void q_widget_set_contents_margins_with_margins(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QWidget* self ```
QMargins* q_widget_contents_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QWidget* self ```
QRect* q_widget_contents_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QWidget* self ```
QLayout* q_widget_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QWidget* self, QLayout* layout ```
void q_widget_set_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QWidget* self ```
void q_widget_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWidget* self, QWidget* parent ```
void q_widget_set_parent(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QWidget* self, QWidget* parent, int f ```
void q_widget_set_parent2(void* self, void* parent, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWidget* self, int dx, int dy ```
void q_widget_scroll(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QWidget* self, int dx, int dy, QRect* param3 ```
void q_widget_scroll2(void* self, int dx, int dy, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_focus_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QWidget* self ```
QWidget* q_widget_next_in_focus_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QWidget* self ```
QWidget* q_widget_previous_in_focus_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QWidget* self ```
bool q_widget_accept_drops(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QWidget* self, bool on ```
void q_widget_set_accept_drops(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, QAction* action ```
void q_widget_add_action(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QWidget* self, QAction* actions[] ```
void q_widget_add_actions(void* self, void* actions[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QWidget* self, QAction* before, QAction* actions[] ```
void q_widget_insert_actions(void* self, void* before, void* actions[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QWidget* self, QAction* before, QAction* action ```
void q_widget_insert_action(void* self, void* before, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QWidget* self, QAction* action ```
void q_widget_remove_action(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QWidget* self ```
libqt_list /* of QAction* */ q_widget_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, const char* text ```
QAction* q_widget_add_action_with_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, QIcon* icon, const char* text ```
QAction* q_widget_add_action2(void* self, void* icon, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_widget_add_action3(void* self, const char* text, void* shortcut);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_widget_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QWidget* self ```
QWidget* q_widget_parent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QWidget* self, int typeVal ```
void q_widget_set_window_flags(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QWidget* self ```
int64_t q_widget_window_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWidget* self, enum Qt__WindowType param1 ```
void q_widget_set_window_flag(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QWidget* self, int typeVal ```
void q_widget_override_window_flags(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QWidget* self ```
int64_t q_widget_window_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_widget_find(uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWidget* self, int x, int y ```
QWidget* q_widget_child_at(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QWidget* self, QPoint* p ```
QWidget* q_widget_child_at_with_q_point(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWidget* self, enum Qt__WidgetAttribute param1 ```
void q_widget_set_attribute(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_widget_test_attribute(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// ``` QWidget* self ```
QPaintEngine* q_widget_paint_engine(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QPaintEngine* (*slot)() ```
void q_widget_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
QPaintEngine* q_widget_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QWidget* self ```
void q_widget_ensure_polished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QWidget* self, QWidget* child ```
bool q_widget_is_ancestor_of(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QWidget* self ```
bool q_widget_auto_fill_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QWidget* self, bool enabled ```
void q_widget_set_auto_fill_background(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QWidget* self ```
QBackingStore* q_widget_backing_store(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QWidget* self ```
QWindow* q_widget_window_handle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QWidget* self ```
QScreen* q_widget_screen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QWidget* self, QScreen* screen ```
void q_widget_set_screen(void* self, void* screen);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_widget_create_window_container(void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QWidget* self, const char* title ```
void q_widget_window_title_changed(void* self, const char* title);

/// ``` QWidget* self, void (*slot)(QWidget*, const char*) ```
void q_widget_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QWidget* self, QIcon* icon ```
void q_widget_window_icon_changed(void* self, void* icon);

/// ``` QWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_widget_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QWidget* self, const char* iconText ```
void q_widget_window_icon_text_changed(void* self, const char* iconText);

/// ``` QWidget* self, void (*slot)(QWidget*, const char*) ```
void q_widget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QWidget* self, QPoint* pos ```
void q_widget_custom_context_menu_requested(void* self, void* pos);

/// ``` QWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_widget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// ``` QWidget* self, QEvent* event ```
bool q_widget_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, QEvent*) ```
void q_widget_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QEvent* event ```
bool q_widget_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_double_click_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_mouse_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMouseEvent*) ```
void q_widget_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QMouseEvent* event ```
void q_widget_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// ``` QWidget* self, QWheelEvent* event ```
void q_widget_wheel_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QWheelEvent*) ```
void q_widget_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QWheelEvent* event ```
void q_widget_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_key_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QKeyEvent*) ```
void q_widget_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_key_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QKeyEvent*) ```
void q_widget_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QKeyEvent* event ```
void q_widget_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_focus_in_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QFocusEvent*) ```
void q_widget_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_focus_out_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QFocusEvent*) ```
void q_widget_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QFocusEvent* event ```
void q_widget_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// ``` QWidget* self, QEnterEvent* event ```
void q_widget_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEnterEvent*) ```
void q_widget_on_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QEnterEvent* event ```
void q_widget_qbase_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEvent*) ```
void q_widget_on_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_qbase_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// ``` QWidget* self, QPaintEvent* event ```
void q_widget_paint_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QPaintEvent*) ```
void q_widget_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QPaintEvent* event ```
void q_widget_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// ``` QWidget* self, QMoveEvent* event ```
void q_widget_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMoveEvent*) ```
void q_widget_on_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QMoveEvent* event ```
void q_widget_qbase_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// ``` QWidget* self, QResizeEvent* event ```
void q_widget_resize_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QResizeEvent*) ```
void q_widget_on_resize_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QResizeEvent* event ```
void q_widget_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// ``` QWidget* self, QCloseEvent* event ```
void q_widget_close_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QCloseEvent*) ```
void q_widget_on_close_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QCloseEvent* event ```
void q_widget_qbase_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// ``` QWidget* self, QContextMenuEvent* event ```
void q_widget_context_menu_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QContextMenuEvent*) ```
void q_widget_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QContextMenuEvent* event ```
void q_widget_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// ``` QWidget* self, QTabletEvent* event ```
void q_widget_tablet_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QTabletEvent*) ```
void q_widget_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QTabletEvent* event ```
void q_widget_qbase_tablet_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// ``` QWidget* self, QActionEvent* event ```
void q_widget_action_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QActionEvent*) ```
void q_widget_on_action_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QActionEvent* event ```
void q_widget_qbase_action_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// ``` QWidget* self, QDragEnterEvent* event ```
void q_widget_drag_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDragEnterEvent*) ```
void q_widget_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QDragEnterEvent* event ```
void q_widget_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// ``` QWidget* self, QDragMoveEvent* event ```
void q_widget_drag_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDragMoveEvent*) ```
void q_widget_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QDragMoveEvent* event ```
void q_widget_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// ``` QWidget* self, QDragLeaveEvent* event ```
void q_widget_drag_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDragLeaveEvent*) ```
void q_widget_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QDragLeaveEvent* event ```
void q_widget_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// ``` QWidget* self, QDropEvent* event ```
void q_widget_drop_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QDropEvent*) ```
void q_widget_on_drop_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QDropEvent* event ```
void q_widget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// ``` QWidget* self, QShowEvent* event ```
void q_widget_show_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QShowEvent*) ```
void q_widget_on_show_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QShowEvent* event ```
void q_widget_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// ``` QWidget* self, QHideEvent* event ```
void q_widget_hide_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QHideEvent*) ```
void q_widget_on_hide_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QHideEvent* event ```
void q_widget_qbase_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// ``` QWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_widget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, const char*, void*, intptr_t*) ```
void q_widget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Base class method implementation
///
/// ``` QWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_widget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// ``` QWidget* self, QEvent* param1 ```
void q_widget_change_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEvent*) ```
void q_widget_on_change_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QEvent* param1 ```
void q_widget_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// ``` QWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_widget_metric(void* self, int64_t param1);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_widget_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_widget_qbase_metric(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// ``` QWidget* self, QPainter* painter ```
void q_widget_init_painter(void* self, void* painter);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QPainter*) ```
void q_widget_on_init_painter(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QPainter* painter ```
void q_widget_qbase_init_painter(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// ``` QWidget* self, QPoint* offset ```
QPaintDevice* q_widget_redirected(void* self, void* offset);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QPaintDevice* (*slot)(QWidget*, QPoint*) ```
void q_widget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QPoint* offset ```
QPaintDevice* q_widget_qbase_redirected(void* self, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// ``` QWidget* self ```
QPainter* q_widget_shared_painter(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QPainter* (*slot)() ```
void q_widget_on_shared_painter(void* self, QPainter* (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
QPainter* q_widget_qbase_shared_painter(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// ``` QWidget* self, QInputMethodEvent* param1 ```
void q_widget_input_method_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QInputMethodEvent*) ```
void q_widget_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QWidget* self, QInputMethodEvent* param1 ```
void q_widget_qbase_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// ``` QWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_widget_input_method_query(void* self, int64_t param1);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, QVariant* (*slot)(QWidget*, enum Qt__InputMethodQuery) ```
void q_widget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_widget_qbase_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QWidget* self ```
int64_t q_widget_input_method_hints(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QWidget* self, int hints ```
void q_widget_set_input_method_hints(void* self, int64_t hints);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// ``` QWidget* self ```
void q_widget_update_micro_focus(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)() ```
void q_widget_on_update_micro_focus(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
void q_widget_qbase_update_micro_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self ```
void q_widget_create(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)() ```
void q_widget_on_create(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
void q_widget_qbase_create(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// ``` QWidget* self ```
void q_widget_destroy(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)() ```
void q_widget_on_destroy(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
void q_widget_qbase_destroy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// ``` QWidget* self, bool next ```
bool q_widget_focus_next_prev_child(void* self, bool next);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, bool) ```
void q_widget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QWidget* self, bool next ```
bool q_widget_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// ``` QWidget* self ```
bool q_widget_focus_next_child(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)() ```
void q_widget_on_focus_next_child(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
bool q_widget_qbase_focus_next_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// ``` QWidget* self ```
bool q_widget_focus_previous_child(void* self);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, bool (*slot)() ```
void q_widget_on_focus_previous_child(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QWidget* self ```
bool q_widget_qbase_focus_previous_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_widget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_widget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_widget_render2(void* self, void* target, void* targetOffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_widget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_widget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_widget_render22(void* self, void* painter, void* targetOffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_widget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_widget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QWidget* self, QRect* rectangle ```
QPixmap* q_widget_grab1(void* self, void* rectangle);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_widget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_widget_grab_shortcut2(void* self, void* key, int64_t context);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QWidget* self, int id, bool enable ```
void q_widget_set_shortcut_enabled2(void* self, int id, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QWidget* self, int id, bool enable ```
void q_widget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QWidget* self, enum Qt__WindowType param1, bool on ```
void q_widget_set_window_flag2(void* self, int64_t param1, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_widget_set_attribute2(void* self, int64_t param1, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_widget_create_window_container2(void* window, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_widget_create_window_container3(void* window, void* parent, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// ``` QWidget* self, enum Qt__InputMethodQuery query ```
void q_widget_update_micro_focus1(void* self, int64_t query);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, enum Qt__InputMethodQuery) ```
void q_widget_on_update_micro_focus1(void* self, void (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QWidget* self, enum Qt__InputMethodQuery query ```
void q_widget_qbase_update_micro_focus1(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self, uint64_t param1 ```
void q_widget_create1(void* self, uint64_t param1);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, uint64_t) ```
void q_widget_on_create1(void* self, void (*slot)(void*, uint64_t));

/// Base class method implementation
///
/// ``` QWidget* self, uint64_t param1 ```
void q_widget_qbase_create1(void* self, uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow ```
void q_widget_create2(void* self, uint64_t param1, bool initializeWindow);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, uint64_t, bool) ```
void q_widget_on_create2(void* self, void (*slot)(void*, uint64_t, bool));

/// Base class method implementation
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow ```
void q_widget_qbase_create2(void* self, uint64_t param1, bool initializeWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow ```
void q_widget_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, uint64_t, bool, bool) ```
void q_widget_on_create3(void* self, void (*slot)(void*, uint64_t, bool, bool));

/// Base class method implementation
///
/// ``` QWidget* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow ```
void q_widget_qbase_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// ``` QWidget* self, bool destroyWindow ```
void q_widget_destroy1(void* self, bool destroyWindow);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, bool) ```
void q_widget_on_destroy1(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QWidget* self, bool destroyWindow ```
void q_widget_qbase_destroy1(void* self, bool destroyWindow);

/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// ``` QWidget* self, bool destroyWindow, bool destroySubWindows ```
void q_widget_destroy2(void* self, bool destroyWindow, bool destroySubWindows);

/// Allows for overriding the related default method
///
/// ``` QWidget* self, void (*slot)(QWidget*, bool, bool) ```
void q_widget_on_destroy2(void* self, void (*slot)(void*, bool, bool));

/// Base class method implementation
///
/// ``` QWidget* self, bool destroyWindow, bool destroySubWindows ```
void q_widget_qbase_destroy2(void* self, bool destroyWindow, bool destroySubWindows);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWidget* self ```
const char* q_widget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWidget* self, const char* name ```
void q_widget_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWidget* self ```
bool q_widget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWidget* self ```
bool q_widget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWidget* self ```
bool q_widget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWidget* self ```
bool q_widget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWidget* self, bool b ```
bool q_widget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWidget* self ```
QThread* q_widget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWidget* self, QThread* thread ```
void q_widget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidget* self, int interval ```
int32_t q_widget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWidget* self, int id ```
void q_widget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWidget* self ```
libqt_list /* of QObject* */ q_widget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWidget* self, QObject* filterObj ```
void q_widget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWidget* self, QObject* obj ```
void q_widget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_widget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_widget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_widget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_widget_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWidget* self ```
void q_widget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWidget* self ```
void q_widget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWidget* self, const char* name, QVariant* value ```
bool q_widget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWidget* self, const char* name ```
QVariant* q_widget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWidget* self ```
const char** q_widget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWidget* self ```
QBindingStorage* q_widget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWidget* self ```
QBindingStorage* q_widget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidget* self ```
void q_widget_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QWidget* self, void (*slot)(QObject*) ```
void q_widget_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWidget* self ```
QObject* q_widget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWidget* self, const char* classname ```
bool q_widget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWidget* self ```
void q_widget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_widget_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidget* self, QObject* param1 ```
void q_widget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QWidget* self, void (*slot)(QObject*, QObject*) ```
void q_widget_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QWidget* self ```
bool q_widget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QWidget* self ```
int32_t q_widget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QWidget* self ```
int32_t q_widget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QWidget* self ```
int32_t q_widget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QWidget* self ```
int32_t q_widget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QWidget* self ```
int32_t q_widget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QWidget* self ```
int32_t q_widget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QWidget* self ```
double q_widget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QWidget* self ```
double q_widget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QWidget* self ```
int32_t q_widget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QWidget* self ```
int32_t q_widget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_widget_device_pixel_ratio_f_scale();

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QObject* watched, QEvent* event ```
bool q_widget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QObject* watched, QEvent* event ```
bool q_widget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, QObject*, QEvent*) ```
void q_widget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QTimerEvent* event ```
void q_widget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QTimerEvent* event ```
void q_widget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QTimerEvent*) ```
void q_widget_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QChildEvent* event ```
void q_widget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QChildEvent* event ```
void q_widget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QChildEvent*) ```
void q_widget_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QEvent* event ```
void q_widget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QEvent*) ```
void q_widget_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMetaMethod*) ```
void q_widget_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
void q_widget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, void (*slot)(QWidget*, QMetaMethod*) ```
void q_widget_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self ```
QObject* q_widget_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self ```
QObject* q_widget_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, QObject* (*slot)() ```
void q_widget_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self ```
int32_t q_widget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self ```
int32_t q_widget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, int32_t (*slot)() ```
void q_widget_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, const char* signal ```
int32_t q_widget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, const char* signal ```
int32_t q_widget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, int32_t (*slot)(QWidget*, const char*) ```
void q_widget_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
bool q_widget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidget* self, QMetaMethod* signal ```
bool q_widget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidget* self, bool (*slot)(QWidget*, QMetaMethod*) ```
void q_widget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QWidget* self ```
void q_widget_delete(void* self);

/// https://doc.qt.io/qt-6/qwidget.html#types

typedef enum {
    QWIDGET_RENDERFLAG_DRAWWINDOWBACKGROUND = 1,
    QWIDGET_RENDERFLAG_DRAWCHILDREN = 2,
    QWIDGET_RENDERFLAG_IGNOREMASK = 4
} QWidget__RenderFlag;

#endif
