#pragma once
#ifndef SRC_QT6C_LIBQCOMMONSTYLE_H
#define SRC_QT6C_LIBQCOMMONSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html)

/// q_commonstyle_new constructs a new QCommonStyle object.
///
QCommonStyle* q_commonstyle_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCommonStyle*
///
const QMetaObject* q_commonstyle_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback const QMetaObject* func()
///
void q_commonstyle_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
///
const QMetaObject* q_commonstyle_qbase_meta_object(void* self);

/// @param self QCommonStyle*
/// @param param1 const char*
///
void* q_commonstyle_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void* func(QCommonStyle* self, const char* param1)
///
void q_commonstyle_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param param1 const char*
///
void* q_commonstyle_qbase_metacast(void* self, const char* param1);

/// @param self QCommonStyle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_commonstyle_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_commonstyle_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_commonstyle_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_commonstyle_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// @param self QCommonStyle*
/// @param pe enum QStyle__PrimitiveElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_draw_primitive(void* self, int32_t pe, void* opt, void* p, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w)
///
void q_commonstyle_on_draw_primitive(void* self, void (*callback)(void*, int32_t, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param pe enum QStyle__PrimitiveElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_qbase_draw_primitive(void* self, int32_t pe, void* opt, void* p, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// @param self QCommonStyle*
/// @param element enum QStyle__ControlElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_draw_control(void* self, int32_t element, void* opt, void* p, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w)
///
void q_commonstyle_on_draw_control(void* self, void (*callback)(void*, int32_t, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param element enum QStyle__ControlElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_qbase_draw_control(void* self, int32_t element, void* opt, void* p, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// @param self QCommonStyle*
/// @param r enum QStyle__SubElement
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QRect* q_commonstyle_sub_element_rect(void* self, int32_t r, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(QCommonStyle* self, enum QStyle__SubElement r, QStyleOption* opt, QWidget* widget)
///
void q_commonstyle_on_sub_element_rect(void* self, QRect* (*callback)(void*, int32_t, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param r enum QStyle__SubElement
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QRect* q_commonstyle_qbase_sub_element_rect(void* self, int32_t r, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// @param self QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_draw_complex_control(void* self, int32_t cc, void* opt, void* p, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w)
///
void q_commonstyle_on_draw_complex_control(void* self, void (*callback)(void*, int32_t, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_qbase_draw_complex_control(void* self, int32_t cc, void* opt, void* p, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// @param self QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param pt QPoint*
/// @param w QWidget*
///
/// @return enum QStyle__SubControl
///
int32_t q_commonstyle_hit_test_complex_control(void* self, int32_t cc, void* opt, void* pt, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w)
///
void q_commonstyle_on_hit_test_complex_control(void* self, int32_t (*callback)(void*, int32_t, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param pt QPoint*
/// @param w QWidget*
///
/// @return enum QStyle__SubControl
///
int32_t q_commonstyle_qbase_hit_test_complex_control(void* self, int32_t cc, void* opt, void* pt, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// @param self QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param w QWidget*
///
QRect* q_commonstyle_sub_control_rect(void* self, int32_t cc, void* opt, int32_t sc, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* w)
///
void q_commonstyle_on_sub_control_rect(void* self, QRect* (*callback)(void*, int32_t, void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param w QWidget*
///
QRect* q_commonstyle_qbase_sub_control_rect(void* self, int32_t cc, void* opt, int32_t sc, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// @param self QCommonStyle*
/// @param ct enum QStyle__ContentsType
/// @param opt QStyleOption*
/// @param contentsSize QSize*
/// @param widget QWidget*
///
QSize* q_commonstyle_size_from_contents(void* self, int32_t ct, void* opt, void* contentsSize, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QSize* func(QCommonStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget)
///
void q_commonstyle_on_size_from_contents(void* self, QSize* (*callback)(void*, int32_t, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param ct enum QStyle__ContentsType
/// @param opt QStyleOption*
/// @param contentsSize QSize*
/// @param widget QWidget*
///
QSize* q_commonstyle_qbase_size_from_contents(void* self, int32_t ct, void* opt, void* contentsSize, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// @param self QCommonStyle*
/// @param m enum QStyle__PixelMetric
/// @param opt QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_pixel_metric(void* self, int32_t m, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self, enum QStyle__PixelMetric m, QStyleOption* opt, QWidget* widget)
///
void q_commonstyle_on_pixel_metric(void* self, int32_t (*callback)(void*, int32_t, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param m enum QStyle__PixelMetric
/// @param opt QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_qbase_pixel_metric(void* self, int32_t m, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// @param self QCommonStyle*
/// @param sh enum QStyle__StyleHint
/// @param opt QStyleOption*
/// @param w QWidget*
/// @param shret QStyleHintReturn*
///
int32_t q_commonstyle_style_hint(void* self, int32_t sh, void* opt, void* w, void* shret);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self, enum QStyle__StyleHint sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret)
///
void q_commonstyle_on_style_hint(void* self, int32_t (*callback)(void*, int32_t, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param sh enum QStyle__StyleHint
/// @param opt QStyleOption*
/// @param w QWidget*
/// @param shret QStyleHintReturn*
///
int32_t q_commonstyle_qbase_style_hint(void* self, int32_t sh, void* opt, void* w, void* shret);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// @param self QCommonStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QIcon* q_commonstyle_standard_icon(void* self, int32_t standardIcon, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QIcon* func(QCommonStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* opt, QWidget* widget)
///
void q_commonstyle_on_standard_icon(void* self, QIcon* (*callback)(void*, int32_t, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QIcon* q_commonstyle_qbase_standard_icon(void* self, int32_t standardIcon, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// @param self QCommonStyle*
/// @param sp enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QPixmap* q_commonstyle_standard_pixmap(void* self, int32_t sp, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QPixmap* func(QCommonStyle* self, enum QStyle__StandardPixmap sp, QStyleOption* opt, QWidget* widget)
///
void q_commonstyle_on_standard_pixmap(void* self, QPixmap* (*callback)(void*, int32_t, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param sp enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QPixmap* q_commonstyle_qbase_standard_pixmap(void* self, int32_t sp, void* opt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// @param self QCommonStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
///
QPixmap* q_commonstyle_generated_icon_pixmap(void* self, int32_t iconMode, void* pixmap, void* opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QPixmap* func(QCommonStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt)
///
void q_commonstyle_on_generated_icon_pixmap(void* self, QPixmap* (*callback)(void*, int32_t, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
///
QPixmap* q_commonstyle_qbase_generated_icon_pixmap(void* self, int32_t iconMode, void* pixmap, void* opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// @param self QCommonStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_layout_spacing(void* self, int32_t control1, int32_t control2, int32_t orientation, void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget)
///
void q_commonstyle_on_layout_spacing(void* self, int32_t (*callback)(void*, int32_t, int32_t, int32_t, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_qbase_layout_spacing(void* self, int32_t control1, int32_t control2, int32_t orientation, void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// @param self QCommonStyle*
/// @param param1 QPalette*
///
void q_commonstyle_polish(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QPalette* param1)
///
void q_commonstyle_on_polish(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param param1 QPalette*
///
void q_commonstyle_qbase_polish(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// @param self QCommonStyle*
/// @param app QApplication*
///
void q_commonstyle_polish2(void* self, void* app);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QApplication* app)
///
void q_commonstyle_on_polish2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param app QApplication*
///
void q_commonstyle_qbase_polish2(void* self, void* app);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// @param self QCommonStyle*
/// @param widget QWidget*
///
void q_commonstyle_polish3(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QWidget* widget)
///
void q_commonstyle_on_polish3(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param widget QWidget*
///
void q_commonstyle_qbase_polish3(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// @param self QCommonStyle*
/// @param widget QWidget*
///
void q_commonstyle_unpolish(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QWidget* widget)
///
void q_commonstyle_on_unpolish(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param widget QWidget*
///
void q_commonstyle_qbase_unpolish(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// @param self QCommonStyle*
/// @param application QApplication*
///
void q_commonstyle_unpolish2(void* self, void* application);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QApplication* application)
///
void q_commonstyle_on_unpolish2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// Base class method implementation
///
/// @param self QCommonStyle*
/// @param application QApplication*
///
void q_commonstyle_qbase_unpolish2(void* self, void* application);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_commonstyle_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_commonstyle_tr3(const char* s, const char* c, int n);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCommonStyle*
///
const char* q_commonstyle_name(void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalRect QRect*
///
QRect* q_commonstyle_visual_rect(int32_t direction, void* boundingRect, void* logicalRect);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalPos QPoint*
///
QPoint* q_commonstyle_visual_pos(int32_t direction, void* boundingRect, void* logicalPos);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// @param min int
/// @param max int
/// @param val int
/// @param space int
///
int32_t q_commonstyle_slider_position_from_value(int min, int max, int val, int space);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// @param min int
/// @param max int
/// @param pos int
/// @param space int
///
int32_t q_commonstyle_slider_value_from_position(int min, int max, int pos, int space);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// @param direction enum Qt__LayoutDirection
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_commonstyle_visual_alignment(int32_t direction, int32_t alignment);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// @param direction enum Qt__LayoutDirection
/// @param alignment flag of enum Qt__AlignmentFlag
/// @param size QSize*
/// @param rectangle QRect*
///
QRect* q_commonstyle_aligned_rect(int32_t direction, int32_t alignment, void* size, void* rectangle);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self QCommonStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
///
int32_t q_commonstyle_combined_layout_spacing(void* self, int32_t controls1, int32_t controls2, int32_t orientation);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// @param self QCommonStyle*
///
const QStyle* q_commonstyle_proxy(void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// @param min int
/// @param max int
/// @param val int
/// @param space int
/// @param upsideDown bool
///
int32_t q_commonstyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// @param min int
/// @param max int
/// @param pos int
/// @param space int
/// @param upsideDown bool
///
int32_t q_commonstyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self QCommonStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
///
int32_t q_commonstyle_combined_layout_spacing4(void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self QCommonStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_combined_layout_spacing5(void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option, void* widget);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QCommonStyle*
///
const char* q_commonstyle_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCommonStyle*
/// @param name const char*
///
void q_commonstyle_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCommonStyle*
///
bool q_commonstyle_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCommonStyle*
///
bool q_commonstyle_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCommonStyle*
///
bool q_commonstyle_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCommonStyle*
///
bool q_commonstyle_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCommonStyle*
/// @param b bool
///
bool q_commonstyle_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCommonStyle*
///
QThread* q_commonstyle_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCommonStyle*
/// @param thread QThread*
///
bool q_commonstyle_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommonStyle*
/// @param interval int
///
int32_t q_commonstyle_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommonStyle*
/// @param time int64_t of nanoseconds
///
int32_t q_commonstyle_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCommonStyle*
/// @param id int
///
void q_commonstyle_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCommonStyle*
/// @param id enum Qt__TimerId
///
void q_commonstyle_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCommonStyle*
///
/// @return libqt_list of QObject*
///
libqt_list q_commonstyle_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCommonStyle*
/// @param parent QObject*
///
void q_commonstyle_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCommonStyle*
/// @param filterObj QObject*
///
void q_commonstyle_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCommonStyle*
/// @param obj QObject*
///
void q_commonstyle_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_commonstyle_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_commonstyle_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCommonStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_commonstyle_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commonstyle_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_commonstyle_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QCommonStyle*
///
bool q_commonstyle_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QCommonStyle*
/// @param receiver QObject*
///
bool q_commonstyle_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_commonstyle_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCommonStyle*
///
void q_commonstyle_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCommonStyle*
///
void q_commonstyle_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCommonStyle*
/// @param name const char*
/// @param value QVariant*
///
bool q_commonstyle_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCommonStyle*
/// @param name const char*
///
QVariant* q_commonstyle_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QCommonStyle*
///
const char** q_commonstyle_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCommonStyle*
///
QBindingStorage* q_commonstyle_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCommonStyle*
///
const QBindingStorage* q_commonstyle_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommonStyle*
///
void q_commonstyle_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self)
///
void q_commonstyle_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCommonStyle*
///
QObject* q_commonstyle_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCommonStyle*
/// @param classname const char*
///
bool q_commonstyle_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCommonStyle*
///
void q_commonstyle_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommonStyle*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_commonstyle_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCommonStyle*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_commonstyle_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_commonstyle_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_commonstyle_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCommonStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_commonstyle_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QCommonStyle*
/// @param signal const char*
///
bool q_commonstyle_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QCommonStyle*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_commonstyle_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QCommonStyle*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commonstyle_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QCommonStyle*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commonstyle_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommonStyle*
/// @param param1 QObject*
///
void q_commonstyle_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QObject* param1)
///
void q_commonstyle_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
///
QRect* q_commonstyle_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
///
QRect* q_commonstyle_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text)
///
void q_commonstyle_on_item_text_rect(void* self, QRect* (*callback)(void*, void*, void*, int, bool, const char*));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
///
QRect* q_commonstyle_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
///
QRect* q_commonstyle_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap)
///
void q_commonstyle_on_item_pixmap_rect(void* self, QRect* (*callback)(void*, void*, int, void*));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
///
void q_commonstyle_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int32_t textRole);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
///
void q_commonstyle_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int32_t textRole);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole)
///
void q_commonstyle_on_draw_item_text(void* self, void (*callback)(void*, void*, void*, int, void*, bool, const char*, int32_t));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
///
void q_commonstyle_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
///
void q_commonstyle_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap)
///
void q_commonstyle_on_draw_item_pixmap(void* self, void (*callback)(void*, void*, void*, int, void*));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
///
QPalette* q_commonstyle_standard_palette(void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
///
QPalette* q_commonstyle_qbase_standard_palette(void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QPalette* func()
///
void q_commonstyle_on_standard_palette(void* self, QPalette* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QEvent*
///
bool q_commonstyle_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QEvent*
///
bool q_commonstyle_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback bool func(QCommonStyle* self, QEvent* event)
///
void q_commonstyle_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_commonstyle_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_commonstyle_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback bool func(QCommonStyle* self, QObject* watched, QEvent* event)
///
void q_commonstyle_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QTimerEvent*
///
void q_commonstyle_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QTimerEvent*
///
void q_commonstyle_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QTimerEvent* event)
///
void q_commonstyle_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QChildEvent*
///
void q_commonstyle_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QChildEvent*
///
void q_commonstyle_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QChildEvent* event)
///
void q_commonstyle_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QEvent*
///
void q_commonstyle_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param event QEvent*
///
void q_commonstyle_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QEvent* event)
///
void q_commonstyle_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
void q_commonstyle_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
void q_commonstyle_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QMetaMethod* signal)
///
void q_commonstyle_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
void q_commonstyle_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
void q_commonstyle_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QMetaMethod* signal)
///
void q_commonstyle_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
///
QObject* q_commonstyle_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
///
QObject* q_commonstyle_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QObject* func()
///
void q_commonstyle_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
///
int32_t q_commonstyle_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
///
int32_t q_commonstyle_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback int32_t func()
///
void q_commonstyle_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal const char*
///
int32_t q_commonstyle_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal const char*
///
int32_t q_commonstyle_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self, const char* signal)
///
void q_commonstyle_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
bool q_commonstyle_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
bool q_commonstyle_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback bool func(QCommonStyle* self, QMetaMethod* signal)
///
void q_commonstyle_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, const char* objectName)
///
void q_commonstyle_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#dtor.QCommonStyle)
///
/// Delete this object from C++ memory.
///
/// @param self QCommonStyle*
///
void q_commonstyle_delete(void* self);

#endif
