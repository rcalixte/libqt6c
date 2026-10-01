#pragma once
#ifndef LIBQPROXYSTYLE_H
#define LIBQPROXYSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html)

/// q_proxystyle_new constructs a new QProxyStyle object.
///
QProxyStyle* q_proxystyle_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html)

/// q_proxystyle_new2 constructs a new QProxyStyle object.
///
/// @param key const char*
///
QProxyStyle* q_proxystyle_new2(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html)

/// q_proxystyle_new3 constructs a new QProxyStyle object.
///
/// @param style QStyle*
///
QProxyStyle* q_proxystyle_new3(void* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QProxyStyle*
///
const QMetaObject* q_proxystyle_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback const QMetaObject* func(const QProxyStyle* self)
///
void q_proxystyle_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
///
const QMetaObject* q_proxystyle_super_meta_object(const void* self);

/// @param self QProxyStyle*
/// @param param1 const char*
///
void* q_proxystyle_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback void* func(QProxyStyle* self, const char* param1)
///
void q_proxystyle_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param param1 const char*
///
void* q_proxystyle_super_metacast(void* self, const char* param1);

/// @param self QProxyStyle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_proxystyle_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback int32_t func(QProxyStyle* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_proxystyle_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_proxystyle_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_proxystyle_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#baseStyle)
///
/// @param self const QProxyStyle*
///
QStyle* q_proxystyle_base_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
///
/// @param self QProxyStyle*
/// @param style QStyle*
///
void q_proxystyle_set_base_style(void* self, void* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
///
/// @param self const QProxyStyle*
/// @param element enum QStyle__PrimitiveElement
/// @param option QStyleOption*
/// @param painter QPainter*
/// @param widget QWidget*
///
void q_proxystyle_draw_primitive(const void* self, int32_t element, const void* option, void* painter, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback void func(const QProxyStyle* self, enum QStyle__PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget)
///
void q_proxystyle_on_draw_primitive(const void* self, void (*callback)(const void*, int32_t, const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param element enum QStyle__PrimitiveElement
/// @param option QStyleOption*
/// @param painter QPainter*
/// @param widget QWidget*
///
void q_proxystyle_super_draw_primitive(const void* self, int32_t element, const void* option, void* painter, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
///
/// @param self const QProxyStyle*
/// @param element enum QStyle__ControlElement
/// @param option QStyleOption*
/// @param painter QPainter*
/// @param widget QWidget*
///
void q_proxystyle_draw_control(const void* self, int32_t element, const void* option, void* painter, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback void func(const QProxyStyle* self, enum QStyle__ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget)
///
void q_proxystyle_on_draw_control(const void* self, void (*callback)(const void*, int32_t, const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param element enum QStyle__ControlElement
/// @param option QStyleOption*
/// @param painter QPainter*
/// @param widget QWidget*
///
void q_proxystyle_super_draw_control(const void* self, int32_t element, const void* option, void* painter, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
///
/// @param self const QProxyStyle*
/// @param control enum QStyle__ComplexControl
/// @param option QStyleOptionComplex*
/// @param painter QPainter*
/// @param widget QWidget*
///
void q_proxystyle_draw_complex_control(const void* self, int32_t control, const void* option, void* painter, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback void func(const QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget)
///
void q_proxystyle_on_draw_complex_control(const void* self, void (*callback)(const void*, int32_t, const void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param control enum QStyle__ComplexControl
/// @param option QStyleOptionComplex*
/// @param painter QPainter*
/// @param widget QWidget*
///
void q_proxystyle_super_draw_complex_control(const void* self, int32_t control, const void* option, void* painter, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
///
/// @param self const QProxyStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
///
void q_proxystyle_draw_item_text(const void* self, void* painter, const void* rect, int flags, const void* pal, bool enabled, const char* text, int32_t textRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback void func(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole)
///
void q_proxystyle_on_draw_item_text(const void* self, void (*callback)(const void*, void*, const void*, int, const void*, bool, const char*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
///
void q_proxystyle_super_draw_item_text(const void* self, void* painter, const void* rect, int flags, const void* pal, bool enabled, const char* text, int32_t textRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
///
/// @param self const QProxyStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
///
void q_proxystyle_draw_item_pixmap(const void* self, void* painter, const void* rect, int alignment, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback void func(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap)
///
void q_proxystyle_on_draw_item_pixmap(const void* self, void (*callback)(const void*, void*, const void*, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
///
void q_proxystyle_super_draw_item_pixmap(const void* self, void* painter, const void* rect, int alignment, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
///
/// @param self const QProxyStyle*
/// @param type enum QStyle__ContentsType
/// @param option QStyleOption*
/// @param size QSize*
/// @param widget QWidget*
///
QSize* q_proxystyle_size_from_contents(const void* self, int32_t type, const void* option, const void* size, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QSize* func(const QProxyStyle* self, enum QStyle__ContentsType type, QStyleOption* option, QSize* size, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_size_from_contents(const void* self, QSize* (*callback)(const void*, int32_t, const void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param type enum QStyle__ContentsType
/// @param option QStyleOption*
/// @param size QSize*
/// @param widget QWidget*
///
QSize* q_proxystyle_super_size_from_contents(const void* self, int32_t type, const void* option, const void* size, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
///
/// @param self const QProxyStyle*
/// @param element enum QStyle__SubElement
/// @param option QStyleOption*
/// @param widget QWidget*
///
QRect* q_proxystyle_sub_element_rect(const void* self, int32_t element, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QRect* func(const QProxyStyle* self, enum QStyle__SubElement element, QStyleOption* option, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_sub_element_rect(const void* self, QRect* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param element enum QStyle__SubElement
/// @param option QStyleOption*
/// @param widget QWidget*
///
QRect* q_proxystyle_super_sub_element_rect(const void* self, int32_t element, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
///
/// @param self const QProxyStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param widget QWidget*
///
QRect* q_proxystyle_sub_control_rect(const void* self, int32_t cc, const void* opt, int32_t sc, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QRect* func(const QProxyStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_sub_control_rect(const void* self, QRect* (*callback)(const void*, int32_t, const void*, int32_t, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param widget QWidget*
///
QRect* q_proxystyle_super_sub_control_rect(const void* self, int32_t cc, const void* opt, int32_t sc, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
///
/// @param self const QProxyStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
///
QRect* q_proxystyle_item_text_rect(const void* self, const void* fm, const void* r, int flags, bool enabled, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QRect* func(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_item_text_rect(const void* self, QRect* (*callback)(const void*, const void*, const void*, int, bool, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
///
QRect* q_proxystyle_super_item_text_rect(const void* self, const void* fm, const void* r, int flags, bool enabled, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
///
/// @param self const QProxyStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
///
QRect* q_proxystyle_item_pixmap_rect(const void* self, const void* r, int flags, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QRect* func(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_item_pixmap_rect(const void* self, QRect* (*callback)(const void*, const void*, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
///
QRect* q_proxystyle_super_item_pixmap_rect(const void* self, const void* r, int flags, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
///
/// @param self const QProxyStyle*
/// @param control enum QStyle__ComplexControl
/// @param option QStyleOptionComplex*
/// @param pos QPoint*
/// @param widget QWidget*
///
/// @return enum QStyle__SubControl
///
int32_t q_proxystyle_hit_test_complex_control(const void* self, int32_t control, const void* option, const void* pos, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback int32_t func(const QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget)
///
void q_proxystyle_on_hit_test_complex_control(const void* self, int32_t (*callback)(const void*, int32_t, const void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param control enum QStyle__ComplexControl
/// @param option QStyleOptionComplex*
/// @param pos QPoint*
/// @param widget QWidget*
///
/// @return enum QStyle__SubControl
///
int32_t q_proxystyle_super_hit_test_complex_control(const void* self, int32_t control, const void* option, const void* pos, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
///
/// @param self const QProxyStyle*
/// @param hint enum QStyle__StyleHint
/// @param option QStyleOption*
/// @param widget QWidget*
/// @param returnData QStyleHintReturn*
///
int32_t q_proxystyle_style_hint(const void* self, int32_t hint, const void* option, const void* widget, void* returnData);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback int32_t func(const QProxyStyle* self, enum QStyle__StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData)
///
void q_proxystyle_on_style_hint(const void* self, int32_t (*callback)(const void*, int32_t, const void*, const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param hint enum QStyle__StyleHint
/// @param option QStyleOption*
/// @param widget QWidget*
/// @param returnData QStyleHintReturn*
///
int32_t q_proxystyle_super_style_hint(const void* self, int32_t hint, const void* option, const void* widget, void* returnData);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
///
/// @param self const QProxyStyle*
/// @param metric enum QStyle__PixelMetric
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_proxystyle_pixel_metric(const void* self, int32_t metric, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback int32_t func(const QProxyStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget)
///
void q_proxystyle_on_pixel_metric(const void* self, int32_t (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param metric enum QStyle__PixelMetric
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_proxystyle_super_pixel_metric(const void* self, int32_t metric, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
///
/// @param self const QProxyStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_proxystyle_layout_spacing(const void* self, int32_t control1, int32_t control2, int32_t orientation, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback int32_t func(const QProxyStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget)
///
void q_proxystyle_on_layout_spacing(const void* self, int32_t (*callback)(const void*, int32_t, int32_t, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_proxystyle_super_layout_spacing(const void* self, int32_t control1, int32_t control2, int32_t orientation, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
///
/// @param self const QProxyStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param option QStyleOption*
/// @param widget QWidget*
///
QIcon* q_proxystyle_standard_icon(const void* self, int32_t standardIcon, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QIcon* func(const QProxyStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_standard_icon(const void* self, QIcon* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param option QStyleOption*
/// @param widget QWidget*
///
QIcon* q_proxystyle_super_standard_icon(const void* self, int32_t standardIcon, const void* option, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
///
/// @param self const QProxyStyle*
/// @param standardPixmap enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QPixmap* q_proxystyle_standard_pixmap(const void* self, int32_t standardPixmap, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QPixmap* func(const QProxyStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_standard_pixmap(const void* self, QPixmap* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param standardPixmap enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
///
QPixmap* q_proxystyle_super_standard_pixmap(const void* self, int32_t standardPixmap, const void* opt, const void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
///
/// @param self const QProxyStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
///
QPixmap* q_proxystyle_generated_icon_pixmap(const void* self, int32_t iconMode, const void* pixmap, const void* opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QPixmap* func(const QProxyStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_generated_icon_pixmap(const void* self, QPixmap* (*callback)(const void*, int32_t, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
///
QPixmap* q_proxystyle_super_generated_icon_pixmap(const void* self, int32_t iconMode, const void* pixmap, const void* opt);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
///
/// @param self const QProxyStyle*
///
QPalette* q_proxystyle_standard_palette(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
///
/// Allows for overriding the related default method
///
/// @param self const QProxyStyle*
/// @param callback QPalette* func(const QProxyStyle* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_proxystyle_on_standard_palette(const void* self, QPalette* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
///
/// Base class method implementation
///
/// @param self const QProxyStyle*
///
QPalette* q_proxystyle_super_standard_palette(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// @param self QProxyStyle*
/// @param widget QWidget*
///
void q_proxystyle_polish(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QWidget* widget)
///
void q_proxystyle_on_polish(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param widget QWidget*
///
void q_proxystyle_super_polish(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// @param self QProxyStyle*
/// @param pal QPalette*
///
void q_proxystyle_polish2(void* self, void* pal);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QPalette* pal)
///
void q_proxystyle_on_polish2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param pal QPalette*
///
void q_proxystyle_super_polish2(void* self, void* pal);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// @param self QProxyStyle*
/// @param app QApplication*
///
void q_proxystyle_polish3(void* self, void* app);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QApplication* app)
///
void q_proxystyle_on_polish3(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param app QApplication*
///
void q_proxystyle_super_polish3(void* self, void* app);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// @param self QProxyStyle*
/// @param widget QWidget*
///
void q_proxystyle_unpolish(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QWidget* widget)
///
void q_proxystyle_on_unpolish(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param widget QWidget*
///
void q_proxystyle_super_unpolish(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// @param self QProxyStyle*
/// @param app QApplication*
///
void q_proxystyle_unpolish2(void* self, void* app);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QApplication* app)
///
void q_proxystyle_on_unpolish2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param app QApplication*
///
void q_proxystyle_super_unpolish2(void* self, void* app);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
///
/// @param self QProxyStyle*
/// @param e QEvent*
///
bool q_proxystyle_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QProxyStyle*
/// @param callback bool func(QProxyStyle* self, QEvent* e)
///
void q_proxystyle_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#event)
///
/// Base class method implementation
///
/// @param self QProxyStyle*
/// @param e QEvent*
///
bool q_proxystyle_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_proxystyle_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_proxystyle_tr3(const char* s, const char* c, int n);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QProxyStyle*
///
const char* q_proxystyle_name(const void* self);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalRect QRect*
///
QRect* q_proxystyle_visual_rect(int32_t direction, const void* boundingRect, const void* logicalRect);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalPos QPoint*
///
QPoint* q_proxystyle_visual_pos(int32_t direction, const void* boundingRect, const void* logicalPos);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// @param min int
/// @param max int
/// @param val int
/// @param space int
///
int32_t q_proxystyle_slider_position_from_value(int min, int max, int val, int space);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// @param min int
/// @param max int
/// @param pos int
/// @param space int
///
int32_t q_proxystyle_slider_value_from_position(int min, int max, int pos, int space);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// @param direction enum Qt__LayoutDirection
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_proxystyle_visual_alignment(int32_t direction, int32_t alignment);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// @param direction enum Qt__LayoutDirection
/// @param alignment flag of enum Qt__AlignmentFlag
/// @param size QSize*
/// @param rectangle QRect*
///
QRect* q_proxystyle_aligned_rect(int32_t direction, int32_t alignment, const void* size, const void* rectangle);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self const QProxyStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
///
int32_t q_proxystyle_combined_layout_spacing(const void* self, int32_t controls1, int32_t controls2, int32_t orientation);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// @param self const QProxyStyle*
///
const QStyle* q_proxystyle_proxy(const void* self);

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
int32_t q_proxystyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown);

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
int32_t q_proxystyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self const QProxyStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
///
int32_t q_proxystyle_combined_layout_spacing4(const void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option);

/// Inherited from QStyle
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self const QProxyStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
///
int32_t q_proxystyle_combined_layout_spacing5(const void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option, void* widget);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QProxyStyle*
///
const char* q_proxystyle_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QProxyStyle*
/// @param name const char*
///
void q_proxystyle_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QProxyStyle*
///
bool q_proxystyle_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QProxyStyle*
///
bool q_proxystyle_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QProxyStyle*
///
bool q_proxystyle_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QProxyStyle*
///
bool q_proxystyle_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QProxyStyle*
/// @param b bool
///
bool q_proxystyle_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QProxyStyle*
///
QThread* q_proxystyle_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QProxyStyle*
/// @param thread QThread*
///
bool q_proxystyle_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QProxyStyle*
/// @param interval int
///
int32_t q_proxystyle_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QProxyStyle*
/// @param time int64_t of nanoseconds
///
int32_t q_proxystyle_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QProxyStyle*
/// @param id int
///
void q_proxystyle_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QProxyStyle*
/// @param id enum Qt__TimerId
///
void q_proxystyle_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QProxyStyle*
///
/// @return libqt_list of QObject*
///
libqt_list q_proxystyle_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QProxyStyle*
/// @param parent QObject*
///
void q_proxystyle_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QProxyStyle*
/// @param filterObj QObject*
///
void q_proxystyle_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QProxyStyle*
/// @param obj QObject*
///
void q_proxystyle_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_proxystyle_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_proxystyle_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QProxyStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_proxystyle_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_proxystyle_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_proxystyle_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QProxyStyle*
///
bool q_proxystyle_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QProxyStyle*
/// @param receiver QObject*
///
bool q_proxystyle_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_proxystyle_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QProxyStyle*
///
void q_proxystyle_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QProxyStyle*
///
void q_proxystyle_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QProxyStyle*
/// @param name const char*
/// @param value QVariant*
///
bool q_proxystyle_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QProxyStyle*
/// @param name const char*
///
QVariant* q_proxystyle_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QProxyStyle*
///
const char** q_proxystyle_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QProxyStyle*
///
QBindingStorage* q_proxystyle_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QProxyStyle*
///
const QBindingStorage* q_proxystyle_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProxyStyle*
///
void q_proxystyle_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self)
///
void q_proxystyle_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QProxyStyle*
///
QObject* q_proxystyle_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QProxyStyle*
/// @param classname const char*
///
bool q_proxystyle_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QProxyStyle*
///
void q_proxystyle_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QProxyStyle*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_proxystyle_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QProxyStyle*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_proxystyle_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_proxystyle_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_proxystyle_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QProxyStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_proxystyle_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QProxyStyle*
/// @param signal const char*
///
bool q_proxystyle_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QProxyStyle*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_proxystyle_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QProxyStyle*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_proxystyle_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QProxyStyle*
/// @param receiver QObject*
/// @param member const char*
///
bool q_proxystyle_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProxyStyle*
/// @param param1 QObject*
///
void q_proxystyle_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QObject* param1)
///
void q_proxystyle_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProxyStyle*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_proxystyle_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_proxystyle_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param callback bool func(QProxyStyle* self, QObject* watched, QEvent* event)
///
void q_proxystyle_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProxyStyle*
/// @param event QTimerEvent*
///
void q_proxystyle_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param event QTimerEvent*
///
void q_proxystyle_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QTimerEvent* event)
///
void q_proxystyle_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProxyStyle*
/// @param event QChildEvent*
///
void q_proxystyle_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param event QChildEvent*
///
void q_proxystyle_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QChildEvent* event)
///
void q_proxystyle_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProxyStyle*
/// @param event QEvent*
///
void q_proxystyle_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param event QEvent*
///
void q_proxystyle_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QEvent* event)
///
void q_proxystyle_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProxyStyle*
/// @param signal QMetaMethod*
///
void q_proxystyle_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param signal QMetaMethod*
///
void q_proxystyle_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QMetaMethod* signal)
///
void q_proxystyle_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QProxyStyle*
/// @param signal QMetaMethod*
///
void q_proxystyle_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param signal QMetaMethod*
///
void q_proxystyle_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, QMetaMethod* signal)
///
void q_proxystyle_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QProxyStyle*
///
QObject* q_proxystyle_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QProxyStyle*
///
QObject* q_proxystyle_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QProxyStyle*
/// @param callback QObject* func(QProxyStyle* self)
///
void q_proxystyle_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QProxyStyle*
///
int32_t q_proxystyle_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QProxyStyle*
///
int32_t q_proxystyle_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QProxyStyle*
/// @param callback int32_t func(QProxyStyle* self)
///
void q_proxystyle_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QProxyStyle*
/// @param signal const char*
///
int32_t q_proxystyle_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QProxyStyle*
/// @param signal const char*
///
int32_t q_proxystyle_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QProxyStyle*
/// @param callback int32_t func(QProxyStyle* self, const char* signal)
///
void q_proxystyle_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QProxyStyle*
/// @param signal QMetaMethod*
///
bool q_proxystyle_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QProxyStyle*
/// @param signal QMetaMethod*
///
bool q_proxystyle_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QProxyStyle*
/// @param callback bool func(QProxyStyle* self, QMetaMethod* signal)
///
void q_proxystyle_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QProxyStyle*
/// @param callback void func(QProxyStyle* self, const char* objectName)
///
void q_proxystyle_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qproxystyle.html#dtor.QProxyStyle)
///
/// Delete this object from C++ memory.
///
/// @param self QProxyStyle*
///
void q_proxystyle_delete(void* self);

#endif
