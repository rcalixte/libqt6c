#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSELECTOR_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSELECTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

struct pair_double_qcolor;

typedef struct pair_double_qcolor pair_double_qcolor;

#ifndef PAIR_DOUBLE_QCOLOR
#define PAIR_DOUBLE_QCOLOR
struct pair_double_qcolor {
    double first;
    QColor* second;
};
#endif

/// [Upstream resources](https://api.kde.org/kselector.html)

/// k_selector_new constructs a new KSelector object.
///
/// @param parent QWidget*
///
KSelector* k_selector_new(void* parent);

/// [Upstream resources](https://api.kde.org/kselector.html)

/// k_selector_new2 constructs a new KSelector object.
///
KSelector* k_selector_new2();

/// [Upstream resources](https://api.kde.org/kselector.html)

/// k_selector_new3 constructs a new KSelector object.
///
/// @param o enum Qt__Orientation
///
KSelector* k_selector_new3(int32_t o);

/// [Upstream resources](https://api.kde.org/kselector.html)

/// k_selector_new4 constructs a new KSelector object.
///
/// @param o enum Qt__Orientation
/// @param parent QWidget*
///
KSelector* k_selector_new4(int32_t o, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSelector*
///
const QMetaObject* k_selector_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback const QMetaObject* func()
///
void k_selector_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KSelector*
///
const QMetaObject* k_selector_qbase_meta_object(void* self);

/// @param self KSelector*
/// @param param1 const char*
///
void* k_selector_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void* func(KSelector* self, const char* param1)
///
void k_selector_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KSelector*
/// @param param1 const char*
///
void* k_selector_qbase_metacast(void* self, const char* param1);

/// @param self KSelector*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_selector_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback int32_t func(KSelector* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_selector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSelector*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_selector_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_selector_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kselector.html#contentsRect)
///
/// @param self KSelector*
///
QRect* k_selector_contents_rect(void* self);

/// [Upstream resources](https://api.kde.org/kselector.html#setIndent)
///
/// @param self KSelector*
/// @param i bool
///
void k_selector_set_indent(void* self, bool i);

/// [Upstream resources](https://api.kde.org/kselector.html#indent)
///
/// @param self KSelector*
///
bool k_selector_indent(void* self);

/// [Upstream resources](https://api.kde.org/kselector.html#setArrowDirection)
///
/// @param self KSelector*
/// @param direction enum Qt__ArrowType
///
void k_selector_set_arrow_direction(void* self, int32_t direction);

/// [Upstream resources](https://api.kde.org/kselector.html#arrowDirection)
///
/// @param self KSelector*
///
/// @return enum Qt__ArrowType
///
int32_t k_selector_arrow_direction(void* self);

/// [Upstream resources](https://api.kde.org/kselector.html#drawContents)
///
/// @param self KSelector*
/// @param param1 QPainter*
///
void k_selector_draw_contents(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kselector.html#drawContents)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QPainter* param1)
///
void k_selector_on_draw_contents(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselector.html#drawContents)
///
/// Base class method implementation
///
/// @param self KSelector*
/// @param param1 QPainter*
///
void k_selector_qbase_draw_contents(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kselector.html#drawArrow)
///
/// @param self KSelector*
/// @param painter QPainter*
/// @param pos QPoint*
///
void k_selector_draw_arrow(void* self, void* painter, void* pos);

/// [Upstream resources](https://api.kde.org/kselector.html#drawArrow)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QPainter* painter, QPoint* pos)
///
void k_selector_on_draw_arrow(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kselector.html#drawArrow)
///
/// Base class method implementation
///
/// @param self KSelector*
/// @param painter QPainter*
/// @param pos QPoint*
///
void k_selector_qbase_draw_arrow(void* self, void* painter, void* pos);

/// [Upstream resources](https://api.kde.org/kselector.html#paintEvent)
///
/// @param self KSelector*
/// @param param1 QPaintEvent*
///
void k_selector_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kselector.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QPaintEvent* param1)
///
void k_selector_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselector.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KSelector*
/// @param param1 QPaintEvent*
///
void k_selector_qbase_paint_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kselector.html#mousePressEvent)
///
/// @param self KSelector*
/// @param e QMouseEvent*
///
void k_selector_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kselector.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QMouseEvent* e)
///
void k_selector_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselector.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KSelector*
/// @param e QMouseEvent*
///
void k_selector_qbase_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kselector.html#mouseMoveEvent)
///
/// @param self KSelector*
/// @param e QMouseEvent*
///
void k_selector_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kselector.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QMouseEvent* e)
///
void k_selector_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselector.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self KSelector*
/// @param e QMouseEvent*
///
void k_selector_qbase_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kselector.html#mouseReleaseEvent)
///
/// @param self KSelector*
/// @param e QMouseEvent*
///
void k_selector_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kselector.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QMouseEvent* e)
///
void k_selector_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselector.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KSelector*
/// @param e QMouseEvent*
///
void k_selector_qbase_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/kselector.html#wheelEvent)
///
/// @param self KSelector*
/// @param param1 QWheelEvent*
///
void k_selector_wheel_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kselector.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QWheelEvent* param1)
///
void k_selector_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kselector.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self KSelector*
/// @param param1 QWheelEvent*
///
void k_selector_qbase_wheel_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_selector_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_selector_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#orientation)
///
/// @param self KSelector*
///
/// @return enum Qt__Orientation
///
int32_t k_selector_orientation(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setMinimum)
///
/// @param self KSelector*
/// @param minimum int
///
void k_selector_set_minimum(void* self, int minimum);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#minimum)
///
/// @param self KSelector*
///
int32_t k_selector_minimum(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setMaximum)
///
/// @param self KSelector*
/// @param maximum int
///
void k_selector_set_maximum(void* self, int maximum);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#maximum)
///
/// @param self KSelector*
///
int32_t k_selector_maximum(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSingleStep)
///
/// @param self KSelector*
/// @param singleStep int
///
void k_selector_set_single_step(void* self, int singleStep);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#singleStep)
///
/// @param self KSelector*
///
int32_t k_selector_single_step(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setPageStep)
///
/// @param self KSelector*
/// @param pageStep int
///
void k_selector_set_page_step(void* self, int pageStep);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#pageStep)
///
/// @param self KSelector*
///
int32_t k_selector_page_step(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setTracking)
///
/// @param self KSelector*
/// @param enable bool
///
void k_selector_set_tracking(void* self, bool enable);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#hasTracking)
///
/// @param self KSelector*
///
bool k_selector_has_tracking(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSliderDown)
///
/// @param self KSelector*
/// @param sliderDown bool
///
void k_selector_set_slider_down(void* self, bool sliderDown);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#isSliderDown)
///
/// @param self KSelector*
///
bool k_selector_is_slider_down(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSliderPosition)
///
/// @param self KSelector*
/// @param sliderPosition int
///
void k_selector_set_slider_position(void* self, int sliderPosition);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPosition)
///
/// @param self KSelector*
///
int32_t k_selector_slider_position(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedAppearance)
///
/// @param self KSelector*
/// @param invertedAppearance bool
///
void k_selector_set_inverted_appearance(void* self, bool invertedAppearance);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#invertedAppearance)
///
/// @param self KSelector*
///
bool k_selector_inverted_appearance(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedControls)
///
/// @param self KSelector*
/// @param invertedControls bool
///
void k_selector_set_inverted_controls(void* self, bool invertedControls);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#invertedControls)
///
/// @param self KSelector*
///
bool k_selector_inverted_controls(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#value)
///
/// @param self KSelector*
///
int32_t k_selector_value(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#triggerAction)
///
/// @param self KSelector*
/// @param action enum QAbstractSlider__SliderAction
///
void k_selector_trigger_action(void* self, int32_t action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setValue)
///
/// @param self KSelector*
/// @param value int
///
void k_selector_set_value(void* self, int value);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setOrientation)
///
/// @param self KSelector*
/// @param orientation enum Qt__Orientation
///
void k_selector_set_orientation(void* self, int32_t orientation);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRange)
///
/// @param self KSelector*
/// @param min int
/// @param max int
///
void k_selector_set_range(void* self, int min, int max);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
///
/// @param self KSelector*
/// @param value int
///
void k_selector_value_changed(void* self, int value);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, int value)
///
void k_selector_on_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
///
/// @param self KSelector*
///
void k_selector_slider_pressed(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self)
///
void k_selector_on_slider_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
///
/// @param self KSelector*
/// @param position int
///
void k_selector_slider_moved(void* self, int position);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, int position)
///
void k_selector_on_slider_moved(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
///
/// @param self KSelector*
///
void k_selector_slider_released(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self)
///
void k_selector_on_slider_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
///
/// @param self KSelector*
/// @param min int
/// @param max int
///
void k_selector_range_changed(void* self, int min, int max);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, int min, int max)
///
void k_selector_on_range_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
///
/// @param self KSelector*
/// @param action int
///
void k_selector_action_triggered(void* self, int action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, int action)
///
void k_selector_on_action_triggered(void* self, void (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KSelector*
///
uintptr_t k_selector_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KSelector*
///
void k_selector_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KSelector*
///
uintptr_t k_selector_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KSelector*
///
uintptr_t k_selector_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KSelector*
///
QStyle* k_selector_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KSelector*
/// @param style QStyle*
///
void k_selector_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KSelector*
///
bool k_selector_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KSelector*
///
bool k_selector_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KSelector*
///
bool k_selector_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KSelector*
///
/// @return enum Qt__WindowModality
///
int32_t k_selector_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KSelector*
/// @param windowModality enum Qt__WindowModality
///
void k_selector_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KSelector*
///
bool k_selector_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KSelector*
/// @param param1 QWidget*
///
bool k_selector_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KSelector*
/// @param enabled bool
///
void k_selector_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KSelector*
/// @param disabled bool
///
void k_selector_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KSelector*
/// @param windowModified bool
///
void k_selector_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KSelector*
///
QRect* k_selector_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KSelector*
///
const QRect* k_selector_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KSelector*
///
QRect* k_selector_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KSelector*
///
int32_t k_selector_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KSelector*
///
int32_t k_selector_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KSelector*
///
QPoint* k_selector_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KSelector*
///
QSize* k_selector_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KSelector*
///
QSize* k_selector_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KSelector*
///
int32_t k_selector_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KSelector*
///
int32_t k_selector_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KSelector*
///
QRect* k_selector_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KSelector*
///
QRect* k_selector_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KSelector*
///
QRegion* k_selector_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KSelector*
///
QSize* k_selector_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KSelector*
///
QSize* k_selector_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KSelector*
///
int32_t k_selector_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KSelector*
///
int32_t k_selector_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KSelector*
///
int32_t k_selector_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KSelector*
///
int32_t k_selector_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSelector*
/// @param minimumSize QSize*
///
void k_selector_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSelector*
/// @param minw int
/// @param minh int
///
void k_selector_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSelector*
/// @param maximumSize QSize*
///
void k_selector_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSelector*
/// @param maxw int
/// @param maxh int
///
void k_selector_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KSelector*
/// @param minw int
///
void k_selector_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KSelector*
/// @param minh int
///
void k_selector_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KSelector*
/// @param maxw int
///
void k_selector_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KSelector*
/// @param maxh int
///
void k_selector_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KSelector*
///
QSize* k_selector_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSelector*
/// @param sizeIncrement QSize*
///
void k_selector_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSelector*
/// @param w int
/// @param h int
///
void k_selector_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KSelector*
///
QSize* k_selector_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSelector*
/// @param baseSize QSize*
///
void k_selector_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSelector*
/// @param basew int
/// @param baseh int
///
void k_selector_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSelector*
/// @param fixedSize QSize*
///
void k_selector_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSelector*
/// @param w int
/// @param h int
///
void k_selector_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KSelector*
/// @param w int
///
void k_selector_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KSelector*
/// @param h int
///
void k_selector_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KSelector*
/// @param param1 QPointF*
///
QPointF* k_selector_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KSelector*
/// @param param1 QPoint*
///
QPoint* k_selector_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KSelector*
/// @param param1 QPointF*
///
QPointF* k_selector_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KSelector*
/// @param param1 QPoint*
///
QPoint* k_selector_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KSelector*
/// @param param1 QPointF*
///
QPointF* k_selector_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KSelector*
/// @param param1 QPoint*
///
QPoint* k_selector_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KSelector*
/// @param param1 QPointF*
///
QPointF* k_selector_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KSelector*
/// @param param1 QPoint*
///
QPoint* k_selector_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KSelector*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_selector_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KSelector*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_selector_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KSelector*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_selector_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KSelector*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_selector_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KSelector*
///
QWidget* k_selector_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KSelector*
///
QWidget* k_selector_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KSelector*
///
QWidget* k_selector_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KSelector*
///
const QPalette* k_selector_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KSelector*
/// @param palette QPalette*
///
void k_selector_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KSelector*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_selector_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KSelector*
///
/// @return enum QPalette__ColorRole
///
int32_t k_selector_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KSelector*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_selector_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KSelector*
///
/// @return enum QPalette__ColorRole
///
int32_t k_selector_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KSelector*
///
const QFont* k_selector_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KSelector*
/// @param font QFont*
///
void k_selector_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KSelector*
///
QFontMetrics* k_selector_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KSelector*
///
QFontInfo* k_selector_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KSelector*
///
QCursor* k_selector_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KSelector*
/// @param cursor QCursor*
///
void k_selector_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KSelector*
///
void k_selector_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KSelector*
/// @param enable bool
///
void k_selector_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KSelector*
///
bool k_selector_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KSelector*
///
bool k_selector_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KSelector*
/// @param enable bool
///
void k_selector_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KSelector*
///
bool k_selector_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSelector*
/// @param mask QBitmap*
///
void k_selector_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSelector*
/// @param mask QRegion*
///
void k_selector_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KSelector*
///
QRegion* k_selector_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KSelector*
///
void k_selector_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param target QPaintDevice*
///
void k_selector_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param painter QPainter*
///
void k_selector_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSelector*
///
QPixmap* k_selector_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KSelector*
///
QGraphicsEffect* k_selector_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KSelector*
/// @param effect QGraphicsEffect*
///
void k_selector_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSelector*
/// @param type enum Qt__GestureType
///
void k_selector_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KSelector*
/// @param type enum Qt__GestureType
///
void k_selector_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KSelector*
/// @param windowTitle const char*
///
void k_selector_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KSelector*
/// @param styleSheet const char*
///
void k_selector_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KSelector*
/// @param icon QIcon*
///
void k_selector_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KSelector*
///
QIcon* k_selector_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KSelector*
/// @param windowIconText const char*
///
void k_selector_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KSelector*
/// @param windowRole const char*
///
void k_selector_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KSelector*
/// @param filePath const char*
///
void k_selector_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KSelector*
/// @param level double
///
void k_selector_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KSelector*
///
double k_selector_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KSelector*
///
bool k_selector_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KSelector*
/// @param toolTip const char*
///
void k_selector_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KSelector*
/// @param msec int
///
void k_selector_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KSelector*
///
int32_t k_selector_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KSelector*
/// @param statusTip const char*
///
void k_selector_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KSelector*
/// @param whatsThis const char*
///
void k_selector_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KSelector*
/// @param name const char*
///
void k_selector_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KSelector*
/// @param description const char*
///
void k_selector_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KSelector*
/// @param direction enum Qt__LayoutDirection
///
void k_selector_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KSelector*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_selector_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KSelector*
///
void k_selector_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KSelector*
/// @param locale QLocale*
///
void k_selector_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KSelector*
///
QLocale* k_selector_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KSelector*
///
void k_selector_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KSelector*
///
bool k_selector_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KSelector*
///
bool k_selector_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSelector*
///
void k_selector_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KSelector*
///
bool k_selector_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KSelector*
///
void k_selector_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KSelector*
///
void k_selector_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSelector*
/// @param reason enum Qt__FocusReason
///
void k_selector_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KSelector*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_selector_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KSelector*
/// @param policy enum Qt__FocusPolicy
///
void k_selector_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KSelector*
///
bool k_selector_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_selector_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KSelector*
/// @param focusProxy QWidget*
///
void k_selector_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KSelector*
///
QWidget* k_selector_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KSelector*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_selector_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KSelector*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_selector_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSelector*
///
void k_selector_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSelector*
/// @param param1 QCursor*
///
void k_selector_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KSelector*
///
void k_selector_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KSelector*
///
void k_selector_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KSelector*
///
void k_selector_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSelector*
/// @param key QKeySequence*
///
int32_t k_selector_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KSelector*
/// @param id int
///
void k_selector_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSelector*
/// @param id int
///
void k_selector_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSelector*
/// @param id int
///
void k_selector_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_selector_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_selector_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KSelector*
///
bool k_selector_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KSelector*
/// @param enable bool
///
void k_selector_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KSelector*
///
QGraphicsProxyWidget* k_selector_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSelector*
///
void k_selector_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSelector*
///
void k_selector_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSelector*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_selector_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSelector*
/// @param param1 QRect*
///
void k_selector_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSelector*
/// @param param1 QRegion*
///
void k_selector_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSelector*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_selector_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSelector*
/// @param param1 QRect*
///
void k_selector_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSelector*
/// @param param1 QRegion*
///
void k_selector_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KSelector*
/// @param hidden bool
///
void k_selector_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KSelector*
///
void k_selector_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KSelector*
///
void k_selector_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KSelector*
///
void k_selector_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KSelector*
///
void k_selector_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KSelector*
///
void k_selector_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KSelector*
///
void k_selector_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KSelector*
///
bool k_selector_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KSelector*
///
void k_selector_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KSelector*
///
void k_selector_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KSelector*
/// @param param1 QWidget*
///
void k_selector_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSelector*
/// @param x int
/// @param y int
///
void k_selector_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSelector*
/// @param param1 QPoint*
///
void k_selector_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSelector*
/// @param w int
/// @param h int
///
void k_selector_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSelector*
/// @param param1 QSize*
///
void k_selector_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSelector*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_selector_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSelector*
/// @param geometry QRect*
///
void k_selector_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSelector*
///
char* k_selector_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KSelector*
/// @param geometry char*
///
bool k_selector_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KSelector*
///
void k_selector_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KSelector*
///
bool k_selector_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KSelector*
/// @param param1 QWidget*
///
bool k_selector_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KSelector*
///
bool k_selector_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KSelector*
///
bool k_selector_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KSelector*
///
bool k_selector_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KSelector*
///
bool k_selector_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KSelector*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_selector_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KSelector*
/// @param state flag of enum Qt__WindowState
///
void k_selector_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KSelector*
/// @param state flag of enum Qt__WindowState
///
void k_selector_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KSelector*
///
QSizePolicy* k_selector_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSelector*
/// @param sizePolicy QSizePolicy*
///
void k_selector_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSelector*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_selector_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KSelector*
///
QRegion* k_selector_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSelector*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_selector_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSelector*
/// @param margins QMargins*
///
void k_selector_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KSelector*
///
QMargins* k_selector_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KSelector*
///
QLayout* k_selector_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KSelector*
/// @param layout QLayout*
///
void k_selector_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KSelector*
///
void k_selector_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSelector*
/// @param parent QWidget*
///
void k_selector_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSelector*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_selector_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSelector*
/// @param dx int
/// @param dy int
///
void k_selector_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSelector*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_selector_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KSelector*
///
QWidget* k_selector_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KSelector*
///
QWidget* k_selector_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KSelector*
///
QWidget* k_selector_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KSelector*
///
bool k_selector_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KSelector*
/// @param on bool
///
void k_selector_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSelector*
/// @param action QAction*
///
void k_selector_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KSelector*
/// @param actions libqt_list of QAction*
///
void k_selector_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KSelector*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_selector_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KSelector*
/// @param before QAction*
/// @param action QAction*
///
void k_selector_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KSelector*
/// @param action QAction*
///
void k_selector_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KSelector*
///
/// @return libqt_list of QAction*
///
libqt_list k_selector_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSelector*
/// @param text const char*
///
QAction* k_selector_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSelector*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_selector_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSelector*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_selector_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSelector*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_selector_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KSelector*
///
QWidget* k_selector_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KSelector*
/// @param type flag of enum Qt__WindowType
///
void k_selector_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KSelector*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_selector_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSelector*
/// @param param1 enum Qt__WindowType
///
void k_selector_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KSelector*
/// @param type flag of enum Qt__WindowType
///
void k_selector_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KSelector*
///
/// @return enum Qt__WindowType
///
int32_t k_selector_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_selector_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSelector*
/// @param x int
/// @param y int
///
QWidget* k_selector_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSelector*
/// @param p QPoint*
///
QWidget* k_selector_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSelector*
/// @param p QPointF*
///
QWidget* k_selector_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSelector*
/// @param param1 enum Qt__WidgetAttribute
///
void k_selector_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KSelector*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_selector_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KSelector*
///
void k_selector_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KSelector*
/// @param child QWidget*
///
bool k_selector_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KSelector*
///
bool k_selector_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KSelector*
/// @param enabled bool
///
void k_selector_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KSelector*
///
QBackingStore* k_selector_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KSelector*
///
QWindow* k_selector_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KSelector*
///
QScreen* k_selector_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KSelector*
/// @param screen QScreen*
///
void k_selector_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_selector_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSelector*
/// @param title const char*
///
void k_selector_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, const char* title)
///
void k_selector_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSelector*
/// @param icon QIcon*
///
void k_selector_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QIcon* icon)
///
void k_selector_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSelector*
/// @param iconText const char*
///
void k_selector_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, const char* iconText)
///
void k_selector_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSelector*
/// @param pos QPoint*
///
void k_selector_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QPoint* pos)
///
void k_selector_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KSelector*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_selector_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KSelector*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_selector_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_selector_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_selector_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_selector_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_selector_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_selector_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSelector*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_selector_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSelector*
/// @param rectangle QRect*
///
QPixmap* k_selector_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSelector*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_selector_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSelector*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_selector_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSelector*
/// @param id int
/// @param enable bool
///
void k_selector_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSelector*
/// @param id int
/// @param enable bool
///
void k_selector_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSelector*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_selector_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSelector*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_selector_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_selector_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_selector_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSelector*
///
const char* k_selector_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSelector*
/// @param name const char*
///
void k_selector_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSelector*
///
bool k_selector_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSelector*
///
bool k_selector_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSelector*
///
bool k_selector_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSelector*
///
bool k_selector_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSelector*
/// @param b bool
///
bool k_selector_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSelector*
///
QThread* k_selector_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSelector*
/// @param thread QThread*
///
bool k_selector_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelector*
/// @param interval int
///
int32_t k_selector_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelector*
/// @param time int64_t of nanoseconds
///
int32_t k_selector_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelector*
/// @param id int
///
void k_selector_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSelector*
/// @param id enum Qt__TimerId
///
void k_selector_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSelector*
///
/// @return libqt_list of QObject*
///
libqt_list k_selector_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSelector*
/// @param filterObj QObject*
///
void k_selector_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSelector*
/// @param obj QObject*
///
void k_selector_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_selector_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_selector_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSelector*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_selector_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_selector_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_selector_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSelector*
///
bool k_selector_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSelector*
/// @param receiver QObject*
///
bool k_selector_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_selector_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSelector*
///
void k_selector_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSelector*
///
void k_selector_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSelector*
/// @param name const char*
/// @param value QVariant*
///
bool k_selector_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSelector*
/// @param name const char*
///
QVariant* k_selector_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSelector*
///
const char** k_selector_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSelector*
///
QBindingStorage* k_selector_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSelector*
///
const QBindingStorage* k_selector_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelector*
///
void k_selector_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self)
///
void k_selector_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSelector*
///
QObject* k_selector_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSelector*
/// @param classname const char*
///
bool k_selector_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSelector*
///
void k_selector_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelector*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_selector_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSelector*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_selector_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_selector_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_selector_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSelector*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_selector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSelector*
/// @param signal const char*
///
bool k_selector_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSelector*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_selector_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSelector*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_selector_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSelector*
/// @param receiver QObject*
/// @param member const char*
///
bool k_selector_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelector*
/// @param param1 QObject*
///
void k_selector_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QObject* param1)
///
void k_selector_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KSelector*
///
bool k_selector_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KSelector*
///
int32_t k_selector_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KSelector*
///
int32_t k_selector_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KSelector*
///
int32_t k_selector_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KSelector*
///
int32_t k_selector_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KSelector*
///
int32_t k_selector_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KSelector*
///
int32_t k_selector_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KSelector*
///
double k_selector_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KSelector*
///
double k_selector_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KSelector*
///
int32_t k_selector_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KSelector*
///
int32_t k_selector_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_selector_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_selector_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param e QEvent*
///
bool k_selector_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param e QEvent*
///
bool k_selector_qbase_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func(KSelector* self, QEvent* e)
///
void k_selector_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param change enum QAbstractSlider__SliderChange
///
void k_selector_slider_change(void* self, int32_t change);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param change enum QAbstractSlider__SliderChange
///
void k_selector_qbase_slider_change(void* self, int32_t change);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, enum QAbstractSlider__SliderChange change)
///
void k_selector_on_slider_change(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param ev QKeyEvent*
///
void k_selector_key_press_event(void* self, void* ev);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param ev QKeyEvent*
///
void k_selector_qbase_key_press_event(void* self, void* ev);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QKeyEvent* ev)
///
void k_selector_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param param1 QTimerEvent*
///
void k_selector_timer_event(void* self, void* param1);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param param1 QTimerEvent*
///
void k_selector_qbase_timer_event(void* self, void* param1);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QTimerEvent* param1)
///
void k_selector_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param e QEvent*
///
void k_selector_change_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param e QEvent*
///
void k_selector_qbase_change_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QEvent* e)
///
void k_selector_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
int32_t k_selector_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
int32_t k_selector_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback int32_t func()
///
void k_selector_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param visible bool
///
void k_selector_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param visible bool
///
void k_selector_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, bool visible)
///
void k_selector_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
QSize* k_selector_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
QSize* k_selector_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback QSize* func()
///
void k_selector_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
QSize* k_selector_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
QSize* k_selector_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback QSize* func()
///
void k_selector_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param param1 int
///
int32_t k_selector_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param param1 int
///
int32_t k_selector_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback int32_t func(KSelector* self, int param1)
///
void k_selector_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
bool k_selector_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
bool k_selector_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func()
///
void k_selector_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
QPaintEngine* k_selector_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
QPaintEngine* k_selector_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback QPaintEngine* func()
///
void k_selector_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QMouseEvent*
///
void k_selector_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QMouseEvent*
///
void k_selector_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QMouseEvent* event)
///
void k_selector_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QKeyEvent*
///
void k_selector_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QKeyEvent*
///
void k_selector_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QKeyEvent* event)
///
void k_selector_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QFocusEvent*
///
void k_selector_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QFocusEvent*
///
void k_selector_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QFocusEvent* event)
///
void k_selector_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QFocusEvent*
///
void k_selector_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QFocusEvent*
///
void k_selector_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QFocusEvent* event)
///
void k_selector_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QEnterEvent*
///
void k_selector_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QEnterEvent*
///
void k_selector_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QEnterEvent* event)
///
void k_selector_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QEvent*
///
void k_selector_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QEvent*
///
void k_selector_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QEvent* event)
///
void k_selector_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QMoveEvent*
///
void k_selector_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QMoveEvent*
///
void k_selector_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QMoveEvent* event)
///
void k_selector_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QResizeEvent*
///
void k_selector_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QResizeEvent*
///
void k_selector_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QResizeEvent* event)
///
void k_selector_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QCloseEvent*
///
void k_selector_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QCloseEvent*
///
void k_selector_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QCloseEvent* event)
///
void k_selector_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QContextMenuEvent*
///
void k_selector_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QContextMenuEvent*
///
void k_selector_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QContextMenuEvent* event)
///
void k_selector_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QTabletEvent*
///
void k_selector_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QTabletEvent*
///
void k_selector_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QTabletEvent* event)
///
void k_selector_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QActionEvent*
///
void k_selector_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QActionEvent*
///
void k_selector_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QActionEvent* event)
///
void k_selector_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QDragEnterEvent*
///
void k_selector_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QDragEnterEvent*
///
void k_selector_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QDragEnterEvent* event)
///
void k_selector_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QDragMoveEvent*
///
void k_selector_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QDragMoveEvent*
///
void k_selector_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QDragMoveEvent* event)
///
void k_selector_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QDragLeaveEvent*
///
void k_selector_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QDragLeaveEvent*
///
void k_selector_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QDragLeaveEvent* event)
///
void k_selector_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QDropEvent*
///
void k_selector_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QDropEvent*
///
void k_selector_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QDropEvent* event)
///
void k_selector_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QShowEvent*
///
void k_selector_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QShowEvent*
///
void k_selector_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QShowEvent* event)
///
void k_selector_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QHideEvent*
///
void k_selector_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QHideEvent*
///
void k_selector_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QHideEvent* event)
///
void k_selector_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_selector_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_selector_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func(KSelector* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_selector_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_selector_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_selector_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback int32_t func(KSelector* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_selector_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param painter QPainter*
///
void k_selector_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param painter QPainter*
///
void k_selector_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QPainter* painter)
///
void k_selector_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param offset QPoint*
///
QPaintDevice* k_selector_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param offset QPoint*
///
QPaintDevice* k_selector_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback QPaintDevice* func(KSelector* self, QPoint* offset)
///
void k_selector_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
QPainter* k_selector_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
QPainter* k_selector_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback QPainter* func()
///
void k_selector_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param param1 QInputMethodEvent*
///
void k_selector_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param param1 QInputMethodEvent*
///
void k_selector_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QInputMethodEvent* param1)
///
void k_selector_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_selector_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_selector_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback QVariant* func(KSelector* self, enum Qt__InputMethodQuery param1)
///
void k_selector_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param next bool
///
bool k_selector_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param next bool
///
bool k_selector_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func(KSelector* self, bool next)
///
void k_selector_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_selector_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_selector_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func(KSelector* self, QObject* watched, QEvent* event)
///
void k_selector_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QChildEvent*
///
void k_selector_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QChildEvent*
///
void k_selector_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QChildEvent* event)
///
void k_selector_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param event QEvent*
///
void k_selector_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param event QEvent*
///
void k_selector_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QEvent* event)
///
void k_selector_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param signal QMetaMethod*
///
void k_selector_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param signal QMetaMethod*
///
void k_selector_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QMetaMethod* signal)
///
void k_selector_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param signal QMetaMethod*
///
void k_selector_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param signal QMetaMethod*
///
void k_selector_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, QMetaMethod* signal)
///
void k_selector_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param action enum QAbstractSlider__SliderAction
///
void k_selector_set_repeat_action(void* self, int32_t action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param action enum QAbstractSlider__SliderAction
///
void k_selector_qbase_set_repeat_action(void* self, int32_t action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, enum QAbstractSlider__SliderAction action)
///
void k_selector_on_set_repeat_action(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
/// @return enum QAbstractSlider__SliderAction
///
int32_t k_selector_repeat_action(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
/// @return enum QAbstractSlider__SliderAction
///
int32_t k_selector_qbase_repeat_action(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback int32_t func()
///
void k_selector_on_repeat_action(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
void k_selector_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
void k_selector_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func()
///
void k_selector_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
void k_selector_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
void k_selector_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func()
///
void k_selector_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
void k_selector_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
void k_selector_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback void func()
///
void k_selector_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
bool k_selector_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
bool k_selector_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func()
///
void k_selector_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
bool k_selector_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
bool k_selector_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func()
///
void k_selector_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
QObject* k_selector_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
QObject* k_selector_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback QObject* func()
///
void k_selector_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
///
int32_t k_selector_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
///
int32_t k_selector_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback int32_t func()
///
void k_selector_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param signal const char*
///
int32_t k_selector_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param signal const char*
///
int32_t k_selector_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback int32_t func(KSelector* self, const char* signal)
///
void k_selector_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param signal QMetaMethod*
///
bool k_selector_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param signal QMetaMethod*
///
bool k_selector_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback bool func(KSelector* self, QMetaMethod* signal)
///
void k_selector_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSelector*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_selector_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSelector*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_selector_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSelector*
/// @param callback double func(KSelector* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_selector_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSelector*
/// @param callback void func(KSelector* self, const char* objectName)
///
void k_selector_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kselector.html#dtor.KSelector)
///
/// Delete this object from C++ memory.
///
/// @param self KSelector*
///
void k_selector_delete(void* self);

/// [Upstream resources](https://api.kde.org/kgradientselector.html)

/// k_gradientselector_new constructs a new KGradientSelector object.
///
/// @param parent QWidget*
///
KGradientSelector* k_gradientselector_new(void* parent);

/// [Upstream resources](https://api.kde.org/kgradientselector.html)

/// k_gradientselector_new2 constructs a new KGradientSelector object.
///
KGradientSelector* k_gradientselector_new2();

/// [Upstream resources](https://api.kde.org/kgradientselector.html)

/// k_gradientselector_new3 constructs a new KGradientSelector object.
///
/// @param o enum Qt__Orientation
///
KGradientSelector* k_gradientselector_new3(int32_t o);

/// [Upstream resources](https://api.kde.org/kgradientselector.html)

/// k_gradientselector_new4 constructs a new KGradientSelector object.
///
/// @param o enum Qt__Orientation
/// @param parent QWidget*
///
KGradientSelector* k_gradientselector_new4(int32_t o, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KGradientSelector*
///
const QMetaObject* k_gradientselector_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KGradientSelector*
/// @param callback const QMetaObject* func()
///
void k_gradientselector_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KGradientSelector*
///
const QMetaObject* k_gradientselector_qbase_meta_object(void* self);

/// @param self KGradientSelector*
/// @param param1 const char*
///
void* k_gradientselector_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KGradientSelector*
/// @param callback void* func(KGradientSelector* self, const char* param1)
///
void k_gradientselector_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KGradientSelector*
/// @param param1 const char*
///
void* k_gradientselector_qbase_metacast(void* self, const char* param1);

/// @param self KGradientSelector*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_gradientselector_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KGradientSelector*
/// @param callback int32_t func(KGradientSelector* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_gradientselector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KGradientSelector*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_gradientselector_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_gradientselector_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#setStops)
///
/// @param self KGradientSelector*
/// @param stops libqt_list of pair_double_qcolor tuple of double and QColor*
///
void k_gradientselector_set_stops(void* self, libqt_list stops);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#stops)
///
/// @param self KGradientSelector*
///
/// @return libqt_list of pair_double_qcolor tuple of double and QColor*
///
libqt_list k_gradientselector_stops(void* self);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#setColors)
///
/// @param self KGradientSelector*
/// @param col1 QColor*
/// @param col2 QColor*
///
void k_gradientselector_set_colors(void* self, void* col1, void* col2);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#setText)
///
/// @param self KGradientSelector*
/// @param t1 const char*
/// @param t2 const char*
///
void k_gradientselector_set_text(void* self, const char* t1, const char* t2);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#setFirstColor)
///
/// @param self KGradientSelector*
/// @param col QColor*
///
void k_gradientselector_set_first_color(void* self, void* col);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#setSecondColor)
///
/// @param self KGradientSelector*
/// @param col QColor*
///
void k_gradientselector_set_second_color(void* self, void* col);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#setFirstText)
///
/// @param self KGradientSelector*
/// @param t const char*
///
void k_gradientselector_set_first_text(void* self, const char* t);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#setSecondText)
///
/// @param self KGradientSelector*
/// @param t const char*
///
void k_gradientselector_set_second_text(void* self, const char* t);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#firstColor)
///
/// @param self KGradientSelector*
///
QColor* k_gradientselector_first_color(void* self);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#secondColor)
///
/// @param self KGradientSelector*
///
QColor* k_gradientselector_second_color(void* self);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#firstText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_first_text(void* self);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#secondText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_second_text(void* self);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#drawContents)
///
/// @param self KGradientSelector*
/// @param param1 QPainter*
///
void k_gradientselector_draw_contents(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#drawContents)
///
/// Allows for overriding the related default method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QPainter* param1)
///
void k_gradientselector_on_draw_contents(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kgradientselector.html#drawContents)
///
/// Base class method implementation
///
/// @param self KGradientSelector*
/// @param param1 QPainter*
///
void k_gradientselector_qbase_draw_contents(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#minimumSize)
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_minimum_size(void* self);

/// [Upstream resources](https://api.kde.org/kgradientselector.html#minimumSize)
///
/// Allows for overriding the related default method
///
/// @param self KGradientSelector*
/// @param callback QSize* func()
///
void k_gradientselector_on_minimum_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://api.kde.org/kgradientselector.html#minimumSize)
///
/// Base class method implementation
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_qbase_minimum_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_gradientselector_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_gradientselector_tr3(const char* s, const char* c, int n);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#contentsRect)
///
/// @param self KGradientSelector*
///
QRect* k_gradientselector_contents_rect(void* self);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#setIndent)
///
/// @param self KGradientSelector*
/// @param i bool
///
void k_gradientselector_set_indent(void* self, bool i);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#indent)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_indent(void* self);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#setArrowDirection)
///
/// @param self KGradientSelector*
/// @param direction enum Qt__ArrowType
///
void k_gradientselector_set_arrow_direction(void* self, int32_t direction);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#arrowDirection)
///
/// @param self KGradientSelector*
///
/// @return enum Qt__ArrowType
///
int32_t k_gradientselector_arrow_direction(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#orientation)
///
/// @param self KGradientSelector*
///
/// @return enum Qt__Orientation
///
int32_t k_gradientselector_orientation(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setMinimum)
///
/// @param self KGradientSelector*
/// @param minimum int
///
void k_gradientselector_set_minimum(void* self, int minimum);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#minimum)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_minimum(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setMaximum)
///
/// @param self KGradientSelector*
/// @param maximum int
///
void k_gradientselector_set_maximum(void* self, int maximum);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#maximum)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_maximum(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSingleStep)
///
/// @param self KGradientSelector*
/// @param singleStep int
///
void k_gradientselector_set_single_step(void* self, int singleStep);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#singleStep)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_single_step(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setPageStep)
///
/// @param self KGradientSelector*
/// @param pageStep int
///
void k_gradientselector_set_page_step(void* self, int pageStep);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#pageStep)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_page_step(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setTracking)
///
/// @param self KGradientSelector*
/// @param enable bool
///
void k_gradientselector_set_tracking(void* self, bool enable);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#hasTracking)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_has_tracking(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSliderDown)
///
/// @param self KGradientSelector*
/// @param sliderDown bool
///
void k_gradientselector_set_slider_down(void* self, bool sliderDown);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#isSliderDown)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_slider_down(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setSliderPosition)
///
/// @param self KGradientSelector*
/// @param sliderPosition int
///
void k_gradientselector_set_slider_position(void* self, int sliderPosition);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPosition)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_slider_position(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedAppearance)
///
/// @param self KGradientSelector*
/// @param invertedAppearance bool
///
void k_gradientselector_set_inverted_appearance(void* self, bool invertedAppearance);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#invertedAppearance)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_inverted_appearance(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedControls)
///
/// @param self KGradientSelector*
/// @param invertedControls bool
///
void k_gradientselector_set_inverted_controls(void* self, bool invertedControls);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#invertedControls)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_inverted_controls(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#value)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_value(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#triggerAction)
///
/// @param self KGradientSelector*
/// @param action enum QAbstractSlider__SliderAction
///
void k_gradientselector_trigger_action(void* self, int32_t action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setValue)
///
/// @param self KGradientSelector*
/// @param value int
///
void k_gradientselector_set_value(void* self, int value);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setOrientation)
///
/// @param self KGradientSelector*
/// @param orientation enum Qt__Orientation
///
void k_gradientselector_set_orientation(void* self, int32_t orientation);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRange)
///
/// @param self KGradientSelector*
/// @param min int
/// @param max int
///
void k_gradientselector_set_range(void* self, int min, int max);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
///
/// @param self KGradientSelector*
/// @param value int
///
void k_gradientselector_value_changed(void* self, int value);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, int value)
///
void k_gradientselector_on_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
///
/// @param self KGradientSelector*
///
void k_gradientselector_slider_pressed(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self)
///
void k_gradientselector_on_slider_pressed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
///
/// @param self KGradientSelector*
/// @param position int
///
void k_gradientselector_slider_moved(void* self, int position);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, int position)
///
void k_gradientselector_on_slider_moved(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
///
/// @param self KGradientSelector*
///
void k_gradientselector_slider_released(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self)
///
void k_gradientselector_on_slider_released(void* self, void (*callback)(void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
///
/// @param self KGradientSelector*
/// @param min int
/// @param max int
///
void k_gradientselector_range_changed(void* self, int min, int max);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, int min, int max)
///
void k_gradientselector_on_range_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
///
/// @param self KGradientSelector*
/// @param action int
///
void k_gradientselector_action_triggered(void* self, int action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, int action)
///
void k_gradientselector_on_action_triggered(void* self, void (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KGradientSelector*
///
uintptr_t k_gradientselector_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KGradientSelector*
///
void k_gradientselector_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KGradientSelector*
///
uintptr_t k_gradientselector_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KGradientSelector*
///
uintptr_t k_gradientselector_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KGradientSelector*
///
QStyle* k_gradientselector_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KGradientSelector*
/// @param style QStyle*
///
void k_gradientselector_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KGradientSelector*
///
/// @return enum Qt__WindowModality
///
int32_t k_gradientselector_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KGradientSelector*
/// @param windowModality enum Qt__WindowModality
///
void k_gradientselector_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KGradientSelector*
/// @param param1 QWidget*
///
bool k_gradientselector_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KGradientSelector*
/// @param enabled bool
///
void k_gradientselector_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KGradientSelector*
/// @param disabled bool
///
void k_gradientselector_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KGradientSelector*
/// @param windowModified bool
///
void k_gradientselector_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KGradientSelector*
///
QRect* k_gradientselector_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KGradientSelector*
///
const QRect* k_gradientselector_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KGradientSelector*
///
QRect* k_gradientselector_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KGradientSelector*
///
QPoint* k_gradientselector_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KGradientSelector*
///
QRect* k_gradientselector_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KGradientSelector*
///
QRect* k_gradientselector_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KGradientSelector*
///
QRegion* k_gradientselector_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KGradientSelector*
/// @param minimumSize QSize*
///
void k_gradientselector_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KGradientSelector*
/// @param minw int
/// @param minh int
///
void k_gradientselector_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KGradientSelector*
/// @param maximumSize QSize*
///
void k_gradientselector_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KGradientSelector*
/// @param maxw int
/// @param maxh int
///
void k_gradientselector_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KGradientSelector*
/// @param minw int
///
void k_gradientselector_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KGradientSelector*
/// @param minh int
///
void k_gradientselector_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KGradientSelector*
/// @param maxw int
///
void k_gradientselector_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KGradientSelector*
/// @param maxh int
///
void k_gradientselector_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KGradientSelector*
/// @param sizeIncrement QSize*
///
void k_gradientselector_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KGradientSelector*
/// @param w int
/// @param h int
///
void k_gradientselector_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KGradientSelector*
/// @param baseSize QSize*
///
void k_gradientselector_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KGradientSelector*
/// @param basew int
/// @param baseh int
///
void k_gradientselector_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KGradientSelector*
/// @param fixedSize QSize*
///
void k_gradientselector_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KGradientSelector*
/// @param w int
/// @param h int
///
void k_gradientselector_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KGradientSelector*
/// @param w int
///
void k_gradientselector_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KGradientSelector*
/// @param h int
///
void k_gradientselector_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KGradientSelector*
/// @param param1 QPointF*
///
QPointF* k_gradientselector_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KGradientSelector*
/// @param param1 QPoint*
///
QPoint* k_gradientselector_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KGradientSelector*
/// @param param1 QPointF*
///
QPointF* k_gradientselector_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KGradientSelector*
/// @param param1 QPoint*
///
QPoint* k_gradientselector_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KGradientSelector*
/// @param param1 QPointF*
///
QPointF* k_gradientselector_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KGradientSelector*
/// @param param1 QPoint*
///
QPoint* k_gradientselector_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KGradientSelector*
/// @param param1 QPointF*
///
QPointF* k_gradientselector_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KGradientSelector*
/// @param param1 QPoint*
///
QPoint* k_gradientselector_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KGradientSelector*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_gradientselector_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KGradientSelector*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_gradientselector_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KGradientSelector*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_gradientselector_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KGradientSelector*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_gradientselector_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KGradientSelector*
///
const QPalette* k_gradientselector_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KGradientSelector*
/// @param palette QPalette*
///
void k_gradientselector_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KGradientSelector*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_gradientselector_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KGradientSelector*
///
/// @return enum QPalette__ColorRole
///
int32_t k_gradientselector_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KGradientSelector*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_gradientselector_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KGradientSelector*
///
/// @return enum QPalette__ColorRole
///
int32_t k_gradientselector_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KGradientSelector*
///
const QFont* k_gradientselector_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KGradientSelector*
/// @param font QFont*
///
void k_gradientselector_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KGradientSelector*
///
QFontMetrics* k_gradientselector_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KGradientSelector*
///
QFontInfo* k_gradientselector_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KGradientSelector*
///
QCursor* k_gradientselector_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KGradientSelector*
/// @param cursor QCursor*
///
void k_gradientselector_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KGradientSelector*
///
void k_gradientselector_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KGradientSelector*
/// @param enable bool
///
void k_gradientselector_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KGradientSelector*
/// @param enable bool
///
void k_gradientselector_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KGradientSelector*
/// @param mask QBitmap*
///
void k_gradientselector_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KGradientSelector*
/// @param mask QRegion*
///
void k_gradientselector_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KGradientSelector*
///
QRegion* k_gradientselector_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KGradientSelector*
///
void k_gradientselector_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param target QPaintDevice*
///
void k_gradientselector_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param painter QPainter*
///
void k_gradientselector_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KGradientSelector*
///
QPixmap* k_gradientselector_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KGradientSelector*
///
QGraphicsEffect* k_gradientselector_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KGradientSelector*
/// @param effect QGraphicsEffect*
///
void k_gradientselector_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KGradientSelector*
/// @param type enum Qt__GestureType
///
void k_gradientselector_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KGradientSelector*
/// @param type enum Qt__GestureType
///
void k_gradientselector_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KGradientSelector*
/// @param windowTitle const char*
///
void k_gradientselector_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KGradientSelector*
/// @param styleSheet const char*
///
void k_gradientselector_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KGradientSelector*
/// @param icon QIcon*
///
void k_gradientselector_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KGradientSelector*
///
QIcon* k_gradientselector_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KGradientSelector*
/// @param windowIconText const char*
///
void k_gradientselector_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KGradientSelector*
/// @param windowRole const char*
///
void k_gradientselector_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KGradientSelector*
/// @param filePath const char*
///
void k_gradientselector_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KGradientSelector*
/// @param level double
///
void k_gradientselector_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KGradientSelector*
///
double k_gradientselector_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KGradientSelector*
/// @param toolTip const char*
///
void k_gradientselector_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KGradientSelector*
/// @param msec int
///
void k_gradientselector_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KGradientSelector*
/// @param statusTip const char*
///
void k_gradientselector_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KGradientSelector*
/// @param whatsThis const char*
///
void k_gradientselector_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KGradientSelector*
/// @param name const char*
///
void k_gradientselector_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KGradientSelector*
/// @param description const char*
///
void k_gradientselector_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KGradientSelector*
/// @param direction enum Qt__LayoutDirection
///
void k_gradientselector_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KGradientSelector*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_gradientselector_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KGradientSelector*
///
void k_gradientselector_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KGradientSelector*
/// @param locale QLocale*
///
void k_gradientselector_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KGradientSelector*
///
QLocale* k_gradientselector_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KGradientSelector*
///
void k_gradientselector_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KGradientSelector*
///
void k_gradientselector_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KGradientSelector*
///
void k_gradientselector_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KGradientSelector*
///
void k_gradientselector_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KGradientSelector*
/// @param reason enum Qt__FocusReason
///
void k_gradientselector_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KGradientSelector*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_gradientselector_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KGradientSelector*
/// @param policy enum Qt__FocusPolicy
///
void k_gradientselector_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_gradientselector_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KGradientSelector*
/// @param focusProxy QWidget*
///
void k_gradientselector_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KGradientSelector*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_gradientselector_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KGradientSelector*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_gradientselector_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KGradientSelector*
///
void k_gradientselector_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KGradientSelector*
/// @param param1 QCursor*
///
void k_gradientselector_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KGradientSelector*
///
void k_gradientselector_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KGradientSelector*
///
void k_gradientselector_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KGradientSelector*
///
void k_gradientselector_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KGradientSelector*
/// @param key QKeySequence*
///
int32_t k_gradientselector_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KGradientSelector*
/// @param id int
///
void k_gradientselector_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KGradientSelector*
/// @param id int
///
void k_gradientselector_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KGradientSelector*
/// @param id int
///
void k_gradientselector_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_gradientselector_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_gradientselector_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KGradientSelector*
/// @param enable bool
///
void k_gradientselector_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KGradientSelector*
///
QGraphicsProxyWidget* k_gradientselector_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KGradientSelector*
///
void k_gradientselector_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KGradientSelector*
///
void k_gradientselector_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KGradientSelector*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_gradientselector_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KGradientSelector*
/// @param param1 QRect*
///
void k_gradientselector_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KGradientSelector*
/// @param param1 QRegion*
///
void k_gradientselector_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KGradientSelector*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_gradientselector_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KGradientSelector*
/// @param param1 QRect*
///
void k_gradientselector_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KGradientSelector*
/// @param param1 QRegion*
///
void k_gradientselector_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KGradientSelector*
/// @param hidden bool
///
void k_gradientselector_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KGradientSelector*
///
void k_gradientselector_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KGradientSelector*
///
void k_gradientselector_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KGradientSelector*
///
void k_gradientselector_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KGradientSelector*
///
void k_gradientselector_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KGradientSelector*
///
void k_gradientselector_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KGradientSelector*
///
void k_gradientselector_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KGradientSelector*
///
void k_gradientselector_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KGradientSelector*
///
void k_gradientselector_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KGradientSelector*
/// @param param1 QWidget*
///
void k_gradientselector_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KGradientSelector*
/// @param x int
/// @param y int
///
void k_gradientselector_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KGradientSelector*
/// @param param1 QPoint*
///
void k_gradientselector_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KGradientSelector*
/// @param w int
/// @param h int
///
void k_gradientselector_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KGradientSelector*
/// @param param1 QSize*
///
void k_gradientselector_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KGradientSelector*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_gradientselector_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KGradientSelector*
/// @param geometry QRect*
///
void k_gradientselector_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KGradientSelector*
///
char* k_gradientselector_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KGradientSelector*
/// @param geometry char*
///
bool k_gradientselector_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KGradientSelector*
///
void k_gradientselector_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KGradientSelector*
/// @param param1 QWidget*
///
bool k_gradientselector_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KGradientSelector*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_gradientselector_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KGradientSelector*
/// @param state flag of enum Qt__WindowState
///
void k_gradientselector_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KGradientSelector*
/// @param state flag of enum Qt__WindowState
///
void k_gradientselector_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KGradientSelector*
///
QSizePolicy* k_gradientselector_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KGradientSelector*
/// @param sizePolicy QSizePolicy*
///
void k_gradientselector_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KGradientSelector*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_gradientselector_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KGradientSelector*
///
QRegion* k_gradientselector_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KGradientSelector*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_gradientselector_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KGradientSelector*
/// @param margins QMargins*
///
void k_gradientselector_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KGradientSelector*
///
QMargins* k_gradientselector_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KGradientSelector*
///
QLayout* k_gradientselector_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KGradientSelector*
/// @param layout QLayout*
///
void k_gradientselector_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KGradientSelector*
///
void k_gradientselector_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KGradientSelector*
/// @param parent QWidget*
///
void k_gradientselector_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KGradientSelector*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_gradientselector_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KGradientSelector*
/// @param dx int
/// @param dy int
///
void k_gradientselector_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KGradientSelector*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_gradientselector_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KGradientSelector*
/// @param on bool
///
void k_gradientselector_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KGradientSelector*
/// @param action QAction*
///
void k_gradientselector_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KGradientSelector*
/// @param actions libqt_list of QAction*
///
void k_gradientselector_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KGradientSelector*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_gradientselector_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KGradientSelector*
/// @param before QAction*
/// @param action QAction*
///
void k_gradientselector_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KGradientSelector*
/// @param action QAction*
///
void k_gradientselector_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KGradientSelector*
///
/// @return libqt_list of QAction*
///
libqt_list k_gradientselector_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KGradientSelector*
/// @param text const char*
///
QAction* k_gradientselector_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KGradientSelector*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_gradientselector_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KGradientSelector*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_gradientselector_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KGradientSelector*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_gradientselector_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KGradientSelector*
///
QWidget* k_gradientselector_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KGradientSelector*
/// @param type flag of enum Qt__WindowType
///
void k_gradientselector_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KGradientSelector*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_gradientselector_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KGradientSelector*
/// @param param1 enum Qt__WindowType
///
void k_gradientselector_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KGradientSelector*
/// @param type flag of enum Qt__WindowType
///
void k_gradientselector_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KGradientSelector*
///
/// @return enum Qt__WindowType
///
int32_t k_gradientselector_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_gradientselector_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KGradientSelector*
/// @param x int
/// @param y int
///
QWidget* k_gradientselector_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KGradientSelector*
/// @param p QPoint*
///
QWidget* k_gradientselector_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KGradientSelector*
/// @param p QPointF*
///
QWidget* k_gradientselector_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KGradientSelector*
/// @param param1 enum Qt__WidgetAttribute
///
void k_gradientselector_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KGradientSelector*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_gradientselector_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KGradientSelector*
///
void k_gradientselector_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KGradientSelector*
/// @param child QWidget*
///
bool k_gradientselector_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KGradientSelector*
/// @param enabled bool
///
void k_gradientselector_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KGradientSelector*
///
QBackingStore* k_gradientselector_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KGradientSelector*
///
QWindow* k_gradientselector_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KGradientSelector*
///
QScreen* k_gradientselector_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KGradientSelector*
/// @param screen QScreen*
///
void k_gradientselector_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_gradientselector_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KGradientSelector*
/// @param title const char*
///
void k_gradientselector_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, const char* title)
///
void k_gradientselector_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KGradientSelector*
/// @param icon QIcon*
///
void k_gradientselector_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QIcon* icon)
///
void k_gradientselector_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KGradientSelector*
/// @param iconText const char*
///
void k_gradientselector_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, const char* iconText)
///
void k_gradientselector_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KGradientSelector*
/// @param pos QPoint*
///
void k_gradientselector_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QPoint* pos)
///
void k_gradientselector_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KGradientSelector*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_gradientselector_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KGradientSelector*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_gradientselector_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_gradientselector_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_gradientselector_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_gradientselector_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_gradientselector_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_gradientselector_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KGradientSelector*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_gradientselector_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KGradientSelector*
/// @param rectangle QRect*
///
QPixmap* k_gradientselector_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KGradientSelector*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_gradientselector_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KGradientSelector*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_gradientselector_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KGradientSelector*
/// @param id int
/// @param enable bool
///
void k_gradientselector_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KGradientSelector*
/// @param id int
/// @param enable bool
///
void k_gradientselector_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KGradientSelector*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_gradientselector_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KGradientSelector*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_gradientselector_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_gradientselector_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_gradientselector_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KGradientSelector*
///
const char* k_gradientselector_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KGradientSelector*
/// @param name const char*
///
void k_gradientselector_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KGradientSelector*
/// @param b bool
///
bool k_gradientselector_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KGradientSelector*
///
QThread* k_gradientselector_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KGradientSelector*
/// @param thread QThread*
///
bool k_gradientselector_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KGradientSelector*
/// @param interval int
///
int32_t k_gradientselector_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KGradientSelector*
/// @param time int64_t of nanoseconds
///
int32_t k_gradientselector_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KGradientSelector*
/// @param id int
///
void k_gradientselector_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KGradientSelector*
/// @param id enum Qt__TimerId
///
void k_gradientselector_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KGradientSelector*
///
/// @return libqt_list of QObject*
///
libqt_list k_gradientselector_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KGradientSelector*
/// @param filterObj QObject*
///
void k_gradientselector_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KGradientSelector*
/// @param obj QObject*
///
void k_gradientselector_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_gradientselector_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_gradientselector_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KGradientSelector*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_gradientselector_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_gradientselector_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_gradientselector_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KGradientSelector*
/// @param receiver QObject*
///
bool k_gradientselector_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_gradientselector_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KGradientSelector*
///
void k_gradientselector_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KGradientSelector*
///
void k_gradientselector_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KGradientSelector*
/// @param name const char*
/// @param value QVariant*
///
bool k_gradientselector_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KGradientSelector*
/// @param name const char*
///
QVariant* k_gradientselector_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KGradientSelector*
///
const char** k_gradientselector_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KGradientSelector*
///
QBindingStorage* k_gradientselector_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KGradientSelector*
///
const QBindingStorage* k_gradientselector_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGradientSelector*
///
void k_gradientselector_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self)
///
void k_gradientselector_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KGradientSelector*
///
QObject* k_gradientselector_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KGradientSelector*
/// @param classname const char*
///
bool k_gradientselector_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KGradientSelector*
///
void k_gradientselector_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KGradientSelector*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_gradientselector_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KGradientSelector*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_gradientselector_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_gradientselector_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_gradientselector_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KGradientSelector*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_gradientselector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KGradientSelector*
/// @param signal const char*
///
bool k_gradientselector_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KGradientSelector*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_gradientselector_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KGradientSelector*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_gradientselector_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KGradientSelector*
/// @param receiver QObject*
/// @param member const char*
///
bool k_gradientselector_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGradientSelector*
/// @param param1 QObject*
///
void k_gradientselector_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QObject* param1)
///
void k_gradientselector_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KGradientSelector*
///
bool k_gradientselector_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KGradientSelector*
///
double k_gradientselector_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KGradientSelector*
///
double k_gradientselector_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_gradientselector_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_gradientselector_encode_metric_f(int32_t metric, double value);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#drawArrow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param painter QPainter*
/// @param pos QPoint*
///
void k_gradientselector_draw_arrow(void* self, void* painter, void* pos);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#drawArrow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param painter QPainter*
/// @param pos QPoint*
///
void k_gradientselector_qbase_draw_arrow(void* self, void* painter, void* pos);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#drawArrow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QPainter* painter, QPoint* pos)
///
void k_gradientselector_on_draw_arrow(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QPaintEvent*
///
void k_gradientselector_paint_event(void* self, void* param1);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QPaintEvent*
///
void k_gradientselector_qbase_paint_event(void* self, void* param1);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QPaintEvent* param1)
///
void k_gradientselector_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QMouseEvent*
///
void k_gradientselector_mouse_press_event(void* self, void* e);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QMouseEvent*
///
void k_gradientselector_qbase_mouse_press_event(void* self, void* e);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QMouseEvent* e)
///
void k_gradientselector_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QMouseEvent*
///
void k_gradientselector_mouse_move_event(void* self, void* e);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QMouseEvent*
///
void k_gradientselector_qbase_mouse_move_event(void* self, void* e);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QMouseEvent* e)
///
void k_gradientselector_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QMouseEvent*
///
void k_gradientselector_mouse_release_event(void* self, void* e);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QMouseEvent*
///
void k_gradientselector_qbase_mouse_release_event(void* self, void* e);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QMouseEvent* e)
///
void k_gradientselector_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QWheelEvent*
///
void k_gradientselector_wheel_event(void* self, void* param1);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QWheelEvent*
///
void k_gradientselector_qbase_wheel_event(void* self, void* param1);

