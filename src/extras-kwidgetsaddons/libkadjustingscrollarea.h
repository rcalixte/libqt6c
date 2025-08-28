#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKADJUSTINGSCROLLAREA_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKADJUSTINGSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kadjustingscrollarea.html

/// k_adjustingscrollarea_new constructs a new KAdjustingScrollArea object.
///
/// @param parent QWidget*
KAdjustingScrollArea* k_adjustingscrollarea_new(void* parent);

/// k_adjustingscrollarea_new2 constructs a new KAdjustingScrollArea object.
///
KAdjustingScrollArea* k_adjustingscrollarea_new2();

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KAdjustingScrollArea*
const QMetaObject* k_adjustingscrollarea_meta_object(void* self);

/// @param self KAdjustingScrollArea*
/// @param param1 const char*
void* k_adjustingscrollarea_metacast(void* self, const char* param1);

/// @param self KAdjustingScrollArea*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_adjustingscrollarea_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KAdjustingScrollArea*
/// @param callback int32_t func(KAdjustingScrollArea* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_adjustingscrollarea_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_adjustingscrollarea_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_adjustingscrollarea_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#minimumSizeHint)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_minimum_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KAdjustingScrollArea*
/// @param callback QSize* func()
void k_adjustingscrollarea_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#sizeHint)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KAdjustingScrollArea*
/// @param callback QSize* func()
void k_adjustingscrollarea_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_qbase_size_hint(void* self);

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#event)
///
/// @param self KAdjustingScrollArea*
/// @param event QEvent*
bool k_adjustingscrollarea_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func(KAdjustingScrollArea* self, QEvent* event)
void k_adjustingscrollarea_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#event)
///
/// Base class method implementation
///
/// @param self KAdjustingScrollArea*
/// @param event QEvent*
bool k_adjustingscrollarea_qbase_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_adjustingscrollarea_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_adjustingscrollarea_tr3(const char* s, const char* c, int n);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#widget)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_widget(void* self);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#setWidget)
///
/// @param self KAdjustingScrollArea*
/// @param widget QWidget*
void k_adjustingscrollarea_set_widget(void* self, void* widget);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#takeWidget)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_take_widget(void* self);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#widgetResizable)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_widget_resizable(void* self);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#setWidgetResizable)
///
/// @param self KAdjustingScrollArea*
/// @param resizable bool
void k_adjustingscrollarea_set_widget_resizable(void* self, bool resizable);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#alignment)
///
/// @param self KAdjustingScrollArea*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t k_adjustingscrollarea_alignment(void* self);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#setAlignment)
///
/// @param self KAdjustingScrollArea*
/// @param alignment flag of enum Qt__AlignmentFlag
void k_adjustingscrollarea_set_alignment(void* self, int64_t alignment);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureVisible)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
void k_adjustingscrollarea_ensure_visible(void* self, int x, int y);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureWidgetVisible)
///
/// @param self KAdjustingScrollArea*
/// @param childWidget QWidget*
void k_adjustingscrollarea_ensure_widget_visible(void* self, void* childWidget);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureVisible)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
/// @param xmargin int
void k_adjustingscrollarea_ensure_visible3(void* self, int x, int y, int xmargin);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureVisible)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
/// @param xmargin int
/// @param ymargin int
void k_adjustingscrollarea_ensure_visible4(void* self, int x, int y, int xmargin, int ymargin);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureWidgetVisible)
///
/// @param self KAdjustingScrollArea*
/// @param childWidget QWidget*
/// @param xmargin int
void k_adjustingscrollarea_ensure_widget_visible2(void* self, void* childWidget, int xmargin);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureWidgetVisible)
///
/// @param self KAdjustingScrollArea*
/// @param childWidget QWidget*
/// @param xmargin int
/// @param ymargin int
void k_adjustingscrollarea_ensure_widget_visible3(void* self, void* childWidget, int xmargin, int ymargin);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_adjustingscrollarea_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self KAdjustingScrollArea*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_adjustingscrollarea_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self KAdjustingScrollArea*
QScrollBar* k_adjustingscrollarea_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self KAdjustingScrollArea*
/// @param scrollbar QScrollBar*
void k_adjustingscrollarea_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_adjustingscrollarea_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self KAdjustingScrollArea*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_adjustingscrollarea_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self KAdjustingScrollArea*
QScrollBar* k_adjustingscrollarea_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self KAdjustingScrollArea*
/// @param scrollbar QScrollBar*
void k_adjustingscrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self KAdjustingScrollArea*
/// @param widget QWidget*
void k_adjustingscrollarea_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self KAdjustingScrollArea*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void k_adjustingscrollarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self KAdjustingScrollArea*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ k_adjustingscrollarea_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self KAdjustingScrollArea*
/// @param widget QWidget*
void k_adjustingscrollarea_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t k_adjustingscrollarea_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self KAdjustingScrollArea*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void k_adjustingscrollarea_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KAdjustingScrollArea*
/// @param frameStyle int
void k_adjustingscrollarea_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum QFrame__Shape
int32_t k_adjustingscrollarea_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KAdjustingScrollArea*
/// @param frameShape enum QFrame__Shape
void k_adjustingscrollarea_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum QFrame__Shadow
int32_t k_adjustingscrollarea_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KAdjustingScrollArea*
/// @param frameShadow enum QFrame__Shadow
void k_adjustingscrollarea_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KAdjustingScrollArea*
/// @param lineWidth int
void k_adjustingscrollarea_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KAdjustingScrollArea*
/// @param midLineWidth int
void k_adjustingscrollarea_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KAdjustingScrollArea*
QRect* k_adjustingscrollarea_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KAdjustingScrollArea*
/// @param frameRect QRect*
void k_adjustingscrollarea_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KAdjustingScrollArea*
uintptr_t k_adjustingscrollarea_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KAdjustingScrollArea*
uintptr_t k_adjustingscrollarea_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KAdjustingScrollArea*
uintptr_t k_adjustingscrollarea_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KAdjustingScrollArea*
QStyle* k_adjustingscrollarea_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KAdjustingScrollArea*
/// @param style QStyle*
void k_adjustingscrollarea_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum Qt__WindowModality
int32_t k_adjustingscrollarea_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KAdjustingScrollArea*
/// @param windowModality enum Qt__WindowModality
void k_adjustingscrollarea_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWidget*
bool k_adjustingscrollarea_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KAdjustingScrollArea*
/// @param enabled bool
void k_adjustingscrollarea_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KAdjustingScrollArea*
/// @param disabled bool
void k_adjustingscrollarea_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KAdjustingScrollArea*
/// @param windowModified bool
void k_adjustingscrollarea_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KAdjustingScrollArea*
QRect* k_adjustingscrollarea_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KAdjustingScrollArea*
const QRect* k_adjustingscrollarea_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KAdjustingScrollArea*
QRect* k_adjustingscrollarea_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KAdjustingScrollArea*
QPoint* k_adjustingscrollarea_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KAdjustingScrollArea*
QRect* k_adjustingscrollarea_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KAdjustingScrollArea*
QRect* k_adjustingscrollarea_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KAdjustingScrollArea*
QRegion* k_adjustingscrollarea_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KAdjustingScrollArea*
/// @param minimumSize QSize*
void k_adjustingscrollarea_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KAdjustingScrollArea*
/// @param minw int
/// @param minh int
void k_adjustingscrollarea_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KAdjustingScrollArea*
/// @param maximumSize QSize*
void k_adjustingscrollarea_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KAdjustingScrollArea*
/// @param maxw int
/// @param maxh int
void k_adjustingscrollarea_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KAdjustingScrollArea*
/// @param minw int
void k_adjustingscrollarea_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KAdjustingScrollArea*
/// @param minh int
void k_adjustingscrollarea_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KAdjustingScrollArea*
/// @param maxw int
void k_adjustingscrollarea_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KAdjustingScrollArea*
/// @param maxh int
void k_adjustingscrollarea_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KAdjustingScrollArea*
/// @param sizeIncrement QSize*
void k_adjustingscrollarea_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KAdjustingScrollArea*
/// @param w int
/// @param h int
void k_adjustingscrollarea_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KAdjustingScrollArea*
/// @param baseSize QSize*
void k_adjustingscrollarea_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KAdjustingScrollArea*
/// @param basew int
/// @param baseh int
void k_adjustingscrollarea_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KAdjustingScrollArea*
/// @param fixedSize QSize*
void k_adjustingscrollarea_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KAdjustingScrollArea*
/// @param w int
/// @param h int
void k_adjustingscrollarea_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KAdjustingScrollArea*
/// @param w int
void k_adjustingscrollarea_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KAdjustingScrollArea*
/// @param h int
void k_adjustingscrollarea_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPointF*
QPointF* k_adjustingscrollarea_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPoint*
QPoint* k_adjustingscrollarea_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPointF*
QPointF* k_adjustingscrollarea_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPoint*
QPoint* k_adjustingscrollarea_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPointF*
QPointF* k_adjustingscrollarea_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPoint*
QPoint* k_adjustingscrollarea_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPointF*
QPointF* k_adjustingscrollarea_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPoint*
QPoint* k_adjustingscrollarea_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_adjustingscrollarea_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_adjustingscrollarea_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_adjustingscrollarea_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_adjustingscrollarea_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KAdjustingScrollArea*
const QPalette* k_adjustingscrollarea_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KAdjustingScrollArea*
/// @param palette QPalette*
void k_adjustingscrollarea_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KAdjustingScrollArea*
/// @param backgroundRole enum QPalette__ColorRole
void k_adjustingscrollarea_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum QPalette__ColorRole
int32_t k_adjustingscrollarea_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KAdjustingScrollArea*
/// @param foregroundRole enum QPalette__ColorRole
void k_adjustingscrollarea_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum QPalette__ColorRole
int32_t k_adjustingscrollarea_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KAdjustingScrollArea*
const QFont* k_adjustingscrollarea_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KAdjustingScrollArea*
/// @param font QFont*
void k_adjustingscrollarea_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KAdjustingScrollArea*
QFontMetrics* k_adjustingscrollarea_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KAdjustingScrollArea*
QFontInfo* k_adjustingscrollarea_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KAdjustingScrollArea*
QCursor* k_adjustingscrollarea_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KAdjustingScrollArea*
/// @param cursor QCursor*
void k_adjustingscrollarea_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KAdjustingScrollArea*
/// @param enable bool
void k_adjustingscrollarea_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KAdjustingScrollArea*
/// @param enable bool
void k_adjustingscrollarea_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KAdjustingScrollArea*
/// @param mask QBitmap*
void k_adjustingscrollarea_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KAdjustingScrollArea*
/// @param mask QRegion*
void k_adjustingscrollarea_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KAdjustingScrollArea*
QRegion* k_adjustingscrollarea_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param target QPaintDevice*
void k_adjustingscrollarea_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param painter QPainter*
void k_adjustingscrollarea_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KAdjustingScrollArea*
QPixmap* k_adjustingscrollarea_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KAdjustingScrollArea*
QGraphicsEffect* k_adjustingscrollarea_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KAdjustingScrollArea*
/// @param effect QGraphicsEffect*
void k_adjustingscrollarea_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KAdjustingScrollArea*
/// @param typeVal enum Qt__GestureType
void k_adjustingscrollarea_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KAdjustingScrollArea*
/// @param typeVal enum Qt__GestureType
void k_adjustingscrollarea_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KAdjustingScrollArea*
/// @param windowTitle const char*
void k_adjustingscrollarea_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KAdjustingScrollArea*
/// @param styleSheet const char*
void k_adjustingscrollarea_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KAdjustingScrollArea*
/// @param icon QIcon*
void k_adjustingscrollarea_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KAdjustingScrollArea*
QIcon* k_adjustingscrollarea_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KAdjustingScrollArea*
/// @param windowIconText const char*
void k_adjustingscrollarea_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KAdjustingScrollArea*
/// @param windowRole const char*
void k_adjustingscrollarea_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KAdjustingScrollArea*
/// @param filePath const char*
void k_adjustingscrollarea_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KAdjustingScrollArea*
/// @param level double
void k_adjustingscrollarea_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KAdjustingScrollArea*
double k_adjustingscrollarea_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KAdjustingScrollArea*
/// @param toolTip const char*
void k_adjustingscrollarea_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KAdjustingScrollArea*
/// @param msec int
void k_adjustingscrollarea_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KAdjustingScrollArea*
/// @param statusTip const char*
void k_adjustingscrollarea_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KAdjustingScrollArea*
/// @param whatsThis const char*
void k_adjustingscrollarea_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KAdjustingScrollArea*
/// @param name const char*
void k_adjustingscrollarea_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KAdjustingScrollArea*
/// @param description const char*
void k_adjustingscrollarea_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KAdjustingScrollArea*
/// @param direction enum Qt__LayoutDirection
void k_adjustingscrollarea_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum Qt__LayoutDirection
int32_t k_adjustingscrollarea_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KAdjustingScrollArea*
/// @param locale QLocale*
void k_adjustingscrollarea_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KAdjustingScrollArea*
QLocale* k_adjustingscrollarea_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KAdjustingScrollArea*
/// @param reason enum Qt__FocusReason
void k_adjustingscrollarea_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum Qt__FocusPolicy
int32_t k_adjustingscrollarea_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KAdjustingScrollArea*
/// @param policy enum Qt__FocusPolicy
void k_adjustingscrollarea_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_adjustingscrollarea_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KAdjustingScrollArea*
/// @param focusProxy QWidget*
void k_adjustingscrollarea_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_adjustingscrollarea_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KAdjustingScrollArea*
/// @param policy enum Qt__ContextMenuPolicy
void k_adjustingscrollarea_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QCursor*
void k_adjustingscrollarea_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KAdjustingScrollArea*
/// @param key QKeySequence*
int32_t k_adjustingscrollarea_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KAdjustingScrollArea*
/// @param id int
void k_adjustingscrollarea_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KAdjustingScrollArea*
/// @param id int
void k_adjustingscrollarea_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KAdjustingScrollArea*
/// @param id int
void k_adjustingscrollarea_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_adjustingscrollarea_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_adjustingscrollarea_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KAdjustingScrollArea*
/// @param enable bool
void k_adjustingscrollarea_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KAdjustingScrollArea*
QGraphicsProxyWidget* k_adjustingscrollarea_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_adjustingscrollarea_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QRect*
void k_adjustingscrollarea_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QRegion*
void k_adjustingscrollarea_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_adjustingscrollarea_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QRect*
void k_adjustingscrollarea_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QRegion*
void k_adjustingscrollarea_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KAdjustingScrollArea*
/// @param hidden bool
void k_adjustingscrollarea_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWidget*
void k_adjustingscrollarea_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
void k_adjustingscrollarea_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPoint*
void k_adjustingscrollarea_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KAdjustingScrollArea*
/// @param w int
/// @param h int
void k_adjustingscrollarea_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QSize*
void k_adjustingscrollarea_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_adjustingscrollarea_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KAdjustingScrollArea*
/// @param geometry QRect*
void k_adjustingscrollarea_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
char* k_adjustingscrollarea_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KAdjustingScrollArea*
/// @param geometry const char*
bool k_adjustingscrollarea_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWidget*
bool k_adjustingscrollarea_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KAdjustingScrollArea*
///
/// @return flag of enum Qt__WindowState
int64_t k_adjustingscrollarea_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KAdjustingScrollArea*
/// @param state flag of enum Qt__WindowState
void k_adjustingscrollarea_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KAdjustingScrollArea*
/// @param state flag of enum Qt__WindowState
void k_adjustingscrollarea_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KAdjustingScrollArea*
QSizePolicy* k_adjustingscrollarea_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KAdjustingScrollArea*
/// @param sizePolicy QSizePolicy*
void k_adjustingscrollarea_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KAdjustingScrollArea*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_adjustingscrollarea_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KAdjustingScrollArea*
QRegion* k_adjustingscrollarea_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KAdjustingScrollArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_adjustingscrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KAdjustingScrollArea*
/// @param margins QMargins*
void k_adjustingscrollarea_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KAdjustingScrollArea*
QMargins* k_adjustingscrollarea_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KAdjustingScrollArea*
QRect* k_adjustingscrollarea_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KAdjustingScrollArea*
QLayout* k_adjustingscrollarea_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KAdjustingScrollArea*
/// @param layout QLayout*
void k_adjustingscrollarea_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KAdjustingScrollArea*
/// @param parent QWidget*
void k_adjustingscrollarea_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KAdjustingScrollArea*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_adjustingscrollarea_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KAdjustingScrollArea*
/// @param dx int
/// @param dy int
void k_adjustingscrollarea_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KAdjustingScrollArea*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_adjustingscrollarea_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KAdjustingScrollArea*
/// @param on bool
void k_adjustingscrollarea_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAdjustingScrollArea*
/// @param action QAction*
void k_adjustingscrollarea_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KAdjustingScrollArea*
/// @param actions libqt_list /* of QAction* */
void k_adjustingscrollarea_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KAdjustingScrollArea*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_adjustingscrollarea_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KAdjustingScrollArea*
/// @param before QAction*
/// @param action QAction*
void k_adjustingscrollarea_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KAdjustingScrollArea*
/// @param action QAction*
void k_adjustingscrollarea_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KAdjustingScrollArea*
libqt_list /* of QAction* */ k_adjustingscrollarea_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAdjustingScrollArea*
/// @param text const char*
QAction* k_adjustingscrollarea_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAdjustingScrollArea*
/// @param icon QIcon*
/// @param text const char*
QAction* k_adjustingscrollarea_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAdjustingScrollArea*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_adjustingscrollarea_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KAdjustingScrollArea*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_adjustingscrollarea_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KAdjustingScrollArea*
QWidget* k_adjustingscrollarea_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KAdjustingScrollArea*
/// @param typeVal flag of enum Qt__WindowType
void k_adjustingscrollarea_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KAdjustingScrollArea*
///
/// @return flag of enum Qt__WindowType
int64_t k_adjustingscrollarea_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum Qt__WindowType
void k_adjustingscrollarea_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KAdjustingScrollArea*
/// @param typeVal flag of enum Qt__WindowType
void k_adjustingscrollarea_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KAdjustingScrollArea*
///
/// @return enum Qt__WindowType
int64_t k_adjustingscrollarea_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_adjustingscrollarea_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KAdjustingScrollArea*
/// @param x int
/// @param y int
QWidget* k_adjustingscrollarea_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KAdjustingScrollArea*
/// @param p QPoint*
QWidget* k_adjustingscrollarea_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KAdjustingScrollArea*
/// @param p QPointF*
QWidget* k_adjustingscrollarea_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum Qt__WidgetAttribute
void k_adjustingscrollarea_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum Qt__WidgetAttribute
bool k_adjustingscrollarea_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KAdjustingScrollArea*
/// @param child QWidget*
bool k_adjustingscrollarea_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KAdjustingScrollArea*
/// @param enabled bool
void k_adjustingscrollarea_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KAdjustingScrollArea*
QBackingStore* k_adjustingscrollarea_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KAdjustingScrollArea*
QWindow* k_adjustingscrollarea_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KAdjustingScrollArea*
QScreen* k_adjustingscrollarea_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KAdjustingScrollArea*
/// @param screen QScreen*
void k_adjustingscrollarea_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_adjustingscrollarea_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KAdjustingScrollArea*
/// @param title const char*
void k_adjustingscrollarea_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, const char* title)
void k_adjustingscrollarea_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KAdjustingScrollArea*
/// @param icon QIcon*
void k_adjustingscrollarea_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QIcon* icon)
void k_adjustingscrollarea_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KAdjustingScrollArea*
/// @param iconText const char*
void k_adjustingscrollarea_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, const char* iconText)
void k_adjustingscrollarea_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KAdjustingScrollArea*
/// @param pos QPoint*
void k_adjustingscrollarea_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QPoint* pos)
void k_adjustingscrollarea_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KAdjustingScrollArea*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_adjustingscrollarea_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KAdjustingScrollArea*
/// @param hints flag of enum Qt__InputMethodHint
void k_adjustingscrollarea_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_adjustingscrollarea_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_adjustingscrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_adjustingscrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_adjustingscrollarea_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_adjustingscrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KAdjustingScrollArea*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_adjustingscrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KAdjustingScrollArea*
/// @param rectangle QRect*
QPixmap* k_adjustingscrollarea_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KAdjustingScrollArea*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_adjustingscrollarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KAdjustingScrollArea*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_adjustingscrollarea_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KAdjustingScrollArea*
/// @param id int
/// @param enable bool
void k_adjustingscrollarea_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KAdjustingScrollArea*
/// @param id int
/// @param enable bool
void k_adjustingscrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_adjustingscrollarea_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_adjustingscrollarea_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_adjustingscrollarea_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_adjustingscrollarea_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char* k_adjustingscrollarea_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KAdjustingScrollArea*
/// @param name char*
void k_adjustingscrollarea_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KAdjustingScrollArea*
/// @param b bool
bool k_adjustingscrollarea_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KAdjustingScrollArea*
QThread* k_adjustingscrollarea_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAdjustingScrollArea*
/// @param thread QThread*
bool k_adjustingscrollarea_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAdjustingScrollArea*
/// @param interval int
int32_t k_adjustingscrollarea_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAdjustingScrollArea*
/// @param id int
void k_adjustingscrollarea_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KAdjustingScrollArea*
/// @param id enum Qt__TimerId
void k_adjustingscrollarea_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KAdjustingScrollArea*
libqt_list /* of QObject* */ k_adjustingscrollarea_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KAdjustingScrollArea*
/// @param filterObj QObject*
void k_adjustingscrollarea_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KAdjustingScrollArea*
/// @param obj QObject*
void k_adjustingscrollarea_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_adjustingscrollarea_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAdjustingScrollArea*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_adjustingscrollarea_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_adjustingscrollarea_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_adjustingscrollarea_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KAdjustingScrollArea*
/// @param name const char*
/// @param value QVariant*
bool k_adjustingscrollarea_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KAdjustingScrollArea*
/// @param name const char*
QVariant* k_adjustingscrollarea_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAdjustingScrollArea*
const char** k_adjustingscrollarea_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAdjustingScrollArea*
QBindingStorage* k_adjustingscrollarea_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KAdjustingScrollArea*
const QBindingStorage* k_adjustingscrollarea_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self)
void k_adjustingscrollarea_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KAdjustingScrollArea*
QObject* k_adjustingscrollarea_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KAdjustingScrollArea*
/// @param classname const char*
bool k_adjustingscrollarea_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KAdjustingScrollArea*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_adjustingscrollarea_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KAdjustingScrollArea*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_adjustingscrollarea_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_adjustingscrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KAdjustingScrollArea*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_adjustingscrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAdjustingScrollArea*
/// @param param1 QObject*
void k_adjustingscrollarea_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QObject* param1)
void k_adjustingscrollarea_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KAdjustingScrollArea*
double k_adjustingscrollarea_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KAdjustingScrollArea*
double k_adjustingscrollarea_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_adjustingscrollarea_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_adjustingscrollarea_encode_metric_f(int32_t metric, double value);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param next bool
bool k_adjustingscrollarea_focus_next_prev_child(void* self, bool next);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param next bool
bool k_adjustingscrollarea_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func(KAdjustingScrollArea* self, bool next)
void k_adjustingscrollarea_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QResizeEvent*
void k_adjustingscrollarea_resize_event(void* self, void* param1);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QResizeEvent*
void k_adjustingscrollarea_qbase_resize_event(void* self, void* param1);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QResizeEvent* param1)
void k_adjustingscrollarea_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param dx int
/// @param dy int
void k_adjustingscrollarea_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param dx int
/// @param dy int
void k_adjustingscrollarea_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, int dx, int dy)
void k_adjustingscrollarea_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_viewport_size_hint(void* self);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
QSize* k_adjustingscrollarea_qbase_viewport_size_hint(void* self);

