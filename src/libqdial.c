#include "libqabstractslider.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqdial.hpp"
#include "libqdial.h"

/// https://doc.qt.io/qt-6/qdial.html

/// q_dial_new constructs a new QDial object.
///
/// ``` QWidget* parent ```
QDial* q_dial_new(void* parent) {
    return QDial_new((QWidget*)parent);
}

/// q_dial_new2 constructs a new QDial object.
///
///
QDial* q_dial_new2() {
    return QDial_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDial* self ```
QMetaObject* q_dial_meta_object(void* self) {
    return QDial_MetaObject((QDial*)self);
}

/// ``` QDial* self, const char* param1 ```
void* q_dial_metacast(void* self, const char* param1) {
    return QDial_Metacast((QDial*)self, param1);
}

/// ``` QDial* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dial_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDial_Metacall((QDial*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, int32_t (*slot)(QDial*, enum QMetaObject__Call, int, void*) ```
void q_dial_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDial_OnMetacall((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dial_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDial_QBaseMetacall((QDial*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dial_tr(const char* s) {
    libqt_string _str = QDial_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#wrapping)
///
/// ``` QDial* self ```
bool q_dial_wrapping(void* self) {
    return QDial_Wrapping((QDial*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#notchSize)
///
/// ``` QDial* self ```
int32_t q_dial_notch_size(void* self) {
    return QDial_NotchSize((QDial*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#setNotchTarget)
///
/// ``` QDial* self, double target ```
void q_dial_set_notch_target(void* self, double target) {
    QDial_SetNotchTarget((QDial*)self, target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#notchTarget)
///
/// ``` QDial* self ```
double q_dial_notch_target(void* self) {
    return QDial_NotchTarget((QDial*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#notchesVisible)
///
/// ``` QDial* self ```
bool q_dial_notches_visible(void* self) {
    return QDial_NotchesVisible((QDial*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#sizeHint)
///
/// ``` QDial* self ```
QSize* q_dial_size_hint(void* self) {
    return QDial_SizeHint((QDial*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, QSize* (*slot)() ```
void q_dial_on_size_hint(void* self, QSize* (*slot)()) {
    QDial_OnSizeHint((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self ```
QSize* q_dial_qbase_size_hint(void* self) {
    return QDial_QBaseSizeHint((QDial*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#minimumSizeHint)
///
/// ``` QDial* self ```
QSize* q_dial_minimum_size_hint(void* self) {
    return QDial_MinimumSizeHint((QDial*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, QSize* (*slot)() ```
void q_dial_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QDial_OnMinimumSizeHint((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self ```
QSize* q_dial_qbase_minimum_size_hint(void* self) {
    return QDial_QBaseMinimumSizeHint((QDial*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#setNotchesVisible)
///
/// ``` QDial* self, bool visible ```
void q_dial_set_notches_visible(void* self, bool visible) {
    QDial_SetNotchesVisible((QDial*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#setWrapping)
///
/// ``` QDial* self, bool on ```
void q_dial_set_wrapping(void* self, bool on) {
    QDial_SetWrapping((QDial*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#event)
///
/// ``` QDial* self, QEvent* e ```
bool q_dial_event(void* self, void* e) {
    return QDial_Event((QDial*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, bool (*slot)(QDial*, QEvent*) ```
void q_dial_on_event(void* self, bool (*slot)(void*, void*)) {
    QDial_OnEvent((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, QEvent* e ```
bool q_dial_qbase_event(void* self, void* e) {
    return QDial_QBaseEvent((QDial*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#resizeEvent)
///
/// ``` QDial* self, QResizeEvent* re ```
void q_dial_resize_event(void* self, void* re) {
    QDial_ResizeEvent((QDial*)self, (QResizeEvent*)re);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, void (*slot)(QDial*, QResizeEvent*) ```
void q_dial_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnResizeEvent((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, QResizeEvent* re ```
void q_dial_qbase_resize_event(void* self, void* re) {
    QDial_QBaseResizeEvent((QDial*)self, (QResizeEvent*)re);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#paintEvent)
///
/// ``` QDial* self, QPaintEvent* pe ```
void q_dial_paint_event(void* self, void* pe) {
    QDial_PaintEvent((QDial*)self, (QPaintEvent*)pe);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, void (*slot)(QDial*, QPaintEvent*) ```
void q_dial_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnPaintEvent((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, QPaintEvent* pe ```
void q_dial_qbase_paint_event(void* self, void* pe) {
    QDial_QBasePaintEvent((QDial*)self, (QPaintEvent*)pe);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#mousePressEvent)
///
/// ``` QDial* self, QMouseEvent* me ```
void q_dial_mouse_press_event(void* self, void* me) {
    QDial_MousePressEvent((QDial*)self, (QMouseEvent*)me);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, void (*slot)(QDial*, QMouseEvent*) ```
void q_dial_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnMousePressEvent((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, QMouseEvent* me ```
void q_dial_qbase_mouse_press_event(void* self, void* me) {
    QDial_QBaseMousePressEvent((QDial*)self, (QMouseEvent*)me);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#mouseReleaseEvent)
///
/// ``` QDial* self, QMouseEvent* me ```
void q_dial_mouse_release_event(void* self, void* me) {
    QDial_MouseReleaseEvent((QDial*)self, (QMouseEvent*)me);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, void (*slot)(QDial*, QMouseEvent*) ```
void q_dial_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnMouseReleaseEvent((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, QMouseEvent* me ```
void q_dial_qbase_mouse_release_event(void* self, void* me) {
    QDial_QBaseMouseReleaseEvent((QDial*)self, (QMouseEvent*)me);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#mouseMoveEvent)
///
/// ``` QDial* self, QMouseEvent* me ```
void q_dial_mouse_move_event(void* self, void* me) {
    QDial_MouseMoveEvent((QDial*)self, (QMouseEvent*)me);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, void (*slot)(QDial*, QMouseEvent*) ```
void q_dial_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnMouseMoveEvent((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, QMouseEvent* me ```
void q_dial_qbase_mouse_move_event(void* self, void* me) {
    QDial_QBaseMouseMoveEvent((QDial*)self, (QMouseEvent*)me);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#sliderChange)
///
/// ``` QDial* self, enum QAbstractSlider__SliderChange change ```
void q_dial_slider_change(void* self, int64_t change) {
    QDial_SliderChange((QDial*)self, change);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, void (*slot)(QDial*, enum QAbstractSlider__SliderChange) ```
void q_dial_on_slider_change(void* self, void (*slot)(void*, int64_t)) {
    QDial_OnSliderChange((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, enum QAbstractSlider__SliderChange change ```
void q_dial_qbase_slider_change(void* self, int64_t change) {
    QDial_QBaseSliderChange((QDial*)self, change);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#initStyleOption)
///
/// ``` QDial* self, QStyleOptionSlider* option ```
void q_dial_init_style_option(void* self, void* option) {
    QDial_InitStyleOption((QDial*)self, (QStyleOptionSlider*)option);
}

/// Allows for overriding the related default method
///
/// ``` QDial* self, void (*slot)(QDial*, QStyleOptionSlider*) ```
void q_dial_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QDial_OnInitStyleOption((QDial*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDial* self, QStyleOptionSlider* option ```
void q_dial_qbase_init_style_option(void* self, void* option) {
    QDial_QBaseInitStyleOption((QDial*)self, (QStyleOptionSlider*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dial_tr2(const char* s, const char* c) {
    libqt_string _str = QDial_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dial_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDial_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#orientation)
///
/// ``` QDial* self ```
int64_t q_dial_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMinimum)
///
/// ``` QDial* self, int minimum ```
void q_dial_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#minimum)
///
/// ``` QDial* self ```
int32_t q_dial_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMaximum)
///
/// ``` QDial* self, int maximum ```
void q_dial_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#maximum)
///
/// ``` QDial* self ```
int32_t q_dial_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSingleStep)
///
/// ``` QDial* self, int singleStep ```
void q_dial_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#singleStep)
///
/// ``` QDial* self ```
int32_t q_dial_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setPageStep)
///
/// ``` QDial* self, int pageStep ```
void q_dial_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#pageStep)
///
/// ``` QDial* self ```
int32_t q_dial_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setTracking)
///
/// ``` QDial* self, bool enable ```
void q_dial_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#hasTracking)
///
/// ``` QDial* self ```
bool q_dial_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderDown)
///
/// ``` QDial* self, bool sliderDown ```
void q_dial_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#isSliderDown)
///
/// ``` QDial* self ```
bool q_dial_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderPosition)
///
/// ``` QDial* self, int sliderPosition ```
void q_dial_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPosition)
///
/// ``` QDial* self ```
int32_t q_dial_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedAppearance)
///
/// ``` QDial* self, bool invertedAppearance ```
void q_dial_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedAppearance)
///
/// ``` QDial* self ```
bool q_dial_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedControls)
///
/// ``` QDial* self, bool invertedControls ```
void q_dial_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedControls)
///
/// ``` QDial* self ```
bool q_dial_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#value)
///
/// ``` QDial* self ```
int32_t q_dial_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#triggerAction)
///
/// ``` QDial* self, enum QAbstractSlider__SliderAction action ```
void q_dial_trigger_action(void* self, int64_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setValue)
///
/// ``` QDial* self, int value ```
void q_dial_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setOrientation)
///
/// ``` QDial* self, enum Qt__Orientation orientation ```
void q_dial_set_orientation(void* self, int64_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRange)
///
/// ``` QDial* self, int min, int max ```
void q_dial_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
///
/// ``` QDial* self, int value ```
void q_dial_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

/// Inherited from QAbstractSlider
///
/// ``` QDial* self, void (*slot)(QAbstractSlider*, int) ```
void q_dial_on_value_changed(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
///
/// ``` QDial* self ```
void q_dial_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// ``` QDial* self, void (*slot)(QAbstractSlider*) ```
void q_dial_on_slider_pressed(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
///
/// ``` QDial* self, int position ```
void q_dial_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

/// Inherited from QAbstractSlider
///
/// ``` QDial* self, void (*slot)(QAbstractSlider*, int) ```
void q_dial_on_slider_moved(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
///
/// ``` QDial* self ```
void q_dial_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// ``` QDial* self, void (*slot)(QAbstractSlider*) ```
void q_dial_on_slider_released(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
///
/// ``` QDial* self, int min, int max ```
void q_dial_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

/// Inherited from QAbstractSlider
///
/// ``` QDial* self, void (*slot)(QAbstractSlider*, int, int) ```
void q_dial_on_range_changed(void* self, void (*slot)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
///
/// ``` QDial* self, int action ```
void q_dial_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// ``` QDial* self, void (*slot)(QAbstractSlider*, int) ```
void q_dial_on_action_triggered(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QDial* self ```
uintptr_t q_dial_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QDial* self ```
void q_dial_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QDial* self ```
uintptr_t q_dial_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QDial* self ```
uintptr_t q_dial_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QDial* self ```
QStyle* q_dial_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QDial* self, QStyle* style ```
void q_dial_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QDial* self ```
bool q_dial_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QDial* self ```
bool q_dial_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QDial* self ```
bool q_dial_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QDial* self ```
int64_t q_dial_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QDial* self, enum Qt__WindowModality windowModality ```
void q_dial_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QDial* self ```
bool q_dial_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QDial* self, QWidget* param1 ```
bool q_dial_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QDial* self, bool enabled ```
void q_dial_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QDial* self, bool disabled ```
void q_dial_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QDial* self, bool windowModified ```
void q_dial_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QDial* self ```
QRect* q_dial_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QDial* self ```
QRect* q_dial_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QDial* self ```
QRect* q_dial_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QDial* self ```
int32_t q_dial_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QDial* self ```
int32_t q_dial_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QDial* self ```
QPoint* q_dial_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QDial* self ```
QSize* q_dial_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QDial* self ```
QSize* q_dial_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QDial* self ```
int32_t q_dial_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QDial* self ```
int32_t q_dial_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QDial* self ```
QRect* q_dial_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QDial* self ```
QRect* q_dial_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QDial* self ```
QRegion* q_dial_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QDial* self ```
QSize* q_dial_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QDial* self ```
QSize* q_dial_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QDial* self ```
int32_t q_dial_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QDial* self ```
int32_t q_dial_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QDial* self ```
int32_t q_dial_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QDial* self ```
int32_t q_dial_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDial* self, QSize* minimumSize ```
void q_dial_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QDial* self, int minw, int minh ```
void q_dial_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDial* self, QSize* maximumSize ```
void q_dial_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QDial* self, int maxw, int maxh ```
void q_dial_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QDial* self, int minw ```
void q_dial_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QDial* self, int minh ```
void q_dial_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QDial* self, int maxw ```
void q_dial_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QDial* self, int maxh ```
void q_dial_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QDial* self ```
QSize* q_dial_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDial* self, QSize* sizeIncrement ```
void q_dial_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QDial* self, int w, int h ```
void q_dial_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QDial* self ```
QSize* q_dial_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDial* self, QSize* baseSize ```
void q_dial_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QDial* self, int basew, int baseh ```
void q_dial_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDial* self, QSize* fixedSize ```
void q_dial_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QDial* self, int w, int h ```
void q_dial_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QDial* self, int w ```
void q_dial_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QDial* self, int h ```
void q_dial_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDial* self, QPointF* param1 ```
QPointF* q_dial_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QDial* self, QPoint* param1 ```
QPoint* q_dial_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDial* self, QPointF* param1 ```
QPointF* q_dial_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QDial* self, QPoint* param1 ```
QPoint* q_dial_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDial* self, QPointF* param1 ```
QPointF* q_dial_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QDial* self, QPoint* param1 ```
QPoint* q_dial_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDial* self, QPointF* param1 ```
QPointF* q_dial_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QDial* self, QPoint* param1 ```
QPoint* q_dial_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDial* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dial_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QDial* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dial_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDial* self, QWidget* param1, QPointF* param2 ```
QPointF* q_dial_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QDial* self, QWidget* param1, QPoint* param2 ```
QPoint* q_dial_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QDial* self ```
QWidget* q_dial_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QDial* self ```
QWidget* q_dial_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QDial* self ```
QWidget* q_dial_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QDial* self ```
QPalette* q_dial_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QDial* self, QPalette* palette ```
void q_dial_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QDial* self, enum QPalette__ColorRole backgroundRole ```
void q_dial_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QDial* self ```
int64_t q_dial_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QDial* self, enum QPalette__ColorRole foregroundRole ```
void q_dial_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QDial* self ```
int64_t q_dial_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QDial* self ```
QFont* q_dial_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QDial* self, QFont* font ```
void q_dial_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QDial* self ```
QFontMetrics* q_dial_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QDial* self ```
QFontInfo* q_dial_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QDial* self ```
QCursor* q_dial_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QDial* self, QCursor* cursor ```
void q_dial_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QDial* self ```
void q_dial_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QDial* self, bool enable ```
void q_dial_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QDial* self ```
bool q_dial_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QDial* self ```
bool q_dial_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QDial* self, bool enable ```
void q_dial_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QDial* self ```
bool q_dial_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDial* self, QBitmap* mask ```
void q_dial_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QDial* self, QRegion* mask ```
void q_dial_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QDial* self ```
QRegion* q_dial_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QDial* self ```
void q_dial_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPaintDevice* target ```
void q_dial_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPainter* painter ```
void q_dial_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDial* self ```
QPixmap* q_dial_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QDial* self ```
QGraphicsEffect* q_dial_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QDial* self, QGraphicsEffect* effect ```
void q_dial_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDial* self, enum Qt__GestureType typeVal ```
void q_dial_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QDial* self, enum Qt__GestureType typeVal ```
void q_dial_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QDial* self, const char* windowTitle ```
void q_dial_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QDial* self, const char* styleSheet ```
void q_dial_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QDial* self ```
const char* q_dial_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QDial* self ```
const char* q_dial_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QDial* self, QIcon* icon ```
void q_dial_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QDial* self ```
QIcon* q_dial_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QDial* self, const char* windowIconText ```
void q_dial_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QDial* self ```
const char* q_dial_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QDial* self, const char* windowRole ```
void q_dial_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QDial* self ```
const char* q_dial_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QDial* self, const char* filePath ```
void q_dial_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QDial* self ```
const char* q_dial_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QDial* self, double level ```
void q_dial_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QDial* self ```
double q_dial_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QDial* self ```
bool q_dial_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QDial* self, const char* toolTip ```
void q_dial_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QDial* self ```
const char* q_dial_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QDial* self, int msec ```
void q_dial_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QDial* self ```
int32_t q_dial_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QDial* self, const char* statusTip ```
void q_dial_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QDial* self ```
const char* q_dial_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QDial* self, const char* whatsThis ```
void q_dial_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QDial* self ```
const char* q_dial_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QDial* self ```
const char* q_dial_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QDial* self, const char* name ```
void q_dial_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QDial* self ```
const char* q_dial_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QDial* self, const char* description ```
void q_dial_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QDial* self, enum Qt__LayoutDirection direction ```
void q_dial_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QDial* self ```
int64_t q_dial_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QDial* self ```
void q_dial_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QDial* self, QLocale* locale ```
void q_dial_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QDial* self ```
QLocale* q_dial_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QDial* self ```
void q_dial_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QDial* self ```
bool q_dial_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QDial* self ```
bool q_dial_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDial* self ```
void q_dial_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QDial* self ```
bool q_dial_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QDial* self ```
void q_dial_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QDial* self ```
void q_dial_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QDial* self, enum Qt__FocusReason reason ```
void q_dial_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QDial* self ```
int64_t q_dial_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QDial* self, enum Qt__FocusPolicy policy ```
void q_dial_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QDial* self ```
bool q_dial_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_dial_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QDial* self, QWidget* focusProxy ```
void q_dial_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QDial* self ```
QWidget* q_dial_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QDial* self ```
int64_t q_dial_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QDial* self, enum Qt__ContextMenuPolicy policy ```
void q_dial_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDial* self ```
void q_dial_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QDial* self, QCursor* param1 ```
void q_dial_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QDial* self ```
void q_dial_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QDial* self ```
void q_dial_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QDial* self ```
void q_dial_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDial* self, QKeySequence* key ```
int32_t q_dial_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QDial* self, int id ```
void q_dial_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDial* self, int id ```
void q_dial_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDial* self, int id ```
void q_dial_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_dial_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_dial_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QDial* self ```
bool q_dial_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QDial* self, bool enable ```
void q_dial_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QDial* self ```
QGraphicsProxyWidget* q_dial_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDial* self ```
void q_dial_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDial* self ```
void q_dial_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDial* self, int x, int y, int w, int h ```
void q_dial_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDial* self, QRect* param1 ```
void q_dial_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QDial* self, QRegion* param1 ```
void q_dial_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDial* self, int x, int y, int w, int h ```
void q_dial_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDial* self, QRect* param1 ```
void q_dial_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QDial* self, QRegion* param1 ```
void q_dial_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QDial* self, bool hidden ```
void q_dial_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QDial* self ```
void q_dial_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QDial* self ```
void q_dial_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QDial* self ```
void q_dial_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QDial* self ```
void q_dial_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QDial* self ```
void q_dial_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QDial* self ```
void q_dial_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QDial* self ```
bool q_dial_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QDial* self ```
void q_dial_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QDial* self ```
void q_dial_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QDial* self, QWidget* param1 ```
void q_dial_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDial* self, int x, int y ```
void q_dial_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QDial* self, QPoint* param1 ```
void q_dial_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDial* self, int w, int h ```
void q_dial_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QDial* self, QSize* param1 ```
void q_dial_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDial* self, int x, int y, int w, int h ```
void q_dial_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QDial* self, QRect* geometry ```
void q_dial_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QDial* self ```
char* q_dial_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QDial* self, const char* geometry ```
bool q_dial_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QDial* self ```
void q_dial_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QDial* self ```
bool q_dial_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QDial* self, QWidget* param1 ```
bool q_dial_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QDial* self ```
bool q_dial_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QDial* self ```
bool q_dial_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QDial* self ```
bool q_dial_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QDial* self ```
bool q_dial_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QDial* self ```
int64_t q_dial_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QDial* self, int state ```
void q_dial_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QDial* self, int state ```
void q_dial_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QDial* self ```
QSizePolicy* q_dial_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDial* self, QSizePolicy* sizePolicy ```
void q_dial_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QDial* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_dial_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QDial* self ```
QRegion* q_dial_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDial* self, int left, int top, int right, int bottom ```
void q_dial_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QDial* self, QMargins* margins ```
void q_dial_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QDial* self ```
QMargins* q_dial_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QDial* self ```
QRect* q_dial_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QDial* self ```
QLayout* q_dial_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QDial* self, QLayout* layout ```
void q_dial_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QDial* self ```
void q_dial_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDial* self, QWidget* parent ```
void q_dial_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QDial* self, QWidget* parent, int f ```
void q_dial_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDial* self, int dx, int dy ```
void q_dial_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QDial* self, int dx, int dy, QRect* param3 ```
void q_dial_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QDial* self ```
QWidget* q_dial_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QDial* self ```
QWidget* q_dial_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QDial* self ```
QWidget* q_dial_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QDial* self ```
bool q_dial_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QDial* self, bool on ```
void q_dial_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDial* self, QAction* action ```
void q_dial_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QDial* self, QAction* actions[] ```
void q_dial_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QDial* self, QAction* before, QAction* actions[] ```
void q_dial_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QDial* self, QAction* before, QAction* action ```
void q_dial_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QDial* self, QAction* action ```
void q_dial_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QDial* self ```
libqt_list /* of QAction* */ q_dial_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDial* self, const char* text ```
QAction* q_dial_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDial* self, QIcon* icon, const char* text ```
QAction* q_dial_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDial* self, const char* text, QKeySequence* shortcut ```
QAction* q_dial_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QDial* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_dial_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QDial* self ```
QWidget* q_dial_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QDial* self, int typeVal ```
void q_dial_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QDial* self ```
int64_t q_dial_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDial* self, enum Qt__WindowType param1 ```
void q_dial_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QDial* self, int typeVal ```
void q_dial_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QDial* self ```
int64_t q_dial_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_dial_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDial* self, int x, int y ```
QWidget* q_dial_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QDial* self, QPoint* p ```
QWidget* q_dial_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDial* self, enum Qt__WidgetAttribute param1 ```
void q_dial_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QDial* self, enum Qt__WidgetAttribute param1 ```
bool q_dial_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QDial* self ```
void q_dial_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QDial* self, QWidget* child ```
bool q_dial_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QDial* self ```
bool q_dial_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QDial* self, bool enabled ```
void q_dial_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QDial* self ```
QBackingStore* q_dial_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QDial* self ```
QWindow* q_dial_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QDial* self ```
QScreen* q_dial_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QDial* self, QScreen* screen ```
void q_dial_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_dial_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QDial* self, const char* title ```
void q_dial_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QDial* self, void (*slot)(QWidget*, const char*) ```
void q_dial_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QDial* self, QIcon* icon ```
void q_dial_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QDial* self, void (*slot)(QWidget*, QIcon*) ```
void q_dial_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QDial* self, const char* iconText ```
void q_dial_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QDial* self, void (*slot)(QWidget*, const char*) ```
void q_dial_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QDial* self, QPoint* pos ```
void q_dial_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QDial* self, void (*slot)(QWidget*, QPoint*) ```
void q_dial_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QDial* self ```
int64_t q_dial_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QDial* self, int hints ```
void q_dial_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPaintDevice* target, QPoint* targetOffset ```
void q_dial_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dial_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dial_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPainter* painter, QPoint* targetOffset ```
void q_dial_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_dial_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QDial* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_dial_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QDial* self, QRect* rectangle ```
QPixmap* q_dial_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QDial* self, enum Qt__GestureType typeVal, int flags ```
void q_dial_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QDial* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_dial_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QDial* self, int id, bool enable ```
void q_dial_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QDial* self, int id, bool enable ```
void q_dial_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QDial* self, enum Qt__WindowType param1, bool on ```
void q_dial_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QDial* self, enum Qt__WidgetAttribute param1, bool on ```
void q_dial_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_dial_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_dial_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDial* self ```
const char* q_dial_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDial* self, const char* name ```
void q_dial_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDial* self ```
bool q_dial_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDial* self ```
bool q_dial_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDial* self ```
bool q_dial_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDial* self ```
bool q_dial_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDial* self, bool b ```
bool q_dial_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDial* self ```
QThread* q_dial_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDial* self, QThread* thread ```
void q_dial_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDial* self, int interval ```
int32_t q_dial_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDial* self, int id ```
void q_dial_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDial* self ```
libqt_list /* of QObject* */ q_dial_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDial* self, QObject* filterObj ```
void q_dial_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDial* self, QObject* obj ```
void q_dial_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dial_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDial* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dial_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dial_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dial_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDial* self ```
void q_dial_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDial* self ```
void q_dial_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDial* self, const char* name, QVariant* value ```
bool q_dial_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDial* self, const char* name ```
QVariant* q_dial_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDial* self ```
const char** q_dial_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDial* self ```
QBindingStorage* q_dial_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDial* self ```
QBindingStorage* q_dial_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDial* self ```
void q_dial_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDial* self, void (*slot)(QObject*) ```
void q_dial_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDial* self ```
QObject* q_dial_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDial* self, const char* classname ```
bool q_dial_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDial* self ```
void q_dial_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDial* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dial_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dial_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDial* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dial_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDial* self, QObject* param1 ```
void q_dial_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDial* self, void (*slot)(QObject*, QObject*) ```
void q_dial_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QDial* self ```
bool q_dial_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QDial* self ```
int32_t q_dial_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QDial* self ```
int32_t q_dial_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QDial* self ```
int32_t q_dial_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QDial* self ```
int32_t q_dial_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QDial* self ```
int32_t q_dial_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QDial* self ```
int32_t q_dial_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QDial* self ```
double q_dial_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QDial* self ```
double q_dial_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QDial* self ```
int32_t q_dial_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QDial* self ```
int32_t q_dial_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_dial_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QKeyEvent* ev ```
void q_dial_key_press_event(void* self, void* ev) {
    QDial_KeyPressEvent((QDial*)self, (QKeyEvent*)ev);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QKeyEvent* ev ```
void q_dial_qbase_key_press_event(void* self, void* ev) {
    QDial_QBaseKeyPressEvent((QDial*)self, (QKeyEvent*)ev);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QKeyEvent*) ```
void q_dial_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnKeyPressEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QTimerEvent* param1 ```
void q_dial_timer_event(void* self, void* param1) {
    QDial_TimerEvent((QDial*)self, (QTimerEvent*)param1);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QTimerEvent* param1 ```
void q_dial_qbase_timer_event(void* self, void* param1) {
    QDial_QBaseTimerEvent((QDial*)self, (QTimerEvent*)param1);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QTimerEvent*) ```
void q_dial_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnTimerEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QWheelEvent* e ```
void q_dial_wheel_event(void* self, void* e) {
    QDial_WheelEvent((QDial*)self, (QWheelEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QWheelEvent* e ```
void q_dial_qbase_wheel_event(void* self, void* e) {
    QDial_QBaseWheelEvent((QDial*)self, (QWheelEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QWheelEvent*) ```
void q_dial_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnWheelEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QEvent* e ```
void q_dial_change_event(void* self, void* e) {
    QDial_ChangeEvent((QDial*)self, (QEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QEvent* e ```
void q_dial_qbase_change_event(void* self, void* e) {
    QDial_QBaseChangeEvent((QDial*)self, (QEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QEvent*) ```
void q_dial_on_change_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnChangeEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
int32_t q_dial_dev_type(void* self) {
    return QDial_DevType((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
int32_t q_dial_qbase_dev_type(void* self) {
    return QDial_QBaseDevType((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, int32_t (*slot)() ```
void q_dial_on_dev_type(void* self, int32_t (*slot)()) {
    QDial_OnDevType((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, bool visible ```
void q_dial_set_visible(void* self, bool visible) {
    QDial_SetVisible((QDial*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, bool visible ```
void q_dial_qbase_set_visible(void* self, bool visible) {
    QDial_QBaseSetVisible((QDial*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, bool) ```
void q_dial_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QDial_OnSetVisible((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, int param1 ```
int32_t q_dial_height_for_width(void* self, int param1) {
    return QDial_HeightForWidth((QDial*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, int param1 ```
int32_t q_dial_qbase_height_for_width(void* self, int param1) {
    return QDial_QBaseHeightForWidth((QDial*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, int32_t (*slot)(QDial*, int) ```
void q_dial_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QDial_OnHeightForWidth((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
bool q_dial_has_height_for_width(void* self) {
    return QDial_HasHeightForWidth((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
bool q_dial_qbase_has_height_for_width(void* self) {
    return QDial_QBaseHasHeightForWidth((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, bool (*slot)() ```
void q_dial_on_has_height_for_width(void* self, bool (*slot)()) {
    QDial_OnHasHeightForWidth((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
QPaintEngine* q_dial_paint_engine(void* self) {
    return QDial_PaintEngine((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
QPaintEngine* q_dial_qbase_paint_engine(void* self) {
    return QDial_QBasePaintEngine((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, QPaintEngine* (*slot)() ```
void q_dial_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QDial_OnPaintEngine((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QMouseEvent* event ```
void q_dial_mouse_double_click_event(void* self, void* event) {
    QDial_MouseDoubleClickEvent((QDial*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QMouseEvent* event ```
void q_dial_qbase_mouse_double_click_event(void* self, void* event) {
    QDial_QBaseMouseDoubleClickEvent((QDial*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QMouseEvent*) ```
void q_dial_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnMouseDoubleClickEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QKeyEvent* event ```
void q_dial_key_release_event(void* self, void* event) {
    QDial_KeyReleaseEvent((QDial*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QKeyEvent* event ```
void q_dial_qbase_key_release_event(void* self, void* event) {
    QDial_QBaseKeyReleaseEvent((QDial*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QKeyEvent*) ```
void q_dial_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnKeyReleaseEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QFocusEvent* event ```
void q_dial_focus_in_event(void* self, void* event) {
    QDial_FocusInEvent((QDial*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QFocusEvent* event ```
void q_dial_qbase_focus_in_event(void* self, void* event) {
    QDial_QBaseFocusInEvent((QDial*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QFocusEvent*) ```
void q_dial_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnFocusInEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QFocusEvent* event ```
void q_dial_focus_out_event(void* self, void* event) {
    QDial_FocusOutEvent((QDial*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QFocusEvent* event ```
void q_dial_qbase_focus_out_event(void* self, void* event) {
    QDial_QBaseFocusOutEvent((QDial*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QFocusEvent*) ```
void q_dial_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnFocusOutEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QEnterEvent* event ```
void q_dial_enter_event(void* self, void* event) {
    QDial_EnterEvent((QDial*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QEnterEvent* event ```
void q_dial_qbase_enter_event(void* self, void* event) {
    QDial_QBaseEnterEvent((QDial*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QEnterEvent*) ```
void q_dial_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnEnterEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QEvent* event ```
void q_dial_leave_event(void* self, void* event) {
    QDial_LeaveEvent((QDial*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QEvent* event ```
void q_dial_qbase_leave_event(void* self, void* event) {
    QDial_QBaseLeaveEvent((QDial*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QEvent*) ```
void q_dial_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnLeaveEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QMoveEvent* event ```
void q_dial_move_event(void* self, void* event) {
    QDial_MoveEvent((QDial*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QMoveEvent* event ```
void q_dial_qbase_move_event(void* self, void* event) {
    QDial_QBaseMoveEvent((QDial*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QMoveEvent*) ```
void q_dial_on_move_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnMoveEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QCloseEvent* event ```
void q_dial_close_event(void* self, void* event) {
    QDial_CloseEvent((QDial*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QCloseEvent* event ```
void q_dial_qbase_close_event(void* self, void* event) {
    QDial_QBaseCloseEvent((QDial*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QCloseEvent*) ```
void q_dial_on_close_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnCloseEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QContextMenuEvent* event ```
void q_dial_context_menu_event(void* self, void* event) {
    QDial_ContextMenuEvent((QDial*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QContextMenuEvent* event ```
void q_dial_qbase_context_menu_event(void* self, void* event) {
    QDial_QBaseContextMenuEvent((QDial*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QContextMenuEvent*) ```
void q_dial_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnContextMenuEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QTabletEvent* event ```
void q_dial_tablet_event(void* self, void* event) {
    QDial_TabletEvent((QDial*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QTabletEvent* event ```
void q_dial_qbase_tablet_event(void* self, void* event) {
    QDial_QBaseTabletEvent((QDial*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QTabletEvent*) ```
void q_dial_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnTabletEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QActionEvent* event ```
void q_dial_action_event(void* self, void* event) {
    QDial_ActionEvent((QDial*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QActionEvent* event ```
void q_dial_qbase_action_event(void* self, void* event) {
    QDial_QBaseActionEvent((QDial*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QActionEvent*) ```
void q_dial_on_action_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnActionEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QDragEnterEvent* event ```
void q_dial_drag_enter_event(void* self, void* event) {
    QDial_DragEnterEvent((QDial*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QDragEnterEvent* event ```
void q_dial_qbase_drag_enter_event(void* self, void* event) {
    QDial_QBaseDragEnterEvent((QDial*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QDragEnterEvent*) ```
void q_dial_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnDragEnterEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QDragMoveEvent* event ```
void q_dial_drag_move_event(void* self, void* event) {
    QDial_DragMoveEvent((QDial*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QDragMoveEvent* event ```
void q_dial_qbase_drag_move_event(void* self, void* event) {
    QDial_QBaseDragMoveEvent((QDial*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QDragMoveEvent*) ```
void q_dial_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnDragMoveEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QDragLeaveEvent* event ```
void q_dial_drag_leave_event(void* self, void* event) {
    QDial_DragLeaveEvent((QDial*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QDragLeaveEvent* event ```
void q_dial_qbase_drag_leave_event(void* self, void* event) {
    QDial_QBaseDragLeaveEvent((QDial*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QDragLeaveEvent*) ```
void q_dial_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnDragLeaveEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QDropEvent* event ```
void q_dial_drop_event(void* self, void* event) {
    QDial_DropEvent((QDial*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QDropEvent* event ```
void q_dial_qbase_drop_event(void* self, void* event) {
    QDial_QBaseDropEvent((QDial*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QDropEvent*) ```
void q_dial_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnDropEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QShowEvent* event ```
void q_dial_show_event(void* self, void* event) {
    QDial_ShowEvent((QDial*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QShowEvent* event ```
void q_dial_qbase_show_event(void* self, void* event) {
    QDial_QBaseShowEvent((QDial*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QShowEvent*) ```
void q_dial_on_show_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnShowEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QHideEvent* event ```
void q_dial_hide_event(void* self, void* event) {
    QDial_HideEvent((QDial*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QHideEvent* event ```
void q_dial_qbase_hide_event(void* self, void* event) {
    QDial_QBaseHideEvent((QDial*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QHideEvent*) ```
void q_dial_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnHideEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, const char* eventType, void* message, intptr_t* result ```
bool q_dial_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDial_NativeEvent((QDial*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, const char* eventType, void* message, intptr_t* result ```
bool q_dial_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDial_QBaseNativeEvent((QDial*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, bool (*slot)(QDial*, const char*, void*, intptr_t*) ```
void q_dial_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QDial_OnNativeEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dial_metric(void* self, int64_t param1) {
    return QDial_Metric((QDial*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_dial_qbase_metric(void* self, int64_t param1) {
    return QDial_QBaseMetric((QDial*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, int32_t (*slot)(QDial*, enum QPaintDevice__PaintDeviceMetric) ```
void q_dial_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QDial_OnMetric((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QPainter* painter ```
void q_dial_init_painter(void* self, void* painter) {
    QDial_InitPainter((QDial*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QPainter* painter ```
void q_dial_qbase_init_painter(void* self, void* painter) {
    QDial_QBaseInitPainter((QDial*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QPainter*) ```
void q_dial_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QDial_OnInitPainter((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QPoint* offset ```
QPaintDevice* q_dial_redirected(void* self, void* offset) {
    return QDial_Redirected((QDial*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QPoint* offset ```
QPaintDevice* q_dial_qbase_redirected(void* self, void* offset) {
    return QDial_QBaseRedirected((QDial*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, QPaintDevice* (*slot)(QDial*, QPoint*) ```
void q_dial_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QDial_OnRedirected((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
QPainter* q_dial_shared_painter(void* self) {
    return QDial_SharedPainter((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
QPainter* q_dial_qbase_shared_painter(void* self) {
    return QDial_QBaseSharedPainter((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, QPainter* (*slot)() ```
void q_dial_on_shared_painter(void* self, QPainter* (*slot)()) {
    QDial_OnSharedPainter((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QInputMethodEvent* param1 ```
void q_dial_input_method_event(void* self, void* param1) {
    QDial_InputMethodEvent((QDial*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QInputMethodEvent* param1 ```
void q_dial_qbase_input_method_event(void* self, void* param1) {
    QDial_QBaseInputMethodEvent((QDial*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QInputMethodEvent*) ```
void q_dial_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnInputMethodEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dial_input_method_query(void* self, int64_t param1) {
    return QDial_InputMethodQuery((QDial*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_dial_qbase_input_method_query(void* self, int64_t param1) {
    return QDial_QBaseInputMethodQuery((QDial*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, QVariant* (*slot)(QDial*, enum Qt__InputMethodQuery) ```
void q_dial_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QDial_OnInputMethodQuery((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, bool next ```
bool q_dial_focus_next_prev_child(void* self, bool next) {
    return QDial_FocusNextPrevChild((QDial*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, bool next ```
bool q_dial_qbase_focus_next_prev_child(void* self, bool next) {
    return QDial_QBaseFocusNextPrevChild((QDial*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, bool (*slot)(QDial*, bool) ```
void q_dial_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QDial_OnFocusNextPrevChild((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QObject* watched, QEvent* event ```
bool q_dial_event_filter(void* self, void* watched, void* event) {
    return QDial_EventFilter((QDial*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QObject* watched, QEvent* event ```
bool q_dial_qbase_event_filter(void* self, void* watched, void* event) {
    return QDial_QBaseEventFilter((QDial*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, bool (*slot)(QDial*, QObject*, QEvent*) ```
void q_dial_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDial_OnEventFilter((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QChildEvent* event ```
void q_dial_child_event(void* self, void* event) {
    QDial_ChildEvent((QDial*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QChildEvent* event ```
void q_dial_qbase_child_event(void* self, void* event) {
    QDial_QBaseChildEvent((QDial*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QChildEvent*) ```
void q_dial_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnChildEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QEvent* event ```
void q_dial_custom_event(void* self, void* event) {
    QDial_CustomEvent((QDial*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QEvent* event ```
void q_dial_qbase_custom_event(void* self, void* event) {
    QDial_QBaseCustomEvent((QDial*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QEvent*) ```
void q_dial_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDial_OnCustomEvent((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QMetaMethod* signal ```
void q_dial_connect_notify(void* self, void* signal) {
    QDial_ConnectNotify((QDial*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QMetaMethod* signal ```
void q_dial_qbase_connect_notify(void* self, void* signal) {
    QDial_QBaseConnectNotify((QDial*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QMetaMethod*) ```
void q_dial_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDial_OnConnectNotify((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QMetaMethod* signal ```
void q_dial_disconnect_notify(void* self, void* signal) {
    QDial_DisconnectNotify((QDial*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QMetaMethod* signal ```
void q_dial_qbase_disconnect_notify(void* self, void* signal) {
    QDial_QBaseDisconnectNotify((QDial*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, QMetaMethod*) ```
void q_dial_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDial_OnDisconnectNotify((QDial*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, enum QAbstractSlider__SliderAction action ```
void q_dial_set_repeat_action(void* self, int64_t action) {
    QDial_SetRepeatAction((QDial*)self, action);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, enum QAbstractSlider__SliderAction action ```
void q_dial_qbase_set_repeat_action(void* self, int64_t action) {
    QDial_QBaseSetRepeatAction((QDial*)self, action);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)(QDial*, enum QAbstractSlider__SliderAction) ```
void q_dial_on_set_repeat_action(void* self, void (*slot)(void*, int64_t)) {
    QDial_OnSetRepeatAction((QDial*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
int64_t q_dial_repeat_action(void* self) {
    return QDial_RepeatAction((QDial*)self);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
int64_t q_dial_qbase_repeat_action(void* self) {
    return QDial_QBaseRepeatAction((QDial*)self);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, int64_t (*slot)() ```
void q_dial_on_repeat_action(void* self, int64_t (*slot)()) {
    QDial_OnRepeatAction((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
void q_dial_update_micro_focus(void* self) {
    QDial_UpdateMicroFocus((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
void q_dial_qbase_update_micro_focus(void* self) {
    QDial_QBaseUpdateMicroFocus((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)() ```
void q_dial_on_update_micro_focus(void* self, void (*slot)()) {
    QDial_OnUpdateMicroFocus((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
void q_dial_create(void* self) {
    QDial_Create((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
void q_dial_qbase_create(void* self) {
    QDial_QBaseCreate((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)() ```
void q_dial_on_create(void* self, void (*slot)()) {
    QDial_OnCreate((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
void q_dial_destroy(void* self) {
    QDial_Destroy((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
void q_dial_qbase_destroy(void* self) {
    QDial_QBaseDestroy((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, void (*slot)() ```
void q_dial_on_destroy(void* self, void (*slot)()) {
    QDial_OnDestroy((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
bool q_dial_focus_next_child(void* self) {
    return QDial_FocusNextChild((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
bool q_dial_qbase_focus_next_child(void* self) {
    return QDial_QBaseFocusNextChild((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, bool (*slot)() ```
void q_dial_on_focus_next_child(void* self, bool (*slot)()) {
    QDial_OnFocusNextChild((QDial*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
bool q_dial_focus_previous_child(void* self) {
    return QDial_FocusPreviousChild((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
bool q_dial_qbase_focus_previous_child(void* self) {
    return QDial_QBaseFocusPreviousChild((QDial*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, bool (*slot)() ```
void q_dial_on_focus_previous_child(void* self, bool (*slot)()) {
    QDial_OnFocusPreviousChild((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
QObject* q_dial_sender(void* self) {
    return QDial_Sender((QDial*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
QObject* q_dial_qbase_sender(void* self) {
    return QDial_QBaseSender((QDial*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, QObject* (*slot)() ```
void q_dial_on_sender(void* self, QObject* (*slot)()) {
    QDial_OnSender((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self ```
int32_t q_dial_sender_signal_index(void* self) {
    return QDial_SenderSignalIndex((QDial*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self ```
int32_t q_dial_qbase_sender_signal_index(void* self) {
    return QDial_QBaseSenderSignalIndex((QDial*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, int32_t (*slot)() ```
void q_dial_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDial_OnSenderSignalIndex((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, const char* signal ```
int32_t q_dial_receivers(void* self, const char* signal) {
    return QDial_Receivers((QDial*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, const char* signal ```
int32_t q_dial_qbase_receivers(void* self, const char* signal) {
    return QDial_QBaseReceivers((QDial*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, int32_t (*slot)(QDial*, const char*) ```
void q_dial_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDial_OnReceivers((QDial*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDial* self, QMetaMethod* signal ```
bool q_dial_is_signal_connected(void* self, void* signal) {
    return QDial_IsSignalConnected((QDial*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDial* self, QMetaMethod* signal ```
bool q_dial_qbase_is_signal_connected(void* self, void* signal) {
    return QDial_QBaseIsSignalConnected((QDial*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDial* self, bool (*slot)(QDial*, QMetaMethod*) ```
void q_dial_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDial_OnIsSignalConnected((QDial*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDial* self ```
void q_dial_delete(void* self) {
    QDial_Delete((QDial*)(self));
}