#pragma once
#ifndef SRCQT6C_LIBQPROXYSTYLE_H
#define SRCQT6C_LIBQPROXYSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qproxystyle.html

/// q_proxystyle_new constructs a new QProxyStyle object.
///
///
QProxyStyle* q_proxystyle_new();

/// q_proxystyle_new2 constructs a new QProxyStyle object.
///
/// ``` const char* key ```
QProxyStyle* q_proxystyle_new2(const char* key);

/// q_proxystyle_new3 constructs a new QProxyStyle object.
///
/// ``` QStyle* style ```
QProxyStyle* q_proxystyle_new3(void* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QProxyStyle* self ```
const QMetaObject* q_proxystyle_meta_object(void* self);

/// ``` QProxyStyle* self, const char* param1 ```
void* q_proxystyle_metacast(void* self, const char* param1);

/// ``` QProxyStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_proxystyle_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QMetaObject__Call, int, void*) ```
void q_proxystyle_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_proxystyle_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_proxystyle_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#baseStyle)
///
/// ``` QProxyStyle* self ```
QStyle* q_proxystyle_base_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
///
/// ``` QProxyStyle* self, QStyle* style ```
void q_proxystyle_set_base_style(void* self, void* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
///
/// ``` QProxyStyle* self, enum QStyle__PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_draw_primitive(void* self, int64_t element, void* option, void* painter, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, enum QStyle__PrimitiveElement, QStyleOption*, QPainter*, QWidget*) ```
void q_proxystyle_on_draw_primitive(void* self, void (*slot)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_qbase_draw_primitive(void* self, int64_t element, void* option, void* painter, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
///
/// ``` QProxyStyle* self, enum QStyle__ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_draw_control(void* self, int64_t element, void* option, void* painter, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, enum QStyle__ControlElement, QStyleOption*, QPainter*, QWidget*) ```
void q_proxystyle_on_draw_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_qbase_draw_control(void* self, int64_t element, void* option, void* painter, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_draw_complex_control(void* self, int64_t control, void* option, void* painter, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPainter*, QWidget*) ```
void q_proxystyle_on_draw_complex_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_qbase_draw_complex_control(void* self, int64_t control, void* option, void* painter, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_proxystyle_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, enum QPalette__ColorRole) ```
void q_proxystyle_on_draw_item_text(void* self, void (*slot)(void*, void*, void*, int, void*, bool, const char*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_proxystyle_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_proxystyle_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QPainter*, QRect*, int, QPixmap*) ```
void q_proxystyle_on_draw_item_pixmap(void* self, void (*slot)(void*, void*, void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_proxystyle_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
///
/// ``` QProxyStyle* self, enum QStyle__ContentsType typeVal, QStyleOption* option, QSize* size, QWidget* widget ```
QSize* q_proxystyle_size_from_contents(void* self, int64_t typeVal, void* option, void* size, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QSize* (*slot)(QProxyStyle*, enum QStyle__ContentsType, QStyleOption*, QSize*, QWidget*) ```
void q_proxystyle_on_size_from_contents(void* self, QSize* (*slot)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ContentsType typeVal, QStyleOption* option, QSize* size, QWidget* widget ```
QSize* q_proxystyle_qbase_size_from_contents(void* self, int64_t typeVal, void* option, void* size, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
///
/// ``` QProxyStyle* self, enum QStyle__SubElement element, QStyleOption* option, QWidget* widget ```
QRect* q_proxystyle_sub_element_rect(void* self, int64_t element, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, enum QStyle__SubElement, QStyleOption*, QWidget*) ```
void q_proxystyle_on_sub_element_rect(void* self, QRect* (*slot)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__SubElement element, QStyleOption* option, QWidget* widget ```
QRect* q_proxystyle_qbase_sub_element_rect(void* self, int64_t element, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget ```
QRect* q_proxystyle_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, enum QStyle__SubControl, QWidget*) ```
void q_proxystyle_on_sub_control_rect(void* self, QRect* (*slot)(void*, int64_t, void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget ```
QRect* q_proxystyle_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
///
/// ``` QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_proxystyle_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, QFontMetrics*, QRect*, int, bool, const char*) ```
void q_proxystyle_on_item_text_rect(void* self, QRect* (*slot)(void*, void*, void*, int, bool, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_proxystyle_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
///
/// ``` QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_proxystyle_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, QRect*, int, QPixmap*) ```
void q_proxystyle_on_item_pixmap_rect(void* self, QRect* (*slot)(void*, void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_proxystyle_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget ```
int64_t q_proxystyle_hit_test_complex_control(void* self, int64_t control, void* option, void* pos, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int64_t (*slot)(QProxyStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPoint*, QWidget*) ```
void q_proxystyle_on_hit_test_complex_control(void* self, int64_t (*slot)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget ```
int64_t q_proxystyle_qbase_hit_test_complex_control(void* self, int64_t control, void* option, void* pos, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
///
/// ``` QProxyStyle* self, enum QStyle__StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData ```
int32_t q_proxystyle_style_hint(void* self, int64_t hint, void* option, void* widget, void* returnData);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QStyle__StyleHint, QStyleOption*, QWidget*, QStyleHintReturn*) ```
void q_proxystyle_on_style_hint(void* self, int32_t (*slot)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData ```
int32_t q_proxystyle_qbase_style_hint(void* self, int64_t hint, void* option, void* widget, void* returnData);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
///
/// ``` QProxyStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_pixel_metric(void* self, int64_t metric, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QStyle__PixelMetric, QStyleOption*, QWidget*) ```
void q_proxystyle_on_pixel_metric(void* self, int32_t (*slot)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_qbase_pixel_metric(void* self, int64_t metric, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
///
/// ``` QProxyStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QSizePolicy__ControlType, enum QSizePolicy__ControlType, enum Qt__Orientation, QStyleOption*, QWidget*) ```
void q_proxystyle_on_layout_spacing(void* self, int32_t (*slot)(void*, int64_t, int64_t, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_qbase_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget ```
QIcon* q_proxystyle_standard_icon(void* self, int64_t standardIcon, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QIcon* (*slot)(QProxyStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_proxystyle_on_standard_icon(void* self, QIcon* (*slot)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget ```
QIcon* q_proxystyle_qbase_standard_icon(void* self, int64_t standardIcon, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget ```
QPixmap* q_proxystyle_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QPixmap* (*slot)(QProxyStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_proxystyle_on_standard_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget ```
QPixmap* q_proxystyle_qbase_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
///
/// ``` QProxyStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_proxystyle_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QPixmap* (*slot)(QProxyStyle*, enum QIcon__Mode, QPixmap*, QStyleOption*) ```
void q_proxystyle_on_generated_icon_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_proxystyle_qbase_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
///
/// ``` QProxyStyle* self ```
QPalette* q_proxystyle_standard_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QPalette* (*slot)() ```
void q_proxystyle_on_standard_palette(void* self, QPalette* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self ```
QPalette* q_proxystyle_qbase_standard_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_polish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QWidget*) ```
void q_proxystyle_on_polish(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_qbase_polish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// ``` QProxyStyle* self, QPalette* pal ```
void q_proxystyle_polish2(void* self, void* pal);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QPalette*) ```
void q_proxystyle_on_polish2(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QPalette* pal ```
void q_proxystyle_qbase_polish2(void* self, void* pal);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_polish3(void* self, void* app);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QApplication*) ```
void q_proxystyle_on_polish3(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_qbase_polish3(void* self, void* app);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_unpolish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QWidget*) ```
void q_proxystyle_on_unpolish(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_qbase_unpolish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_unpolish2(void* self, void* app);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QApplication*) ```
void q_proxystyle_on_unpolish2(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_qbase_unpolish2(void* self, void* app);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
///
/// ``` QProxyStyle* self, QEvent* e ```
bool q_proxystyle_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, bool (*slot)(QProxyStyle*, QEvent*) ```
void q_proxystyle_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QEvent* e ```
bool q_proxystyle_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_proxystyle_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_proxystyle_tr3(const char* s, const char* c, int n);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// ``` QProxyStyle* self ```
const char* q_proxystyle_name(void* self);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QRect* logicalRect ```
QRect* q_proxystyle_visual_rect(int64_t direction, void* boundingRect, void* logicalRect);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QPoint* logicalPos ```
QPoint* q_proxystyle_visual_pos(int64_t direction, void* boundingRect, void* logicalPos);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space ```
int32_t q_proxystyle_slider_position_from_value(int min, int max, int val, int space);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space ```
int32_t q_proxystyle_slider_value_from_position(int min, int max, int pos, int space);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// ``` enum Qt__LayoutDirection direction, int alignment ```
int64_t q_proxystyle_visual_alignment(int64_t direction, int64_t alignment);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// ``` enum Qt__LayoutDirection direction, int alignment, QSize* size, QRect* rectangle ```
QRect* q_proxystyle_aligned_rect(int64_t direction, int64_t alignment, void* size, void* rectangle);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QProxyStyle* self, int controls1, int controls2, enum Qt__Orientation orientation ```
int32_t q_proxystyle_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int64_t orientation);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// ``` QProxyStyle* self ```
const QStyle* q_proxystyle_proxy(void* self);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space, bool upsideDown ```
int32_t q_proxystyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space, bool upsideDown ```
int32_t q_proxystyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QProxyStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option ```
int32_t q_proxystyle_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QProxyStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option, void* widget);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QProxyStyle* self ```
const char* q_proxystyle_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QProxyStyle* self, char* name ```
void q_proxystyle_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QProxyStyle* self, bool b ```
bool q_proxystyle_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QProxyStyle* self ```
QThread* q_proxystyle_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProxyStyle* self, QThread* thread ```
bool q_proxystyle_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProxyStyle* self, int interval ```
int32_t q_proxystyle_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProxyStyle* self, int id ```
void q_proxystyle_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProxyStyle* self, enum Qt__TimerId id ```
void q_proxystyle_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QProxyStyle* self ```
libqt_list /* of QObject* */ q_proxystyle_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QProxyStyle* self, QObject* parent ```
void q_proxystyle_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QProxyStyle* self, QObject* filterObj ```
void q_proxystyle_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QProxyStyle* self, QObject* obj ```
void q_proxystyle_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_proxystyle_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProxyStyle* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_proxystyle_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_proxystyle_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_proxystyle_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QProxyStyle* self, const char* name, QVariant* value ```
bool q_proxystyle_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QProxyStyle* self, const char* name ```
QVariant* q_proxystyle_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QProxyStyle* self ```
const char** q_proxystyle_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProxyStyle* self ```
QBindingStorage* q_proxystyle_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProxyStyle* self ```
const QBindingStorage* q_proxystyle_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProxyStyle* self, void (*slot)(QObject*) ```
void q_proxystyle_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QProxyStyle* self ```
QObject* q_proxystyle_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QProxyStyle* self, const char* classname ```
bool q_proxystyle_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProxyStyle* self, QThread* thread, Disambiguated_t* param2 ```
bool q_proxystyle_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProxyStyle* self, int interval, enum Qt__TimerType timerType ```
int32_t q_proxystyle_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_proxystyle_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProxyStyle* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_proxystyle_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProxyStyle* self, QObject* param1 ```
void q_proxystyle_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProxyStyle* self, void (*slot)(QObject*, QObject*) ```
void q_proxystyle_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QObject* watched, QEvent* event ```
bool q_proxystyle_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QObject* watched, QEvent* event ```
bool q_proxystyle_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, bool (*slot)(QProxyStyle*, QObject*, QEvent*) ```
void q_proxystyle_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QTimerEvent* event ```
void q_proxystyle_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QTimerEvent* event ```
void q_proxystyle_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QTimerEvent*) ```
void q_proxystyle_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QChildEvent* event ```
void q_proxystyle_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QChildEvent* event ```
void q_proxystyle_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QChildEvent*) ```
void q_proxystyle_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QEvent* event ```
void q_proxystyle_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QEvent* event ```
void q_proxystyle_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QEvent*) ```
void q_proxystyle_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QMetaMethod*) ```
void q_proxystyle_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QMetaMethod*) ```
void q_proxystyle_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self ```
QObject* q_proxystyle_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self ```
QObject* q_proxystyle_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, QObject* (*slot)() ```
void q_proxystyle_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self ```
int32_t q_proxystyle_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self ```
int32_t q_proxystyle_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, int32_t (*slot)() ```
void q_proxystyle_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, const char* signal ```
int32_t q_proxystyle_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, const char* signal ```
int32_t q_proxystyle_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, const char*) ```
void q_proxystyle_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
bool q_proxystyle_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
bool q_proxystyle_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, bool (*slot)(QProxyStyle*, QMetaMethod*) ```
void q_proxystyle_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QProxyStyle* self, void (*slot)(QObject*, const char*) ```
void q_proxystyle_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#dtor.QProxyStyle)
///
/// Delete this object from C++ memory.
///
/// ``` QProxyStyle* self ```
void q_proxystyle_delete(void* self);

#endif
