#pragma once
#ifndef SRCQT6C_LIBQSTYLEOPTION_H
#define SRCQT6C_LIBQSTYLEOPTION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstyleoption.html

/// q_styleoption_new constructs a new QStyleOption object.
///
QStyleOption* q_styleoption_new();

/// q_styleoption_new2 constructs a new QStyleOption object.
///
/// @param other QStyleOption*
QStyleOption* q_styleoption_new2(void* other);

/// q_styleoption_new3 constructs a new QStyleOption object.
///
/// @param version int
QStyleOption* q_styleoption_new3(int version);

/// q_styleoption_new4 constructs a new QStyleOption object.
///
/// @param version int
/// @param typeVal int
QStyleOption* q_styleoption_new4(int version, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOption*
int32_t q_styleoption_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOption*
/// @param version int
void q_styleoption_set_version(void* self, int version);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOption*
int32_t q_styleoption_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOption*
/// @param type int
void q_styleoption_set_type(void* self, int _type);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOption*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoption_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOption*
/// @param state flag of enum QStyle__StateFlag
void q_styleoption_set_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOption*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoption_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOption*
/// @param direction enum Qt__LayoutDirection
void q_styleoption_set_direction(void* self, int32_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOption*
QRect* q_styleoption_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOption*
/// @param rect QRect*
void q_styleoption_set_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOption*
QFontMetrics* q_styleoption_font_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOption*
/// @param fontMetrics QFontMetrics*
void q_styleoption_set_font_metrics(void* self, void* fontMetrics);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOption*
QPalette* q_styleoption_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOption*
/// @param palette QPalette*
void q_styleoption_set_palette(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOption*
QObject* q_styleoption_style_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOption*
/// @param styleObject QObject*
void q_styleoption_set_style_object(void* self, void* styleObject);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOption*
/// @param w QWidget*
void q_styleoption_init_from(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOption*
/// @param other QStyleOption*
void q_styleoption_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#dtor.QStyleOption)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOption*
void q_styleoption_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionfocusrect.html

/// q_styleoptionfocusrect_new constructs a new QStyleOptionFocusRect object.
///
QStyleOptionFocusRect* q_styleoptionfocusrect_new();

/// q_styleoptionfocusrect_new2 constructs a new QStyleOptionFocusRect object.
///
/// @param other QStyleOptionFocusRect*
QStyleOptionFocusRect* q_styleoptionfocusrect_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
///
/// @param self QStyleOptionFocusRect*
QColor* q_styleoptionfocusrect_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#backgroundColor-var)
///
/// @param self QStyleOptionFocusRect*
/// @param backgroundColor QColor*
void q_styleoptionfocusrect_set_background_color(void* self, void* backgroundColor);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionFocusRect*
int32_t q_styleoptionfocusrect_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionFocusRect*
/// @param version int
void q_styleoptionfocusrect_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionFocusRect*
int32_t q_styleoptionfocusrect_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionFocusRect*
/// @param type int
void q_styleoptionfocusrect_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionFocusRect*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionfocusrect_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionFocusRect*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionfocusrect_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionFocusRect*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionfocusrect_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionFocusRect*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionfocusrect_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionFocusRect*
QRect* q_styleoptionfocusrect_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionFocusRect*
/// @param rect QRect*
void q_styleoptionfocusrect_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionFocusRect*
QFontMetrics* q_styleoptionfocusrect_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionFocusRect*
/// @param fontMetrics QFontMetrics*
void q_styleoptionfocusrect_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionFocusRect*
QPalette* q_styleoptionfocusrect_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionFocusRect*
/// @param palette QPalette*
void q_styleoptionfocusrect_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionFocusRect*
QObject* q_styleoptionfocusrect_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionFocusRect*
/// @param styleObject QObject*
void q_styleoptionfocusrect_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionFocusRect*
/// @param w QWidget*
void q_styleoptionfocusrect_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionFocusRect*
/// @param other QStyleOption*
void q_styleoptionfocusrect_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#dtor.QStyleOptionFocusRect)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionFocusRect*
void q_styleoptionfocusrect_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionframe.html

/// q_styleoptionframe_new constructs a new QStyleOptionFrame object.
///
QStyleOptionFrame* q_styleoptionframe_new();

/// q_styleoptionframe_new2 constructs a new QStyleOptionFrame object.
///
/// @param other QStyleOptionFrame*
QStyleOptionFrame* q_styleoptionframe_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
///
/// @param self QStyleOptionFrame*
int32_t q_styleoptionframe_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#lineWidth-var)
///
/// @param self QStyleOptionFrame*
/// @param lineWidth int
void q_styleoptionframe_set_line_width(void* self, int lineWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
///
/// @param self QStyleOptionFrame*
int32_t q_styleoptionframe_mid_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#midLineWidth-var)
///
/// @param self QStyleOptionFrame*
/// @param midLineWidth int
void q_styleoptionframe_set_mid_line_width(void* self, int midLineWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
///
/// @param self QStyleOptionFrame*
///
/// @return flag of enum QStyleOptionFrame__FrameFeature
int64_t q_styleoptionframe_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#features-var)
///
/// @param self QStyleOptionFrame*
/// @param features flag of enum QStyleOptionFrame__FrameFeature
void q_styleoptionframe_set_features(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
///
/// @param self QStyleOptionFrame*
///
/// @return enum QFrame__Shape
int32_t q_styleoptionframe_frame_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#frameShape-var)
///
/// @param self QStyleOptionFrame*
/// @param frameShape enum QFrame__Shape
void q_styleoptionframe_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionFrame*
int32_t q_styleoptionframe_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionFrame*
/// @param version int
void q_styleoptionframe_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionFrame*
int32_t q_styleoptionframe_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionFrame*
/// @param type int
void q_styleoptionframe_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionFrame*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionframe_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionFrame*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionframe_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionFrame*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionframe_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionFrame*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionframe_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionFrame*
QRect* q_styleoptionframe_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionFrame*
/// @param rect QRect*
void q_styleoptionframe_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionFrame*
QFontMetrics* q_styleoptionframe_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionFrame*
/// @param fontMetrics QFontMetrics*
void q_styleoptionframe_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionFrame*
QPalette* q_styleoptionframe_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionFrame*
/// @param palette QPalette*
void q_styleoptionframe_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionFrame*
QObject* q_styleoptionframe_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionFrame*
/// @param styleObject QObject*
void q_styleoptionframe_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionFrame*
/// @param w QWidget*
void q_styleoptionframe_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionFrame*
/// @param other QStyleOption*
void q_styleoptionframe_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#dtor.QStyleOptionFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionFrame*
void q_styleoptionframe_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html

/// q_styleoptiontabwidgetframe_new constructs a new QStyleOptionTabWidgetFrame object.
///
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new();

/// q_styleoptiontabwidgetframe_new2 constructs a new QStyleOptionTabWidgetFrame object.
///
/// @param other QStyleOptionTabWidgetFrame*
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
///
/// @param self QStyleOptionTabWidgetFrame*
int32_t q_styleoptiontabwidgetframe_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#lineWidth-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param lineWidth int
void q_styleoptiontabwidgetframe_set_line_width(void* self, int lineWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
///
/// @param self QStyleOptionTabWidgetFrame*
int32_t q_styleoptiontabwidgetframe_mid_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#midLineWidth-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param midLineWidth int
void q_styleoptiontabwidgetframe_set_mid_line_width(void* self, int midLineWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
///
/// @param self QStyleOptionTabWidgetFrame*
///
/// @return enum QTabBar__Shape
int32_t q_styleoptiontabwidgetframe_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#shape-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param shape enum QTabBar__Shape
void q_styleoptiontabwidgetframe_set_shape(void* self, int32_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QSize* q_styleoptiontabwidgetframe_tab_bar_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarSize-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param tabBarSize QSize*
void q_styleoptiontabwidgetframe_set_tab_bar_size(void* self, void* tabBarSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QSize* q_styleoptiontabwidgetframe_right_corner_widget_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#rightCornerWidgetSize-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param rightCornerWidgetSize QSize*
void q_styleoptiontabwidgetframe_set_right_corner_widget_size(void* self, void* rightCornerWidgetSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QSize* q_styleoptiontabwidgetframe_left_corner_widget_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#leftCornerWidgetSize-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param leftCornerWidgetSize QSize*
void q_styleoptiontabwidgetframe_set_left_corner_widget_size(void* self, void* leftCornerWidgetSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QRect* q_styleoptiontabwidgetframe_tab_bar_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#tabBarRect-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param tabBarRect QRect*
void q_styleoptiontabwidgetframe_set_tab_bar_rect(void* self, void* tabBarRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QRect* q_styleoptiontabwidgetframe_selected_tab_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#selectedTabRect-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param selectedTabRect QRect*
void q_styleoptiontabwidgetframe_set_selected_tab_rect(void* self, void* selectedTabRect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTabWidgetFrame*
int32_t q_styleoptiontabwidgetframe_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param version int
void q_styleoptiontabwidgetframe_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTabWidgetFrame*
int32_t q_styleoptiontabwidgetframe_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param type int
void q_styleoptiontabwidgetframe_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTabWidgetFrame*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiontabwidgetframe_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiontabwidgetframe_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTabWidgetFrame*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiontabwidgetframe_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiontabwidgetframe_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QRect* q_styleoptiontabwidgetframe_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param rect QRect*
void q_styleoptiontabwidgetframe_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QFontMetrics* q_styleoptiontabwidgetframe_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param fontMetrics QFontMetrics*
void q_styleoptiontabwidgetframe_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QPalette* q_styleoptiontabwidgetframe_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param palette QPalette*
void q_styleoptiontabwidgetframe_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTabWidgetFrame*
QObject* q_styleoptiontabwidgetframe_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param styleObject QObject*
void q_styleoptiontabwidgetframe_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param w QWidget*
void q_styleoptiontabwidgetframe_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param other QStyleOption*
void q_styleoptiontabwidgetframe_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#dtor.QStyleOptionTabWidgetFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTabWidgetFrame*
void q_styleoptiontabwidgetframe_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html

/// q_styleoptiontabbarbase_new constructs a new QStyleOptionTabBarBase object.
///
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new();

/// q_styleoptiontabbarbase_new2 constructs a new QStyleOptionTabBarBase object.
///
/// @param other QStyleOptionTabBarBase*
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
///
/// @param self QStyleOptionTabBarBase*
///
/// @return enum QTabBar__Shape
int32_t q_styleoptiontabbarbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#shape-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param shape enum QTabBar__Shape
void q_styleoptiontabbarbase_set_shape(void* self, int32_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
///
/// @param self QStyleOptionTabBarBase*
QRect* q_styleoptiontabbarbase_tab_bar_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#tabBarRect-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param tabBarRect QRect*
void q_styleoptiontabbarbase_set_tab_bar_rect(void* self, void* tabBarRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
///
/// @param self QStyleOptionTabBarBase*
QRect* q_styleoptiontabbarbase_selected_tab_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#selectedTabRect-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param selectedTabRect QRect*
void q_styleoptiontabbarbase_set_selected_tab_rect(void* self, void* selectedTabRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
///
/// @param self QStyleOptionTabBarBase*
bool q_styleoptiontabbarbase_document_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#documentMode-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param documentMode bool
void q_styleoptiontabbarbase_set_document_mode(void* self, bool documentMode);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTabBarBase*
int32_t q_styleoptiontabbarbase_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param version int
void q_styleoptiontabbarbase_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTabBarBase*
int32_t q_styleoptiontabbarbase_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param type int
void q_styleoptiontabbarbase_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTabBarBase*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiontabbarbase_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiontabbarbase_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTabBarBase*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiontabbarbase_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiontabbarbase_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTabBarBase*
QRect* q_styleoptiontabbarbase_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param rect QRect*
void q_styleoptiontabbarbase_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTabBarBase*
QFontMetrics* q_styleoptiontabbarbase_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param fontMetrics QFontMetrics*
void q_styleoptiontabbarbase_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTabBarBase*
QPalette* q_styleoptiontabbarbase_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param palette QPalette*
void q_styleoptiontabbarbase_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTabBarBase*
QObject* q_styleoptiontabbarbase_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTabBarBase*
/// @param styleObject QObject*
void q_styleoptiontabbarbase_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTabBarBase*
/// @param w QWidget*
void q_styleoptiontabbarbase_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTabBarBase*
/// @param other QStyleOption*
void q_styleoptiontabbarbase_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#dtor.QStyleOptionTabBarBase)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTabBarBase*
void q_styleoptiontabbarbase_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionheader.html

/// q_styleoptionheader_new constructs a new QStyleOptionHeader object.
///
QStyleOptionHeader* q_styleoptionheader_new();

/// q_styleoptionheader_new2 constructs a new QStyleOptionHeader object.
///
/// @param other QStyleOptionHeader*
QStyleOptionHeader* q_styleoptionheader_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
///
/// @param self QStyleOptionHeader*
int32_t q_styleoptionheader_section(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
///
/// @param self QStyleOptionHeader*
/// @param section int
void q_styleoptionheader_set_section(void* self, int section);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionHeader*
const char* q_styleoptionheader_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
///
/// @param self QStyleOptionHeader*
/// @param text const char*
void q_styleoptionheader_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
///
/// @param self QStyleOptionHeader*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptionheader_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
///
/// @param self QStyleOptionHeader*
/// @param textAlignment flag of enum Qt__AlignmentFlag
void q_styleoptionheader_set_text_alignment(void* self, int64_t textAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
///
/// @param self QStyleOptionHeader*
QIcon* q_styleoptionheader_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
///
/// @param self QStyleOptionHeader*
/// @param icon QIcon*
void q_styleoptionheader_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
///
/// @param self QStyleOptionHeader*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptionheader_icon_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
///
/// @param self QStyleOptionHeader*
/// @param iconAlignment flag of enum Qt__AlignmentFlag
void q_styleoptionheader_set_icon_alignment(void* self, int64_t iconAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
///
/// @param self QStyleOptionHeader*
///
/// @return enum QStyleOptionHeader__SectionPosition
int32_t q_styleoptionheader_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
///
/// @param self QStyleOptionHeader*
/// @param position enum QStyleOptionHeader__SectionPosition
void q_styleoptionheader_set_position(void* self, int32_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
///
/// @param self QStyleOptionHeader*
///
/// @return enum QStyleOptionHeader__SelectedPosition
int32_t q_styleoptionheader_selected_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
///
/// @param self QStyleOptionHeader*
/// @param selectedPosition enum QStyleOptionHeader__SelectedPosition
void q_styleoptionheader_set_selected_position(void* self, int32_t selectedPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
///
/// @param self QStyleOptionHeader*
///
/// @return enum QStyleOptionHeader__SortIndicator
int32_t q_styleoptionheader_sort_indicator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
///
/// @param self QStyleOptionHeader*
/// @param sortIndicator enum QStyleOptionHeader__SortIndicator
void q_styleoptionheader_set_sort_indicator(void* self, int32_t sortIndicator);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
///
/// @param self QStyleOptionHeader*
///
/// @return enum Qt__Orientation
int32_t q_styleoptionheader_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
///
/// @param self QStyleOptionHeader*
/// @param orientation enum Qt__Orientation
void q_styleoptionheader_set_orientation(void* self, int32_t orientation);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionHeader*
int32_t q_styleoptionheader_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionHeader*
/// @param version int
void q_styleoptionheader_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionHeader*
int32_t q_styleoptionheader_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionHeader*
/// @param type int
void q_styleoptionheader_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionHeader*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionheader_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionHeader*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionheader_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionHeader*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionheader_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionHeader*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionheader_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionHeader*
QRect* q_styleoptionheader_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionHeader*
/// @param rect QRect*
void q_styleoptionheader_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionHeader*
QFontMetrics* q_styleoptionheader_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionHeader*
/// @param fontMetrics QFontMetrics*
void q_styleoptionheader_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionHeader*
QPalette* q_styleoptionheader_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionHeader*
/// @param palette QPalette*
void q_styleoptionheader_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionHeader*
QObject* q_styleoptionheader_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionHeader*
/// @param styleObject QObject*
void q_styleoptionheader_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionHeader*
/// @param w QWidget*
void q_styleoptionheader_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionHeader*
/// @param other QStyleOption*
void q_styleoptionheader_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#dtor.QStyleOptionHeader)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionHeader*
void q_styleoptionheader_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionheaderv2.html

/// q_styleoptionheaderv2_new constructs a new QStyleOptionHeaderV2 object.
///
QStyleOptionHeaderV2* q_styleoptionheaderv2_new();

/// q_styleoptionheaderv2_new2 constructs a new QStyleOptionHeaderV2 object.
///
/// @param other QStyleOptionHeaderV2*
QStyleOptionHeaderV2* q_styleoptionheaderv2_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return enum Qt__TextElideMode
int32_t q_styleoptionheaderv2_text_elide_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#textElideMode-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param textElideMode enum Qt__TextElideMode
void q_styleoptionheaderv2_set_text_elide_mode(void* self, int32_t textElideMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
///
/// @param self QStyleOptionHeaderV2*
bool q_styleoptionheaderv2_is_section_drag_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#isSectionDragTarget-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param isSectionDragTarget bool
void q_styleoptionheaderv2_set_is_section_drag_target(void* self, bool isSectionDragTarget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
///
/// @param self QStyleOptionHeaderV2*
int32_t q_styleoptionheaderv2_unused(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#unused-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param unused int
void q_styleoptionheaderv2_set_unused(void* self, int unused);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
///
/// @param self QStyleOptionHeaderV2*
int32_t q_styleoptionheaderv2_section(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#section-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param section int
void q_styleoptionheaderv2_set_section(void* self, int section);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionHeaderV2*
const char* q_styleoptionheaderv2_text(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#text-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param text const char*
void q_styleoptionheaderv2_set_text(void* self, const char* text);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptionheaderv2_text_alignment(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#textAlignment-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param textAlignment flag of enum Qt__AlignmentFlag
void q_styleoptionheaderv2_set_text_alignment(void* self, int64_t textAlignment);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
///
/// @param self QStyleOptionHeaderV2*
QIcon* q_styleoptionheaderv2_icon(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#icon-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param icon QIcon*
void q_styleoptionheaderv2_set_icon(void* self, void* icon);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptionheaderv2_icon_alignment(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#iconAlignment-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param iconAlignment flag of enum Qt__AlignmentFlag
void q_styleoptionheaderv2_set_icon_alignment(void* self, int64_t iconAlignment);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return enum QStyleOptionHeader__SectionPosition
int32_t q_styleoptionheaderv2_position(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#position-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param position enum QStyleOptionHeader__SectionPosition
void q_styleoptionheaderv2_set_position(void* self, int32_t position);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return enum QStyleOptionHeader__SelectedPosition
int32_t q_styleoptionheaderv2_selected_position(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#selectedPosition-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param selectedPosition enum QStyleOptionHeader__SelectedPosition
void q_styleoptionheaderv2_set_selected_position(void* self, int32_t selectedPosition);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return enum QStyleOptionHeader__SortIndicator
int32_t q_styleoptionheaderv2_sort_indicator(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#sortIndicator-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param sortIndicator enum QStyleOptionHeader__SortIndicator
void q_styleoptionheaderv2_set_sort_indicator(void* self, int32_t sortIndicator);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return enum Qt__Orientation
int32_t q_styleoptionheaderv2_orientation(void* self);

/// Inherited from QStyleOptionHeader
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#orientation-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param orientation enum Qt__Orientation
void q_styleoptionheaderv2_set_orientation(void* self, int32_t orientation);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionHeaderV2*
int32_t q_styleoptionheaderv2_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param version int
void q_styleoptionheaderv2_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionHeaderV2*
int32_t q_styleoptionheaderv2_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param type int
void q_styleoptionheaderv2_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionheaderv2_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionheaderv2_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionHeaderV2*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionheaderv2_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionheaderv2_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionHeaderV2*
QRect* q_styleoptionheaderv2_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param rect QRect*
void q_styleoptionheaderv2_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionHeaderV2*
QFontMetrics* q_styleoptionheaderv2_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param fontMetrics QFontMetrics*
void q_styleoptionheaderv2_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionHeaderV2*
QPalette* q_styleoptionheaderv2_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param palette QPalette*
void q_styleoptionheaderv2_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionHeaderV2*
QObject* q_styleoptionheaderv2_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionHeaderV2*
/// @param styleObject QObject*
void q_styleoptionheaderv2_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionHeaderV2*
/// @param w QWidget*
void q_styleoptionheaderv2_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionHeaderV2*
/// @param other QStyleOption*
void q_styleoptionheaderv2_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#dtor.QStyleOptionHeaderV2)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionHeaderV2*
void q_styleoptionheaderv2_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionbutton.html

/// q_styleoptionbutton_new constructs a new QStyleOptionButton object.
///
QStyleOptionButton* q_styleoptionbutton_new();

/// q_styleoptionbutton_new2 constructs a new QStyleOptionButton object.
///
/// @param other QStyleOptionButton*
QStyleOptionButton* q_styleoptionbutton_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
///
/// @param self QStyleOptionButton*
///
/// @return flag of enum QStyleOptionButton__ButtonFeature
int64_t q_styleoptionbutton_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#features-var)
///
/// @param self QStyleOptionButton*
/// @param features flag of enum QStyleOptionButton__ButtonFeature
void q_styleoptionbutton_set_features(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionButton*
const char* q_styleoptionbutton_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#text-var)
///
/// @param self QStyleOptionButton*
/// @param text const char*
void q_styleoptionbutton_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
///
/// @param self QStyleOptionButton*
QIcon* q_styleoptionbutton_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#icon-var)
///
/// @param self QStyleOptionButton*
/// @param icon QIcon*
void q_styleoptionbutton_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
///
/// @param self QStyleOptionButton*
QSize* q_styleoptionbutton_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#iconSize-var)
///
/// @param self QStyleOptionButton*
/// @param iconSize QSize*
void q_styleoptionbutton_set_icon_size(void* self, void* iconSize);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionButton*
int32_t q_styleoptionbutton_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionButton*
/// @param version int
void q_styleoptionbutton_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionButton*
int32_t q_styleoptionbutton_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionButton*
/// @param type int
void q_styleoptionbutton_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionButton*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionbutton_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionButton*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionbutton_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionButton*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionbutton_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionButton*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionbutton_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionButton*
QRect* q_styleoptionbutton_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionButton*
/// @param rect QRect*
void q_styleoptionbutton_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionButton*
QFontMetrics* q_styleoptionbutton_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionButton*
/// @param fontMetrics QFontMetrics*
void q_styleoptionbutton_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionButton*
QPalette* q_styleoptionbutton_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionButton*
/// @param palette QPalette*
void q_styleoptionbutton_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionButton*
QObject* q_styleoptionbutton_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionButton*
/// @param styleObject QObject*
void q_styleoptionbutton_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionButton*
/// @param w QWidget*
void q_styleoptionbutton_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionButton*
/// @param other QStyleOption*
void q_styleoptionbutton_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#dtor.QStyleOptionButton)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionButton*
void q_styleoptionbutton_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontab.html

/// q_styleoptiontab_new constructs a new QStyleOptionTab object.
///
QStyleOptionTab* q_styleoptiontab_new();

/// q_styleoptiontab_new2 constructs a new QStyleOptionTab object.
///
/// @param other QStyleOptionTab*
QStyleOptionTab* q_styleoptiontab_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
///
/// @param self QStyleOptionTab*
///
/// @return enum QTabBar__Shape
int32_t q_styleoptiontab_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#shape-var)
///
/// @param self QStyleOptionTab*
/// @param shape enum QTabBar__Shape
void q_styleoptiontab_set_shape(void* self, int32_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionTab*
const char* q_styleoptiontab_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#text-var)
///
/// @param self QStyleOptionTab*
/// @param text const char*
void q_styleoptiontab_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
///
/// @param self QStyleOptionTab*
QIcon* q_styleoptiontab_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#icon-var)
///
/// @param self QStyleOptionTab*
/// @param icon QIcon*
void q_styleoptiontab_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
///
/// @param self QStyleOptionTab*
int32_t q_styleoptiontab_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#row-var)
///
/// @param self QStyleOptionTab*
/// @param row int
void q_styleoptiontab_set_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
///
/// @param self QStyleOptionTab*
///
/// @return enum QStyleOptionTab__TabPosition
int32_t q_styleoptiontab_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#position-var)
///
/// @param self QStyleOptionTab*
/// @param position enum QStyleOptionTab__TabPosition
void q_styleoptiontab_set_position(void* self, int32_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
///
/// @param self QStyleOptionTab*
///
/// @return enum QStyleOptionTab__SelectedPosition
int32_t q_styleoptiontab_selected_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#selectedPosition-var)
///
/// @param self QStyleOptionTab*
/// @param selectedPosition enum QStyleOptionTab__SelectedPosition
void q_styleoptiontab_set_selected_position(void* self, int32_t selectedPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
///
/// @param self QStyleOptionTab*
///
/// @return flag of enum QStyleOptionTab__CornerWidget
int64_t q_styleoptiontab_corner_widgets(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#cornerWidgets-var)
///
/// @param self QStyleOptionTab*
/// @param cornerWidgets flag of enum QStyleOptionTab__CornerWidget
void q_styleoptiontab_set_corner_widgets(void* self, int64_t cornerWidgets);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
///
/// @param self QStyleOptionTab*
QSize* q_styleoptiontab_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#iconSize-var)
///
/// @param self QStyleOptionTab*
/// @param iconSize QSize*
void q_styleoptiontab_set_icon_size(void* self, void* iconSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
///
/// @param self QStyleOptionTab*
bool q_styleoptiontab_document_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#documentMode-var)
///
/// @param self QStyleOptionTab*
/// @param documentMode bool
void q_styleoptiontab_set_document_mode(void* self, bool documentMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
///
/// @param self QStyleOptionTab*
QSize* q_styleoptiontab_left_button_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#leftButtonSize-var)
///
/// @param self QStyleOptionTab*
/// @param leftButtonSize QSize*
void q_styleoptiontab_set_left_button_size(void* self, void* leftButtonSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
///
/// @param self QStyleOptionTab*
QSize* q_styleoptiontab_right_button_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#rightButtonSize-var)
///
/// @param self QStyleOptionTab*
/// @param rightButtonSize QSize*
void q_styleoptiontab_set_right_button_size(void* self, void* rightButtonSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
///
/// @param self QStyleOptionTab*
///
/// @return flag of enum QStyleOptionTab__TabFeature
int64_t q_styleoptiontab_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#features-var)
///
/// @param self QStyleOptionTab*
/// @param features flag of enum QStyleOptionTab__TabFeature
void q_styleoptiontab_set_features(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
///
/// @param self QStyleOptionTab*
int32_t q_styleoptiontab_tab_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#tabIndex-var)
///
/// @param self QStyleOptionTab*
/// @param tabIndex int
void q_styleoptiontab_set_tab_index(void* self, int tabIndex);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTab*
int32_t q_styleoptiontab_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTab*
/// @param version int
void q_styleoptiontab_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTab*
int32_t q_styleoptiontab_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTab*
/// @param type int
void q_styleoptiontab_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTab*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiontab_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTab*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiontab_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTab*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiontab_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTab*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiontab_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTab*
QRect* q_styleoptiontab_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTab*
/// @param rect QRect*
void q_styleoptiontab_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTab*
QFontMetrics* q_styleoptiontab_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTab*
/// @param fontMetrics QFontMetrics*
void q_styleoptiontab_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTab*
QPalette* q_styleoptiontab_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTab*
/// @param palette QPalette*
void q_styleoptiontab_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTab*
QObject* q_styleoptiontab_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTab*
/// @param styleObject QObject*
void q_styleoptiontab_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTab*
/// @param w QWidget*
void q_styleoptiontab_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTab*
/// @param other QStyleOption*
void q_styleoptiontab_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#dtor.QStyleOptionTab)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTab*
void q_styleoptiontab_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbar.html

/// q_styleoptiontoolbar_new constructs a new QStyleOptionToolBar object.
///
QStyleOptionToolBar* q_styleoptiontoolbar_new();

/// q_styleoptiontoolbar_new2 constructs a new QStyleOptionToolBar object.
///
/// @param other QStyleOptionToolBar*
QStyleOptionToolBar* q_styleoptiontoolbar_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
///
/// @param self QStyleOptionToolBar*
///
/// @return enum QStyleOptionToolBar__ToolBarPosition
int32_t q_styleoptiontoolbar_position_of_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionOfLine-var)
///
/// @param self QStyleOptionToolBar*
/// @param positionOfLine enum QStyleOptionToolBar__ToolBarPosition
void q_styleoptiontoolbar_set_position_of_line(void* self, int32_t positionOfLine);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
///
/// @param self QStyleOptionToolBar*
///
/// @return enum QStyleOptionToolBar__ToolBarPosition
int32_t q_styleoptiontoolbar_position_within_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#positionWithinLine-var)
///
/// @param self QStyleOptionToolBar*
/// @param positionWithinLine enum QStyleOptionToolBar__ToolBarPosition
void q_styleoptiontoolbar_set_position_within_line(void* self, int32_t positionWithinLine);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
///
/// @param self QStyleOptionToolBar*
///
/// @return enum Qt__ToolBarArea
int32_t q_styleoptiontoolbar_tool_bar_area(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#toolBarArea-var)
///
/// @param self QStyleOptionToolBar*
/// @param toolBarArea enum Qt__ToolBarArea
void q_styleoptiontoolbar_set_tool_bar_area(void* self, int32_t toolBarArea);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
///
/// @param self QStyleOptionToolBar*
///
/// @return flag of enum QStyleOptionToolBar__ToolBarFeature
int64_t q_styleoptiontoolbar_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#features-var)
///
/// @param self QStyleOptionToolBar*
/// @param features flag of enum QStyleOptionToolBar__ToolBarFeature
void q_styleoptiontoolbar_set_features(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
///
/// @param self QStyleOptionToolBar*
int32_t q_styleoptiontoolbar_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#lineWidth-var)
///
/// @param self QStyleOptionToolBar*
/// @param lineWidth int
void q_styleoptiontoolbar_set_line_width(void* self, int lineWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
///
/// @param self QStyleOptionToolBar*
int32_t q_styleoptiontoolbar_mid_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#midLineWidth-var)
///
/// @param self QStyleOptionToolBar*
/// @param midLineWidth int
void q_styleoptiontoolbar_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionToolBar*
int32_t q_styleoptiontoolbar_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionToolBar*
/// @param version int
void q_styleoptiontoolbar_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionToolBar*
int32_t q_styleoptiontoolbar_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionToolBar*
/// @param type int
void q_styleoptiontoolbar_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionToolBar*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiontoolbar_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionToolBar*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiontoolbar_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionToolBar*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiontoolbar_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionToolBar*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiontoolbar_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionToolBar*
QRect* q_styleoptiontoolbar_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionToolBar*
/// @param rect QRect*
void q_styleoptiontoolbar_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionToolBar*
QFontMetrics* q_styleoptiontoolbar_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionToolBar*
/// @param fontMetrics QFontMetrics*
void q_styleoptiontoolbar_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionToolBar*
QPalette* q_styleoptiontoolbar_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionToolBar*
/// @param palette QPalette*
void q_styleoptiontoolbar_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionToolBar*
QObject* q_styleoptiontoolbar_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionToolBar*
/// @param styleObject QObject*
void q_styleoptiontoolbar_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionToolBar*
/// @param w QWidget*
void q_styleoptiontoolbar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionToolBar*
/// @param other QStyleOption*
void q_styleoptiontoolbar_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#dtor.QStyleOptionToolBar)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionToolBar*
void q_styleoptiontoolbar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionprogressbar.html

/// q_styleoptionprogressbar_new constructs a new QStyleOptionProgressBar object.
///
QStyleOptionProgressBar* q_styleoptionprogressbar_new();

/// q_styleoptionprogressbar_new2 constructs a new QStyleOptionProgressBar object.
///
/// @param other QStyleOptionProgressBar*
QStyleOptionProgressBar* q_styleoptionprogressbar_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
///
/// @param self QStyleOptionProgressBar*
int32_t q_styleoptionprogressbar_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#minimum-var)
///
/// @param self QStyleOptionProgressBar*
/// @param minimum int
void q_styleoptionprogressbar_set_minimum(void* self, int minimum);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
///
/// @param self QStyleOptionProgressBar*
int32_t q_styleoptionprogressbar_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#maximum-var)
///
/// @param self QStyleOptionProgressBar*
/// @param maximum int
void q_styleoptionprogressbar_set_maximum(void* self, int maximum);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
///
/// @param self QStyleOptionProgressBar*
int32_t q_styleoptionprogressbar_progress(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#progress-var)
///
/// @param self QStyleOptionProgressBar*
/// @param progress int
void q_styleoptionprogressbar_set_progress(void* self, int progress);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionProgressBar*
const char* q_styleoptionprogressbar_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#text-var)
///
/// @param self QStyleOptionProgressBar*
/// @param text const char*
void q_styleoptionprogressbar_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
///
/// @param self QStyleOptionProgressBar*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptionprogressbar_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textAlignment-var)
///
/// @param self QStyleOptionProgressBar*
/// @param textAlignment flag of enum Qt__AlignmentFlag
void q_styleoptionprogressbar_set_text_alignment(void* self, int64_t textAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
///
/// @param self QStyleOptionProgressBar*
bool q_styleoptionprogressbar_text_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#textVisible-var)
///
/// @param self QStyleOptionProgressBar*
/// @param textVisible bool
void q_styleoptionprogressbar_set_text_visible(void* self, bool textVisible);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
///
/// @param self QStyleOptionProgressBar*
bool q_styleoptionprogressbar_inverted_appearance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#invertedAppearance-var)
///
/// @param self QStyleOptionProgressBar*
/// @param invertedAppearance bool
void q_styleoptionprogressbar_set_inverted_appearance(void* self, bool invertedAppearance);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
///
/// @param self QStyleOptionProgressBar*
bool q_styleoptionprogressbar_bottom_to_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#bottomToTop-var)
///
/// @param self QStyleOptionProgressBar*
/// @param bottomToTop bool
void q_styleoptionprogressbar_set_bottom_to_top(void* self, bool bottomToTop);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionProgressBar*
int32_t q_styleoptionprogressbar_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionProgressBar*
/// @param version int
void q_styleoptionprogressbar_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionProgressBar*
int32_t q_styleoptionprogressbar_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionProgressBar*
/// @param type int
void q_styleoptionprogressbar_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionProgressBar*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionprogressbar_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionProgressBar*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionprogressbar_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionProgressBar*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionprogressbar_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionProgressBar*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionprogressbar_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionProgressBar*
QRect* q_styleoptionprogressbar_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionProgressBar*
/// @param rect QRect*
void q_styleoptionprogressbar_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionProgressBar*
QFontMetrics* q_styleoptionprogressbar_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionProgressBar*
/// @param fontMetrics QFontMetrics*
void q_styleoptionprogressbar_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionProgressBar*
QPalette* q_styleoptionprogressbar_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionProgressBar*
/// @param palette QPalette*
void q_styleoptionprogressbar_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionProgressBar*
QObject* q_styleoptionprogressbar_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionProgressBar*
/// @param styleObject QObject*
void q_styleoptionprogressbar_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionProgressBar*
/// @param w QWidget*
void q_styleoptionprogressbar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionProgressBar*
/// @param other QStyleOption*
void q_styleoptionprogressbar_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#dtor.QStyleOptionProgressBar)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionProgressBar*
void q_styleoptionprogressbar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionmenuitem.html

/// q_styleoptionmenuitem_new constructs a new QStyleOptionMenuItem object.
///
QStyleOptionMenuItem* q_styleoptionmenuitem_new();

/// q_styleoptionmenuitem_new2 constructs a new QStyleOptionMenuItem object.
///
/// @param other QStyleOptionMenuItem*
QStyleOptionMenuItem* q_styleoptionmenuitem_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
///
/// @param self QStyleOptionMenuItem*
///
/// @return enum QStyleOptionMenuItem__MenuItemType
int32_t q_styleoptionmenuitem_menu_item_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuItemType-var)
///
/// @param self QStyleOptionMenuItem*
/// @param menuItemType enum QStyleOptionMenuItem__MenuItemType
void q_styleoptionmenuitem_set_menu_item_type(void* self, int32_t menuItemType);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
///
/// @param self QStyleOptionMenuItem*
///
/// @return enum QStyleOptionMenuItem__CheckType
int32_t q_styleoptionmenuitem_check_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checkType-var)
///
/// @param self QStyleOptionMenuItem*
/// @param checkType enum QStyleOptionMenuItem__CheckType
void q_styleoptionmenuitem_set_check_type(void* self, int32_t checkType);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
///
/// @param self QStyleOptionMenuItem*
bool q_styleoptionmenuitem_checked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#checked-var)
///
/// @param self QStyleOptionMenuItem*
/// @param checked bool
void q_styleoptionmenuitem_set_checked(void* self, bool checked);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
///
/// @param self QStyleOptionMenuItem*
bool q_styleoptionmenuitem_menu_has_checkable_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuHasCheckableItems-var)
///
/// @param self QStyleOptionMenuItem*
/// @param menuHasCheckableItems bool
void q_styleoptionmenuitem_set_menu_has_checkable_items(void* self, bool menuHasCheckableItems);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
///
/// @param self QStyleOptionMenuItem*
QRect* q_styleoptionmenuitem_menu_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#menuRect-var)
///
/// @param self QStyleOptionMenuItem*
/// @param menuRect QRect*
void q_styleoptionmenuitem_set_menu_rect(void* self, void* menuRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionMenuItem*
const char* q_styleoptionmenuitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#text-var)
///
/// @param self QStyleOptionMenuItem*
/// @param text const char*
void q_styleoptionmenuitem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
///
/// @param self QStyleOptionMenuItem*
QIcon* q_styleoptionmenuitem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#icon-var)
///
/// @param self QStyleOptionMenuItem*
/// @param icon QIcon*
void q_styleoptionmenuitem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
///
/// @param self QStyleOptionMenuItem*
int32_t q_styleoptionmenuitem_max_icon_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#maxIconWidth-var)
///
/// @param self QStyleOptionMenuItem*
/// @param maxIconWidth int
void q_styleoptionmenuitem_set_max_icon_width(void* self, int maxIconWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
///
/// @param self QStyleOptionMenuItem*
int32_t q_styleoptionmenuitem_reserved_shortcut_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#reservedShortcutWidth-var)
///
/// @param self QStyleOptionMenuItem*
/// @param reservedShortcutWidth int
void q_styleoptionmenuitem_set_reserved_shortcut_width(void* self, int reservedShortcutWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
///
/// @param self QStyleOptionMenuItem*
QFont* q_styleoptionmenuitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#font-var)
///
/// @param self QStyleOptionMenuItem*
/// @param font QFont*
void q_styleoptionmenuitem_set_font(void* self, void* font);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionMenuItem*
int32_t q_styleoptionmenuitem_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionMenuItem*
/// @param version int
void q_styleoptionmenuitem_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionMenuItem*
int32_t q_styleoptionmenuitem_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionMenuItem*
/// @param type int
void q_styleoptionmenuitem_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionMenuItem*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionmenuitem_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionMenuItem*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionmenuitem_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionMenuItem*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionmenuitem_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionMenuItem*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionmenuitem_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionMenuItem*
QRect* q_styleoptionmenuitem_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionMenuItem*
/// @param rect QRect*
void q_styleoptionmenuitem_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionMenuItem*
QFontMetrics* q_styleoptionmenuitem_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionMenuItem*
/// @param fontMetrics QFontMetrics*
void q_styleoptionmenuitem_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionMenuItem*
QPalette* q_styleoptionmenuitem_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionMenuItem*
/// @param palette QPalette*
void q_styleoptionmenuitem_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionMenuItem*
QObject* q_styleoptionmenuitem_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionMenuItem*
/// @param styleObject QObject*
void q_styleoptionmenuitem_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionMenuItem*
/// @param w QWidget*
void q_styleoptionmenuitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionMenuItem*
/// @param other QStyleOption*
void q_styleoptionmenuitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#dtor.QStyleOptionMenuItem)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionMenuItem*
void q_styleoptionmenuitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiondockwidget.html

/// q_styleoptiondockwidget_new constructs a new QStyleOptionDockWidget object.
///
QStyleOptionDockWidget* q_styleoptiondockwidget_new();

/// q_styleoptiondockwidget_new2 constructs a new QStyleOptionDockWidget object.
///
/// @param other QStyleOptionDockWidget*
QStyleOptionDockWidget* q_styleoptiondockwidget_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionDockWidget*
const char* q_styleoptiondockwidget_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#title-var)
///
/// @param self QStyleOptionDockWidget*
/// @param title const char*
void q_styleoptiondockwidget_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
///
/// @param self QStyleOptionDockWidget*
bool q_styleoptiondockwidget_closable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#closable-var)
///
/// @param self QStyleOptionDockWidget*
/// @param closable bool
void q_styleoptiondockwidget_set_closable(void* self, bool closable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
///
/// @param self QStyleOptionDockWidget*
bool q_styleoptiondockwidget_movable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#movable-var)
///
/// @param self QStyleOptionDockWidget*
/// @param movable bool
void q_styleoptiondockwidget_set_movable(void* self, bool movable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
///
/// @param self QStyleOptionDockWidget*
bool q_styleoptiondockwidget_floatable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#floatable-var)
///
/// @param self QStyleOptionDockWidget*
/// @param floatable bool
void q_styleoptiondockwidget_set_floatable(void* self, bool floatable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
///
/// @param self QStyleOptionDockWidget*
bool q_styleoptiondockwidget_vertical_title_bar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#verticalTitleBar-var)
///
/// @param self QStyleOptionDockWidget*
/// @param verticalTitleBar bool
void q_styleoptiondockwidget_set_vertical_title_bar(void* self, bool verticalTitleBar);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionDockWidget*
int32_t q_styleoptiondockwidget_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionDockWidget*
/// @param version int
void q_styleoptiondockwidget_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionDockWidget*
int32_t q_styleoptiondockwidget_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionDockWidget*
/// @param type int
void q_styleoptiondockwidget_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionDockWidget*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiondockwidget_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionDockWidget*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiondockwidget_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionDockWidget*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiondockwidget_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionDockWidget*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiondockwidget_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionDockWidget*
QRect* q_styleoptiondockwidget_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionDockWidget*
/// @param rect QRect*
void q_styleoptiondockwidget_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionDockWidget*
QFontMetrics* q_styleoptiondockwidget_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionDockWidget*
/// @param fontMetrics QFontMetrics*
void q_styleoptiondockwidget_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionDockWidget*
QPalette* q_styleoptiondockwidget_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionDockWidget*
/// @param palette QPalette*
void q_styleoptiondockwidget_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionDockWidget*
QObject* q_styleoptiondockwidget_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionDockWidget*
/// @param styleObject QObject*
void q_styleoptiondockwidget_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionDockWidget*
/// @param w QWidget*
void q_styleoptiondockwidget_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionDockWidget*
/// @param other QStyleOption*
void q_styleoptiondockwidget_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#dtor.QStyleOptionDockWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionDockWidget*
void q_styleoptiondockwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionviewitem.html

/// q_styleoptionviewitem_new constructs a new QStyleOptionViewItem object.
///
QStyleOptionViewItem* q_styleoptionviewitem_new();

/// q_styleoptionviewitem_new2 constructs a new QStyleOptionViewItem object.
///
/// @param other QStyleOptionViewItem*
QStyleOptionViewItem* q_styleoptionviewitem_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptionviewitem_display_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#displayAlignment-var)
///
/// @param self QStyleOptionViewItem*
/// @param displayAlignment flag of enum Qt__AlignmentFlag
void q_styleoptionviewitem_set_display_alignment(void* self, int64_t displayAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptionviewitem_decoration_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationAlignment-var)
///
/// @param self QStyleOptionViewItem*
/// @param decorationAlignment flag of enum Qt__AlignmentFlag
void q_styleoptionviewitem_set_decoration_alignment(void* self, int64_t decorationAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return enum Qt__TextElideMode
int32_t q_styleoptionviewitem_text_elide_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#textElideMode-var)
///
/// @param self QStyleOptionViewItem*
/// @param textElideMode enum Qt__TextElideMode
void q_styleoptionviewitem_set_text_elide_mode(void* self, int32_t textElideMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return enum QStyleOptionViewItem__Position
int32_t q_styleoptionviewitem_decoration_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationPosition-var)
///
/// @param self QStyleOptionViewItem*
/// @param decorationPosition enum QStyleOptionViewItem__Position
void q_styleoptionviewitem_set_decoration_position(void* self, int32_t decorationPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
///
/// @param self QStyleOptionViewItem*
QSize* q_styleoptionviewitem_decoration_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#decorationSize-var)
///
/// @param self QStyleOptionViewItem*
/// @param decorationSize QSize*
void q_styleoptionviewitem_set_decoration_size(void* self, void* decorationSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
///
/// @param self QStyleOptionViewItem*
QFont* q_styleoptionviewitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#font-var)
///
/// @param self QStyleOptionViewItem*
/// @param font QFont*
void q_styleoptionviewitem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
///
/// @param self QStyleOptionViewItem*
bool q_styleoptionviewitem_show_decoration_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#showDecorationSelected-var)
///
/// @param self QStyleOptionViewItem*
/// @param showDecorationSelected bool
void q_styleoptionviewitem_set_show_decoration_selected(void* self, bool showDecorationSelected);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return flag of enum QStyleOptionViewItem__ViewItemFeature
int64_t q_styleoptionviewitem_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#features-var)
///
/// @param self QStyleOptionViewItem*
/// @param features flag of enum QStyleOptionViewItem__ViewItemFeature
void q_styleoptionviewitem_set_features(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
///
/// @param self QStyleOptionViewItem*
QLocale* q_styleoptionviewitem_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#locale-var)
///
/// @param self QStyleOptionViewItem*
/// @param locale QLocale*
void q_styleoptionviewitem_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
///
/// @param self QStyleOptionViewItem*
const QWidget* q_styleoptionviewitem_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#widget-var)
///
/// @param self QStyleOptionViewItem*
/// @param widget QWidget*
void q_styleoptionviewitem_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
///
/// @param self QStyleOptionViewItem*
QModelIndex* q_styleoptionviewitem_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#index-var)
///
/// @param self QStyleOptionViewItem*
/// @param index QModelIndex*
void q_styleoptionviewitem_set_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return enum Qt__CheckState
int32_t q_styleoptionviewitem_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#checkState-var)
///
/// @param self QStyleOptionViewItem*
/// @param checkState enum Qt__CheckState
void q_styleoptionviewitem_set_check_state(void* self, int32_t checkState);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
///
/// @param self QStyleOptionViewItem*
QIcon* q_styleoptionviewitem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#icon-var)
///
/// @param self QStyleOptionViewItem*
/// @param icon QIcon*
void q_styleoptionviewitem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionViewItem*
const char* q_styleoptionviewitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#text-var)
///
/// @param self QStyleOptionViewItem*
/// @param text const char*
void q_styleoptionviewitem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return enum QStyleOptionViewItem__ViewItemPosition
int32_t q_styleoptionviewitem_view_item_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#viewItemPosition-var)
///
/// @param self QStyleOptionViewItem*
/// @param viewItemPosition enum QStyleOptionViewItem__ViewItemPosition
void q_styleoptionviewitem_set_view_item_position(void* self, int32_t viewItemPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
///
/// @param self QStyleOptionViewItem*
QBrush* q_styleoptionviewitem_background_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#backgroundBrush-var)
///
/// @param self QStyleOptionViewItem*
/// @param backgroundBrush QBrush*
void q_styleoptionviewitem_set_background_brush(void* self, void* backgroundBrush);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionViewItem*
int32_t q_styleoptionviewitem_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionViewItem*
/// @param version int
void q_styleoptionviewitem_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionViewItem*
int32_t q_styleoptionviewitem_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionViewItem*
/// @param type int
void q_styleoptionviewitem_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionviewitem_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionViewItem*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionviewitem_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionViewItem*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionviewitem_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionViewItem*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionviewitem_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionViewItem*
QRect* q_styleoptionviewitem_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionViewItem*
/// @param rect QRect*
void q_styleoptionviewitem_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionViewItem*
QFontMetrics* q_styleoptionviewitem_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionViewItem*
/// @param fontMetrics QFontMetrics*
void q_styleoptionviewitem_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionViewItem*
QPalette* q_styleoptionviewitem_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionViewItem*
/// @param palette QPalette*
void q_styleoptionviewitem_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionViewItem*
QObject* q_styleoptionviewitem_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionViewItem*
/// @param styleObject QObject*
void q_styleoptionviewitem_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionViewItem*
/// @param w QWidget*
void q_styleoptionviewitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionViewItem*
/// @param other QStyleOption*
void q_styleoptionviewitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#dtor.QStyleOptionViewItem)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionViewItem*
void q_styleoptionviewitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbox.html

/// q_styleoptiontoolbox_new constructs a new QStyleOptionToolBox object.
///
QStyleOptionToolBox* q_styleoptiontoolbox_new();

/// q_styleoptiontoolbox_new2 constructs a new QStyleOptionToolBox object.
///
/// @param other QStyleOptionToolBox*
QStyleOptionToolBox* q_styleoptiontoolbox_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionToolBox*
const char* q_styleoptiontoolbox_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#text-var)
///
/// @param self QStyleOptionToolBox*
/// @param text const char*
void q_styleoptiontoolbox_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
///
/// @param self QStyleOptionToolBox*
QIcon* q_styleoptiontoolbox_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#icon-var)
///
/// @param self QStyleOptionToolBox*
/// @param icon QIcon*
void q_styleoptiontoolbox_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
///
/// @param self QStyleOptionToolBox*
///
/// @return enum QStyleOptionToolBox__TabPosition
int32_t q_styleoptiontoolbox_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#position-var)
///
/// @param self QStyleOptionToolBox*
/// @param position enum QStyleOptionToolBox__TabPosition
void q_styleoptiontoolbox_set_position(void* self, int32_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
///
/// @param self QStyleOptionToolBox*
///
/// @return enum QStyleOptionToolBox__SelectedPosition
int32_t q_styleoptiontoolbox_selected_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#selectedPosition-var)
///
/// @param self QStyleOptionToolBox*
/// @param selectedPosition enum QStyleOptionToolBox__SelectedPosition
void q_styleoptiontoolbox_set_selected_position(void* self, int32_t selectedPosition);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionToolBox*
int32_t q_styleoptiontoolbox_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionToolBox*
/// @param version int
void q_styleoptiontoolbox_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionToolBox*
int32_t q_styleoptiontoolbox_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionToolBox*
/// @param type int
void q_styleoptiontoolbox_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionToolBox*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiontoolbox_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionToolBox*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiontoolbox_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionToolBox*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiontoolbox_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionToolBox*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiontoolbox_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionToolBox*
QRect* q_styleoptiontoolbox_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionToolBox*
/// @param rect QRect*
void q_styleoptiontoolbox_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionToolBox*
QFontMetrics* q_styleoptiontoolbox_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionToolBox*
/// @param fontMetrics QFontMetrics*
void q_styleoptiontoolbox_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionToolBox*
QPalette* q_styleoptiontoolbox_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionToolBox*
/// @param palette QPalette*
void q_styleoptiontoolbox_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionToolBox*
QObject* q_styleoptiontoolbox_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionToolBox*
/// @param styleObject QObject*
void q_styleoptiontoolbox_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionToolBox*
/// @param w QWidget*
void q_styleoptiontoolbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionToolBox*
/// @param other QStyleOption*
void q_styleoptiontoolbox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#dtor.QStyleOptionToolBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionToolBox*
void q_styleoptiontoolbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionrubberband.html

/// q_styleoptionrubberband_new constructs a new QStyleOptionRubberBand object.
///
QStyleOptionRubberBand* q_styleoptionrubberband_new();

/// q_styleoptionrubberband_new2 constructs a new QStyleOptionRubberBand object.
///
/// @param other QStyleOptionRubberBand*
QStyleOptionRubberBand* q_styleoptionrubberband_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
///
/// @param self QStyleOptionRubberBand*
///
/// @return enum QRubberBand__Shape
int32_t q_styleoptionrubberband_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#shape-var)
///
/// @param self QStyleOptionRubberBand*
/// @param shape enum QRubberBand__Shape
void q_styleoptionrubberband_set_shape(void* self, int32_t shape);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
///
/// @param self QStyleOptionRubberBand*
bool q_styleoptionrubberband_opaque(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#opaque-var)
///
/// @param self QStyleOptionRubberBand*
/// @param opaque bool
void q_styleoptionrubberband_set_opaque(void* self, bool opaque);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionRubberBand*
int32_t q_styleoptionrubberband_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionRubberBand*
/// @param version int
void q_styleoptionrubberband_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionRubberBand*
int32_t q_styleoptionrubberband_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionRubberBand*
/// @param type int
void q_styleoptionrubberband_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionRubberBand*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionrubberband_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionRubberBand*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionrubberband_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionRubberBand*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionrubberband_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionRubberBand*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionrubberband_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionRubberBand*
QRect* q_styleoptionrubberband_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionRubberBand*
/// @param rect QRect*
void q_styleoptionrubberband_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionRubberBand*
QFontMetrics* q_styleoptionrubberband_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionRubberBand*
/// @param fontMetrics QFontMetrics*
void q_styleoptionrubberband_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionRubberBand*
QPalette* q_styleoptionrubberband_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionRubberBand*
/// @param palette QPalette*
void q_styleoptionrubberband_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionRubberBand*
QObject* q_styleoptionrubberband_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionRubberBand*
/// @param styleObject QObject*
void q_styleoptionrubberband_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionRubberBand*
/// @param w QWidget*
void q_styleoptionrubberband_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionRubberBand*
/// @param other QStyleOption*
void q_styleoptionrubberband_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#dtor.QStyleOptionRubberBand)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionRubberBand*
void q_styleoptionrubberband_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptioncomplex.html

/// q_styleoptioncomplex_new constructs a new QStyleOptionComplex object.
///
QStyleOptionComplex* q_styleoptioncomplex_new();

/// q_styleoptioncomplex_new2 constructs a new QStyleOptionComplex object.
///
/// @param other QStyleOptionComplex*
QStyleOptionComplex* q_styleoptioncomplex_new2(void* other);

/// q_styleoptioncomplex_new3 constructs a new QStyleOptionComplex object.
///
/// @param version int
QStyleOptionComplex* q_styleoptioncomplex_new3(int version);

/// q_styleoptioncomplex_new4 constructs a new QStyleOptionComplex object.
///
/// @param version int
/// @param typeVal int
QStyleOptionComplex* q_styleoptioncomplex_new4(int version, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionComplex*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptioncomplex_sub_controls(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionComplex*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptioncomplex_set_sub_controls(void* self, int64_t subControls);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionComplex*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptioncomplex_active_sub_controls(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionComplex*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptioncomplex_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionComplex*
int32_t q_styleoptioncomplex_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionComplex*
/// @param version int
void q_styleoptioncomplex_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionComplex*
int32_t q_styleoptioncomplex_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionComplex*
/// @param type int
void q_styleoptioncomplex_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionComplex*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptioncomplex_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionComplex*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptioncomplex_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionComplex*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptioncomplex_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionComplex*
/// @param direction enum Qt__LayoutDirection
void q_styleoptioncomplex_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionComplex*
QRect* q_styleoptioncomplex_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionComplex*
/// @param rect QRect*
void q_styleoptioncomplex_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionComplex*
QFontMetrics* q_styleoptioncomplex_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionComplex*
/// @param fontMetrics QFontMetrics*
void q_styleoptioncomplex_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionComplex*
QPalette* q_styleoptioncomplex_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionComplex*
/// @param palette QPalette*
void q_styleoptioncomplex_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionComplex*
QObject* q_styleoptioncomplex_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionComplex*
/// @param styleObject QObject*
void q_styleoptioncomplex_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionComplex*
/// @param w QWidget*
void q_styleoptioncomplex_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionComplex*
/// @param other QStyleOption*
void q_styleoptioncomplex_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#dtor.QStyleOptionComplex)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionComplex*
void q_styleoptioncomplex_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionslider.html

/// q_styleoptionslider_new constructs a new QStyleOptionSlider object.
///
QStyleOptionSlider* q_styleoptionslider_new();

/// q_styleoptionslider_new2 constructs a new QStyleOptionSlider object.
///
/// @param other QStyleOptionSlider*
QStyleOptionSlider* q_styleoptionslider_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
///
/// @param self QStyleOptionSlider*
///
/// @return enum Qt__Orientation
int32_t q_styleoptionslider_orientation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#orientation-var)
///
/// @param self QStyleOptionSlider*
/// @param orientation enum Qt__Orientation
void q_styleoptionslider_set_orientation(void* self, int32_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_minimum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#minimum-var)
///
/// @param self QStyleOptionSlider*
/// @param minimum int
void q_styleoptionslider_set_minimum(void* self, int minimum);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_maximum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#maximum-var)
///
/// @param self QStyleOptionSlider*
/// @param maximum int
void q_styleoptionslider_set_maximum(void* self, int maximum);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
///
/// @param self QStyleOptionSlider*
///
/// @return enum QSlider__TickPosition
int32_t q_styleoptionslider_tick_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickPosition-var)
///
/// @param self QStyleOptionSlider*
/// @param tickPosition enum QSlider__TickPosition
void q_styleoptionslider_set_tick_position(void* self, int32_t tickPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_tick_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#tickInterval-var)
///
/// @param self QStyleOptionSlider*
/// @param tickInterval int
void q_styleoptionslider_set_tick_interval(void* self, int tickInterval);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
///
/// @param self QStyleOptionSlider*
bool q_styleoptionslider_upside_down(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#upsideDown-var)
///
/// @param self QStyleOptionSlider*
/// @param upsideDown bool
void q_styleoptionslider_set_upside_down(void* self, bool upsideDown);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_slider_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderPosition-var)
///
/// @param self QStyleOptionSlider*
/// @param sliderPosition int
void q_styleoptionslider_set_slider_position(void* self, int sliderPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_slider_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#sliderValue-var)
///
/// @param self QStyleOptionSlider*
/// @param sliderValue int
void q_styleoptionslider_set_slider_value(void* self, int sliderValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_single_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#singleStep-var)
///
/// @param self QStyleOptionSlider*
/// @param singleStep int
void q_styleoptionslider_set_single_step(void* self, int singleStep);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_page_step(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#pageStep-var)
///
/// @param self QStyleOptionSlider*
/// @param pageStep int
void q_styleoptionslider_set_page_step(void* self, int pageStep);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
///
/// @param self QStyleOptionSlider*
double q_styleoptionslider_notch_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#notchTarget-var)
///
/// @param self QStyleOptionSlider*
/// @param notchTarget double
void q_styleoptionslider_set_notch_target(void* self, double notchTarget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
///
/// @param self QStyleOptionSlider*
bool q_styleoptionslider_dial_wrapping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dialWrapping-var)
///
/// @param self QStyleOptionSlider*
/// @param dialWrapping bool
void q_styleoptionslider_set_dial_wrapping(void* self, bool dialWrapping);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
///
/// @param self QStyleOptionSlider*
///
/// @return flag of enum Qt__KeyboardModifier
int64_t q_styleoptionslider_keyboard_modifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#keyboardModifiers-var)
///
/// @param self QStyleOptionSlider*
/// @param keyboardModifiers flag of enum Qt__KeyboardModifier
void q_styleoptionslider_set_keyboard_modifiers(void* self, int64_t keyboardModifiers);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionSlider*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptionslider_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionSlider*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptionslider_set_sub_controls(void* self, int64_t subControls);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionSlider*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptionslider_active_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionSlider*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptionslider_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionSlider*
/// @param version int
void q_styleoptionslider_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionSlider*
int32_t q_styleoptionslider_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionSlider*
/// @param type int
void q_styleoptionslider_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionSlider*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionslider_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionSlider*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionslider_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionSlider*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionslider_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionSlider*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionslider_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionSlider*
QRect* q_styleoptionslider_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionSlider*
/// @param rect QRect*
void q_styleoptionslider_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionSlider*
QFontMetrics* q_styleoptionslider_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionSlider*
/// @param fontMetrics QFontMetrics*
void q_styleoptionslider_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionSlider*
QPalette* q_styleoptionslider_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionSlider*
/// @param palette QPalette*
void q_styleoptionslider_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionSlider*
QObject* q_styleoptionslider_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionSlider*
/// @param styleObject QObject*
void q_styleoptionslider_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionSlider*
/// @param w QWidget*
void q_styleoptionslider_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionSlider*
/// @param other QStyleOption*
void q_styleoptionslider_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dtor.QStyleOptionSlider)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionSlider*
void q_styleoptionslider_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionspinbox.html

/// q_styleoptionspinbox_new constructs a new QStyleOptionSpinBox object.
///
QStyleOptionSpinBox* q_styleoptionspinbox_new();

/// q_styleoptionspinbox_new2 constructs a new QStyleOptionSpinBox object.
///
/// @param other QStyleOptionSpinBox*
QStyleOptionSpinBox* q_styleoptionspinbox_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
///
/// @param self QStyleOptionSpinBox*
///
/// @return enum QAbstractSpinBox__ButtonSymbols
int32_t q_styleoptionspinbox_button_symbols(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#buttonSymbols-var)
///
/// @param self QStyleOptionSpinBox*
/// @param buttonSymbols enum QAbstractSpinBox__ButtonSymbols
void q_styleoptionspinbox_set_button_symbols(void* self, int32_t buttonSymbols);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
///
/// @param self QStyleOptionSpinBox*
///
/// @return flag of enum QAbstractSpinBox__StepEnabledFlag
int64_t q_styleoptionspinbox_step_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#stepEnabled-var)
///
/// @param self QStyleOptionSpinBox*
/// @param stepEnabled flag of enum QAbstractSpinBox__StepEnabledFlag
void q_styleoptionspinbox_set_step_enabled(void* self, int64_t stepEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
///
/// @param self QStyleOptionSpinBox*
bool q_styleoptionspinbox_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#frame-var)
///
/// @param self QStyleOptionSpinBox*
/// @param frame bool
void q_styleoptionspinbox_set_frame(void* self, bool frame);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionSpinBox*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptionspinbox_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionSpinBox*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptionspinbox_set_sub_controls(void* self, int64_t subControls);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionSpinBox*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptionspinbox_active_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionSpinBox*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptionspinbox_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionSpinBox*
int32_t q_styleoptionspinbox_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionSpinBox*
/// @param version int
void q_styleoptionspinbox_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionSpinBox*
int32_t q_styleoptionspinbox_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionSpinBox*
/// @param type int
void q_styleoptionspinbox_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionSpinBox*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionspinbox_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionSpinBox*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionspinbox_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionSpinBox*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionspinbox_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionSpinBox*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionspinbox_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionSpinBox*
QRect* q_styleoptionspinbox_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionSpinBox*
/// @param rect QRect*
void q_styleoptionspinbox_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionSpinBox*
QFontMetrics* q_styleoptionspinbox_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionSpinBox*
/// @param fontMetrics QFontMetrics*
void q_styleoptionspinbox_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionSpinBox*
QPalette* q_styleoptionspinbox_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionSpinBox*
/// @param palette QPalette*
void q_styleoptionspinbox_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionSpinBox*
QObject* q_styleoptionspinbox_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionSpinBox*
/// @param styleObject QObject*
void q_styleoptionspinbox_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionSpinBox*
/// @param w QWidget*
void q_styleoptionspinbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionSpinBox*
/// @param other QStyleOption*
void q_styleoptionspinbox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#dtor.QStyleOptionSpinBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionSpinBox*
void q_styleoptionspinbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html

/// q_styleoptiontoolbutton_new constructs a new QStyleOptionToolButton object.
///
QStyleOptionToolButton* q_styleoptiontoolbutton_new();

/// q_styleoptiontoolbutton_new2 constructs a new QStyleOptionToolButton object.
///
/// @param other QStyleOptionToolButton*
QStyleOptionToolButton* q_styleoptiontoolbutton_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
///
/// @param self QStyleOptionToolButton*
///
/// @return flag of enum QStyleOptionToolButton__ToolButtonFeature
int64_t q_styleoptiontoolbutton_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#features-var)
///
/// @param self QStyleOptionToolButton*
/// @param features flag of enum QStyleOptionToolButton__ToolButtonFeature
void q_styleoptiontoolbutton_set_features(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
///
/// @param self QStyleOptionToolButton*
QIcon* q_styleoptiontoolbutton_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#icon-var)
///
/// @param self QStyleOptionToolButton*
/// @param icon QIcon*
void q_styleoptiontoolbutton_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
///
/// @param self QStyleOptionToolButton*
QSize* q_styleoptiontoolbutton_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#iconSize-var)
///
/// @param self QStyleOptionToolButton*
/// @param iconSize QSize*
void q_styleoptiontoolbutton_set_icon_size(void* self, void* iconSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionToolButton*
const char* q_styleoptiontoolbutton_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#text-var)
///
/// @param self QStyleOptionToolButton*
/// @param text const char*
void q_styleoptiontoolbutton_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
///
/// @param self QStyleOptionToolButton*
///
/// @return enum Qt__ArrowType
int32_t q_styleoptiontoolbutton_arrow_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#arrowType-var)
///
/// @param self QStyleOptionToolButton*
/// @param arrowType enum Qt__ArrowType
void q_styleoptiontoolbutton_set_arrow_type(void* self, int32_t arrowType);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
///
/// @param self QStyleOptionToolButton*
///
/// @return enum Qt__ToolButtonStyle
int32_t q_styleoptiontoolbutton_tool_button_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#toolButtonStyle-var)
///
/// @param self QStyleOptionToolButton*
/// @param toolButtonStyle enum Qt__ToolButtonStyle
void q_styleoptiontoolbutton_set_tool_button_style(void* self, int32_t toolButtonStyle);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
///
/// @param self QStyleOptionToolButton*
QPoint* q_styleoptiontoolbutton_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#pos-var)
///
/// @param self QStyleOptionToolButton*
/// @param pos QPoint*
void q_styleoptiontoolbutton_set_pos(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
///
/// @param self QStyleOptionToolButton*
QFont* q_styleoptiontoolbutton_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#font-var)
///
/// @param self QStyleOptionToolButton*
/// @param font QFont*
void q_styleoptiontoolbutton_set_font(void* self, void* font);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionToolButton*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptiontoolbutton_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionToolButton*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptiontoolbutton_set_sub_controls(void* self, int64_t subControls);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionToolButton*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptiontoolbutton_active_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionToolButton*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptiontoolbutton_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionToolButton*
int32_t q_styleoptiontoolbutton_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionToolButton*
/// @param version int
void q_styleoptiontoolbutton_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionToolButton*
int32_t q_styleoptiontoolbutton_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionToolButton*
/// @param type int
void q_styleoptiontoolbutton_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionToolButton*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiontoolbutton_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionToolButton*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiontoolbutton_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionToolButton*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiontoolbutton_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionToolButton*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiontoolbutton_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionToolButton*
QRect* q_styleoptiontoolbutton_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionToolButton*
/// @param rect QRect*
void q_styleoptiontoolbutton_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionToolButton*
QFontMetrics* q_styleoptiontoolbutton_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionToolButton*
/// @param fontMetrics QFontMetrics*
void q_styleoptiontoolbutton_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionToolButton*
QPalette* q_styleoptiontoolbutton_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionToolButton*
/// @param palette QPalette*
void q_styleoptiontoolbutton_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionToolButton*
QObject* q_styleoptiontoolbutton_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionToolButton*
/// @param styleObject QObject*
void q_styleoptiontoolbutton_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionToolButton*
/// @param w QWidget*
void q_styleoptiontoolbutton_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionToolButton*
/// @param other QStyleOption*
void q_styleoptiontoolbutton_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#dtor.QStyleOptionToolButton)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionToolButton*
void q_styleoptiontoolbutton_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptioncombobox.html

/// q_styleoptioncombobox_new constructs a new QStyleOptionComboBox object.
///
QStyleOptionComboBox* q_styleoptioncombobox_new();

/// q_styleoptioncombobox_new2 constructs a new QStyleOptionComboBox object.
///
/// @param other QStyleOptionComboBox*
QStyleOptionComboBox* q_styleoptioncombobox_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
///
/// @param self QStyleOptionComboBox*
bool q_styleoptioncombobox_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#editable-var)
///
/// @param self QStyleOptionComboBox*
/// @param editable bool
void q_styleoptioncombobox_set_editable(void* self, bool editable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
///
/// @param self QStyleOptionComboBox*
QRect* q_styleoptioncombobox_popup_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#popupRect-var)
///
/// @param self QStyleOptionComboBox*
/// @param popupRect QRect*
void q_styleoptioncombobox_set_popup_rect(void* self, void* popupRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
///
/// @param self QStyleOptionComboBox*
bool q_styleoptioncombobox_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#frame-var)
///
/// @param self QStyleOptionComboBox*
/// @param frame bool
void q_styleoptioncombobox_set_frame(void* self, bool frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionComboBox*
const char* q_styleoptioncombobox_current_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentText-var)
///
/// @param self QStyleOptionComboBox*
/// @param currentText const char*
void q_styleoptioncombobox_set_current_text(void* self, const char* currentText);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
///
/// @param self QStyleOptionComboBox*
QIcon* q_styleoptioncombobox_current_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#currentIcon-var)
///
/// @param self QStyleOptionComboBox*
/// @param currentIcon QIcon*
void q_styleoptioncombobox_set_current_icon(void* self, void* currentIcon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
///
/// @param self QStyleOptionComboBox*
QSize* q_styleoptioncombobox_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#iconSize-var)
///
/// @param self QStyleOptionComboBox*
/// @param iconSize QSize*
void q_styleoptioncombobox_set_icon_size(void* self, void* iconSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
///
/// @param self QStyleOptionComboBox*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptioncombobox_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#textAlignment-var)
///
/// @param self QStyleOptionComboBox*
/// @param textAlignment flag of enum Qt__AlignmentFlag
void q_styleoptioncombobox_set_text_alignment(void* self, int64_t textAlignment);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionComboBox*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptioncombobox_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionComboBox*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptioncombobox_set_sub_controls(void* self, int64_t subControls);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionComboBox*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptioncombobox_active_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionComboBox*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptioncombobox_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionComboBox*
int32_t q_styleoptioncombobox_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionComboBox*
/// @param version int
void q_styleoptioncombobox_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionComboBox*
int32_t q_styleoptioncombobox_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionComboBox*
/// @param type int
void q_styleoptioncombobox_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionComboBox*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptioncombobox_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionComboBox*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptioncombobox_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionComboBox*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptioncombobox_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionComboBox*
/// @param direction enum Qt__LayoutDirection
void q_styleoptioncombobox_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionComboBox*
QRect* q_styleoptioncombobox_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionComboBox*
/// @param rect QRect*
void q_styleoptioncombobox_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionComboBox*
QFontMetrics* q_styleoptioncombobox_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionComboBox*
/// @param fontMetrics QFontMetrics*
void q_styleoptioncombobox_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionComboBox*
QPalette* q_styleoptioncombobox_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionComboBox*
/// @param palette QPalette*
void q_styleoptioncombobox_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionComboBox*
QObject* q_styleoptioncombobox_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionComboBox*
/// @param styleObject QObject*
void q_styleoptioncombobox_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionComboBox*
/// @param w QWidget*
void q_styleoptioncombobox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionComboBox*
/// @param other QStyleOption*
void q_styleoptioncombobox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#dtor.QStyleOptionComboBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionComboBox*
void q_styleoptioncombobox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontitlebar.html

/// q_styleoptiontitlebar_new constructs a new QStyleOptionTitleBar object.
///
QStyleOptionTitleBar* q_styleoptiontitlebar_new();

/// q_styleoptiontitlebar_new2 constructs a new QStyleOptionTitleBar object.
///
/// @param other QStyleOptionTitleBar*
QStyleOptionTitleBar* q_styleoptiontitlebar_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionTitleBar*
const char* q_styleoptiontitlebar_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#text-var)
///
/// @param self QStyleOptionTitleBar*
/// @param text const char*
void q_styleoptiontitlebar_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
///
/// @param self QStyleOptionTitleBar*
QIcon* q_styleoptiontitlebar_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#icon-var)
///
/// @param self QStyleOptionTitleBar*
/// @param icon QIcon*
void q_styleoptiontitlebar_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
///
/// @param self QStyleOptionTitleBar*
int32_t q_styleoptiontitlebar_title_bar_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarState-var)
///
/// @param self QStyleOptionTitleBar*
/// @param titleBarState int
void q_styleoptiontitlebar_set_title_bar_state(void* self, int titleBarState);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
///
/// @param self QStyleOptionTitleBar*
///
/// @return flag of enum Qt__WindowType
int64_t q_styleoptiontitlebar_title_bar_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#titleBarFlags-var)
///
/// @param self QStyleOptionTitleBar*
/// @param titleBarFlags flag of enum Qt__WindowType
void q_styleoptiontitlebar_set_title_bar_flags(void* self, int64_t titleBarFlags);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionTitleBar*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptiontitlebar_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionTitleBar*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptiontitlebar_set_sub_controls(void* self, int64_t subControls);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionTitleBar*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptiontitlebar_active_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionTitleBar*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptiontitlebar_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTitleBar*
int32_t q_styleoptiontitlebar_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionTitleBar*
/// @param version int
void q_styleoptiontitlebar_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTitleBar*
int32_t q_styleoptiontitlebar_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionTitleBar*
/// @param type int
void q_styleoptiontitlebar_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTitleBar*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiontitlebar_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionTitleBar*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiontitlebar_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTitleBar*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiontitlebar_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionTitleBar*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiontitlebar_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTitleBar*
QRect* q_styleoptiontitlebar_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionTitleBar*
/// @param rect QRect*
void q_styleoptiontitlebar_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTitleBar*
QFontMetrics* q_styleoptiontitlebar_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionTitleBar*
/// @param fontMetrics QFontMetrics*
void q_styleoptiontitlebar_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTitleBar*
QPalette* q_styleoptiontitlebar_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionTitleBar*
/// @param palette QPalette*
void q_styleoptiontitlebar_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTitleBar*
QObject* q_styleoptiontitlebar_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionTitleBar*
/// @param styleObject QObject*
void q_styleoptiontitlebar_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTitleBar*
/// @param w QWidget*
void q_styleoptiontitlebar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTitleBar*
/// @param other QStyleOption*
void q_styleoptiontitlebar_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#dtor.QStyleOptionTitleBar)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTitleBar*
void q_styleoptiontitlebar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiongroupbox.html

/// q_styleoptiongroupbox_new constructs a new QStyleOptionGroupBox object.
///
QStyleOptionGroupBox* q_styleoptiongroupbox_new();

/// q_styleoptiongroupbox_new2 constructs a new QStyleOptionGroupBox object.
///
/// @param other QStyleOptionGroupBox*
QStyleOptionGroupBox* q_styleoptiongroupbox_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
///
/// @param self QStyleOptionGroupBox*
///
/// @return flag of enum QStyleOptionFrame__FrameFeature
int64_t q_styleoptiongroupbox_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#features-var)
///
/// @param self QStyleOptionGroupBox*
/// @param features flag of enum QStyleOptionFrame__FrameFeature
void q_styleoptiongroupbox_set_features(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyleOptionGroupBox*
const char* q_styleoptiongroupbox_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#text-var)
///
/// @param self QStyleOptionGroupBox*
/// @param text const char*
void q_styleoptiongroupbox_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
///
/// @param self QStyleOptionGroupBox*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_styleoptiongroupbox_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textAlignment-var)
///
/// @param self QStyleOptionGroupBox*
/// @param textAlignment flag of enum Qt__AlignmentFlag
void q_styleoptiongroupbox_set_text_alignment(void* self, int64_t textAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
///
/// @param self QStyleOptionGroupBox*
QColor* q_styleoptiongroupbox_text_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#textColor-var)
///
/// @param self QStyleOptionGroupBox*
/// @param textColor QColor*
void q_styleoptiongroupbox_set_text_color(void* self, void* textColor);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
///
/// @param self QStyleOptionGroupBox*
int32_t q_styleoptiongroupbox_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#lineWidth-var)
///
/// @param self QStyleOptionGroupBox*
/// @param lineWidth int
void q_styleoptiongroupbox_set_line_width(void* self, int lineWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
///
/// @param self QStyleOptionGroupBox*
int32_t q_styleoptiongroupbox_mid_line_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#midLineWidth-var)
///
/// @param self QStyleOptionGroupBox*
/// @param midLineWidth int
void q_styleoptiongroupbox_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionGroupBox*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptiongroupbox_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionGroupBox*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptiongroupbox_set_sub_controls(void* self, int64_t subControls);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionGroupBox*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptiongroupbox_active_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionGroupBox*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptiongroupbox_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionGroupBox*
int32_t q_styleoptiongroupbox_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionGroupBox*
/// @param version int
void q_styleoptiongroupbox_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionGroupBox*
int32_t q_styleoptiongroupbox_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionGroupBox*
/// @param type int
void q_styleoptiongroupbox_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionGroupBox*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiongroupbox_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionGroupBox*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiongroupbox_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionGroupBox*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiongroupbox_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionGroupBox*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiongroupbox_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionGroupBox*
QRect* q_styleoptiongroupbox_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionGroupBox*
/// @param rect QRect*
void q_styleoptiongroupbox_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionGroupBox*
QFontMetrics* q_styleoptiongroupbox_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionGroupBox*
/// @param fontMetrics QFontMetrics*
void q_styleoptiongroupbox_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionGroupBox*
QPalette* q_styleoptiongroupbox_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionGroupBox*
/// @param palette QPalette*
void q_styleoptiongroupbox_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionGroupBox*
QObject* q_styleoptiongroupbox_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionGroupBox*
/// @param styleObject QObject*
void q_styleoptiongroupbox_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionGroupBox*
/// @param w QWidget*
void q_styleoptiongroupbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionGroupBox*
/// @param other QStyleOption*
void q_styleoptiongroupbox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#dtor.QStyleOptionGroupBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionGroupBox*
void q_styleoptiongroupbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionsizegrip.html

/// q_styleoptionsizegrip_new constructs a new QStyleOptionSizeGrip object.
///
QStyleOptionSizeGrip* q_styleoptionsizegrip_new();

/// q_styleoptionsizegrip_new2 constructs a new QStyleOptionSizeGrip object.
///
/// @param other QStyleOptionSizeGrip*
QStyleOptionSizeGrip* q_styleoptionsizegrip_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
///
/// @param self QStyleOptionSizeGrip*
///
/// @return enum Qt__Corner
int32_t q_styleoptionsizegrip_corner(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#corner-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param corner enum Qt__Corner
void q_styleoptionsizegrip_set_corner(void* self, int32_t corner);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionSizeGrip*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptionsizegrip_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#subControls-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param subControls flag of enum QStyle__SubControl
void q_styleoptionsizegrip_set_sub_controls(void* self, int64_t subControls);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionSizeGrip*
///
/// @return flag of enum QStyle__SubControl
int64_t q_styleoptionsizegrip_active_sub_controls(void* self);

/// Inherited from QStyleOptionComplex
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#activeSubControls-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param activeSubControls flag of enum QStyle__SubControl
void q_styleoptionsizegrip_set_active_sub_controls(void* self, int64_t activeSubControls);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionSizeGrip*
int32_t q_styleoptionsizegrip_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param version int
void q_styleoptionsizegrip_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionSizeGrip*
int32_t q_styleoptionsizegrip_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param type int
void q_styleoptionsizegrip_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionSizeGrip*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptionsizegrip_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptionsizegrip_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionSizeGrip*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptionsizegrip_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param direction enum Qt__LayoutDirection
void q_styleoptionsizegrip_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionSizeGrip*
QRect* q_styleoptionsizegrip_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param rect QRect*
void q_styleoptionsizegrip_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionSizeGrip*
QFontMetrics* q_styleoptionsizegrip_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param fontMetrics QFontMetrics*
void q_styleoptionsizegrip_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionSizeGrip*
QPalette* q_styleoptionsizegrip_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param palette QPalette*
void q_styleoptionsizegrip_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionSizeGrip*
QObject* q_styleoptionsizegrip_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionSizeGrip*
/// @param styleObject QObject*
void q_styleoptionsizegrip_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionSizeGrip*
/// @param w QWidget*
void q_styleoptionsizegrip_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionSizeGrip*
/// @param other QStyleOption*
void q_styleoptionsizegrip_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#dtor.QStyleOptionSizeGrip)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionSizeGrip*
void q_styleoptionsizegrip_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html

/// q_styleoptiongraphicsitem_new constructs a new QStyleOptionGraphicsItem object.
///
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new();

/// q_styleoptiongraphicsitem_new2 constructs a new QStyleOptionGraphicsItem object.
///
/// @param other QStyleOptionGraphicsItem*
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
///
/// @param self QStyleOptionGraphicsItem*
QRectF* q_styleoptiongraphicsitem_exposed_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#exposedRect-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param exposedRect QRectF*
void q_styleoptiongraphicsitem_set_exposed_rect(void* self, void* exposedRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
///
/// @param worldTransform QTransform*
double q_styleoptiongraphicsitem_level_of_detail_from_transform(void* worldTransform);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionGraphicsItem*
int32_t q_styleoptiongraphicsitem_version(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#version-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param version int
void q_styleoptiongraphicsitem_set_version(void* self, int version);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionGraphicsItem*
int32_t q_styleoptiongraphicsitem_type(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#type-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param type int
void q_styleoptiongraphicsitem_set_type(void* self, int _type);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionGraphicsItem*
///
/// @return flag of enum QStyle__StateFlag
int64_t q_styleoptiongraphicsitem_state(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#state-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param state flag of enum QStyle__StateFlag
void q_styleoptiongraphicsitem_set_state(void* self, int64_t state);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionGraphicsItem*
///
/// @return enum Qt__LayoutDirection
int32_t q_styleoptiongraphicsitem_direction(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#direction-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param direction enum Qt__LayoutDirection
void q_styleoptiongraphicsitem_set_direction(void* self, int32_t direction);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionGraphicsItem*
QRect* q_styleoptiongraphicsitem_rect(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#rect-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param rect QRect*
void q_styleoptiongraphicsitem_set_rect(void* self, void* rect);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionGraphicsItem*
QFontMetrics* q_styleoptiongraphicsitem_font_metrics(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#fontMetrics-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param fontMetrics QFontMetrics*
void q_styleoptiongraphicsitem_set_font_metrics(void* self, void* fontMetrics);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionGraphicsItem*
QPalette* q_styleoptiongraphicsitem_palette(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#palette-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param palette QPalette*
void q_styleoptiongraphicsitem_set_palette(void* self, void* palette);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionGraphicsItem*
QObject* q_styleoptiongraphicsitem_style_object(void* self);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#styleObject-var)
///
/// @param self QStyleOptionGraphicsItem*
/// @param styleObject QObject*
void q_styleoptiongraphicsitem_set_style_object(void* self, void* styleObject);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionGraphicsItem*
/// @param w QWidget*
void q_styleoptiongraphicsitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionGraphicsItem*
/// @param other QStyleOption*
void q_styleoptiongraphicsitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#dtor.QStyleOptionGraphicsItem)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionGraphicsItem*
void q_styleoptiongraphicsitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturn.html

/// q_stylehintreturn_new constructs a new QStyleHintReturn object.
///
QStyleHintReturn* q_stylehintreturn_new();

/// q_stylehintreturn_new2 constructs a new QStyleHintReturn object.
///
/// @param param1 QStyleHintReturn*
QStyleHintReturn* q_stylehintreturn_new2(void* param1);

/// q_stylehintreturn_new3 constructs a new QStyleHintReturn object.
///
/// @param version int
QStyleHintReturn* q_stylehintreturn_new3(int version);

/// q_stylehintreturn_new4 constructs a new QStyleHintReturn object.
///
/// @param version int
/// @param typeVal int
QStyleHintReturn* q_stylehintreturn_new4(int version, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
///
/// @param self QStyleHintReturn*
int32_t q_stylehintreturn_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
///
/// @param self QStyleHintReturn*
/// @param version int
void q_stylehintreturn_set_version(void* self, int version);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
///
/// @param self QStyleHintReturn*
int32_t q_stylehintreturn_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
///
/// @param self QStyleHintReturn*
/// @param type int
void q_stylehintreturn_set_type(void* self, int _type);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#operator-eq)
///
/// @param self QStyleHintReturn*
/// @param param1 QStyleHintReturn*
void q_stylehintreturn_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#dtor.QStyleHintReturn)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHintReturn*
void q_stylehintreturn_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturnmask.html

/// q_stylehintreturnmask_new constructs a new QStyleHintReturnMask object.
///
QStyleHintReturnMask* q_stylehintreturnmask_new();

/// q_stylehintreturnmask_new2 constructs a new QStyleHintReturnMask object.
///
/// @param param1 QStyleHintReturnMask*
QStyleHintReturnMask* q_stylehintreturnmask_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
///
/// @param self QStyleHintReturnMask*
QRegion* q_stylehintreturnmask_region(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#region-var)
///
/// @param self QStyleHintReturnMask*
/// @param region QRegion*
void q_stylehintreturnmask_set_region(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator-eq)
///
/// @param self QStyleHintReturnMask*
/// @param param1 QStyleHintReturnMask*
void q_stylehintreturnmask_operator_assign(void* self, void* param1);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
///
/// @param self QStyleHintReturnMask*
int32_t q_stylehintreturnmask_version(void* self);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
///
/// @param self QStyleHintReturnMask*
/// @param version int
void q_stylehintreturnmask_set_version(void* self, int version);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
///
/// @param self QStyleHintReturnMask*
int32_t q_stylehintreturnmask_type(void* self);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
///
/// @param self QStyleHintReturnMask*
/// @param type int
void q_stylehintreturnmask_set_type(void* self, int _type);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#dtor.QStyleHintReturnMask)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHintReturnMask*
void q_stylehintreturnmask_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturnvariant.html

/// q_stylehintreturnvariant_new constructs a new QStyleHintReturnVariant object.
///
QStyleHintReturnVariant* q_stylehintreturnvariant_new();

/// q_stylehintreturnvariant_new2 constructs a new QStyleHintReturnVariant object.
///
/// @param param1 QStyleHintReturnVariant*
QStyleHintReturnVariant* q_stylehintreturnvariant_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
///
/// @param self QStyleHintReturnVariant*
QVariant* q_stylehintreturnvariant_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#variant-var)
///
/// @param self QStyleHintReturnVariant*
/// @param variant QVariant*
void q_stylehintreturnvariant_set_variant(void* self, void* variant);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator-eq)
///
/// @param self QStyleHintReturnVariant*
/// @param param1 QStyleHintReturnVariant*
void q_stylehintreturnvariant_operator_assign(void* self, void* param1);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
///
/// @param self QStyleHintReturnVariant*
int32_t q_stylehintreturnvariant_version(void* self);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#version-var)
///
/// @param self QStyleHintReturnVariant*
/// @param version int
void q_stylehintreturnvariant_set_version(void* self, int version);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
///
/// @param self QStyleHintReturnVariant*
int32_t q_stylehintreturnvariant_type(void* self);

/// Inherited from QStyleHintReturn
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#type-var)
///
/// @param self QStyleHintReturnVariant*
/// @param type int
void q_stylehintreturnvariant_set_type(void* self, int _type);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#dtor.QStyleHintReturnVariant)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHintReturnVariant*
void q_stylehintreturnvariant_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoption.html#types

typedef enum {
    QSTYLEOPTION_OPTIONTYPE_SO_DEFAULT = 0,
    QSTYLEOPTION_OPTIONTYPE_SO_FOCUSRECT = 1,
    QSTYLEOPTION_OPTIONTYPE_SO_BUTTON = 2,
    QSTYLEOPTION_OPTIONTYPE_SO_TAB = 3,
    QSTYLEOPTION_OPTIONTYPE_SO_MENUITEM = 4,
    QSTYLEOPTION_OPTIONTYPE_SO_FRAME = 5,
    QSTYLEOPTION_OPTIONTYPE_SO_PROGRESSBAR = 6,
    QSTYLEOPTION_OPTIONTYPE_SO_TOOLBOX = 7,
    QSTYLEOPTION_OPTIONTYPE_SO_HEADER = 8,
    QSTYLEOPTION_OPTIONTYPE_SO_DOCKWIDGET = 9,
    QSTYLEOPTION_OPTIONTYPE_SO_VIEWITEM = 10,
    QSTYLEOPTION_OPTIONTYPE_SO_TABWIDGETFRAME = 11,
    QSTYLEOPTION_OPTIONTYPE_SO_TABBARBASE = 12,
    QSTYLEOPTION_OPTIONTYPE_SO_RUBBERBAND = 13,
    QSTYLEOPTION_OPTIONTYPE_SO_TOOLBAR = 14,
    QSTYLEOPTION_OPTIONTYPE_SO_GRAPHICSITEM = 15,
    QSTYLEOPTION_OPTIONTYPE_SO_COMPLEX = 983040,
    QSTYLEOPTION_OPTIONTYPE_SO_SLIDER = 983041,
    QSTYLEOPTION_OPTIONTYPE_SO_SPINBOX = 983042,
    QSTYLEOPTION_OPTIONTYPE_SO_TOOLBUTTON = 983043,
    QSTYLEOPTION_OPTIONTYPE_SO_COMBOBOX = 983044,
    QSTYLEOPTION_OPTIONTYPE_SO_TITLEBAR = 983045,
    QSTYLEOPTION_OPTIONTYPE_SO_GROUPBOX = 983046,
    QSTYLEOPTION_OPTIONTYPE_SO_SIZEGRIP = 983047,
    QSTYLEOPTION_OPTIONTYPE_SO_CUSTOMBASE = 3840,
    QSTYLEOPTION_OPTIONTYPE_SO_COMPLEXCUSTOMBASE = 251658240
} QStyleOption__OptionType;

typedef enum {
    QSTYLEOPTION_STYLEOPTIONTYPE_TYPE = 0
} QStyleOption__StyleOptionType;

typedef enum {
    QSTYLEOPTION_STYLEOPTIONVERSION_VERSION = 1
} QStyleOption__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONFOCUSRECT_STYLEOPTIONTYPE_TYPE = 1
} QStyleOptionFocusRect__StyleOptionType;

typedef enum {
    QSTYLEOPTIONFOCUSRECT_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionFocusRect__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONFRAME_STYLEOPTIONTYPE_TYPE = 5
} QStyleOptionFrame__StyleOptionType;

typedef enum {
    QSTYLEOPTIONFRAME_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionFrame__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONFRAME_FRAMEFEATURE_NONE = 0,
    QSTYLEOPTIONFRAME_FRAMEFEATURE_FLAT = 1,
    QSTYLEOPTIONFRAME_FRAMEFEATURE_ROUNDED = 2
} QStyleOptionFrame__FrameFeature;

typedef enum {
    QSTYLEOPTIONTABWIDGETFRAME_STYLEOPTIONTYPE_TYPE = 11
} QStyleOptionTabWidgetFrame__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTABWIDGETFRAME_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTabWidgetFrame__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTABBARBASE_STYLEOPTIONTYPE_TYPE = 12
} QStyleOptionTabBarBase__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTABBARBASE_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTabBarBase__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONHEADER_STYLEOPTIONTYPE_TYPE = 8
} QStyleOptionHeader__StyleOptionType;

typedef enum {
    QSTYLEOPTIONHEADER_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionHeader__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONHEADER_SECTIONPOSITION_BEGINNING = 0,
    QSTYLEOPTIONHEADER_SECTIONPOSITION_MIDDLE = 1,
    QSTYLEOPTIONHEADER_SECTIONPOSITION_END = 2,
    QSTYLEOPTIONHEADER_SECTIONPOSITION_ONLYONESECTION = 3
} QStyleOptionHeader__SectionPosition;

typedef enum {
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_NOTADJACENT = 0,
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_NEXTISSELECTED = 1,
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_PREVIOUSISSELECTED = 2,
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_NEXTANDPREVIOUSARESELECTED = 3
} QStyleOptionHeader__SelectedPosition;

typedef enum {
    QSTYLEOPTIONHEADER_SORTINDICATOR_NONE = 0,
    QSTYLEOPTIONHEADER_SORTINDICATOR_SORTUP = 1,
    QSTYLEOPTIONHEADER_SORTINDICATOR_SORTDOWN = 2
} QStyleOptionHeader__SortIndicator;

typedef enum {
    QSTYLEOPTIONHEADERV2_STYLEOPTIONTYPE_TYPE = 8
} QStyleOptionHeaderV2__StyleOptionType;

typedef enum {
    QSTYLEOPTIONHEADERV2_STYLEOPTIONVERSION_VERSION = 2
} QStyleOptionHeaderV2__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONBUTTON_STYLEOPTIONTYPE_TYPE = 2
} QStyleOptionButton__StyleOptionType;

typedef enum {
    QSTYLEOPTIONBUTTON_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionButton__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_NONE = 0,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_FLAT = 1,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_HASMENU = 2,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_DEFAULTBUTTON = 4,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_AUTODEFAULTBUTTON = 8,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_COMMANDLINKBUTTON = 16
} QStyleOptionButton__ButtonFeature;

typedef enum {
    QSTYLEOPTIONTAB_STYLEOPTIONTYPE_TYPE = 3
} QStyleOptionTab__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTAB_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTab__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTAB_TABPOSITION_BEGINNING = 0,
    QSTYLEOPTIONTAB_TABPOSITION_MIDDLE = 1,
    QSTYLEOPTIONTAB_TABPOSITION_END = 2,
    QSTYLEOPTIONTAB_TABPOSITION_ONLYONETAB = 3,
    QSTYLEOPTIONTAB_TABPOSITION_MOVING = 4
} QStyleOptionTab__TabPosition;

typedef enum {
    QSTYLEOPTIONTAB_SELECTEDPOSITION_NOTADJACENT = 0,
    QSTYLEOPTIONTAB_SELECTEDPOSITION_NEXTISSELECTED = 1,
    QSTYLEOPTIONTAB_SELECTEDPOSITION_PREVIOUSISSELECTED = 2
} QStyleOptionTab__SelectedPosition;

typedef enum {
    QSTYLEOPTIONTAB_CORNERWIDGET_NOCORNERWIDGETS = 0,
    QSTYLEOPTIONTAB_CORNERWIDGET_LEFTCORNERWIDGET = 1,
    QSTYLEOPTIONTAB_CORNERWIDGET_RIGHTCORNERWIDGET = 2
} QStyleOptionTab__CornerWidget;

typedef enum {
    QSTYLEOPTIONTAB_TABFEATURE_NONE = 0,
    QSTYLEOPTIONTAB_TABFEATURE_HASFRAME = 1
} QStyleOptionTab__TabFeature;

typedef enum {
    QSTYLEOPTIONTOOLBAR_STYLEOPTIONTYPE_TYPE = 14
} QStyleOptionToolBar__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTOOLBAR_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionToolBar__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_BEGINNING = 0,
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_MIDDLE = 1,
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_END = 2,
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_ONLYONE = 3
} QStyleOptionToolBar__ToolBarPosition;

typedef enum {
    QSTYLEOPTIONTOOLBAR_TOOLBARFEATURE_NONE = 0,
    QSTYLEOPTIONTOOLBAR_TOOLBARFEATURE_MOVABLE = 1
} QStyleOptionToolBar__ToolBarFeature;

typedef enum {
    QSTYLEOPTIONPROGRESSBAR_STYLEOPTIONTYPE_TYPE = 6
} QStyleOptionProgressBar__StyleOptionType;

typedef enum {
    QSTYLEOPTIONPROGRESSBAR_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionProgressBar__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONMENUITEM_STYLEOPTIONTYPE_TYPE = 4
} QStyleOptionMenuItem__StyleOptionType;

typedef enum {
    QSTYLEOPTIONMENUITEM_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionMenuItem__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_NORMAL = 0,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_DEFAULTITEM = 1,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_SEPARATOR = 2,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_SUBMENU = 3,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_SCROLLER = 4,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_TEAROFF = 5,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_MARGIN = 6,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_EMPTYAREA = 7
} QStyleOptionMenuItem__MenuItemType;

typedef enum {
    QSTYLEOPTIONMENUITEM_CHECKTYPE_NOTCHECKABLE = 0,
    QSTYLEOPTIONMENUITEM_CHECKTYPE_EXCLUSIVE = 1,
    QSTYLEOPTIONMENUITEM_CHECKTYPE_NONEXCLUSIVE = 2
} QStyleOptionMenuItem__CheckType;

typedef enum {
    QSTYLEOPTIONDOCKWIDGET_STYLEOPTIONTYPE_TYPE = 9
} QStyleOptionDockWidget__StyleOptionType;

typedef enum {
    QSTYLEOPTIONDOCKWIDGET_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionDockWidget__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONVIEWITEM_STYLEOPTIONTYPE_TYPE = 10
} QStyleOptionViewItem__StyleOptionType;

typedef enum {
    QSTYLEOPTIONVIEWITEM_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionViewItem__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONVIEWITEM_POSITION_LEFT = 0,
    QSTYLEOPTIONVIEWITEM_POSITION_RIGHT = 1,
    QSTYLEOPTIONVIEWITEM_POSITION_TOP = 2,
    QSTYLEOPTIONVIEWITEM_POSITION_BOTTOM = 3
} QStyleOptionViewItem__Position;

typedef enum {
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_NONE = 0,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_WRAPTEXT = 1,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_ALTERNATE = 2,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_HASCHECKINDICATOR = 4,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_HASDISPLAY = 8,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_HASDECORATION = 16
} QStyleOptionViewItem__ViewItemFeature;

typedef enum {
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_INVALID = 0,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_BEGINNING = 1,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_MIDDLE = 2,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_END = 3,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_ONLYONE = 4
} QStyleOptionViewItem__ViewItemPosition;

typedef enum {
    QSTYLEOPTIONTOOLBOX_STYLEOPTIONTYPE_TYPE = 7
} QStyleOptionToolBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTOOLBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionToolBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBOX_TABPOSITION_BEGINNING = 0,
    QSTYLEOPTIONTOOLBOX_TABPOSITION_MIDDLE = 1,
    QSTYLEOPTIONTOOLBOX_TABPOSITION_END = 2,
    QSTYLEOPTIONTOOLBOX_TABPOSITION_ONLYONETAB = 3
} QStyleOptionToolBox__TabPosition;

typedef enum {
    QSTYLEOPTIONTOOLBOX_SELECTEDPOSITION_NOTADJACENT = 0,
    QSTYLEOPTIONTOOLBOX_SELECTEDPOSITION_NEXTISSELECTED = 1,
    QSTYLEOPTIONTOOLBOX_SELECTEDPOSITION_PREVIOUSISSELECTED = 2
} QStyleOptionToolBox__SelectedPosition;

typedef enum {
    QSTYLEOPTIONRUBBERBAND_STYLEOPTIONTYPE_TYPE = 13
} QStyleOptionRubberBand__StyleOptionType;

typedef enum {
    QSTYLEOPTIONRUBBERBAND_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionRubberBand__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONCOMPLEX_STYLEOPTIONTYPE_TYPE = 983040
} QStyleOptionComplex__StyleOptionType;

typedef enum {
    QSTYLEOPTIONCOMPLEX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionComplex__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONSLIDER_STYLEOPTIONTYPE_TYPE = 983041
} QStyleOptionSlider__StyleOptionType;

typedef enum {
    QSTYLEOPTIONSLIDER_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionSlider__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONSPINBOX_STYLEOPTIONTYPE_TYPE = 983042
} QStyleOptionSpinBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONSPINBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionSpinBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBUTTON_STYLEOPTIONTYPE_TYPE = 983043
} QStyleOptionToolButton__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTOOLBUTTON_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionToolButton__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_NONE = 0,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_ARROW = 1,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_MENU = 4,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_MENUBUTTONPOPUP = 4,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_POPUPDELAY = 8,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_HASMENU = 16
} QStyleOptionToolButton__ToolButtonFeature;

typedef enum {
    QSTYLEOPTIONCOMBOBOX_STYLEOPTIONTYPE_TYPE = 983044
} QStyleOptionComboBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONCOMBOBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionComboBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTITLEBAR_STYLEOPTIONTYPE_TYPE = 983045
} QStyleOptionTitleBar__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTITLEBAR_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTitleBar__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONGROUPBOX_STYLEOPTIONTYPE_TYPE = 983046
} QStyleOptionGroupBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONGROUPBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionGroupBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONSIZEGRIP_STYLEOPTIONTYPE_TYPE = 983047
} QStyleOptionSizeGrip__StyleOptionType;

typedef enum {
    QSTYLEOPTIONSIZEGRIP_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionSizeGrip__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONGRAPHICSITEM_STYLEOPTIONTYPE_TYPE = 15
} QStyleOptionGraphicsItem__StyleOptionType;

typedef enum {
    QSTYLEOPTIONGRAPHICSITEM_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionGraphicsItem__StyleOptionVersion;

typedef enum {
    QSTYLEHINTRETURN_HINTRETURNTYPE_SH_DEFAULT = 61440,
    QSTYLEHINTRETURN_HINTRETURNTYPE_SH_MASK = 61441,
    QSTYLEHINTRETURN_HINTRETURNTYPE_SH_VARIANT = 61442
} QStyleHintReturn__HintReturnType;

typedef enum {
    QSTYLEHINTRETURN_STYLEOPTIONTYPE_TYPE = 61440
} QStyleHintReturn__StyleOptionType;

typedef enum {
    QSTYLEHINTRETURN_STYLEOPTIONVERSION_VERSION = 1
} QStyleHintReturn__StyleOptionVersion;

typedef enum {
    QSTYLEHINTRETURNMASK_STYLEOPTIONTYPE_TYPE = 61441
} QStyleHintReturnMask__StyleOptionType;

typedef enum {
    QSTYLEHINTRETURNMASK_STYLEOPTIONVERSION_VERSION = 1
} QStyleHintReturnMask__StyleOptionVersion;

typedef enum {
    QSTYLEHINTRETURNVARIANT_STYLEOPTIONTYPE_TYPE = 61442
} QStyleHintReturnVariant__StyleOptionType;

typedef enum {
    QSTYLEHINTRETURNVARIANT_STYLEOPTIONVERSION_VERSION = 1
} QStyleHintReturnVariant__StyleOptionVersion;

#endif