/// Inherited from KSelector
///
/// [Upstream resources](https://api.kde.org/kselector.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QWheelEvent* param1)
///
void k_gradientselector_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QEvent*
///
bool k_gradientselector_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QEvent*
///
bool k_gradientselector_qbase_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func(KGradientSelector* self, QEvent* e)
///
void k_gradientselector_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param change enum QAbstractSlider__SliderChange
///
void k_gradientselector_slider_change(void* self, int32_t change);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param change enum QAbstractSlider__SliderChange
///
void k_gradientselector_qbase_slider_change(void* self, int32_t change);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#sliderChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, enum QAbstractSlider__SliderChange change)
///
void k_gradientselector_on_slider_change(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param ev QKeyEvent*
///
void k_gradientselector_key_press_event(void* self, void* ev);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param ev QKeyEvent*
///
void k_gradientselector_qbase_key_press_event(void* self, void* ev);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QKeyEvent* ev)
///
void k_gradientselector_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QTimerEvent*
///
void k_gradientselector_timer_event(void* self, void* param1);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QTimerEvent*
///
void k_gradientselector_qbase_timer_event(void* self, void* param1);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QTimerEvent* param1)
///
void k_gradientselector_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QEvent*
///
void k_gradientselector_change_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param e QEvent*
///
void k_gradientselector_qbase_change_event(void* self, void* e);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QEvent* e)
///
void k_gradientselector_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback int32_t func()
///
void k_gradientselector_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param visible bool
///
void k_gradientselector_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param visible bool
///
void k_gradientselector_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, bool visible)
///
void k_gradientselector_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback QSize* func()
///
void k_gradientselector_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
QSize* k_gradientselector_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback QSize* func()
///
void k_gradientselector_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 int
///
int32_t k_gradientselector_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 int
///
int32_t k_gradientselector_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback int32_t func(KGradientSelector* self, int param1)
///
void k_gradientselector_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
bool k_gradientselector_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
bool k_gradientselector_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func()
///
void k_gradientselector_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
QPaintEngine* k_gradientselector_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
QPaintEngine* k_gradientselector_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback QPaintEngine* func()
///
void k_gradientselector_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QMouseEvent*
///
void k_gradientselector_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QMouseEvent*
///
void k_gradientselector_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QMouseEvent* event)
///
void k_gradientselector_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QKeyEvent*
///
void k_gradientselector_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QKeyEvent*
///
void k_gradientselector_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QKeyEvent* event)
///
void k_gradientselector_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QFocusEvent*
///
void k_gradientselector_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QFocusEvent*
///
void k_gradientselector_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QFocusEvent* event)
///
void k_gradientselector_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QFocusEvent*
///
void k_gradientselector_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QFocusEvent*
///
void k_gradientselector_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QFocusEvent* event)
///
void k_gradientselector_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QEnterEvent*
///
void k_gradientselector_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QEnterEvent*
///
void k_gradientselector_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QEnterEvent* event)
///
void k_gradientselector_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QEvent*
///
void k_gradientselector_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QEvent*
///
void k_gradientselector_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QEvent* event)
///
void k_gradientselector_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QMoveEvent*
///
void k_gradientselector_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QMoveEvent*
///
void k_gradientselector_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QMoveEvent* event)
///
void k_gradientselector_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QResizeEvent*
///
void k_gradientselector_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QResizeEvent*
///
void k_gradientselector_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QResizeEvent* event)
///
void k_gradientselector_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QCloseEvent*
///
void k_gradientselector_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QCloseEvent*
///
void k_gradientselector_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QCloseEvent* event)
///
void k_gradientselector_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QContextMenuEvent*
///
void k_gradientselector_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QContextMenuEvent*
///
void k_gradientselector_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QContextMenuEvent* event)
///
void k_gradientselector_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QTabletEvent*
///
void k_gradientselector_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QTabletEvent*
///
void k_gradientselector_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QTabletEvent* event)
///
void k_gradientselector_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QActionEvent*
///
void k_gradientselector_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QActionEvent*
///
void k_gradientselector_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QActionEvent* event)
///
void k_gradientselector_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDragEnterEvent*
///
void k_gradientselector_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDragEnterEvent*
///
void k_gradientselector_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QDragEnterEvent* event)
///
void k_gradientselector_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDragMoveEvent*
///
void k_gradientselector_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDragMoveEvent*
///
void k_gradientselector_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QDragMoveEvent* event)
///
void k_gradientselector_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDragLeaveEvent*
///
void k_gradientselector_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDragLeaveEvent*
///
void k_gradientselector_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QDragLeaveEvent* event)
///
void k_gradientselector_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDropEvent*
///
void k_gradientselector_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QDropEvent*
///
void k_gradientselector_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QDropEvent* event)
///
void k_gradientselector_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QShowEvent*
///
void k_gradientselector_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QShowEvent*
///
void k_gradientselector_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QShowEvent* event)
///
void k_gradientselector_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QHideEvent*
///
void k_gradientselector_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QHideEvent*
///
void k_gradientselector_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QHideEvent* event)
///
void k_gradientselector_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_gradientselector_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_gradientselector_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func(KGradientSelector* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_gradientselector_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_gradientselector_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_gradientselector_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback int32_t func(KGradientSelector* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_gradientselector_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param painter QPainter*
///
void k_gradientselector_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param painter QPainter*
///
void k_gradientselector_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QPainter* painter)
///
void k_gradientselector_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param offset QPoint*
///
QPaintDevice* k_gradientselector_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param offset QPoint*
///
QPaintDevice* k_gradientselector_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback QPaintDevice* func(KGradientSelector* self, QPoint* offset)
///
void k_gradientselector_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
QPainter* k_gradientselector_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
QPainter* k_gradientselector_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback QPainter* func()
///
void k_gradientselector_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QInputMethodEvent*
///
void k_gradientselector_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 QInputMethodEvent*
///
void k_gradientselector_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QInputMethodEvent* param1)
///
void k_gradientselector_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_gradientselector_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_gradientselector_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback QVariant* func(KGradientSelector* self, enum Qt__InputMethodQuery param1)
///
void k_gradientselector_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param next bool
///
bool k_gradientselector_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param next bool
///
bool k_gradientselector_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func(KGradientSelector* self, bool next)
///
void k_gradientselector_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_gradientselector_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_gradientselector_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func(KGradientSelector* self, QObject* watched, QEvent* event)
///
void k_gradientselector_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QChildEvent*
///
void k_gradientselector_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QChildEvent*
///
void k_gradientselector_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QChildEvent* event)
///
void k_gradientselector_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QEvent*
///
void k_gradientselector_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param event QEvent*
///
void k_gradientselector_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QEvent* event)
///
void k_gradientselector_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal QMetaMethod*
///
void k_gradientselector_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal QMetaMethod*
///
void k_gradientselector_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QMetaMethod* signal)
///
void k_gradientselector_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal QMetaMethod*
///
void k_gradientselector_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal QMetaMethod*
///
void k_gradientselector_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, QMetaMethod* signal)
///
void k_gradientselector_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param action enum QAbstractSlider__SliderAction
///
void k_gradientselector_set_repeat_action(void* self, int32_t action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param action enum QAbstractSlider__SliderAction
///
void k_gradientselector_qbase_set_repeat_action(void* self, int32_t action);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, enum QAbstractSlider__SliderAction action)
///
void k_gradientselector_on_set_repeat_action(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
/// @return enum QAbstractSlider__SliderAction
///
int32_t k_gradientselector_repeat_action(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
/// @return enum QAbstractSlider__SliderAction
///
int32_t k_gradientselector_qbase_repeat_action(void* self);

/// Inherited from QAbstractSlider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback int32_t func()
///
void k_gradientselector_on_repeat_action(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
void k_gradientselector_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
void k_gradientselector_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func()
///
void k_gradientselector_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
void k_gradientselector_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
void k_gradientselector_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func()
///
void k_gradientselector_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
void k_gradientselector_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
void k_gradientselector_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback void func()
///
void k_gradientselector_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
bool k_gradientselector_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
bool k_gradientselector_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func()
///
void k_gradientselector_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
bool k_gradientselector_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
bool k_gradientselector_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func()
///
void k_gradientselector_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
QObject* k_gradientselector_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
QObject* k_gradientselector_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback QObject* func()
///
void k_gradientselector_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
///
int32_t k_gradientselector_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback int32_t func()
///
void k_gradientselector_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal const char*
///
int32_t k_gradientselector_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal const char*
///
int32_t k_gradientselector_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback int32_t func(KGradientSelector* self, const char* signal)
///
void k_gradientselector_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal QMetaMethod*
///
bool k_gradientselector_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param signal QMetaMethod*
///
bool k_gradientselector_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback bool func(KGradientSelector* self, QMetaMethod* signal)
///
void k_gradientselector_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KGradientSelector*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_gradientselector_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_gradientselector_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KGradientSelector*
/// @param callback double func(KGradientSelector* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_gradientselector_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KGradientSelector*
/// @param callback void func(KGradientSelector* self, const char* objectName)
///
void k_gradientselector_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kgradientselector.html#dtor.KGradientSelector)
///
/// Delete this object from C++ memory.
///
/// @param self KGradientSelector*
///
void k_gradientselector_delete(void* self);

#endif