/// Inherited from QScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback QSize* func()
void k_adjustingscrollarea_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param viewport QWidget*
void k_adjustingscrollarea_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param viewport QWidget*
void k_adjustingscrollarea_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QWidget* viewport)
void k_adjustingscrollarea_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QEvent*
bool k_adjustingscrollarea_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QEvent*
bool k_adjustingscrollarea_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func(KAdjustingScrollArea* self, QEvent* param1)
void k_adjustingscrollarea_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPaintEvent*
void k_adjustingscrollarea_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPaintEvent*
void k_adjustingscrollarea_qbase_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QPaintEvent* param1)
void k_adjustingscrollarea_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_mouse_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_qbase_mouse_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QMouseEvent* param1)
void k_adjustingscrollarea_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_mouse_release_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_qbase_mouse_release_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QMouseEvent* param1)
void k_adjustingscrollarea_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_mouse_double_click_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_qbase_mouse_double_click_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QMouseEvent* param1)
void k_adjustingscrollarea_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_mouse_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QMouseEvent*
void k_adjustingscrollarea_qbase_mouse_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QMouseEvent* param1)
void k_adjustingscrollarea_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWheelEvent*
void k_adjustingscrollarea_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QWheelEvent*
void k_adjustingscrollarea_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QWheelEvent* param1)
void k_adjustingscrollarea_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QContextMenuEvent*
void k_adjustingscrollarea_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QContextMenuEvent*
void k_adjustingscrollarea_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QContextMenuEvent* param1)
void k_adjustingscrollarea_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDragEnterEvent*
void k_adjustingscrollarea_drag_enter_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDragEnterEvent*
void k_adjustingscrollarea_qbase_drag_enter_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QDragEnterEvent* param1)
void k_adjustingscrollarea_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDragMoveEvent*
void k_adjustingscrollarea_drag_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDragMoveEvent*
void k_adjustingscrollarea_qbase_drag_move_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QDragMoveEvent* param1)
void k_adjustingscrollarea_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDragLeaveEvent*
void k_adjustingscrollarea_drag_leave_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDragLeaveEvent*
void k_adjustingscrollarea_qbase_drag_leave_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QDragLeaveEvent* param1)
void k_adjustingscrollarea_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDropEvent*
void k_adjustingscrollarea_drop_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QDropEvent*
void k_adjustingscrollarea_qbase_drop_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QDropEvent* param1)
void k_adjustingscrollarea_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QKeyEvent*
void k_adjustingscrollarea_key_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QKeyEvent*
void k_adjustingscrollarea_qbase_key_press_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QKeyEvent* param1)
void k_adjustingscrollarea_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QEvent*
void k_adjustingscrollarea_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QEvent*
void k_adjustingscrollarea_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QEvent* param1)
void k_adjustingscrollarea_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param option QStyleOptionFrame*
void k_adjustingscrollarea_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param option QStyleOptionFrame*
void k_adjustingscrollarea_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QStyleOptionFrame* option)
void k_adjustingscrollarea_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback int32_t func()
void k_adjustingscrollarea_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param visible bool
void k_adjustingscrollarea_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param visible bool
void k_adjustingscrollarea_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, bool visible)
void k_adjustingscrollarea_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 int
int32_t k_adjustingscrollarea_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 int
int32_t k_adjustingscrollarea_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback int32_t func(KAdjustingScrollArea* self, int param1)
void k_adjustingscrollarea_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func()
void k_adjustingscrollarea_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
QPaintEngine* k_adjustingscrollarea_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
QPaintEngine* k_adjustingscrollarea_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback QPaintEngine* func()
void k_adjustingscrollarea_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QKeyEvent*
void k_adjustingscrollarea_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QKeyEvent*
void k_adjustingscrollarea_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QKeyEvent* event)
void k_adjustingscrollarea_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QFocusEvent*
void k_adjustingscrollarea_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QFocusEvent*
void k_adjustingscrollarea_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QFocusEvent* event)
void k_adjustingscrollarea_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QFocusEvent*
void k_adjustingscrollarea_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QFocusEvent*
void k_adjustingscrollarea_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QFocusEvent* event)
void k_adjustingscrollarea_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QEnterEvent*
void k_adjustingscrollarea_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QEnterEvent*
void k_adjustingscrollarea_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QEnterEvent* event)
void k_adjustingscrollarea_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QEvent*
void k_adjustingscrollarea_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QEvent*
void k_adjustingscrollarea_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QEvent* event)
void k_adjustingscrollarea_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QMoveEvent*
void k_adjustingscrollarea_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QMoveEvent*
void k_adjustingscrollarea_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QMoveEvent* event)
void k_adjustingscrollarea_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QCloseEvent*
void k_adjustingscrollarea_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QCloseEvent*
void k_adjustingscrollarea_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QCloseEvent* event)
void k_adjustingscrollarea_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QTabletEvent*
void k_adjustingscrollarea_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QTabletEvent*
void k_adjustingscrollarea_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QTabletEvent* event)
void k_adjustingscrollarea_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QActionEvent*
void k_adjustingscrollarea_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QActionEvent*
void k_adjustingscrollarea_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QActionEvent* event)
void k_adjustingscrollarea_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QShowEvent*
void k_adjustingscrollarea_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QShowEvent*
void k_adjustingscrollarea_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QShowEvent* event)
void k_adjustingscrollarea_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QHideEvent*
void k_adjustingscrollarea_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QHideEvent*
void k_adjustingscrollarea_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QHideEvent* event)
void k_adjustingscrollarea_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_adjustingscrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_adjustingscrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func(KAdjustingScrollArea* self, const char* eventType, void* message, intptr_t* result)
void k_adjustingscrollarea_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_adjustingscrollarea_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_adjustingscrollarea_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback int32_t func(KAdjustingScrollArea* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_adjustingscrollarea_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param painter QPainter*
void k_adjustingscrollarea_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param painter QPainter*
void k_adjustingscrollarea_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QPainter* painter)
void k_adjustingscrollarea_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param offset QPoint*
QPaintDevice* k_adjustingscrollarea_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param offset QPoint*
QPaintDevice* k_adjustingscrollarea_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback QPaintDevice* func(KAdjustingScrollArea* self, QPoint* offset)
void k_adjustingscrollarea_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
QPainter* k_adjustingscrollarea_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
QPainter* k_adjustingscrollarea_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback QPainter* func()
void k_adjustingscrollarea_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QInputMethodEvent*
void k_adjustingscrollarea_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QInputMethodEvent*
void k_adjustingscrollarea_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QInputMethodEvent* param1)
void k_adjustingscrollarea_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_adjustingscrollarea_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_adjustingscrollarea_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback QVariant* func(KAdjustingScrollArea* self, enum Qt__InputMethodQuery param1)
void k_adjustingscrollarea_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QTimerEvent*
void k_adjustingscrollarea_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QTimerEvent*
void k_adjustingscrollarea_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QTimerEvent* event)
void k_adjustingscrollarea_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QChildEvent*
void k_adjustingscrollarea_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QChildEvent*
void k_adjustingscrollarea_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QChildEvent* event)
void k_adjustingscrollarea_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QEvent*
void k_adjustingscrollarea_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param event QEvent*
void k_adjustingscrollarea_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QEvent* event)
void k_adjustingscrollarea_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal QMetaMethod*
void k_adjustingscrollarea_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal QMetaMethod*
void k_adjustingscrollarea_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QMetaMethod* signal)
void k_adjustingscrollarea_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal QMetaMethod*
void k_adjustingscrollarea_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal QMetaMethod*
void k_adjustingscrollarea_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QMetaMethod* signal)
void k_adjustingscrollarea_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_adjustingscrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_adjustingscrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, int left, int top, int right, int bottom)
void k_adjustingscrollarea_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
QMargins* k_adjustingscrollarea_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
QMargins* k_adjustingscrollarea_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback QMargins* func()
void k_adjustingscrollarea_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPainter*
void k_adjustingscrollarea_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param param1 QPainter*
void k_adjustingscrollarea_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, QPainter* param1)
void k_adjustingscrollarea_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func()
void k_adjustingscrollarea_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func()
void k_adjustingscrollarea_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback void func()
void k_adjustingscrollarea_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func()
void k_adjustingscrollarea_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
bool k_adjustingscrollarea_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func()
void k_adjustingscrollarea_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
QObject* k_adjustingscrollarea_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
QObject* k_adjustingscrollarea_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback QObject* func()
void k_adjustingscrollarea_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
int32_t k_adjustingscrollarea_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback int32_t func()
void k_adjustingscrollarea_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal const char*
int32_t k_adjustingscrollarea_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal const char*
int32_t k_adjustingscrollarea_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback int32_t func(KAdjustingScrollArea* self, const char* signal)
void k_adjustingscrollarea_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal QMetaMethod*
bool k_adjustingscrollarea_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param signal QMetaMethod*
bool k_adjustingscrollarea_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback bool func(KAdjustingScrollArea* self, QMetaMethod* signal)
void k_adjustingscrollarea_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_adjustingscrollarea_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_adjustingscrollarea_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KAdjustingScrollArea*
/// @param callback double func(KAdjustingScrollArea* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_adjustingscrollarea_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KAdjustingScrollArea*
/// @param callback void func(KAdjustingScrollArea* self, const char* objectName)
void k_adjustingscrollarea_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kadjustingscrollarea.html#dtor.KAdjustingScrollArea)
///
/// Delete this object from C++ memory.
///
/// @param self KAdjustingScrollArea*
void k_adjustingscrollarea_delete(void* self);

#endif
