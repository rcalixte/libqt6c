#pragma once
#ifndef SRCQT6C_LIBQLCDNUMBER_H
#define SRCQT6C_LIBQLCDNUMBER_H

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
#include "libqframe.h"
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
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qlcdnumber.html

/// q_lcdnumber_new constructs a new QLCDNumber object.
///
/// ``` QWidget* parent ```
QLCDNumber* q_lcdnumber_new(void* parent);

/// q_lcdnumber_new2 constructs a new QLCDNumber object.
///
///
QLCDNumber* q_lcdnumber_new2();

/// q_lcdnumber_new3 constructs a new QLCDNumber object.
///
/// ``` uint32_t numDigits ```
QLCDNumber* q_lcdnumber_new3(uint32_t numDigits);

/// q_lcdnumber_new4 constructs a new QLCDNumber object.
///
/// ``` uint32_t numDigits, QWidget* parent ```
QLCDNumber* q_lcdnumber_new4(uint32_t numDigits, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLCDNumber* self ```
QMetaObject* q_lcdnumber_meta_object(void* self);

/// ``` QLCDNumber* self, const char* param1 ```
void* q_lcdnumber_metacast(void* self, const char* param1);

/// ``` QLCDNumber* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lcdnumber_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLCDNumber* self, int32_t (*slot)(QLCDNumber*, enum QMetaObject__Call, int, void*) ```
void q_lcdnumber_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLCDNumber* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lcdnumber_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_lcdnumber_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#smallDecimalPoint)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_small_decimal_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#digitCount)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_digit_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setDigitCount)
///
/// ``` QLCDNumber* self, int nDigits ```
void q_lcdnumber_set_digit_count(void* self, int nDigits);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#checkOverflow)
///
/// ``` QLCDNumber* self, double num ```
bool q_lcdnumber_check_overflow(void* self, double num);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#checkOverflow)
///
/// ``` QLCDNumber* self, int num ```
bool q_lcdnumber_check_overflow_with_num(void* self, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#mode)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setMode)
///
/// ``` QLCDNumber* self, enum QLCDNumber__Mode mode ```
void q_lcdnumber_set_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#segmentStyle)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_segment_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setSegmentStyle)
///
/// ``` QLCDNumber* self, enum QLCDNumber__SegmentStyle segmentStyle ```
void q_lcdnumber_set_segment_style(void* self, int64_t segmentStyle);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#value)
///
/// ``` QLCDNumber* self ```
double q_lcdnumber_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#intValue)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_int_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#sizeHint)
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QLCDNumber* self, QSize* (*slot)() ```
void q_lcdnumber_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#display)
///
/// ``` QLCDNumber* self, const char* str ```
void q_lcdnumber_display(void* self, const char* str);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#display)
///
/// ``` QLCDNumber* self, int num ```
void q_lcdnumber_display_with_num(void* self, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#display)
///
/// ``` QLCDNumber* self, double num ```
void q_lcdnumber_display2(void* self, double num);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setHexMode)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_set_hex_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setDecMode)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_set_dec_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setOctMode)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_set_oct_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setBinMode)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_set_bin_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setSmallDecimalPoint)
///
/// ``` QLCDNumber* self, bool smallDecimalPoint ```
void q_lcdnumber_set_small_decimal_point(void* self, bool smallDecimalPoint);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#overflow)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_overflow(void* self);

