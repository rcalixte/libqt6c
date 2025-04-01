#pragma once
#ifndef SRCQT6C_LIBQCOMMONSTYLE_H
#define SRCQT6C_LIBQCOMMONSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqapplication.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqfontmetrics.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qcommonstyle.html

/// q_commonstyle_new constructs a new QCommonStyle object.
///
///
QCommonStyle* q_commonstyle_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCommonStyle* self ```
QMetaObject* q_commonstyle_meta_object(void* self);

/// ``` QCommonStyle* self, const char* param1 ```
void* q_commonstyle_metacast(void* self, const char* param1);

/// ``` QCommonStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_commonstyle_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QMetaObject__Call, int, void*) ```
void q_commonstyle_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_commonstyle_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_commonstyle_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// ``` QCommonStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, enum QStyle__PrimitiveElement, QStyleOption*, QPainter*, QWidget*) ```
void q_commonstyle_on_draw_primitive(void* self, void (*slot)(void*, int64_t, void*, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_qbase_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// ``` QCommonStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_draw_control(void* self, int64_t element, void* opt, void* p, void* w);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, enum QStyle__ControlElement, QStyleOption*, QPainter*, QWidget*) ```
void q_commonstyle_on_draw_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_qbase_draw_control(void* self, int64_t element, void* opt, void* p, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// ``` QCommonStyle* self, enum QStyle__SubElement r, QStyleOption* opt, QWidget* widget ```
QRect* q_commonstyle_sub_element_rect(void* self, int64_t r, void* opt, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, enum QStyle__SubElement, QStyleOption*, QWidget*) ```
void q_commonstyle_on_sub_element_rect(void* self, QRect* (*slot)(void*, int64_t, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__SubElement r, QStyleOption* opt, QWidget* widget ```
QRect* q_commonstyle_qbase_sub_element_rect(void* self, int64_t r, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w ```
void q_commonstyle_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* w);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPainter*, QWidget*) ```
void q_commonstyle_on_draw_complex_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w ```
void q_commonstyle_qbase_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w ```
int64_t q_commonstyle_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* w);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int64_t (*slot)(QCommonStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPoint*, QWidget*) ```
void q_commonstyle_on_hit_test_complex_control(void* self, int64_t (*slot)(void*, int64_t, void*, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w ```
int64_t q_commonstyle_qbase_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* w ```
QRect* q_commonstyle_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* w);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, enum QStyle__SubControl, QWidget*) ```
void q_commonstyle_on_sub_control_rect(void* self, QRect* (*slot)(void*, int64_t, void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* w ```
QRect* q_commonstyle_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// ``` QCommonStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget ```
QSize* q_commonstyle_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QSize* (*slot)(QCommonStyle*, enum QStyle__ContentsType, QStyleOption*, QSize*, QWidget*) ```
void q_commonstyle_on_size_from_contents(void* self, QSize* (*slot)(void*, int64_t, void*, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget ```
QSize* q_commonstyle_qbase_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// ``` QCommonStyle* self, enum QStyle__PixelMetric m, QStyleOption* opt, QWidget* widget ```
int32_t q_commonstyle_pixel_metric(void* self, int64_t m, void* opt, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QStyle__PixelMetric, QStyleOption*, QWidget*) ```
void q_commonstyle_on_pixel_metric(void* self, int32_t (*slot)(void*, int64_t, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__PixelMetric m, QStyleOption* opt, QWidget* widget ```
int32_t q_commonstyle_qbase_pixel_metric(void* self, int64_t m, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// ``` QCommonStyle* self, enum QStyle__StyleHint sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret ```
int32_t q_commonstyle_style_hint(void* self, int64_t sh, void* opt, void* w, void* shret);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QStyle__StyleHint, QStyleOption*, QWidget*, QStyleHintReturn*) ```
void q_commonstyle_on_style_hint(void* self, int32_t (*slot)(void*, int64_t, void*, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__StyleHint sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret ```
int32_t q_commonstyle_qbase_style_hint(void* self, int64_t sh, void* opt, void* w, void* shret);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* opt, QWidget* widget ```
QIcon* q_commonstyle_standard_icon(void* self, int64_t standardIcon, void* opt, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QIcon* (*slot)(QCommonStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_commonstyle_on_standard_icon(void* self, QIcon* (*slot)(void*, int64_t, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* opt, QWidget* widget ```
QIcon* q_commonstyle_qbase_standard_icon(void* self, int64_t standardIcon, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap sp, QStyleOption* opt, QWidget* widget ```
QPixmap* q_commonstyle_standard_pixmap(void* self, int64_t sp, void* opt, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QPixmap* (*slot)(QCommonStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_commonstyle_on_standard_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap sp, QStyleOption* opt, QWidget* widget ```
QPixmap* q_commonstyle_qbase_standard_pixmap(void* self, int64_t sp, void* opt, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// ``` QCommonStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_commonstyle_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QPixmap* (*slot)(QCommonStyle*, enum QIcon__Mode, QPixmap*, QStyleOption*) ```
void q_commonstyle_on_generated_icon_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_commonstyle_qbase_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// ``` QCommonStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_commonstyle_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QSizePolicy__ControlType, enum QSizePolicy__ControlType, enum Qt__Orientation, QStyleOption*, QWidget*) ```
void q_commonstyle_on_layout_spacing(void* self, int32_t (*slot)(void*, int64_t, int64_t, int64_t, void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_commonstyle_qbase_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// ``` QCommonStyle* self, QPalette* param1 ```
void q_commonstyle_polish(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QPalette*) ```
void q_commonstyle_on_polish(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, QPalette* param1 ```
void q_commonstyle_qbase_polish(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// ``` QCommonStyle* self, QApplication* app ```
void q_commonstyle_polish_with_app(void* self, void* app);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QApplication*) ```
void q_commonstyle_on_polish_with_app(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, QApplication* app ```
void q_commonstyle_qbase_polish_with_app(void* self, void* app);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_polish_with_widget(void* self, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QWidget*) ```
void q_commonstyle_on_polish_with_widget(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_qbase_polish_with_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_unpolish(void* self, void* widget);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QWidget*) ```
void q_commonstyle_on_unpolish(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_qbase_unpolish(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_unpolish_with_application(void* self, void* application);

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QApplication*) ```
void q_commonstyle_on_unpolish_with_application(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_qbase_unpolish_with_application(void* self, void* application);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_commonstyle_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_commonstyle_tr3(const char* s, const char* c, int n);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// ``` QCommonStyle* self ```
const char* q_commonstyle_name(void* self);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_polish_with_application(void* self, void* application);

/// Inherited from QStyle
///
/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QApplication*) ```
void q_commonstyle_on_polish_with_application(void* self, void (*slot)(void*, void*));

/// Inherited from QStyle
///
/// Base class method implementation
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_qbase_polish_with_application(void* self, void* application);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QCommonStyle* self, QPalette* palette ```
void q_commonstyle_polish_with_palette(void* self, void* palette);

/// Inherited from QStyle
///
/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QPalette*) ```
void q_commonstyle_on_polish_with_palette(void* self, void (*slot)(void*, void*));

/// Inherited from QStyle
///
/// Base class method implementation
///
/// ``` QCommonStyle* self, QPalette* palette ```
void q_commonstyle_qbase_polish_with_palette(void* self, void* palette);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QRect* logicalRect ```
QRect* q_commonstyle_visual_rect(int64_t direction, void* boundingRect, void* logicalRect);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QPoint* logicalPos ```
QPoint* q_commonstyle_visual_pos(int64_t direction, void* boundingRect, void* logicalPos);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space ```
int32_t q_commonstyle_slider_position_from_value(int min, int max, int val, int space);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space ```
int32_t q_commonstyle_slider_value_from_position(int min, int max, int pos, int space);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// ``` enum Qt__LayoutDirection direction, int alignment ```
int64_t q_commonstyle_visual_alignment(int64_t direction, int64_t alignment);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// ``` enum Qt__LayoutDirection direction, int alignment, QSize* size, QRect* rectangle ```
QRect* q_commonstyle_aligned_rect(int64_t direction, int64_t alignment, void* size, void* rectangle);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QCommonStyle* self, int controls1, int controls2, enum Qt__Orientation orientation ```
int32_t q_commonstyle_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int64_t orientation);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// ``` QCommonStyle* self ```
QStyle* q_commonstyle_proxy(void* self);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space, bool upsideDown ```
int32_t q_commonstyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space, bool upsideDown ```
int32_t q_commonstyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QCommonStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option ```
int32_t q_commonstyle_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option);

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QCommonStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_commonstyle_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option, void* widget);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCommonStyle* self ```
const char* q_commonstyle_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCommonStyle* self, const char* name ```
void q_commonstyle_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCommonStyle* self, bool b ```
bool q_commonstyle_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCommonStyle* self ```
QThread* q_commonstyle_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCommonStyle* self, QThread* thread ```
void q_commonstyle_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCommonStyle* self, int interval ```
int32_t q_commonstyle_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCommonStyle* self, int id ```
void q_commonstyle_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCommonStyle* self ```
libqt_list /* of QObject* */ q_commonstyle_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCommonStyle* self, QObject* parent ```
void q_commonstyle_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCommonStyle* self, QObject* filterObj ```
void q_commonstyle_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCommonStyle* self, QObject* obj ```
void q_commonstyle_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_commonstyle_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCommonStyle* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_commonstyle_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_commonstyle_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_commonstyle_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCommonStyle* self, const char* name, QVariant* value ```
bool q_commonstyle_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCommonStyle* self, const char* name ```
QVariant* q_commonstyle_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCommonStyle* self ```
const char** q_commonstyle_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCommonStyle* self ```
QBindingStorage* q_commonstyle_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCommonStyle* self ```
QBindingStorage* q_commonstyle_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QCommonStyle* self, void (*slot)(QObject*) ```
void q_commonstyle_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCommonStyle* self ```
QObject* q_commonstyle_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCommonStyle* self, const char* classname ```
bool q_commonstyle_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCommonStyle* self, int interval, enum Qt__TimerType timerType ```
int32_t q_commonstyle_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_commonstyle_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCommonStyle* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_commonstyle_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCommonStyle* self, QObject* param1 ```
void q_commonstyle_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QCommonStyle* self, void (*slot)(QObject*, QObject*) ```
void q_commonstyle_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_commonstyle_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_commonstyle_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text);

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, QFontMetrics*, QRect*, int, bool, const char*) ```
void q_commonstyle_on_item_text_rect(void* self, QRect* (*slot)(void*, void*, void*, int, bool, const char*));

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_commonstyle_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_commonstyle_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap);

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, QRect*, int, QPixmap*) ```
void q_commonstyle_on_item_pixmap_rect(void* self, QRect* (*slot)(void*, void*, int, void*));

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_commonstyle_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_commonstyle_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole);

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, enum QPalette__ColorRole) ```
void q_commonstyle_on_draw_item_text(void* self, void (*slot)(void*, void*, void*, int, void*, bool, const char*, int64_t));

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_commonstyle_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_commonstyle_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap);

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QPainter*, QRect*, int, QPixmap*) ```
void q_commonstyle_on_draw_item_pixmap(void* self, void (*slot)(void*, void*, void*, int, void*));

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self ```
QPalette* q_commonstyle_standard_palette(void* self);

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self ```
QPalette* q_commonstyle_qbase_standard_palette(void* self);

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QPalette* (*slot)() ```
void q_commonstyle_on_standard_palette(void* self, QPalette* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
bool q_commonstyle_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
bool q_commonstyle_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, bool (*slot)(QCommonStyle*, QEvent*) ```
void q_commonstyle_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QObject* watched, QEvent* event ```
bool q_commonstyle_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QObject* watched, QEvent* event ```
bool q_commonstyle_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, bool (*slot)(QCommonStyle*, QObject*, QEvent*) ```
void q_commonstyle_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QTimerEvent* event ```
void q_commonstyle_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QTimerEvent* event ```
void q_commonstyle_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QTimerEvent*) ```
void q_commonstyle_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QChildEvent* event ```
void q_commonstyle_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QChildEvent* event ```
void q_commonstyle_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QChildEvent*) ```
void q_commonstyle_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
void q_commonstyle_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
void q_commonstyle_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QEvent*) ```
void q_commonstyle_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QMetaMethod*) ```
void q_commonstyle_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QMetaMethod*) ```
void q_commonstyle_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self ```
QObject* q_commonstyle_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self ```
QObject* q_commonstyle_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QObject* (*slot)() ```
void q_commonstyle_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self ```
int32_t q_commonstyle_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self ```
int32_t q_commonstyle_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, int32_t (*slot)() ```
void q_commonstyle_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, const char* signal ```
int32_t q_commonstyle_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, const char* signal ```
int32_t q_commonstyle_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, const char*) ```
void q_commonstyle_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
bool q_commonstyle_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
bool q_commonstyle_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, bool (*slot)(QCommonStyle*, QMetaMethod*) ```
void q_commonstyle_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QCommonStyle* self ```
void q_commonstyle_delete(void* self);

#endif
