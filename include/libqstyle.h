#pragma once
#ifndef SRCQT6C_LIBQSTYLE_H
#define SRCQT6C_LIBQSTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstyle.html

/// q_style_new constructs a new QStyle object.
///
QStyle* q_style_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStyle*
const QMetaObject* q_style_meta_object(void* self);

/// @param self QStyle*
/// @param param1 const char*
void* q_style_metacast(void* self, const char* param1);

/// @param self QStyle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_style_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback int32_t func(QStyle* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_style_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QStyle*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_style_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_style_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyle*
const char* q_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// @param self QStyle*
/// @param widget QWidget*
void q_style_polish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QWidget* widget)
void q_style_on_polish(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param widget QWidget*
void q_style_qbase_polish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// @param self QStyle*
/// @param widget QWidget*
void q_style_unpolish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QWidget* widget)
void q_style_on_unpolish(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param widget QWidget*
void q_style_qbase_unpolish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// @param self QStyle*
/// @param application QApplication*
void q_style_polish2(void* self, void* application);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QApplication* application)
void q_style_on_polish2(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param application QApplication*
void q_style_qbase_polish2(void* self, void* application);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// @param self QStyle*
/// @param application QApplication*
void q_style_unpolish2(void* self, void* application);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QApplication* application)
void q_style_on_unpolish2(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param application QApplication*
void q_style_qbase_unpolish2(void* self, void* application);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// @param self QStyle*
/// @param palette QPalette*
void q_style_polish3(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QPalette* palette)
void q_style_on_polish3(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param palette QPalette*
void q_style_qbase_polish3(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// @param self QStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
QRect* q_style_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QRect* func(QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text)
void q_style_on_item_text_rect(void* self, QRect* (*callback)(void*, void*, void*, int, bool, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param fm QFontMetrics*
/// @param r QRect*
/// @param flags int
/// @param enabled bool
/// @param text const char*
QRect* q_style_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// @param self QStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
QRect* q_style_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QRect* func(QStyle* self, QRect* r, int flags, QPixmap* pixmap)
void q_style_on_item_pixmap_rect(void* self, QRect* (*callback)(void*, void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param r QRect*
/// @param flags int
/// @param pixmap QPixmap*
QRect* q_style_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// @param self QStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
void q_style_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int32_t textRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole)
void q_style_on_draw_item_text(void* self, void (*callback)(void*, void*, void*, int, void*, bool, const char*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param flags int
/// @param pal QPalette*
/// @param enabled bool
/// @param text const char*
/// @param textRole enum QPalette__ColorRole
void q_style_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int32_t textRole);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// @param self QStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
void q_style_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap)
void q_style_on_draw_item_pixmap(void* self, void (*callback)(void*, void*, void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment int
/// @param pixmap QPixmap*
void q_style_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// @param self QStyle*
QPalette* q_style_standard_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QPalette* func()
void q_style_on_standard_palette(void* self, QPalette* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Base class method implementation
///
/// @param self QStyle*
QPalette* q_style_qbase_standard_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
///
/// @param self QStyle*
/// @param pe enum QStyle__PrimitiveElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
void q_style_draw_primitive(void* self, int32_t pe, void* opt, void* p, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w)
void q_style_on_draw_primitive(void* self, void (*callback)(void*, int32_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param pe enum QStyle__PrimitiveElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
void q_style_qbase_draw_primitive(void* self, int32_t pe, void* opt, void* p, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawControl)
///
/// @param self QStyle*
/// @param element enum QStyle__ControlElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
void q_style_draw_control(void* self, int64_t element, void* opt, void* p, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawControl)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w)
void q_style_on_draw_control(void* self, void (*callback)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawControl)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param element enum QStyle__ControlElement
/// @param opt QStyleOption*
/// @param p QPainter*
/// @param w QWidget*
void q_style_qbase_draw_control(void* self, int64_t element, void* opt, void* p, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
///
/// @param self QStyle*
/// @param subElement enum QStyle__SubElement
/// @param option QStyleOption*
/// @param widget QWidget*
QRect* q_style_sub_element_rect(void* self, int64_t subElement, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QRect* func(QStyle* self, enum QStyle__SubElement subElement, QStyleOption* option, QWidget* widget)
void q_style_on_sub_element_rect(void* self, QRect* (*callback)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param subElement enum QStyle__SubElement
/// @param option QStyleOption*
/// @param widget QWidget*
QRect* q_style_qbase_sub_element_rect(void* self, int64_t subElement, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
///
/// @param self QStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param p QPainter*
/// @param widget QWidget*
void q_style_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget)
void q_style_on_draw_complex_control(void* self, void (*callback)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param p QPainter*
/// @param widget QWidget*
void q_style_qbase_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
///
/// @param self QStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param pt QPoint*
/// @param widget QWidget*
///
/// @return enum QStyle__SubControl
int64_t q_style_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback int64_t func(QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget)
void q_style_on_hit_test_complex_control(void* self, int64_t (*callback)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param pt QPoint*
/// @param widget QWidget*
///
/// @return enum QStyle__SubControl
int64_t q_style_qbase_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
///
/// @param self QStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param widget QWidget*
QRect* q_style_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QRect* func(QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget)
void q_style_on_sub_control_rect(void* self, QRect* (*callback)(void*, int64_t, void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param cc enum QStyle__ComplexControl
/// @param opt QStyleOptionComplex*
/// @param sc enum QStyle__SubControl
/// @param widget QWidget*
QRect* q_style_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
///
/// @param self QStyle*
/// @param metric enum QStyle__PixelMetric
/// @param option QStyleOption*
/// @param widget QWidget*
int32_t q_style_pixel_metric(void* self, int64_t metric, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback int32_t func(QStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget)
void q_style_on_pixel_metric(void* self, int32_t (*callback)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param metric enum QStyle__PixelMetric
/// @param option QStyleOption*
/// @param widget QWidget*
int32_t q_style_qbase_pixel_metric(void* self, int64_t metric, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
///
/// @param self QStyle*
/// @param ct enum QStyle__ContentsType
/// @param opt QStyleOption*
/// @param contentsSize QSize*
/// @param w QWidget*
QSize* q_style_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QSize* func(QStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* w)
void q_style_on_size_from_contents(void* self, QSize* (*callback)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param ct enum QStyle__ContentsType
/// @param opt QStyleOption*
/// @param contentsSize QSize*
/// @param w QWidget*
QSize* q_style_qbase_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#styleHint)
///
/// @param self QStyle*
/// @param stylehint enum QStyle__StyleHint
/// @param opt QStyleOption*
/// @param widget QWidget*
/// @param returnData QStyleHintReturn*
int32_t q_style_style_hint(void* self, int64_t stylehint, void* opt, void* widget, void* returnData);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#styleHint)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback int32_t func(QStyle* self, enum QStyle__StyleHint stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData)
void q_style_on_style_hint(void* self, int32_t (*callback)(void*, int64_t, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#styleHint)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param stylehint enum QStyle__StyleHint
/// @param opt QStyleOption*
/// @param widget QWidget*
/// @param returnData QStyleHintReturn*
int32_t q_style_qbase_style_hint(void* self, int64_t stylehint, void* opt, void* widget, void* returnData);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
///
/// @param self QStyle*
/// @param standardPixmap enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
QPixmap* q_style_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QPixmap* func(QStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget)
void q_style_on_standard_pixmap(void* self, QPixmap* (*callback)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param standardPixmap enum QStyle__StandardPixmap
/// @param opt QStyleOption*
/// @param widget QWidget*
QPixmap* q_style_qbase_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
///
/// @param self QStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param option QStyleOption*
/// @param widget QWidget*
QIcon* q_style_standard_icon(void* self, int64_t standardIcon, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QIcon* func(QStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget)
void q_style_on_standard_icon(void* self, QIcon* (*callback)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param standardIcon enum QStyle__StandardPixmap
/// @param option QStyleOption*
/// @param widget QWidget*
QIcon* q_style_qbase_standard_icon(void* self, int64_t standardIcon, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
///
/// @param self QStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
QPixmap* q_style_generated_icon_pixmap(void* self, int32_t iconMode, void* pixmap, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback QPixmap* func(QStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt)
void q_style_on_generated_icon_pixmap(void* self, QPixmap* (*callback)(void*, int32_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param iconMode enum QIcon__Mode
/// @param pixmap QPixmap*
/// @param opt QStyleOption*
QPixmap* q_style_qbase_generated_icon_pixmap(void* self, int32_t iconMode, void* pixmap, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalRect QRect*
QRect* q_style_visual_rect(int32_t direction, void* boundingRect, void* logicalRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// @param direction enum Qt__LayoutDirection
/// @param boundingRect QRect*
/// @param logicalPos QPoint*
QPoint* q_style_visual_pos(int32_t direction, void* boundingRect, void* logicalPos);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// @param min int
/// @param max int
/// @param val int
/// @param space int
int32_t q_style_slider_position_from_value(int min, int max, int val, int space);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// @param min int
/// @param max int
/// @param pos int
/// @param space int
int32_t q_style_slider_value_from_position(int min, int max, int pos, int space);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// @param direction enum Qt__LayoutDirection
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return flag of enum Qt__AlignmentFlag
int32_t q_style_visual_alignment(int32_t direction, int32_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// @param direction enum Qt__LayoutDirection
/// @param alignment flag of enum Qt__AlignmentFlag
/// @param size QSize*
/// @param rectangle QRect*
QRect* q_style_aligned_rect(int32_t direction, int32_t alignment, void* size, void* rectangle);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
///
/// @param self QStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
int32_t q_style_layout_spacing(void* self, int32_t control1, int32_t control2, int32_t orientation, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
///
/// Allows for overriding the related default method
///
/// @param self QStyle*
/// @param callback int32_t func(QStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget)
void q_style_on_layout_spacing(void* self, int32_t (*callback)(void*, int32_t, int32_t, int32_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
///
/// Base class method implementation
///
/// @param self QStyle*
/// @param control1 enum QSizePolicy__ControlType
/// @param control2 enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
int32_t q_style_qbase_layout_spacing(void* self, int32_t control1, int32_t control2, int32_t orientation, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self QStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
int32_t q_style_combined_layout_spacing(void* self, int32_t controls1, int32_t controls2, int32_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// @param self QStyle*
const QStyle* q_style_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_style_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_style_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// @param min int
/// @param max int
/// @param val int
/// @param space int
/// @param upsideDown bool
int32_t q_style_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// @param min int
/// @param max int
/// @param pos int
/// @param space int
/// @param upsideDown bool
int32_t q_style_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self QStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
int32_t q_style_combined_layout_spacing4(void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// @param self QStyle*
/// @param controls1 flag of enum QSizePolicy__ControlType
/// @param controls2 flag of enum QSizePolicy__ControlType
/// @param orientation enum Qt__Orientation
/// @param option QStyleOption*
/// @param widget QWidget*
int32_t q_style_combined_layout_spacing5(void* self, int32_t controls1, int32_t controls2, int32_t orientation, void* option, void* widget);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyle*
const char* q_style_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStyle*
/// @param name char*
void q_style_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStyle*
bool q_style_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStyle*
bool q_style_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStyle*
bool q_style_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStyle*
bool q_style_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStyle*
/// @param b bool
bool q_style_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStyle*
QThread* q_style_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStyle*
/// @param thread QThread*
bool q_style_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyle*
/// @param interval int
int32_t q_style_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyle*
/// @param id int
void q_style_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStyle*
/// @param id enum Qt__TimerId
void q_style_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStyle*
libqt_list /* of QObject* */ q_style_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStyle*
/// @param parent QObject*
void q_style_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStyle*
/// @param filterObj QObject*
void q_style_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStyle*
/// @param obj QObject*
void q_style_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_style_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_style_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_style_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_style_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStyle*
void q_style_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStyle*
void q_style_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStyle*
/// @param name const char*
/// @param value QVariant*
bool q_style_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStyle*
/// @param name const char*
QVariant* q_style_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStyle*
const char** q_style_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStyle*
QBindingStorage* q_style_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStyle*
const QBindingStorage* q_style_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyle*
void q_style_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyle*
/// @param callback void func(QStyle* self)
void q_style_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QStyle*
QObject* q_style_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStyle*
/// @param classname const char*
bool q_style_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStyle*
void q_style_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStyle*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_style_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStyle*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_style_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_style_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStyle*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_style_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyle*
/// @param param1 QObject*
void q_style_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QObject* param1)
void q_style_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param event QEvent*
bool q_style_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param event QEvent*
bool q_style_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback bool func(QStyle* self, QEvent* event)
void q_style_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param watched QObject*
/// @param event QEvent*
bool q_style_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param watched QObject*
/// @param event QEvent*
bool q_style_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback bool func(QStyle* self, QObject* watched, QEvent* event)
void q_style_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param event QTimerEvent*
void q_style_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param event QTimerEvent*
void q_style_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QTimerEvent* event)
void q_style_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param event QChildEvent*
void q_style_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param event QChildEvent*
void q_style_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QChildEvent* event)
void q_style_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param event QEvent*
void q_style_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param event QEvent*
void q_style_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QEvent* event)
void q_style_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param signal QMetaMethod*
void q_style_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param signal QMetaMethod*
void q_style_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QMetaMethod* signal)
void q_style_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param signal QMetaMethod*
void q_style_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param signal QMetaMethod*
void q_style_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, QMetaMethod* signal)
void q_style_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
QObject* q_style_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
QObject* q_style_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback QObject* func()
void q_style_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
int32_t q_style_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
int32_t q_style_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback int32_t func()
void q_style_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param signal const char*
int32_t q_style_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param signal const char*
int32_t q_style_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback int32_t func(QStyle* self, const char* signal)
void q_style_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStyle*
/// @param signal QMetaMethod*
bool q_style_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStyle*
/// @param signal QMetaMethod*
bool q_style_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStyle*
/// @param callback bool func(QStyle* self, QMetaMethod* signal)
void q_style_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStyle*
/// @param callback void func(QStyle* self, const char* objectName)
void q_style_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#dtor.QStyle)
///
/// Delete this object from C++ memory.
///
/// @param self QStyle*
void q_style_delete(void* self);

/// https://doc.qt.io/qt-6/qstyle.html#types

typedef enum {
    QSTYLE_STATEFLAG_STATE_NONE = 0,
    QSTYLE_STATEFLAG_STATE_ENABLED = 1,
    QSTYLE_STATEFLAG_STATE_RAISED = 2,
    QSTYLE_STATEFLAG_STATE_SUNKEN = 4,
    QSTYLE_STATEFLAG_STATE_OFF = 8,
    QSTYLE_STATEFLAG_STATE_NOCHANGE = 16,
    QSTYLE_STATEFLAG_STATE_ON = 32,
    QSTYLE_STATEFLAG_STATE_DOWNARROW = 64,
    QSTYLE_STATEFLAG_STATE_HORIZONTAL = 128,
    QSTYLE_STATEFLAG_STATE_HASFOCUS = 256,
    QSTYLE_STATEFLAG_STATE_TOP = 512,
    QSTYLE_STATEFLAG_STATE_BOTTOM = 1024,
    QSTYLE_STATEFLAG_STATE_FOCUSATBORDER = 2048,
    QSTYLE_STATEFLAG_STATE_AUTORAISE = 4096,
    QSTYLE_STATEFLAG_STATE_MOUSEOVER = 8192,
    QSTYLE_STATEFLAG_STATE_UPARROW = 16384,
    QSTYLE_STATEFLAG_STATE_SELECTED = 32768,
    QSTYLE_STATEFLAG_STATE_ACTIVE = 65536,
    QSTYLE_STATEFLAG_STATE_WINDOW = 131072,
    QSTYLE_STATEFLAG_STATE_OPEN = 262144,
    QSTYLE_STATEFLAG_STATE_CHILDREN = 524288,
    QSTYLE_STATEFLAG_STATE_ITEM = 1048576,
    QSTYLE_STATEFLAG_STATE_SIBLING = 2097152,
    QSTYLE_STATEFLAG_STATE_EDITING = 4194304,
    QSTYLE_STATEFLAG_STATE_KEYBOARDFOCUSCHANGE = 8388608,
    QSTYLE_STATEFLAG_STATE_READONLY = 33554432,
    QSTYLE_STATEFLAG_STATE_SMALL = 67108864,
    QSTYLE_STATEFLAG_STATE_MINI = 134217728
} QStyle__StateFlag;

typedef enum {
    QSTYLE_PRIMITIVEELEMENT_PE_FRAME = 0,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEDEFAULTBUTTON = 1,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEDOCKWIDGET = 2,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEFOCUSRECT = 3,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEGROUPBOX = 4,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMELINEEDIT = 5,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEMENU = 6,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMESTATUSBARITEM = 7,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMETABWIDGET = 8,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEWINDOW = 9,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEBUTTONBEVEL = 10,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMEBUTTONTOOL = 11,
    QSTYLE_PRIMITIVEELEMENT_PE_FRAMETABBARBASE = 12,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELBUTTONCOMMAND = 13,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELBUTTONBEVEL = 14,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELBUTTONTOOL = 15,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELMENUBAR = 16,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELTOOLBAR = 17,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELLINEEDIT = 18,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORARROWDOWN = 19,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORARROWLEFT = 20,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORARROWRIGHT = 21,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORARROWUP = 22,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORBRANCH = 23,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORBUTTONDROPDOWN = 24,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORITEMVIEWITEMCHECK = 25,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORCHECKBOX = 26,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORDOCKWIDGETRESIZEHANDLE = 27,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORHEADERARROW = 28,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORMENUCHECKMARK = 29,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORPROGRESSCHUNK = 30,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORRADIOBUTTON = 31,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORSPINDOWN = 32,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORSPINMINUS = 33,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORSPINPLUS = 34,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORSPINUP = 35,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORTOOLBARHANDLE = 36,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORTOOLBARSEPARATOR = 37,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELTIPLABEL = 38,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORTABTEAR = 39,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORTABTEARLEFT = 39,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELSCROLLAREACORNER = 40,
    QSTYLE_PRIMITIVEELEMENT_PE_WIDGET = 41,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORCOLUMNVIEWARROW = 42,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORITEMVIEWITEMDROP = 43,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELITEMVIEWITEM = 44,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELITEMVIEWROW = 45,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELSTATUSBAR = 46,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORTABCLOSE = 47,
    QSTYLE_PRIMITIVEELEMENT_PE_PANELMENU = 48,
    QSTYLE_PRIMITIVEELEMENT_PE_INDICATORTABTEARRIGHT = 49,
    QSTYLE_PRIMITIVEELEMENT_PE_CUSTOMBASE = 251658240
} QStyle__PrimitiveElement;

typedef enum {
    QSTYLE_CONTROLELEMENT_CE_PUSHBUTTON = 0,
    QSTYLE_CONTROLELEMENT_CE_PUSHBUTTONBEVEL = 1,
    QSTYLE_CONTROLELEMENT_CE_PUSHBUTTONLABEL = 2,
    QSTYLE_CONTROLELEMENT_CE_CHECKBOX = 3,
    QSTYLE_CONTROLELEMENT_CE_CHECKBOXLABEL = 4,
    QSTYLE_CONTROLELEMENT_CE_RADIOBUTTON = 5,
    QSTYLE_CONTROLELEMENT_CE_RADIOBUTTONLABEL = 6,
    QSTYLE_CONTROLELEMENT_CE_TABBARTAB = 7,
    QSTYLE_CONTROLELEMENT_CE_TABBARTABSHAPE = 8,
    QSTYLE_CONTROLELEMENT_CE_TABBARTABLABEL = 9,
    QSTYLE_CONTROLELEMENT_CE_PROGRESSBAR = 10,
    QSTYLE_CONTROLELEMENT_CE_PROGRESSBARGROOVE = 11,
    QSTYLE_CONTROLELEMENT_CE_PROGRESSBARCONTENTS = 12,
    QSTYLE_CONTROLELEMENT_CE_PROGRESSBARLABEL = 13,
    QSTYLE_CONTROLELEMENT_CE_MENUITEM = 14,
    QSTYLE_CONTROLELEMENT_CE_MENUSCROLLER = 15,
    QSTYLE_CONTROLELEMENT_CE_MENUVMARGIN = 16,
    QSTYLE_CONTROLELEMENT_CE_MENUHMARGIN = 17,
    QSTYLE_CONTROLELEMENT_CE_MENUTEAROFF = 18,
    QSTYLE_CONTROLELEMENT_CE_MENUEMPTYAREA = 19,
    QSTYLE_CONTROLELEMENT_CE_MENUBARITEM = 20,
    QSTYLE_CONTROLELEMENT_CE_MENUBAREMPTYAREA = 21,
    QSTYLE_CONTROLELEMENT_CE_TOOLBUTTONLABEL = 22,
    QSTYLE_CONTROLELEMENT_CE_HEADER = 23,
    QSTYLE_CONTROLELEMENT_CE_HEADERSECTION = 24,
    QSTYLE_CONTROLELEMENT_CE_HEADERLABEL = 25,
    QSTYLE_CONTROLELEMENT_CE_TOOLBOXTAB = 26,
    QSTYLE_CONTROLELEMENT_CE_SIZEGRIP = 27,
    QSTYLE_CONTROLELEMENT_CE_SPLITTER = 28,
    QSTYLE_CONTROLELEMENT_CE_RUBBERBAND = 29,
    QSTYLE_CONTROLELEMENT_CE_DOCKWIDGETTITLE = 30,
    QSTYLE_CONTROLELEMENT_CE_SCROLLBARADDLINE = 31,
    QSTYLE_CONTROLELEMENT_CE_SCROLLBARSUBLINE = 32,
    QSTYLE_CONTROLELEMENT_CE_SCROLLBARADDPAGE = 33,
    QSTYLE_CONTROLELEMENT_CE_SCROLLBARSUBPAGE = 34,
    QSTYLE_CONTROLELEMENT_CE_SCROLLBARSLIDER = 35,
    QSTYLE_CONTROLELEMENT_CE_SCROLLBARFIRST = 36,
    QSTYLE_CONTROLELEMENT_CE_SCROLLBARLAST = 37,
    QSTYLE_CONTROLELEMENT_CE_FOCUSFRAME = 38,
    QSTYLE_CONTROLELEMENT_CE_COMBOBOXLABEL = 39,
    QSTYLE_CONTROLELEMENT_CE_TOOLBAR = 40,
    QSTYLE_CONTROLELEMENT_CE_TOOLBOXTABSHAPE = 41,
    QSTYLE_CONTROLELEMENT_CE_TOOLBOXTABLABEL = 42,
    QSTYLE_CONTROLELEMENT_CE_HEADEREMPTYAREA = 43,
    QSTYLE_CONTROLELEMENT_CE_COLUMNVIEWGRIP = 44,
    QSTYLE_CONTROLELEMENT_CE_ITEMVIEWITEM = 45,
    QSTYLE_CONTROLELEMENT_CE_SHAPEDFRAME = 46,
    QSTYLE_CONTROLELEMENT_CE_CUSTOMBASE = 4026531840
} QStyle__ControlElement;

typedef enum {
    QSTYLE_SUBELEMENT_SE_PUSHBUTTONCONTENTS = 0,
    QSTYLE_SUBELEMENT_SE_PUSHBUTTONFOCUSRECT = 1,
    QSTYLE_SUBELEMENT_SE_CHECKBOXINDICATOR = 2,
    QSTYLE_SUBELEMENT_SE_CHECKBOXCONTENTS = 3,
    QSTYLE_SUBELEMENT_SE_CHECKBOXFOCUSRECT = 4,
    QSTYLE_SUBELEMENT_SE_CHECKBOXCLICKRECT = 5,
    QSTYLE_SUBELEMENT_SE_RADIOBUTTONINDICATOR = 6,
    QSTYLE_SUBELEMENT_SE_RADIOBUTTONCONTENTS = 7,
    QSTYLE_SUBELEMENT_SE_RADIOBUTTONFOCUSRECT = 8,
    QSTYLE_SUBELEMENT_SE_RADIOBUTTONCLICKRECT = 9,
    QSTYLE_SUBELEMENT_SE_COMBOBOXFOCUSRECT = 10,
    QSTYLE_SUBELEMENT_SE_SLIDERFOCUSRECT = 11,
    QSTYLE_SUBELEMENT_SE_PROGRESSBARGROOVE = 12,
    QSTYLE_SUBELEMENT_SE_PROGRESSBARCONTENTS = 13,
    QSTYLE_SUBELEMENT_SE_PROGRESSBARLABEL = 14,
    QSTYLE_SUBELEMENT_SE_TOOLBOXTABCONTENTS = 15,
    QSTYLE_SUBELEMENT_SE_HEADERLABEL = 16,
    QSTYLE_SUBELEMENT_SE_HEADERARROW = 17,
    QSTYLE_SUBELEMENT_SE_TABWIDGETTABBAR = 18,
    QSTYLE_SUBELEMENT_SE_TABWIDGETTABPANE = 19,
    QSTYLE_SUBELEMENT_SE_TABWIDGETTABCONTENTS = 20,
    QSTYLE_SUBELEMENT_SE_TABWIDGETLEFTCORNER = 21,
    QSTYLE_SUBELEMENT_SE_TABWIDGETRIGHTCORNER = 22,
    QSTYLE_SUBELEMENT_SE_ITEMVIEWITEMCHECKINDICATOR = 23,
    QSTYLE_SUBELEMENT_SE_TABBARTEARINDICATOR = 24,
    QSTYLE_SUBELEMENT_SE_TABBARTEARINDICATORLEFT = 24,
    QSTYLE_SUBELEMENT_SE_TREEVIEWDISCLOSUREITEM = 25,
    QSTYLE_SUBELEMENT_SE_LINEEDITCONTENTS = 26,
    QSTYLE_SUBELEMENT_SE_FRAMECONTENTS = 27,
    QSTYLE_SUBELEMENT_SE_DOCKWIDGETCLOSEBUTTON = 28,
    QSTYLE_SUBELEMENT_SE_DOCKWIDGETFLOATBUTTON = 29,
    QSTYLE_SUBELEMENT_SE_DOCKWIDGETTITLEBARTEXT = 30,
    QSTYLE_SUBELEMENT_SE_DOCKWIDGETICON = 31,
    QSTYLE_SUBELEMENT_SE_CHECKBOXLAYOUTITEM = 32,
    QSTYLE_SUBELEMENT_SE_COMBOBOXLAYOUTITEM = 33,
    QSTYLE_SUBELEMENT_SE_DATETIMEEDITLAYOUTITEM = 34,
    QSTYLE_SUBELEMENT_SE_LABELLAYOUTITEM = 35,
    QSTYLE_SUBELEMENT_SE_PROGRESSBARLAYOUTITEM = 36,
    QSTYLE_SUBELEMENT_SE_PUSHBUTTONLAYOUTITEM = 37,
    QSTYLE_SUBELEMENT_SE_RADIOBUTTONLAYOUTITEM = 38,
    QSTYLE_SUBELEMENT_SE_SLIDERLAYOUTITEM = 39,
    QSTYLE_SUBELEMENT_SE_SPINBOXLAYOUTITEM = 40,
    QSTYLE_SUBELEMENT_SE_TOOLBUTTONLAYOUTITEM = 41,
    QSTYLE_SUBELEMENT_SE_FRAMELAYOUTITEM = 42,
    QSTYLE_SUBELEMENT_SE_GROUPBOXLAYOUTITEM = 43,
    QSTYLE_SUBELEMENT_SE_TABWIDGETLAYOUTITEM = 44,
    QSTYLE_SUBELEMENT_SE_ITEMVIEWITEMDECORATION = 45,
    QSTYLE_SUBELEMENT_SE_ITEMVIEWITEMTEXT = 46,
    QSTYLE_SUBELEMENT_SE_ITEMVIEWITEMFOCUSRECT = 47,
    QSTYLE_SUBELEMENT_SE_TABBARTABLEFTBUTTON = 48,
    QSTYLE_SUBELEMENT_SE_TABBARTABRIGHTBUTTON = 49,
    QSTYLE_SUBELEMENT_SE_TABBARTABTEXT = 50,
    QSTYLE_SUBELEMENT_SE_SHAPEDFRAMECONTENTS = 51,
    QSTYLE_SUBELEMENT_SE_TOOLBARHANDLE = 52,
    QSTYLE_SUBELEMENT_SE_TABBARSCROLLLEFTBUTTON = 53,
    QSTYLE_SUBELEMENT_SE_TABBARSCROLLRIGHTBUTTON = 54,
    QSTYLE_SUBELEMENT_SE_TABBARTEARINDICATORRIGHT = 55,
    QSTYLE_SUBELEMENT_SE_PUSHBUTTONBEVEL = 56,
    QSTYLE_SUBELEMENT_SE_CUSTOMBASE = 4026531840
} QStyle__SubElement;

typedef enum {
    QSTYLE_COMPLEXCONTROL_CC_SPINBOX = 0,
    QSTYLE_COMPLEXCONTROL_CC_COMBOBOX = 1,
    QSTYLE_COMPLEXCONTROL_CC_SCROLLBAR = 2,
    QSTYLE_COMPLEXCONTROL_CC_SLIDER = 3,
    QSTYLE_COMPLEXCONTROL_CC_TOOLBUTTON = 4,
    QSTYLE_COMPLEXCONTROL_CC_TITLEBAR = 5,
    QSTYLE_COMPLEXCONTROL_CC_DIAL = 6,
    QSTYLE_COMPLEXCONTROL_CC_GROUPBOX = 7,
    QSTYLE_COMPLEXCONTROL_CC_MDICONTROLS = 8,
    QSTYLE_COMPLEXCONTROL_CC_CUSTOMBASE = 4026531840
} QStyle__ComplexControl;

typedef enum {
    QSTYLE_SUBCONTROL_SC_NONE = 0,
    QSTYLE_SUBCONTROL_SC_SCROLLBARADDLINE = 1,
    QSTYLE_SUBCONTROL_SC_SCROLLBARSUBLINE = 2,
    QSTYLE_SUBCONTROL_SC_SCROLLBARADDPAGE = 4,
    QSTYLE_SUBCONTROL_SC_SCROLLBARSUBPAGE = 8,
    QSTYLE_SUBCONTROL_SC_SCROLLBARFIRST = 16,
    QSTYLE_SUBCONTROL_SC_SCROLLBARLAST = 32,
    QSTYLE_SUBCONTROL_SC_SCROLLBARSLIDER = 64,
    QSTYLE_SUBCONTROL_SC_SCROLLBARGROOVE = 128,
    QSTYLE_SUBCONTROL_SC_SPINBOXUP = 1,
    QSTYLE_SUBCONTROL_SC_SPINBOXDOWN = 2,
    QSTYLE_SUBCONTROL_SC_SPINBOXFRAME = 4,
    QSTYLE_SUBCONTROL_SC_SPINBOXEDITFIELD = 8,
    QSTYLE_SUBCONTROL_SC_COMBOBOXFRAME = 1,
    QSTYLE_SUBCONTROL_SC_COMBOBOXEDITFIELD = 2,
    QSTYLE_SUBCONTROL_SC_COMBOBOXARROW = 4,
    QSTYLE_SUBCONTROL_SC_COMBOBOXLISTBOXPOPUP = 8,
    QSTYLE_SUBCONTROL_SC_SLIDERGROOVE = 1,
    QSTYLE_SUBCONTROL_SC_SLIDERHANDLE = 2,
    QSTYLE_SUBCONTROL_SC_SLIDERTICKMARKS = 4,
    QSTYLE_SUBCONTROL_SC_TOOLBUTTON = 1,
    QSTYLE_SUBCONTROL_SC_TOOLBUTTONMENU = 2,
    QSTYLE_SUBCONTROL_SC_TITLEBARSYSMENU = 1,
    QSTYLE_SUBCONTROL_SC_TITLEBARMINBUTTON = 2,
    QSTYLE_SUBCONTROL_SC_TITLEBARMAXBUTTON = 4,
    QSTYLE_SUBCONTROL_SC_TITLEBARCLOSEBUTTON = 8,
    QSTYLE_SUBCONTROL_SC_TITLEBARNORMALBUTTON = 16,
    QSTYLE_SUBCONTROL_SC_TITLEBARSHADEBUTTON = 32,
    QSTYLE_SUBCONTROL_SC_TITLEBARUNSHADEBUTTON = 64,
    QSTYLE_SUBCONTROL_SC_TITLEBARCONTEXTHELPBUTTON = 128,
    QSTYLE_SUBCONTROL_SC_TITLEBARLABEL = 256,
    QSTYLE_SUBCONTROL_SC_DIALGROOVE = 1,
    QSTYLE_SUBCONTROL_SC_DIALHANDLE = 2,
    QSTYLE_SUBCONTROL_SC_DIALTICKMARKS = 4,
    QSTYLE_SUBCONTROL_SC_GROUPBOXCHECKBOX = 1,
    QSTYLE_SUBCONTROL_SC_GROUPBOXLABEL = 2,
    QSTYLE_SUBCONTROL_SC_GROUPBOXCONTENTS = 4,
    QSTYLE_SUBCONTROL_SC_GROUPBOXFRAME = 8,
    QSTYLE_SUBCONTROL_SC_MDIMINBUTTON = 1,
    QSTYLE_SUBCONTROL_SC_MDINORMALBUTTON = 2,
    QSTYLE_SUBCONTROL_SC_MDICLOSEBUTTON = 4,
    QSTYLE_SUBCONTROL_SC_CUSTOMBASE = 4026531840,
    QSTYLE_SUBCONTROL_SC_ALL = 4294967295
} QStyle__SubControl;

typedef enum {
    QSTYLE_PIXELMETRIC_PM_BUTTONMARGIN = 0,
    QSTYLE_PIXELMETRIC_PM_BUTTONDEFAULTINDICATOR = 1,
    QSTYLE_PIXELMETRIC_PM_MENUBUTTONINDICATOR = 2,
    QSTYLE_PIXELMETRIC_PM_BUTTONSHIFTHORIZONTAL = 3,
    QSTYLE_PIXELMETRIC_PM_BUTTONSHIFTVERTICAL = 4,
    QSTYLE_PIXELMETRIC_PM_DEFAULTFRAMEWIDTH = 5,
    QSTYLE_PIXELMETRIC_PM_SPINBOXFRAMEWIDTH = 6,
    QSTYLE_PIXELMETRIC_PM_COMBOBOXFRAMEWIDTH = 7,
    QSTYLE_PIXELMETRIC_PM_MAXIMUMDRAGDISTANCE = 8,
    QSTYLE_PIXELMETRIC_PM_SCROLLBAREXTENT = 9,
    QSTYLE_PIXELMETRIC_PM_SCROLLBARSLIDERMIN = 10,
    QSTYLE_PIXELMETRIC_PM_SLIDERTHICKNESS = 11,
    QSTYLE_PIXELMETRIC_PM_SLIDERCONTROLTHICKNESS = 12,
    QSTYLE_PIXELMETRIC_PM_SLIDERLENGTH = 13,
    QSTYLE_PIXELMETRIC_PM_SLIDERTICKMARKOFFSET = 14,
    QSTYLE_PIXELMETRIC_PM_SLIDERSPACEAVAILABLE = 15,
    QSTYLE_PIXELMETRIC_PM_DOCKWIDGETSEPARATOREXTENT = 16,
    QSTYLE_PIXELMETRIC_PM_DOCKWIDGETHANDLEEXTENT = 17,
    QSTYLE_PIXELMETRIC_PM_DOCKWIDGETFRAMEWIDTH = 18,
    QSTYLE_PIXELMETRIC_PM_TABBARTABOVERLAP = 19,
    QSTYLE_PIXELMETRIC_PM_TABBARTABHSPACE = 20,
    QSTYLE_PIXELMETRIC_PM_TABBARTABVSPACE = 21,
    QSTYLE_PIXELMETRIC_PM_TABBARBASEHEIGHT = 22,
    QSTYLE_PIXELMETRIC_PM_TABBARBASEOVERLAP = 23,
    QSTYLE_PIXELMETRIC_PM_PROGRESSBARCHUNKWIDTH = 24,
    QSTYLE_PIXELMETRIC_PM_SPLITTERWIDTH = 25,
    QSTYLE_PIXELMETRIC_PM_TITLEBARHEIGHT = 26,
    QSTYLE_PIXELMETRIC_PM_MENUSCROLLERHEIGHT = 27,
    QSTYLE_PIXELMETRIC_PM_MENUHMARGIN = 28,
    QSTYLE_PIXELMETRIC_PM_MENUVMARGIN = 29,
    QSTYLE_PIXELMETRIC_PM_MENUPANELWIDTH = 30,
    QSTYLE_PIXELMETRIC_PM_MENUTEAROFFHEIGHT = 31,
    QSTYLE_PIXELMETRIC_PM_MENUDESKTOPFRAMEWIDTH = 32,
    QSTYLE_PIXELMETRIC_PM_MENUBARPANELWIDTH = 33,
    QSTYLE_PIXELMETRIC_PM_MENUBARITEMSPACING = 34,
    QSTYLE_PIXELMETRIC_PM_MENUBARVMARGIN = 35,
    QSTYLE_PIXELMETRIC_PM_MENUBARHMARGIN = 36,
    QSTYLE_PIXELMETRIC_PM_INDICATORWIDTH = 37,
    QSTYLE_PIXELMETRIC_PM_INDICATORHEIGHT = 38,
    QSTYLE_PIXELMETRIC_PM_EXCLUSIVEINDICATORWIDTH = 39,
    QSTYLE_PIXELMETRIC_PM_EXCLUSIVEINDICATORHEIGHT = 40,
    QSTYLE_PIXELMETRIC_PM_MDISUBWINDOWFRAMEWIDTH = 44,
    QSTYLE_PIXELMETRIC_PM_MDISUBWINDOWMINIMIZEDWIDTH = 45,
    QSTYLE_PIXELMETRIC_PM_HEADERMARGIN = 46,
    QSTYLE_PIXELMETRIC_PM_HEADERMARKSIZE = 47,
    QSTYLE_PIXELMETRIC_PM_HEADERGRIPMARGIN = 48,
    QSTYLE_PIXELMETRIC_PM_TABBARTABSHIFTHORIZONTAL = 49,
    QSTYLE_PIXELMETRIC_PM_TABBARTABSHIFTVERTICAL = 50,
    QSTYLE_PIXELMETRIC_PM_TABBARSCROLLBUTTONWIDTH = 51,
    QSTYLE_PIXELMETRIC_PM_TOOLBARFRAMEWIDTH = 52,
    QSTYLE_PIXELMETRIC_PM_TOOLBARHANDLEEXTENT = 53,
    QSTYLE_PIXELMETRIC_PM_TOOLBARITEMSPACING = 54,
    QSTYLE_PIXELMETRIC_PM_TOOLBARITEMMARGIN = 55,
    QSTYLE_PIXELMETRIC_PM_TOOLBARSEPARATOREXTENT = 56,
    QSTYLE_PIXELMETRIC_PM_TOOLBAREXTENSIONEXTENT = 57,
    QSTYLE_PIXELMETRIC_PM_SPINBOXSLIDERHEIGHT = 58,
    QSTYLE_PIXELMETRIC_PM_TOOLBARICONSIZE = 59,
    QSTYLE_PIXELMETRIC_PM_LISTVIEWICONSIZE = 60,
    QSTYLE_PIXELMETRIC_PM_ICONVIEWICONSIZE = 61,
    QSTYLE_PIXELMETRIC_PM_SMALLICONSIZE = 62,
    QSTYLE_PIXELMETRIC_PM_LARGEICONSIZE = 63,
    QSTYLE_PIXELMETRIC_PM_FOCUSFRAMEVMARGIN = 64,
    QSTYLE_PIXELMETRIC_PM_FOCUSFRAMEHMARGIN = 65,
    QSTYLE_PIXELMETRIC_PM_TOOLTIPLABELFRAMEWIDTH = 66,
    QSTYLE_PIXELMETRIC_PM_CHECKBOXLABELSPACING = 67,
    QSTYLE_PIXELMETRIC_PM_TABBARICONSIZE = 68,
    QSTYLE_PIXELMETRIC_PM_SIZEGRIPSIZE = 69,
    QSTYLE_PIXELMETRIC_PM_DOCKWIDGETTITLEMARGIN = 70,
    QSTYLE_PIXELMETRIC_PM_MESSAGEBOXICONSIZE = 71,
    QSTYLE_PIXELMETRIC_PM_BUTTONICONSIZE = 72,
    QSTYLE_PIXELMETRIC_PM_DOCKWIDGETTITLEBARBUTTONMARGIN = 73,
    QSTYLE_PIXELMETRIC_PM_RADIOBUTTONLABELSPACING = 74,
    QSTYLE_PIXELMETRIC_PM_LAYOUTLEFTMARGIN = 75,
    QSTYLE_PIXELMETRIC_PM_LAYOUTTOPMARGIN = 76,
    QSTYLE_PIXELMETRIC_PM_LAYOUTRIGHTMARGIN = 77,
    QSTYLE_PIXELMETRIC_PM_LAYOUTBOTTOMMARGIN = 78,
    QSTYLE_PIXELMETRIC_PM_LAYOUTHORIZONTALSPACING = 79,
    QSTYLE_PIXELMETRIC_PM_LAYOUTVERTICALSPACING = 80,
    QSTYLE_PIXELMETRIC_PM_TABBAR_SCROLLBUTTONOVERLAP = 81,
    QSTYLE_PIXELMETRIC_PM_TEXTCURSORWIDTH = 82,
    QSTYLE_PIXELMETRIC_PM_TABCLOSEINDICATORWIDTH = 83,
    QSTYLE_PIXELMETRIC_PM_TABCLOSEINDICATORHEIGHT = 84,
    QSTYLE_PIXELMETRIC_PM_SCROLLVIEW_SCROLLBARSPACING = 85,
    QSTYLE_PIXELMETRIC_PM_SCROLLVIEW_SCROLLBAROVERLAP = 86,
    QSTYLE_PIXELMETRIC_PM_SUBMENUOVERLAP = 87,
    QSTYLE_PIXELMETRIC_PM_TREEVIEWINDENTATION = 88,
    QSTYLE_PIXELMETRIC_PM_HEADERDEFAULTSECTIONSIZEHORIZONTAL = 89,
    QSTYLE_PIXELMETRIC_PM_HEADERDEFAULTSECTIONSIZEVERTICAL = 90,
    QSTYLE_PIXELMETRIC_PM_TITLEBARBUTTONICONSIZE = 91,
    QSTYLE_PIXELMETRIC_PM_TITLEBARBUTTONSIZE = 92,
    QSTYLE_PIXELMETRIC_PM_LINEEDITICONSIZE = 93,
    QSTYLE_PIXELMETRIC_PM_LINEEDITICONMARGIN = 94,
    QSTYLE_PIXELMETRIC_PM_CUSTOMBASE = 4026531840
} QStyle__PixelMetric;

typedef enum {
    QSTYLE_CONTENTSTYPE_CT_PUSHBUTTON = 0,
    QSTYLE_CONTENTSTYPE_CT_CHECKBOX = 1,
    QSTYLE_CONTENTSTYPE_CT_RADIOBUTTON = 2,
    QSTYLE_CONTENTSTYPE_CT_TOOLBUTTON = 3,
    QSTYLE_CONTENTSTYPE_CT_COMBOBOX = 4,
    QSTYLE_CONTENTSTYPE_CT_SPLITTER = 5,
    QSTYLE_CONTENTSTYPE_CT_PROGRESSBAR = 6,
    QSTYLE_CONTENTSTYPE_CT_MENUITEM = 7,
    QSTYLE_CONTENTSTYPE_CT_MENUBARITEM = 8,
    QSTYLE_CONTENTSTYPE_CT_MENUBAR = 9,
    QSTYLE_CONTENTSTYPE_CT_MENU = 10,
    QSTYLE_CONTENTSTYPE_CT_TABBARTAB = 11,
    QSTYLE_CONTENTSTYPE_CT_SLIDER = 12,
    QSTYLE_CONTENTSTYPE_CT_SCROLLBAR = 13,
    QSTYLE_CONTENTSTYPE_CT_LINEEDIT = 14,
    QSTYLE_CONTENTSTYPE_CT_SPINBOX = 15,
    QSTYLE_CONTENTSTYPE_CT_SIZEGRIP = 16,
    QSTYLE_CONTENTSTYPE_CT_TABWIDGET = 17,
    QSTYLE_CONTENTSTYPE_CT_DIALOGBUTTONS = 18,
    QSTYLE_CONTENTSTYPE_CT_HEADERSECTION = 19,
    QSTYLE_CONTENTSTYPE_CT_GROUPBOX = 20,
    QSTYLE_CONTENTSTYPE_CT_MDICONTROLS = 21,
    QSTYLE_CONTENTSTYPE_CT_ITEMVIEWITEM = 22,
    QSTYLE_CONTENTSTYPE_CT_CUSTOMBASE = 4026531840
} QStyle__ContentsType;

typedef enum {
    QSTYLE_REQUESTSOFTWAREINPUTPANEL_RSIP_ONMOUSECLICKANDALREADYFOCUSED = 0,
    QSTYLE_REQUESTSOFTWAREINPUTPANEL_RSIP_ONMOUSECLICK = 1
} QStyle__RequestSoftwareInputPanel;

typedef enum {
    QSTYLE_STYLEHINT_SH_ETCHDISABLEDTEXT = 0,
    QSTYLE_STYLEHINT_SH_DITHERDISABLEDTEXT = 1,
    QSTYLE_STYLEHINT_SH_SCROLLBAR_MIDDLECLICKABSOLUTEPOSITION = 2,
    QSTYLE_STYLEHINT_SH_SCROLLBAR_SCROLLWHENPOINTERLEAVESCONTROL = 3,
    QSTYLE_STYLEHINT_SH_TABBAR_SELECTMOUSETYPE = 4,
    QSTYLE_STYLEHINT_SH_TABBAR_ALIGNMENT = 5,
    QSTYLE_STYLEHINT_SH_HEADER_ARROWALIGNMENT = 6,
    QSTYLE_STYLEHINT_SH_SLIDER_SNAPTOVALUE = 7,
    QSTYLE_STYLEHINT_SH_SLIDER_SLOPPYKEYEVENTS = 8,
    QSTYLE_STYLEHINT_SH_PROGRESSDIALOG_CENTERCANCELBUTTON = 9,
    QSTYLE_STYLEHINT_SH_PROGRESSDIALOG_TEXTLABELALIGNMENT = 10,
    QSTYLE_STYLEHINT_SH_PRINTDIALOG_RIGHTALIGNBUTTONS = 11,
    QSTYLE_STYLEHINT_SH_MAINWINDOW_SPACEBELOWMENUBAR = 12,
    QSTYLE_STYLEHINT_SH_FONTDIALOG_SELECTASSOCIATEDTEXT = 13,
    QSTYLE_STYLEHINT_SH_MENU_ALLOWACTIVEANDDISABLED = 14,
    QSTYLE_STYLEHINT_SH_MENU_SPACEACTIVATESITEM = 15,
    QSTYLE_STYLEHINT_SH_MENU_SUBMENUPOPUPDELAY = 16,
    QSTYLE_STYLEHINT_SH_SCROLLVIEW_FRAMEONLYAROUNDCONTENTS = 17,
    QSTYLE_STYLEHINT_SH_MENUBAR_ALTKEYNAVIGATION = 18,
    QSTYLE_STYLEHINT_SH_COMBOBOX_LISTMOUSETRACKING = 19,
    QSTYLE_STYLEHINT_SH_MENU_MOUSETRACKING = 20,
    QSTYLE_STYLEHINT_SH_MENUBAR_MOUSETRACKING = 21,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_CHANGEHIGHLIGHTONFOCUS = 22,
    QSTYLE_STYLEHINT_SH_WIDGET_SHAREACTIVATION = 23,
    QSTYLE_STYLEHINT_SH_WORKSPACE_FILLSPACEONMAXIMIZE = 24,
    QSTYLE_STYLEHINT_SH_COMBOBOX_POPUP = 25,
    QSTYLE_STYLEHINT_SH_TITLEBAR_NOBORDER = 26,
    QSTYLE_STYLEHINT_SH_SLIDER_STOPMOUSEOVERSLIDER = 27,
    QSTYLE_STYLEHINT_SH_BLINKCURSORWHENTEXTSELECTED = 28,
    QSTYLE_STYLEHINT_SH_RICHTEXT_FULLWIDTHSELECTION = 29,
    QSTYLE_STYLEHINT_SH_MENU_SCROLLABLE = 30,
    QSTYLE_STYLEHINT_SH_GROUPBOX_TEXTLABELVERTICALALIGNMENT = 31,
    QSTYLE_STYLEHINT_SH_GROUPBOX_TEXTLABELCOLOR = 32,
    QSTYLE_STYLEHINT_SH_MENU_SLOPPYSUBMENUS = 33,
    QSTYLE_STYLEHINT_SH_TABLE_GRIDLINECOLOR = 34,
    QSTYLE_STYLEHINT_SH_LINEEDIT_PASSWORDCHARACTER = 35,
    QSTYLE_STYLEHINT_SH_DIALOGBUTTONS_DEFAULTBUTTON = 36,
    QSTYLE_STYLEHINT_SH_TOOLBOX_SELECTEDPAGETITLEBOLD = 37,
    QSTYLE_STYLEHINT_SH_TABBAR_PREFERNOARROWS = 38,
    QSTYLE_STYLEHINT_SH_SCROLLBAR_LEFTCLICKABSOLUTEPOSITION = 39,
    QSTYLE_STYLEHINT_SH_LISTVIEWEXPAND_SELECTMOUSETYPE = 40,
    QSTYLE_STYLEHINT_SH_UNDERLINESHORTCUT = 41,
    QSTYLE_STYLEHINT_SH_SPINBOX_ANIMATEBUTTON = 42,
    QSTYLE_STYLEHINT_SH_SPINBOX_KEYPRESSAUTOREPEATRATE = 43,
    QSTYLE_STYLEHINT_SH_SPINBOX_CLICKAUTOREPEATRATE = 44,
    QSTYLE_STYLEHINT_SH_MENU_FILLSCREENWITHSCROLL = 45,
    QSTYLE_STYLEHINT_SH_TOOLTIPLABEL_OPACITY = 46,
    QSTYLE_STYLEHINT_SH_DRAWMENUBARSEPARATOR = 47,
    QSTYLE_STYLEHINT_SH_TITLEBAR_MODIFYNOTIFICATION = 48,
    QSTYLE_STYLEHINT_SH_BUTTON_FOCUSPOLICY = 49,
    QSTYLE_STYLEHINT_SH_MESSAGEBOX_USEBORDERFORBUTTONSPACING = 50,
    QSTYLE_STYLEHINT_SH_TITLEBAR_AUTORAISE = 51,
    QSTYLE_STYLEHINT_SH_TOOLBUTTON_POPUPDELAY = 52,
    QSTYLE_STYLEHINT_SH_FOCUSFRAME_MASK = 53,
    QSTYLE_STYLEHINT_SH_RUBBERBAND_MASK = 54,
    QSTYLE_STYLEHINT_SH_WINDOWFRAME_MASK = 55,
    QSTYLE_STYLEHINT_SH_SPINCONTROLS_DISABLEONBOUNDS = 56,
    QSTYLE_STYLEHINT_SH_DIAL_BACKGROUNDROLE = 57,
    QSTYLE_STYLEHINT_SH_COMBOBOX_LAYOUTDIRECTION = 58,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_ELLIPSISLOCATION = 59,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_SHOWDECORATIONSELECTED = 60,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_ACTIVATEITEMONSINGLECLICK = 61,
    QSTYLE_STYLEHINT_SH_SCROLLBAR_CONTEXTMENU = 62,
    QSTYLE_STYLEHINT_SH_SCROLLBAR_ROLLBETWEENBUTTONS = 63,
    QSTYLE_STYLEHINT_SH_SLIDER_ABSOLUTESETBUTTONS = 64,
    QSTYLE_STYLEHINT_SH_SLIDER_PAGESETBUTTONS = 65,
    QSTYLE_STYLEHINT_SH_MENU_KEYBOARDSEARCH = 66,
    QSTYLE_STYLEHINT_SH_TABBAR_ELIDEMODE = 67,
    QSTYLE_STYLEHINT_SH_DIALOGBUTTONLAYOUT = 68,
    QSTYLE_STYLEHINT_SH_COMBOBOX_POPUPFRAMESTYLE = 69,
    QSTYLE_STYLEHINT_SH_MESSAGEBOX_TEXTINTERACTIONFLAGS = 70,
    QSTYLE_STYLEHINT_SH_DIALOGBUTTONBOX_BUTTONSHAVEICONS = 71,
    QSTYLE_STYLEHINT_SH_MESSAGEBOX_CENTERBUTTONS = 72,
    QSTYLE_STYLEHINT_SH_MENU_SELECTIONWRAP = 73,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_MOVEMENTWITHOUTUPDATINGSELECTION = 74,
    QSTYLE_STYLEHINT_SH_TOOLTIP_MASK = 75,
    QSTYLE_STYLEHINT_SH_FOCUSFRAME_ABOVEWIDGET = 76,
    QSTYLE_STYLEHINT_SH_TEXTCONTROL_FOCUSINDICATORTEXTCHARFORMAT = 77,
    QSTYLE_STYLEHINT_SH_WIZARDSTYLE = 78,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_ARROWKEYSNAVIGATEINTOCHILDREN = 79,
    QSTYLE_STYLEHINT_SH_MENU_MASK = 80,
    QSTYLE_STYLEHINT_SH_MENU_FLASHTRIGGEREDITEM = 81,
    QSTYLE_STYLEHINT_SH_MENU_FADEOUTONHIDE = 82,
    QSTYLE_STYLEHINT_SH_SPINBOX_CLICKAUTOREPEATTHRESHOLD = 83,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_PAINTALTERNATINGROWCOLORSFOREMPTYAREA = 84,
    QSTYLE_STYLEHINT_SH_FORMLAYOUTWRAPPOLICY = 85,
    QSTYLE_STYLEHINT_SH_TABWIDGET_DEFAULTTABPOSITION = 86,
    QSTYLE_STYLEHINT_SH_TOOLBAR_MOVABLE = 87,
    QSTYLE_STYLEHINT_SH_FORMLAYOUTFIELDGROWTHPOLICY = 88,
    QSTYLE_STYLEHINT_SH_FORMLAYOUTFORMALIGNMENT = 89,
    QSTYLE_STYLEHINT_SH_FORMLAYOUTLABELALIGNMENT = 90,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_DRAWDELEGATEFRAME = 91,
    QSTYLE_STYLEHINT_SH_TABBAR_CLOSEBUTTONPOSITION = 92,
    QSTYLE_STYLEHINT_SH_DOCKWIDGET_BUTTONSHAVEFRAME = 93,
    QSTYLE_STYLEHINT_SH_TOOLBUTTONSTYLE = 94,
    QSTYLE_STYLEHINT_SH_REQUESTSOFTWAREINPUTPANEL = 95,
    QSTYLE_STYLEHINT_SH_SCROLLBAR_TRANSIENT = 96,
    QSTYLE_STYLEHINT_SH_MENU_SUPPORTSSECTIONS = 97,
    QSTYLE_STYLEHINT_SH_TOOLTIP_WAKEUPDELAY = 98,
    QSTYLE_STYLEHINT_SH_TOOLTIP_FALLASLEEPDELAY = 99,
    QSTYLE_STYLEHINT_SH_WIDGET_ANIMATE = 100,
    QSTYLE_STYLEHINT_SH_SPLITTER_OPAQUERESIZE = 101,
    QSTYLE_STYLEHINT_SH_COMBOBOX_USENATIVEPOPUP = 102,
    QSTYLE_STYLEHINT_SH_LINEEDIT_PASSWORDMASKDELAY = 103,
    QSTYLE_STYLEHINT_SH_TABBAR_CHANGECURRENTDELAY = 104,
    QSTYLE_STYLEHINT_SH_MENU_SUBMENUUNIDIRECTION = 105,
    QSTYLE_STYLEHINT_SH_MENU_SUBMENUUNIDIRECTIONFAILCOUNT = 106,
    QSTYLE_STYLEHINT_SH_MENU_SUBMENUSLOPPYSELECTOTHERACTIONS = 107,
    QSTYLE_STYLEHINT_SH_MENU_SUBMENUSLOPPYCLOSETIMEOUT = 108,
    QSTYLE_STYLEHINT_SH_MENU_SUBMENURESETWHENREENTERINGPARENT = 109,
    QSTYLE_STYLEHINT_SH_MENU_SUBMENUDONTSTARTSLOPPYONLEAVE = 110,
    QSTYLE_STYLEHINT_SH_ITEMVIEW_SCROLLMODE = 111,
    QSTYLE_STYLEHINT_SH_TITLEBAR_SHOWTOOLTIPSONBUTTONS = 112,
    QSTYLE_STYLEHINT_SH_WIDGET_ANIMATION_DURATION = 113,
    QSTYLE_STYLEHINT_SH_COMBOBOX_ALLOWWHEELSCROLLING = 114,
    QSTYLE_STYLEHINT_SH_SPINBOX_BUTTONSINSIDEFRAME = 115,
    QSTYLE_STYLEHINT_SH_SPINBOX_STEPMODIFIER = 116,
    QSTYLE_STYLEHINT_SH_TABBAR_ALLOWWHEELSCROLLING = 117,
    QSTYLE_STYLEHINT_SH_TABLE_ALWAYSDRAWLEFTTOPGRIDLINES = 118,
    QSTYLE_STYLEHINT_SH_SPINBOX_SELECTONSTEP = 119,
    QSTYLE_STYLEHINT_SH_CUSTOMBASE = 4026531840
} QStyle__StyleHint;

typedef enum {
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARMENUBUTTON = 0,
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARMINBUTTON = 1,
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARMAXBUTTON = 2,
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARCLOSEBUTTON = 3,
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARNORMALBUTTON = 4,
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARSHADEBUTTON = 5,
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARUNSHADEBUTTON = 6,
    QSTYLE_STANDARDPIXMAP_SP_TITLEBARCONTEXTHELPBUTTON = 7,
    QSTYLE_STANDARDPIXMAP_SP_DOCKWIDGETCLOSEBUTTON = 8,
    QSTYLE_STANDARDPIXMAP_SP_MESSAGEBOXINFORMATION = 9,
    QSTYLE_STANDARDPIXMAP_SP_MESSAGEBOXWARNING = 10,
    QSTYLE_STANDARDPIXMAP_SP_MESSAGEBOXCRITICAL = 11,
    QSTYLE_STANDARDPIXMAP_SP_MESSAGEBOXQUESTION = 12,
    QSTYLE_STANDARDPIXMAP_SP_DESKTOPICON = 13,
    QSTYLE_STANDARDPIXMAP_SP_TRASHICON = 14,
    QSTYLE_STANDARDPIXMAP_SP_COMPUTERICON = 15,
    QSTYLE_STANDARDPIXMAP_SP_DRIVEFDICON = 16,
    QSTYLE_STANDARDPIXMAP_SP_DRIVEHDICON = 17,
    QSTYLE_STANDARDPIXMAP_SP_DRIVECDICON = 18,
    QSTYLE_STANDARDPIXMAP_SP_DRIVEDVDICON = 19,
    QSTYLE_STANDARDPIXMAP_SP_DRIVENETICON = 20,
    QSTYLE_STANDARDPIXMAP_SP_DIROPENICON = 21,
    QSTYLE_STANDARDPIXMAP_SP_DIRCLOSEDICON = 22,
    QSTYLE_STANDARDPIXMAP_SP_DIRLINKICON = 23,
    QSTYLE_STANDARDPIXMAP_SP_DIRLINKOPENICON = 24,
    QSTYLE_STANDARDPIXMAP_SP_FILEICON = 25,
    QSTYLE_STANDARDPIXMAP_SP_FILELINKICON = 26,
    QSTYLE_STANDARDPIXMAP_SP_TOOLBARHORIZONTALEXTENSIONBUTTON = 27,
    QSTYLE_STANDARDPIXMAP_SP_TOOLBARVERTICALEXTENSIONBUTTON = 28,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGSTART = 29,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGEND = 30,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGTOPARENT = 31,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGNEWFOLDER = 32,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGDETAILEDVIEW = 33,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGINFOVIEW = 34,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGCONTENTSVIEW = 35,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGLISTVIEW = 36,
    QSTYLE_STANDARDPIXMAP_SP_FILEDIALOGBACK = 37,
    QSTYLE_STANDARDPIXMAP_SP_DIRICON = 38,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGOKBUTTON = 39,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGCANCELBUTTON = 40,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGHELPBUTTON = 41,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGOPENBUTTON = 42,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGSAVEBUTTON = 43,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGCLOSEBUTTON = 44,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGAPPLYBUTTON = 45,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGRESETBUTTON = 46,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGDISCARDBUTTON = 47,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGYESBUTTON = 48,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGNOBUTTON = 49,
    QSTYLE_STANDARDPIXMAP_SP_ARROWUP = 50,
    QSTYLE_STANDARDPIXMAP_SP_ARROWDOWN = 51,
    QSTYLE_STANDARDPIXMAP_SP_ARROWLEFT = 52,
    QSTYLE_STANDARDPIXMAP_SP_ARROWRIGHT = 53,
    QSTYLE_STANDARDPIXMAP_SP_ARROWBACK = 54,
    QSTYLE_STANDARDPIXMAP_SP_ARROWFORWARD = 55,
    QSTYLE_STANDARDPIXMAP_SP_DIRHOMEICON = 56,
    QSTYLE_STANDARDPIXMAP_SP_COMMANDLINK = 57,
    QSTYLE_STANDARDPIXMAP_SP_VISTASHIELD = 58,
    QSTYLE_STANDARDPIXMAP_SP_BROWSERRELOAD = 59,
    QSTYLE_STANDARDPIXMAP_SP_BROWSERSTOP = 60,
    QSTYLE_STANDARDPIXMAP_SP_MEDIAPLAY = 61,
    QSTYLE_STANDARDPIXMAP_SP_MEDIASTOP = 62,
    QSTYLE_STANDARDPIXMAP_SP_MEDIAPAUSE = 63,
    QSTYLE_STANDARDPIXMAP_SP_MEDIASKIPFORWARD = 64,
    QSTYLE_STANDARDPIXMAP_SP_MEDIASKIPBACKWARD = 65,
    QSTYLE_STANDARDPIXMAP_SP_MEDIASEEKFORWARD = 66,
    QSTYLE_STANDARDPIXMAP_SP_MEDIASEEKBACKWARD = 67,
    QSTYLE_STANDARDPIXMAP_SP_MEDIAVOLUME = 68,
    QSTYLE_STANDARDPIXMAP_SP_MEDIAVOLUMEMUTED = 69,
    QSTYLE_STANDARDPIXMAP_SP_LINEEDITCLEARBUTTON = 70,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGYESTOALLBUTTON = 71,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGNOTOALLBUTTON = 72,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGSAVEALLBUTTON = 73,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGABORTBUTTON = 74,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGRETRYBUTTON = 75,
    QSTYLE_STANDARDPIXMAP_SP_DIALOGIGNOREBUTTON = 76,
    QSTYLE_STANDARDPIXMAP_SP_RESTOREDEFAULTSBUTTON = 77,
    QSTYLE_STANDARDPIXMAP_SP_TABCLOSEBUTTON = 78,
    QSTYLE_STANDARDPIXMAP_NSTANDARDPIXMAP = 79,
    QSTYLE_STANDARDPIXMAP_SP_CUSTOMBASE = 4026531840
} QStyle__StandardPixmap;

#endif