/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*) ```
void q_lcdnumber_on_overflow(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#event)
///
/// ``` QLCDNumber* self, QEvent* e ```
bool q_lcdnumber_event(void* self, void* e);

/// Allows for overriding the related default method
///
/// ``` QLCDNumber* self, bool (*slot)(QLCDNumber*, QEvent*) ```
void q_lcdnumber_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLCDNumber* self, QEvent* e ```
bool q_lcdnumber_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#paintEvent)
///
/// ``` QLCDNumber* self, QPaintEvent* param1 ```
void q_lcdnumber_paint_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QPaintEvent*) ```
void q_lcdnumber_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLCDNumber* self, QPaintEvent* param1 ```
void q_lcdnumber_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_lcdnumber_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_lcdnumber_tr3(const char* s, const char* c, int n);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QLCDNumber* self, int frameStyle ```
void q_lcdnumber_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QLCDNumber* self, enum QFrame__Shape frameShape ```
void q_lcdnumber_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QLCDNumber* self, enum QFrame__Shadow frameShadow ```
void q_lcdnumber_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QLCDNumber* self, int lineWidth ```
void q_lcdnumber_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QLCDNumber* self, int midLineWidth ```
void q_lcdnumber_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QLCDNumber* self ```
QRect* q_lcdnumber_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QLCDNumber* self, QRect* frameRect ```
void q_lcdnumber_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QLCDNumber* self ```
uintptr_t q_lcdnumber_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QLCDNumber* self ```
uintptr_t q_lcdnumber_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QLCDNumber* self ```
uintptr_t q_lcdnumber_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QLCDNumber* self ```
QStyle* q_lcdnumber_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QLCDNumber* self, QStyle* style ```
void q_lcdnumber_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QLCDNumber* self, enum Qt__WindowModality windowModality ```
void q_lcdnumber_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QLCDNumber* self, QWidget* param1 ```
bool q_lcdnumber_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QLCDNumber* self, bool enabled ```
void q_lcdnumber_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QLCDNumber* self, bool disabled ```
void q_lcdnumber_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QLCDNumber* self, bool windowModified ```
void q_lcdnumber_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QLCDNumber* self ```
QRect* q_lcdnumber_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QLCDNumber* self ```
QRect* q_lcdnumber_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QLCDNumber* self ```
QRect* q_lcdnumber_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QLCDNumber* self ```
QPoint* q_lcdnumber_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QLCDNumber* self ```
QRect* q_lcdnumber_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QLCDNumber* self ```
QRect* q_lcdnumber_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QLCDNumber* self ```
QRegion* q_lcdnumber_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLCDNumber* self, QSize* minimumSize ```
void q_lcdnumber_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLCDNumber* self, int minw, int minh ```
void q_lcdnumber_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLCDNumber* self, QSize* maximumSize ```
void q_lcdnumber_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLCDNumber* self, int maxw, int maxh ```
void q_lcdnumber_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QLCDNumber* self, int minw ```
void q_lcdnumber_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QLCDNumber* self, int minh ```
void q_lcdnumber_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QLCDNumber* self, int maxw ```
void q_lcdnumber_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QLCDNumber* self, int maxh ```
void q_lcdnumber_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLCDNumber* self, QSize* sizeIncrement ```
void q_lcdnumber_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLCDNumber* self, int w, int h ```
void q_lcdnumber_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLCDNumber* self, QSize* baseSize ```
void q_lcdnumber_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLCDNumber* self, int basew, int baseh ```
void q_lcdnumber_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLCDNumber* self, QSize* fixedSize ```
void q_lcdnumber_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLCDNumber* self, int w, int h ```
void q_lcdnumber_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QLCDNumber* self, int w ```
void q_lcdnumber_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QLCDNumber* self, int h ```
void q_lcdnumber_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLCDNumber* self, QPointF* param1 ```
QPointF* q_lcdnumber_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLCDNumber* self, QPoint* param1 ```
QPoint* q_lcdnumber_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLCDNumber* self, QPointF* param1 ```
QPointF* q_lcdnumber_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLCDNumber* self, QPoint* param1 ```
QPoint* q_lcdnumber_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLCDNumber* self, QPointF* param1 ```
QPointF* q_lcdnumber_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLCDNumber* self, QPoint* param1 ```
QPoint* q_lcdnumber_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLCDNumber* self, QPointF* param1 ```
QPointF* q_lcdnumber_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLCDNumber* self, QPoint* param1 ```
QPoint* q_lcdnumber_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLCDNumber* self, QWidget* param1, QPointF* param2 ```
QPointF* q_lcdnumber_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLCDNumber* self, QWidget* param1, QPoint* param2 ```
QPoint* q_lcdnumber_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLCDNumber* self, QWidget* param1, QPointF* param2 ```
QPointF* q_lcdnumber_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLCDNumber* self, QWidget* param1, QPoint* param2 ```
QPoint* q_lcdnumber_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QLCDNumber* self ```
QPalette* q_lcdnumber_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QLCDNumber* self, QPalette* palette ```
void q_lcdnumber_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QLCDNumber* self, enum QPalette__ColorRole backgroundRole ```
void q_lcdnumber_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QLCDNumber* self, enum QPalette__ColorRole foregroundRole ```
void q_lcdnumber_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QLCDNumber* self ```
QFont* q_lcdnumber_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QLCDNumber* self, QFont* font ```
void q_lcdnumber_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QLCDNumber* self ```
QFontMetrics* q_lcdnumber_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QLCDNumber* self ```
QFontInfo* q_lcdnumber_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QLCDNumber* self ```
QCursor* q_lcdnumber_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QLCDNumber* self, QCursor* cursor ```
void q_lcdnumber_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QLCDNumber* self, bool enable ```
void q_lcdnumber_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QLCDNumber* self, bool enable ```
void q_lcdnumber_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLCDNumber* self, QBitmap* mask ```
void q_lcdnumber_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLCDNumber* self, QRegion* mask ```
void q_lcdnumber_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QLCDNumber* self ```
QRegion* q_lcdnumber_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPaintDevice* target ```
void q_lcdnumber_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPainter* painter ```
void q_lcdnumber_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLCDNumber* self ```
QPixmap* q_lcdnumber_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QLCDNumber* self ```
QGraphicsEffect* q_lcdnumber_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QLCDNumber* self, QGraphicsEffect* effect ```
void q_lcdnumber_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLCDNumber* self, enum Qt__GestureType typeVal ```
void q_lcdnumber_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QLCDNumber* self, enum Qt__GestureType typeVal ```
void q_lcdnumber_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QLCDNumber* self, const char* windowTitle ```
void q_lcdnumber_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QLCDNumber* self, const char* styleSheet ```
void q_lcdnumber_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QLCDNumber* self, QIcon* icon ```
void q_lcdnumber_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QLCDNumber* self ```
QIcon* q_lcdnumber_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QLCDNumber* self, const char* windowIconText ```
void q_lcdnumber_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QLCDNumber* self, const char* windowRole ```
void q_lcdnumber_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QLCDNumber* self, const char* filePath ```
void q_lcdnumber_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QLCDNumber* self, double level ```
void q_lcdnumber_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QLCDNumber* self ```
double q_lcdnumber_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QLCDNumber* self, const char* toolTip ```
void q_lcdnumber_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QLCDNumber* self, int msec ```
void q_lcdnumber_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QLCDNumber* self, const char* statusTip ```
void q_lcdnumber_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QLCDNumber* self, const char* whatsThis ```
void q_lcdnumber_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QLCDNumber* self, const char* name ```
void q_lcdnumber_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QLCDNumber* self, const char* description ```
void q_lcdnumber_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QLCDNumber* self, enum Qt__LayoutDirection direction ```
void q_lcdnumber_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QLCDNumber* self, QLocale* locale ```
void q_lcdnumber_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QLCDNumber* self ```
QLocale* q_lcdnumber_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLCDNumber* self, enum Qt__FocusReason reason ```
void q_lcdnumber_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QLCDNumber* self, enum Qt__FocusPolicy policy ```
void q_lcdnumber_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_lcdnumber_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QLCDNumber* self, QWidget* focusProxy ```
void q_lcdnumber_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QLCDNumber* self, enum Qt__ContextMenuPolicy policy ```
void q_lcdnumber_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLCDNumber* self, QCursor* param1 ```
void q_lcdnumber_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLCDNumber* self, QKeySequence* key ```
int32_t q_lcdnumber_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QLCDNumber* self, int id ```
void q_lcdnumber_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLCDNumber* self, int id ```
void q_lcdnumber_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLCDNumber* self, int id ```
void q_lcdnumber_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_lcdnumber_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_lcdnumber_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QLCDNumber* self, bool enable ```
void q_lcdnumber_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QLCDNumber* self ```
QGraphicsProxyWidget* q_lcdnumber_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLCDNumber* self, int x, int y, int w, int h ```
void q_lcdnumber_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLCDNumber* self, QRect* param1 ```
void q_lcdnumber_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLCDNumber* self, QRegion* param1 ```
void q_lcdnumber_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLCDNumber* self, int x, int y, int w, int h ```
void q_lcdnumber_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLCDNumber* self, QRect* param1 ```
void q_lcdnumber_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLCDNumber* self, QRegion* param1 ```
void q_lcdnumber_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QLCDNumber* self, bool hidden ```
void q_lcdnumber_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QLCDNumber* self, QWidget* param1 ```
void q_lcdnumber_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLCDNumber* self, int x, int y ```
void q_lcdnumber_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLCDNumber* self, QPoint* param1 ```
void q_lcdnumber_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLCDNumber* self, int w, int h ```
void q_lcdnumber_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLCDNumber* self, QSize* param1 ```
void q_lcdnumber_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLCDNumber* self, int x, int y, int w, int h ```
void q_lcdnumber_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLCDNumber* self, QRect* geometry ```
void q_lcdnumber_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QLCDNumber* self ```
char* q_lcdnumber_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QLCDNumber* self, const char* geometry ```
bool q_lcdnumber_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QLCDNumber* self, QWidget* param1 ```
bool q_lcdnumber_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QLCDNumber* self, int state ```
void q_lcdnumber_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QLCDNumber* self, int state ```
void q_lcdnumber_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QLCDNumber* self ```
QSizePolicy* q_lcdnumber_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLCDNumber* self, QSizePolicy* sizePolicy ```
void q_lcdnumber_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLCDNumber* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_lcdnumber_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QLCDNumber* self ```
QRegion* q_lcdnumber_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLCDNumber* self, int left, int top, int right, int bottom ```
void q_lcdnumber_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLCDNumber* self, QMargins* margins ```
void q_lcdnumber_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QLCDNumber* self ```
QMargins* q_lcdnumber_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QLCDNumber* self ```
QRect* q_lcdnumber_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QLCDNumber* self ```
QLayout* q_lcdnumber_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QLCDNumber* self, QLayout* layout ```
void q_lcdnumber_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLCDNumber* self, QWidget* parent ```
void q_lcdnumber_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLCDNumber* self, QWidget* parent, int f ```
void q_lcdnumber_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLCDNumber* self, int dx, int dy ```
void q_lcdnumber_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLCDNumber* self, int dx, int dy, QRect* param3 ```
void q_lcdnumber_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QLCDNumber* self, bool on ```
void q_lcdnumber_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLCDNumber* self, QAction* action ```
void q_lcdnumber_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QLCDNumber* self, QAction* actions[] ```
void q_lcdnumber_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QLCDNumber* self, QAction* before, QAction* actions[] ```
void q_lcdnumber_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QLCDNumber* self, QAction* before, QAction* action ```
void q_lcdnumber_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QLCDNumber* self, QAction* action ```
void q_lcdnumber_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QLCDNumber* self ```
libqt_list /* of QAction* */ q_lcdnumber_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLCDNumber* self, const char* text ```
QAction* q_lcdnumber_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLCDNumber* self, QIcon* icon, const char* text ```
QAction* q_lcdnumber_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLCDNumber* self, const char* text, QKeySequence* shortcut ```
QAction* q_lcdnumber_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLCDNumber* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_lcdnumber_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QLCDNumber* self ```
QWidget* q_lcdnumber_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QLCDNumber* self, int typeVal ```
void q_lcdnumber_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLCDNumber* self, enum Qt__WindowType param1 ```
void q_lcdnumber_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QLCDNumber* self, int typeVal ```
void q_lcdnumber_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_lcdnumber_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLCDNumber* self, int x, int y ```
QWidget* q_lcdnumber_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLCDNumber* self, QPoint* p ```
QWidget* q_lcdnumber_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLCDNumber* self, enum Qt__WidgetAttribute param1 ```
void q_lcdnumber_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QLCDNumber* self, enum Qt__WidgetAttribute param1 ```
bool q_lcdnumber_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QLCDNumber* self, QWidget* child ```
bool q_lcdnumber_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QLCDNumber* self, bool enabled ```
void q_lcdnumber_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QLCDNumber* self ```
QBackingStore* q_lcdnumber_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QLCDNumber* self ```
QWindow* q_lcdnumber_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QLCDNumber* self ```
QScreen* q_lcdnumber_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QLCDNumber* self, QScreen* screen ```
void q_lcdnumber_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_lcdnumber_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QLCDNumber* self, const char* title ```
void q_lcdnumber_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QLCDNumber* self, void (*slot)(QWidget*, const char*) ```
void q_lcdnumber_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QLCDNumber* self, QIcon* icon ```
void q_lcdnumber_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QLCDNumber* self, void (*slot)(QWidget*, QIcon*) ```
void q_lcdnumber_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QLCDNumber* self, const char* iconText ```
void q_lcdnumber_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QLCDNumber* self, void (*slot)(QWidget*, const char*) ```
void q_lcdnumber_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QLCDNumber* self, QPoint* pos ```
void q_lcdnumber_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QLCDNumber* self, void (*slot)(QWidget*, QPoint*) ```
void q_lcdnumber_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QLCDNumber* self ```
int64_t q_lcdnumber_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QLCDNumber* self, int hints ```
void q_lcdnumber_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPaintDevice* target, QPoint* targetOffset ```
void q_lcdnumber_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_lcdnumber_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_lcdnumber_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPainter* painter, QPoint* targetOffset ```
void q_lcdnumber_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_lcdnumber_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLCDNumber* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_lcdnumber_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLCDNumber* self, QRect* rectangle ```
QPixmap* q_lcdnumber_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLCDNumber* self, enum Qt__GestureType typeVal, int flags ```
void q_lcdnumber_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLCDNumber* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_lcdnumber_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLCDNumber* self, int id, bool enable ```
void q_lcdnumber_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLCDNumber* self, int id, bool enable ```
void q_lcdnumber_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLCDNumber* self, enum Qt__WindowType param1, bool on ```
void q_lcdnumber_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLCDNumber* self, enum Qt__WidgetAttribute param1, bool on ```
void q_lcdnumber_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_lcdnumber_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_lcdnumber_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLCDNumber* self ```
const char* q_lcdnumber_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLCDNumber* self, char* name ```
void q_lcdnumber_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLCDNumber* self, bool b ```
bool q_lcdnumber_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLCDNumber* self ```
QThread* q_lcdnumber_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLCDNumber* self, QThread* thread ```
void q_lcdnumber_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLCDNumber* self, int interval ```
int32_t q_lcdnumber_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLCDNumber* self, int id ```
void q_lcdnumber_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLCDNumber* self ```
libqt_list /* of QObject* */ q_lcdnumber_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLCDNumber* self, QObject* filterObj ```
void q_lcdnumber_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLCDNumber* self, QObject* obj ```
void q_lcdnumber_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_lcdnumber_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLCDNumber* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_lcdnumber_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_lcdnumber_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_lcdnumber_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLCDNumber* self, const char* name, QVariant* value ```
bool q_lcdnumber_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLCDNumber* self, const char* name ```
QVariant* q_lcdnumber_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLCDNumber* self ```
const char** q_lcdnumber_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLCDNumber* self ```
QBindingStorage* q_lcdnumber_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLCDNumber* self ```
QBindingStorage* q_lcdnumber_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QLCDNumber* self, void (*slot)(QObject*) ```
void q_lcdnumber_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLCDNumber* self ```
QObject* q_lcdnumber_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLCDNumber* self, const char* classname ```
bool q_lcdnumber_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLCDNumber* self, int interval, enum Qt__TimerType timerType ```
int32_t q_lcdnumber_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lcdnumber_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLCDNumber* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lcdnumber_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLCDNumber* self, QObject* param1 ```
void q_lcdnumber_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QLCDNumber* self, void (*slot)(QObject*, QObject*) ```
void q_lcdnumber_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QLCDNumber* self ```
double q_lcdnumber_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QLCDNumber* self ```
double q_lcdnumber_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_lcdnumber_device_pixel_ratio_f_scale();

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QEvent* param1 ```
void q_lcdnumber_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QEvent* param1 ```
void q_lcdnumber_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QEvent*) ```
void q_lcdnumber_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QStyleOptionFrame* option ```
void q_lcdnumber_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QStyleOptionFrame* option ```
void q_lcdnumber_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QStyleOptionFrame*) ```
void q_lcdnumber_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, int32_t (*slot)() ```
void q_lcdnumber_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, bool visible ```
void q_lcdnumber_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, bool visible ```
void q_lcdnumber_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, bool) ```
void q_lcdnumber_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
QSize* q_lcdnumber_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, QSize* (*slot)() ```
void q_lcdnumber_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, int param1 ```
int32_t q_lcdnumber_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, int param1 ```
int32_t q_lcdnumber_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, int32_t (*slot)(QLCDNumber*, int) ```
void q_lcdnumber_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, bool (*slot)() ```
void q_lcdnumber_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
QPaintEngine* q_lcdnumber_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
QPaintEngine* q_lcdnumber_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, QPaintEngine* (*slot)() ```
void q_lcdnumber_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QMouseEvent*) ```
void q_lcdnumber_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QMouseEvent*) ```
void q_lcdnumber_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QMouseEvent*) ```
void q_lcdnumber_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMouseEvent* event ```
void q_lcdnumber_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QMouseEvent*) ```
void q_lcdnumber_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QWheelEvent* event ```
void q_lcdnumber_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QWheelEvent* event ```
void q_lcdnumber_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QWheelEvent*) ```
void q_lcdnumber_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QKeyEvent* event ```
void q_lcdnumber_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QKeyEvent* event ```
void q_lcdnumber_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QKeyEvent*) ```
void q_lcdnumber_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QKeyEvent* event ```
void q_lcdnumber_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QKeyEvent* event ```
void q_lcdnumber_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QKeyEvent*) ```
void q_lcdnumber_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QFocusEvent* event ```
void q_lcdnumber_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QFocusEvent* event ```
void q_lcdnumber_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QFocusEvent*) ```
void q_lcdnumber_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QFocusEvent* event ```
void q_lcdnumber_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QFocusEvent* event ```
void q_lcdnumber_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QFocusEvent*) ```
void q_lcdnumber_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QEnterEvent* event ```
void q_lcdnumber_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QEnterEvent* event ```
void q_lcdnumber_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QEnterEvent*) ```
void q_lcdnumber_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QEvent* event ```
void q_lcdnumber_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QEvent* event ```
void q_lcdnumber_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QEvent*) ```
void q_lcdnumber_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMoveEvent* event ```
void q_lcdnumber_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMoveEvent* event ```
void q_lcdnumber_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QMoveEvent*) ```
void q_lcdnumber_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QResizeEvent* event ```
void q_lcdnumber_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QResizeEvent* event ```
void q_lcdnumber_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QResizeEvent*) ```
void q_lcdnumber_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QCloseEvent* event ```
void q_lcdnumber_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QCloseEvent* event ```
void q_lcdnumber_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QCloseEvent*) ```
void q_lcdnumber_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QContextMenuEvent* event ```
void q_lcdnumber_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QContextMenuEvent* event ```
void q_lcdnumber_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QContextMenuEvent*) ```
void q_lcdnumber_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QTabletEvent* event ```
void q_lcdnumber_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QTabletEvent* event ```
void q_lcdnumber_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QTabletEvent*) ```
void q_lcdnumber_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QActionEvent* event ```
void q_lcdnumber_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QActionEvent* event ```
void q_lcdnumber_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QActionEvent*) ```
void q_lcdnumber_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QDragEnterEvent* event ```
void q_lcdnumber_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QDragEnterEvent* event ```
void q_lcdnumber_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QDragEnterEvent*) ```
void q_lcdnumber_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QDragMoveEvent* event ```
void q_lcdnumber_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QDragMoveEvent* event ```
void q_lcdnumber_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QDragMoveEvent*) ```
void q_lcdnumber_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QDragLeaveEvent* event ```
void q_lcdnumber_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QDragLeaveEvent* event ```
void q_lcdnumber_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QDragLeaveEvent*) ```
void q_lcdnumber_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QDropEvent* event ```
void q_lcdnumber_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QDropEvent* event ```
void q_lcdnumber_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QDropEvent*) ```
void q_lcdnumber_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QShowEvent* event ```
void q_lcdnumber_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QShowEvent* event ```
void q_lcdnumber_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QShowEvent*) ```
void q_lcdnumber_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QHideEvent* event ```
void q_lcdnumber_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QHideEvent* event ```
void q_lcdnumber_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QHideEvent*) ```
void q_lcdnumber_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, const char* eventType, void* message, intptr_t* result ```
bool q_lcdnumber_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, const char* eventType, void* message, intptr_t* result ```
bool q_lcdnumber_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, bool (*slot)(QLCDNumber*, const char*, void*, intptr_t*) ```
void q_lcdnumber_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_lcdnumber_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_lcdnumber_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, int32_t (*slot)(QLCDNumber*, enum QPaintDevice__PaintDeviceMetric) ```
void q_lcdnumber_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QPainter* painter ```
void q_lcdnumber_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QPainter* painter ```
void q_lcdnumber_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QPainter*) ```
void q_lcdnumber_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QPoint* offset ```
QPaintDevice* q_lcdnumber_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QPoint* offset ```
QPaintDevice* q_lcdnumber_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, QPaintDevice* (*slot)(QLCDNumber*, QPoint*) ```
void q_lcdnumber_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
QPainter* q_lcdnumber_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
QPainter* q_lcdnumber_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, QPainter* (*slot)() ```
void q_lcdnumber_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QInputMethodEvent* param1 ```
void q_lcdnumber_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QInputMethodEvent* param1 ```
void q_lcdnumber_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QInputMethodEvent*) ```
void q_lcdnumber_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_lcdnumber_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_lcdnumber_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, QVariant* (*slot)(QLCDNumber*, enum Qt__InputMethodQuery) ```
void q_lcdnumber_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, bool next ```
bool q_lcdnumber_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, bool next ```
bool q_lcdnumber_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, bool (*slot)(QLCDNumber*, bool) ```
void q_lcdnumber_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QObject* watched, QEvent* event ```
bool q_lcdnumber_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QObject* watched, QEvent* event ```
bool q_lcdnumber_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, bool (*slot)(QLCDNumber*, QObject*, QEvent*) ```
void q_lcdnumber_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QTimerEvent* event ```
void q_lcdnumber_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QTimerEvent* event ```
void q_lcdnumber_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QTimerEvent*) ```
void q_lcdnumber_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QChildEvent* event ```
void q_lcdnumber_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QChildEvent* event ```
void q_lcdnumber_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QChildEvent*) ```
void q_lcdnumber_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QEvent* event ```
void q_lcdnumber_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QEvent* event ```
void q_lcdnumber_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QEvent*) ```
void q_lcdnumber_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMetaMethod* signal ```
void q_lcdnumber_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMetaMethod* signal ```
void q_lcdnumber_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QMetaMethod*) ```
void q_lcdnumber_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMetaMethod* signal ```
void q_lcdnumber_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMetaMethod* signal ```
void q_lcdnumber_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QMetaMethod*) ```
void q_lcdnumber_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QPainter* param1 ```
void q_lcdnumber_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QPainter* param1 ```
void q_lcdnumber_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)(QLCDNumber*, QPainter*) ```
void q_lcdnumber_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)() ```
void q_lcdnumber_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)() ```
void q_lcdnumber_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, void (*slot)() ```
void q_lcdnumber_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, bool (*slot)() ```
void q_lcdnumber_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
bool q_lcdnumber_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, bool (*slot)() ```
void q_lcdnumber_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
QObject* q_lcdnumber_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
QObject* q_lcdnumber_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, QObject* (*slot)() ```
void q_lcdnumber_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self ```
int32_t q_lcdnumber_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, int32_t (*slot)() ```
void q_lcdnumber_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, const char* signal ```
int32_t q_lcdnumber_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, const char* signal ```
int32_t q_lcdnumber_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, int32_t (*slot)(QLCDNumber*, const char*) ```
void q_lcdnumber_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLCDNumber* self, QMetaMethod* signal ```
bool q_lcdnumber_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLCDNumber* self, QMetaMethod* signal ```
bool q_lcdnumber_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLCDNumber* self, bool (*slot)(QLCDNumber*, QMetaMethod*) ```
void q_lcdnumber_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QLCDNumber* self ```
void q_lcdnumber_delete(void* self);

/// https://doc.qt.io/qt-6/qlcdnumber.html#types

typedef enum {
    QLCDNUMBER_MODE_HEX = 0,
    QLCDNUMBER_MODE_DEC = 1,
    QLCDNUMBER_MODE_OCT = 2,
    QLCDNUMBER_MODE_BIN = 3
} QLCDNumber__Mode;

typedef enum {
    QLCDNUMBER_SEGMENTSTYLE_OUTLINE = 0,
    QLCDNUMBER_SEGMENTSTYLE_FILLED = 1,
    QLCDNUMBER_SEGMENTSTYLE_FLAT = 2
} QLCDNumber__SegmentStyle;

#endif
