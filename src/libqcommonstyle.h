#pragma once
#ifndef LIBQCOMMONSTYLE_H
#define LIBQCOMMONSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html)

/// q_commonstyle_new constructs a new QCommonStyle object.
///
QCommonStyle* q_commonstyle_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCommonStyle*
///
const QMetaObject* q_commonstyle_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback const QMetaObject* func(const QCommonStyle* self)
///
void q_commonstyle_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
///
const QMetaObject* q_commonstyle_super_meta_object(const void* self);

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
void* q_commonstyle_super_metacast(void* self, const char* param1);

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
int32_t q_commonstyle_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_commonstyle_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// @param self const QCommonStyle*
/// @param pe enum QStyle__PrimitiveElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_draw_primitive(const void* self, int32_t pe, const void* opt, void* p, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(const QCommonStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w)
///
void q_commonstyle_on_draw_primitive(void* self, void (*callback)(const void*, int32_t, const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param pe enum QStyle__PrimitiveElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_super_draw_primitive(const void* self, int32_t pe, const void* opt, void* p, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// @param self const QCommonStyle*
/// @param element enum QStyle__ControlElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_draw_control(const void* self, int32_t element, const void* opt, void* p, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(const QCommonStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w)
///
void q_commonstyle_on_draw_control(void* self, void (*callback)(const void*, int32_t, const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param element enum QStyle__ControlElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_super_draw_control(const void* self, int32_t element, const void* opt, void* p, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// @param self const QCommonStyle*
/// @param r enum QStyle__SubElement
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QRect* q_commonstyle_sub_element_rect(const void* self, int32_t r, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(const QCommonStyle* self, enum QStyle__SubElement r, QStyleOption* opt, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_sub_element_rect(void* self, QRect* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param r enum QStyle__SubElement
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QRect* q_commonstyle_super_sub_element_rect(const void* self, int32_t r, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// @param self const QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_draw_complex_control(const void* self, int32_t cc, const void* opt, void* p, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback void func(const QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w)
///
void q_commonstyle_on_draw_complex_control(void* self, void (*callback)(const void*, int32_t, const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param p QPainter*
/// @param w QWidget*
///
void q_commonstyle_super_draw_complex_control(const void* self, int32_t cc, const void* opt, void* p, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// @param self const QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param pt QPoint*
/// @param w QWidget*
///
/// @return enum QStyle__SubControl
///
int32_t q_commonstyle_hit_test_complex_control(const void* self, int32_t cc, const void* opt, const void* pt, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(const QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w)
///
void q_commonstyle_on_hit_test_complex_control(void* self, int32_t (*callback)(const void*, int32_t, const void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param pt QPoint*
/// @param w QWidget*
///
/// @return enum QStyle__SubControl
///
int32_t q_commonstyle_super_hit_test_complex_control(const void* self, int32_t cc, const void* opt, const void* pt, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// @param self const QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param w QWidget*
///
QRect* q_commonstyle_sub_control_rect(const void* self, int32_t cc, const void* opt, int32_t sc, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(const QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* w)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_sub_control_rect(void* self, QRect* (*callback)(const void*, int32_t, const void*, int32_t, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param w QWidget*
///
QRect* q_commonstyle_super_sub_control_rect(const void* self, int32_t cc, const void* opt, int32_t sc, const void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// @param self const QCommonStyle*
/// @param ct enum QStyle__ContentsType
/// @param opt QStyleOption*
/// @param contentsSize QSize*
/// @param widget QWidget*
///
QSize* q_commonstyle_size_from_contents(const void* self, int32_t ct, const void* opt, const void* contentsSize, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QSize* func(const QCommonStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_size_from_contents(void* self, QSize* (*callback)(const void*, int32_t, const void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param ct enum QStyle__ContentsType
/// @param opt QStyleOption*
/// @param contentsSize QSize*
/// @param widget QWidget*
///
QSize* q_commonstyle_super_size_from_contents(const void* self, int32_t ct, const void* opt, const void* contentsSize, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// @param self const QCommonStyle*
/// @param m enum QStyle__PixelMetric
/// @param opt QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_pixel_metric(const void* self, int32_t m, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(const QCommonStyle* self, enum QStyle__PixelMetric m, QStyleOption* opt, QWidget* widget)
///
void q_commonstyle_on_pixel_metric(void* self, int32_t (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param m enum QStyle__PixelMetric
/// @param opt QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_super_pixel_metric(const void* self, int32_t m, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// @param self const QCommonStyle*
/// @param sh enum QStyle__StyleHint
/// @param opt QStyleOption*
/// @param w QWidget*
/// @param shret QStyleHintReturn*
///
int32_t q_commonstyle_style_hint(const void* self, int32_t sh, const void* opt, const void* w, void* shret);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(const QCommonStyle* self, enum QStyle__StyleHint sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret)
///
void q_commonstyle_on_style_hint(void* self, int32_t (*callback)(const void*, int32_t, const void*, const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param sh enum QStyle__StyleHint
/// @param opt QStyleOption*
/// @param w QWidget*
/// @param shret QStyleHintReturn*
///
int32_t q_commonstyle_super_style_hint(const void* self, int32_t sh, const void* opt, const void* w, void* shret);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// @param self const QCommonStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QIcon* q_commonstyle_standard_icon(const void* self, int32_t standardIcon, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QIcon* func(const QCommonStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* opt, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_standard_icon(void* self, QIcon* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QIcon* q_commonstyle_super_standard_icon(const void* self, int32_t standardIcon, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// @param self const QCommonStyle*
/// @param sp enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QPixmap* q_commonstyle_standard_pixmap(const void* self, int32_t sp, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QPixmap* func(const QCommonStyle* self, enum QStyle__StandardPixmap sp, QStyleOption* opt, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_standard_pixmap(void* self, QPixmap* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param sp enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QPixmap* q_commonstyle_super_standard_pixmap(const void* self, int32_t sp, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// @param self const QCommonStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
///
QPixmap* q_commonstyle_generated_icon_pixmap(const void* self, int32_t iconMode, const void* pixmap, const void* opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback QPixmap* func(const QCommonStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_generated_icon_pixmap(void* self, QPixmap* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
///
QPixmap* q_commonstyle_super_generated_icon_pixmap(const void* self, int32_t iconMode, const void* pixmap, const void* opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// @param self const QCommonStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_layout_spacing(const void* self, int32_t control1, int32_t control2, int32_t orientation, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(const QCommonStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget)
///
void q_commonstyle_on_layout_spacing(void* self, int32_t (*callback)(const void*, int32_t, int32_t, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// Base class method implementation
///
/// @param self const QCommonStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_super_layout_spacing(const void* self, int32_t control1, int32_t control2, int32_t orientation, const void* option, const void* widget);

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
void q_commonstyle_super_polish(void* self, void* param1);

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
void q_commonstyle_super_polish2(void* self, void* app);

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
void q_commonstyle_super_polish3(void* self, void* widget);

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
void q_commonstyle_super_unpolish(void* self, void* widget);

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
void q_commonstyle_super_unpolish2(void* self, void* application);

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
/// @param self const QCommonStyle*
///
const char* q_commonstyle_name(const void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalRect QRect*
///
QRect* q_commonstyle_visual_rect(int32_t direction, const void* boundingRect, const void* logicalRect);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalPos QPoint*
///
QPoint* q_commonstyle_visual_pos(int32_t direction, const void* boundingRect, const void* logicalPos);

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
QRect* q_commonstyle_aligned_rect(int32_t direction, int32_t alignment, const void* size, const void* rectangle);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self const QCommonStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
///
int32_t q_commonstyle_combined_layout_spacing(const void* self, int32_t controls1, int32_t controls2, int32_t orientation);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// @param self const QCommonStyle*
///
const QStyle* q_commonstyle_proxy(const void* self);

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
/// @param self const QCommonStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
///
int32_t q_commonstyle_combined_layout_spacing4(const void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self const QCommonStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_commonstyle_combined_layout_spacing5(const void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option, void* widget);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCommonStyle*
///
const char* q_commonstyle_object_name(const void* self);

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
/// @param self const QCommonStyle*
///
bool q_commonstyle_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCommonStyle*
///
bool q_commonstyle_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCommonStyle*
///
bool q_commonstyle_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCommonStyle*
///
bool q_commonstyle_signals_blocked(const void* self);

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
/// @param self const QCommonStyle*
///
QThread* q_commonstyle_thread(const void* self);

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
/// @param self const QCommonStyle*
///
/// @return libqt_list of QObject*
///
libqt_list q_commonstyle_children(const void* self);

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
QMetaObject__Connection* q_commonstyle_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_commonstyle_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCommonStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_commonstyle_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commonstyle_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_commonstyle_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommonStyle*
///
bool q_commonstyle_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommonStyle*
/// @param receiver QObject*
///
bool q_commonstyle_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_commonstyle_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCommonStyle*
///
void q_commonstyle_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCommonStyle*
///
void q_commonstyle_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCommonStyle*
/// @param name const char*
/// @param value QVariant*
///
bool q_commonstyle_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCommonStyle*
/// @param name const char*
///
QVariant* q_commonstyle_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCommonStyle*
///
const char** q_commonstyle_dynamic_property_names(const void* self);

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
/// @param self const QCommonStyle*
///
const QBindingStorage* q_commonstyle_binding_storage2(const void* self);

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
/// @param self const QCommonStyle*
///
QObject* q_commonstyle_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCommonStyle*
/// @param classname const char*
///
bool q_commonstyle_inherits(const void* self, const char* classname);

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
QMetaObject__Connection* q_commonstyle_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_commonstyle_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCommonStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_commonstyle_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommonStyle*
/// @param signal const char*
///
bool q_commonstyle_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommonStyle*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_commonstyle_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommonStyle*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commonstyle_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCommonStyle*
/// @param receiver QObject*
/// @param member const char*
///
bool q_commonstyle_disconnect23(const void* self, const void* receiver, const char* member);

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
/// @param self const QCommonStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
///
QRect* q_commonstyle_item_text_rect(const void* self, const void* fm, const void* r, int flags, bool enabled, const char* text);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
///
QRect* q_commonstyle_super_item_text_rect(const void* self, const void* fm, const void* r, int flags, bool enabled, const char* text);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_item_text_rect(void* self, QRect* (*callback)(const void*, const void*, const void*, int, bool, const char*));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
///
QRect* q_commonstyle_item_pixmap_rect(const void* self, const void* r, int flags, const void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
///
QRect* q_commonstyle_super_item_pixmap_rect(const void* self, const void* r, int flags, const void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QRect* func(QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_item_pixmap_rect(void* self, QRect* (*callback)(const void*, const void*, int, const void*));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
///
void q_commonstyle_draw_item_text(const void* self, void* painter, const void* rect, int flags, const void* pal, bool enabled, const char* text, int32_t textRole);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
///
void q_commonstyle_super_draw_item_text(const void* self, void* painter, const void* rect, int flags, const void* pal, bool enabled, const char* text, int32_t textRole);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole)
///
void q_commonstyle_on_draw_item_text(void* self, void (*callback)(const void*, void*, const void*, int, const void*, bool, const char*, int32_t));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
///
void q_commonstyle_draw_item_pixmap(const void* self, void* painter, const void* rect, int alignment, const void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
///
void q_commonstyle_super_draw_item_pixmap(const void* self, void* painter, const void* rect, int alignment, const void* pixmap);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap)
///
void q_commonstyle_on_draw_item_pixmap(void* self, void (*callback)(const void*, void*, const void*, int, const void*));

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
///
QPalette* q_commonstyle_standard_palette(const void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
///
QPalette* q_commonstyle_super_standard_palette(const void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QPalette* func(QCommonStyle* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_commonstyle_on_standard_palette(void* self, QPalette* (*callback)(const void*));

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
bool q_commonstyle_super_event(void* self, void* event);

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
bool q_commonstyle_super_event_filter(void* self, void* watched, void* event);

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
void q_commonstyle_super_timer_event(void* self, void* event);

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
void q_commonstyle_super_child_event(void* self, void* event);

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
void q_commonstyle_super_custom_event(void* self, void* event);

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
void q_commonstyle_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
void q_commonstyle_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QMetaMethod* signal)
///
void q_commonstyle_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
void q_commonstyle_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param signal QMetaMethod*
///
void q_commonstyle_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback void func(QCommonStyle* self, QMetaMethod* signal)
///
void q_commonstyle_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
///
QObject* q_commonstyle_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
///
QObject* q_commonstyle_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback QObject* func(QCommonStyle* self)
///
void q_commonstyle_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
///
int32_t q_commonstyle_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
///
int32_t q_commonstyle_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self)
///
void q_commonstyle_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
/// @param signal const char*
///
int32_t q_commonstyle_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
/// @param signal const char*
///
int32_t q_commonstyle_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback int32_t func(QCommonStyle* self, const char* signal)
///
void q_commonstyle_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCommonStyle*
/// @param signal QMetaMethod*
///
bool q_commonstyle_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCommonStyle*
/// @param signal QMetaMethod*
///
bool q_commonstyle_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCommonStyle*
/// @param callback bool func(QCommonStyle* self, QMetaMethod* signal)
///
void q_commonstyle_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

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
