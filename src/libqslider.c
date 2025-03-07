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
#include "libqslider.hpp"
#include "libqslider.h"

/// https://doc.qt.io/qt-6/qslider.html

/// q_slider_new constructs a new QSlider object.
///
/// ``` QWidget* parent ```
QSlider* q_slider_new(void* parent) {
    return QSlider_new((QWidget*)parent);
}

/// q_slider_new2 constructs a new QSlider object.
///
///
QSlider* q_slider_new2() {
    return QSlider_new2();
}

/// q_slider_new3 constructs a new QSlider object.
///
/// ``` enum Qt__Orientation orientation ```
QSlider* q_slider_new3(int64_t orientation) {
    return QSlider_new3(orientation);
}

/// q_slider_new4 constructs a new QSlider object.
///
/// ``` enum Qt__Orientation orientation, QWidget* parent ```
QSlider* q_slider_new4(int64_t orientation, void* parent) {
    return QSlider_new4(orientation, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSlider* self ```
QMetaObject* q_slider_meta_object(void* self) {
    return QSlider_MetaObject((QSlider*)self);
}

/// ``` QSlider* self, const char* param1 ```
void* q_slider_metacast(void* self, const char* param1) {
    return QSlider_Metacast((QSlider*)self, param1);
}

/// ``` QSlider* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_slider_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSlider_Metacall((QSlider*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, int32_t (*slot)(QSlider*, enum QMetaObject__Call, int, void*) ```
void q_slider_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSlider_OnMetacall((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_slider_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSlider_QBaseMetacall((QSlider*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_slider_tr(const char* s) {
    libqt_string _str = QSlider_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#sizeHint)
///
/// ``` QSlider* self ```
QSize* q_slider_size_hint(void* self) {
    return QSlider_SizeHint((QSlider*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, QSize* (*slot)() ```
void q_slider_on_size_hint(void* self, QSize* (*slot)()) {
    QSlider_OnSizeHint((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self ```
QSize* q_slider_qbase_size_hint(void* self) {
    return QSlider_QBaseSizeHint((QSlider*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#minimumSizeHint)
///
/// ``` QSlider* self ```
QSize* q_slider_minimum_size_hint(void* self) {
    return QSlider_MinimumSizeHint((QSlider*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, QSize* (*slot)() ```
void q_slider_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSlider_OnMinimumSizeHint((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self ```
QSize* q_slider_qbase_minimum_size_hint(void* self) {
    return QSlider_QBaseMinimumSizeHint((QSlider*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#setTickPosition)
///
/// ``` QSlider* self, enum QSlider__TickPosition position ```
void q_slider_set_tick_position(void* self, int64_t position) {
    QSlider_SetTickPosition((QSlider*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#tickPosition)
///
/// ``` QSlider* self ```
int64_t q_slider_tick_position(void* self) {
    return QSlider_TickPosition((QSlider*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#setTickInterval)
///
/// ``` QSlider* self, int ti ```
void q_slider_set_tick_interval(void* self, int ti) {
    QSlider_SetTickInterval((QSlider*)self, ti);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#tickInterval)
///
/// ``` QSlider* self ```
int32_t q_slider_tick_interval(void* self) {
    return QSlider_TickInterval((QSlider*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#event)
///
/// ``` QSlider* self, QEvent* event ```
bool q_slider_event(void* self, void* event) {
    return QSlider_Event((QSlider*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, bool (*slot)(QSlider*, QEvent*) ```
void q_slider_on_event(void* self, bool (*slot)(void*, void*)) {
    QSlider_OnEvent((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self, QEvent* event ```
bool q_slider_qbase_event(void* self, void* event) {
    return QSlider_QBaseEvent((QSlider*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#paintEvent)
///
/// ``` QSlider* self, QPaintEvent* ev ```
void q_slider_paint_event(void* self, void* ev) {
    QSlider_PaintEvent((QSlider*)self, (QPaintEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QPaintEvent*) ```
void q_slider_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnPaintEvent((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self, QPaintEvent* ev ```
void q_slider_qbase_paint_event(void* self, void* ev) {
    QSlider_QBasePaintEvent((QSlider*)self, (QPaintEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#mousePressEvent)
///
/// ``` QSlider* self, QMouseEvent* ev ```
void q_slider_mouse_press_event(void* self, void* ev) {
    QSlider_MousePressEvent((QSlider*)self, (QMouseEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QMouseEvent*) ```
void q_slider_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMousePressEvent((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self, QMouseEvent* ev ```
void q_slider_qbase_mouse_press_event(void* self, void* ev) {
    QSlider_QBaseMousePressEvent((QSlider*)self, (QMouseEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#mouseReleaseEvent)
///
/// ``` QSlider* self, QMouseEvent* ev ```
void q_slider_mouse_release_event(void* self, void* ev) {
    QSlider_MouseReleaseEvent((QSlider*)self, (QMouseEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QMouseEvent*) ```
void q_slider_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMouseReleaseEvent((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self, QMouseEvent* ev ```
void q_slider_qbase_mouse_release_event(void* self, void* ev) {
    QSlider_QBaseMouseReleaseEvent((QSlider*)self, (QMouseEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#mouseMoveEvent)
///
/// ``` QSlider* self, QMouseEvent* ev ```
void q_slider_mouse_move_event(void* self, void* ev) {
    QSlider_MouseMoveEvent((QSlider*)self, (QMouseEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QMouseEvent*) ```
void q_slider_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMouseMoveEvent((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self, QMouseEvent* ev ```
void q_slider_qbase_mouse_move_event(void* self, void* ev) {
    QSlider_QBaseMouseMoveEvent((QSlider*)self, (QMouseEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qslider.html#initStyleOption)
///
/// ``` QSlider* self, QStyleOptionSlider* option ```
void q_slider_init_style_option(void* self, void* option) {
    QSlider_InitStyleOption((QSlider*)self, (QStyleOptionSlider*)option);
}

/// Allows for overriding the related default method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QStyleOptionSlider*) ```
void q_slider_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QSlider_OnInitStyleOption((QSlider*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSlider* self, QStyleOptionSlider* option ```
void q_slider_qbase_init_style_option(void* self, void* option) {
    QSlider_QBaseInitStyleOption((QSlider*)self, (QStyleOptionSlider*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_slider_tr2(const char* s, const char* c) {
    libqt_string _str = QSlider_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_slider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSlider_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#orientation)
///
/// ``` QSlider* self ```
int64_t q_slider_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMinimum)
///
/// ``` QSlider* self, int minimum ```
void q_slider_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#minimum)
///
/// ``` QSlider* self ```
int32_t q_slider_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMaximum)
///
/// ``` QSlider* self, int maximum ```
void q_slider_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#maximum)
///
/// ``` QSlider* self ```
int32_t q_slider_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSingleStep)
///
/// ``` QSlider* self, int singleStep ```
void q_slider_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#singleStep)
///
/// ``` QSlider* self ```
int32_t q_slider_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setPageStep)
///
/// ``` QSlider* self, int pageStep ```
void q_slider_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#pageStep)
///
/// ``` QSlider* self ```
int32_t q_slider_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setTracking)
///
/// ``` QSlider* self, bool enable ```
void q_slider_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#hasTracking)
///
/// ``` QSlider* self ```
bool q_slider_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderDown)
///
/// ``` QSlider* self, bool sliderDown ```
void q_slider_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#isSliderDown)
///
/// ``` QSlider* self ```
bool q_slider_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderPosition)
///
/// ``` QSlider* self, int sliderPosition ```
void q_slider_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPosition)
///
/// ``` QSlider* self ```
int32_t q_slider_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedAppearance)
///
/// ``` QSlider* self, bool invertedAppearance ```
void q_slider_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedAppearance)
///
/// ``` QSlider* self ```
bool q_slider_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedControls)
///
/// ``` QSlider* self, bool invertedControls ```
void q_slider_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedControls)
///
/// ``` QSlider* self ```
bool q_slider_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#value)
///
/// ``` QSlider* self ```
int32_t q_slider_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#triggerAction)
///
/// ``` QSlider* self, enum QAbstractSlider__SliderAction action ```
void q_slider_trigger_action(void* self, int64_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setValue)
///
/// ``` QSlider* self, int value ```
void q_slider_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setOrientation)
///
/// ``` QSlider* self, enum Qt__Orientation orientation ```
void q_slider_set_orientation(void* self, int64_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRange)
///
/// ``` QSlider* self, int min, int max ```
void q_slider_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
///
/// ``` QSlider* self, int value ```
void q_slider_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

/// Inherited from QAbstractSlider
///
/// ``` QSlider* self, void (*slot)(QAbstractSlider*, int) ```
void q_slider_on_value_changed(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
///
/// ``` QSlider* self ```
void q_slider_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// ``` QSlider* self, void (*slot)(QAbstractSlider*) ```
void q_slider_on_slider_pressed(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
///
/// ``` QSlider* self, int position ```
void q_slider_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

/// Inherited from QAbstractSlider
///
/// ``` QSlider* self, void (*slot)(QAbstractSlider*, int) ```
void q_slider_on_slider_moved(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
///
/// ``` QSlider* self ```
void q_slider_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// ``` QSlider* self, void (*slot)(QAbstractSlider*) ```
void q_slider_on_slider_released(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
///
/// ``` QSlider* self, int min, int max ```
void q_slider_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

/// Inherited from QAbstractSlider
///
/// ``` QSlider* self, void (*slot)(QAbstractSlider*, int, int) ```
void q_slider_on_range_changed(void* self, void (*slot)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
///
/// ``` QSlider* self, int action ```
void q_slider_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// ``` QSlider* self, void (*slot)(QAbstractSlider*, int) ```
void q_slider_on_action_triggered(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QSlider* self ```
uintptr_t q_slider_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QSlider* self ```
void q_slider_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QSlider* self ```
uintptr_t q_slider_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QSlider* self ```
uintptr_t q_slider_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QSlider* self ```
QStyle* q_slider_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QSlider* self, QStyle* style ```
void q_slider_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QSlider* self ```
bool q_slider_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QSlider* self ```
bool q_slider_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QSlider* self ```
bool q_slider_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QSlider* self ```
int64_t q_slider_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QSlider* self, enum Qt__WindowModality windowModality ```
void q_slider_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QSlider* self ```
bool q_slider_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QSlider* self, QWidget* param1 ```
bool q_slider_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QSlider* self, bool enabled ```
void q_slider_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QSlider* self, bool disabled ```
void q_slider_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QSlider* self, bool windowModified ```
void q_slider_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QSlider* self ```
QRect* q_slider_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QSlider* self ```
QRect* q_slider_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QSlider* self ```
QRect* q_slider_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QSlider* self ```
int32_t q_slider_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QSlider* self ```
int32_t q_slider_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QSlider* self ```
QPoint* q_slider_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QSlider* self ```
QSize* q_slider_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QSlider* self ```
QSize* q_slider_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QSlider* self ```
int32_t q_slider_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QSlider* self ```
int32_t q_slider_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QSlider* self ```
QRect* q_slider_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QSlider* self ```
QRect* q_slider_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QSlider* self ```
QRegion* q_slider_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QSlider* self ```
QSize* q_slider_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QSlider* self ```
QSize* q_slider_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QSlider* self ```
int32_t q_slider_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QSlider* self ```
int32_t q_slider_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QSlider* self ```
int32_t q_slider_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QSlider* self ```
int32_t q_slider_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSlider* self, QSize* minimumSize ```
void q_slider_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QSlider* self, int minw, int minh ```
void q_slider_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSlider* self, QSize* maximumSize ```
void q_slider_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QSlider* self, int maxw, int maxh ```
void q_slider_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QSlider* self, int minw ```
void q_slider_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QSlider* self, int minh ```
void q_slider_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QSlider* self, int maxw ```
void q_slider_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QSlider* self, int maxh ```
void q_slider_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QSlider* self ```
QSize* q_slider_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSlider* self, QSize* sizeIncrement ```
void q_slider_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QSlider* self, int w, int h ```
void q_slider_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QSlider* self ```
QSize* q_slider_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSlider* self, QSize* baseSize ```
void q_slider_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QSlider* self, int basew, int baseh ```
void q_slider_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSlider* self, QSize* fixedSize ```
void q_slider_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QSlider* self, int w, int h ```
void q_slider_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QSlider* self, int w ```
void q_slider_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QSlider* self, int h ```
void q_slider_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSlider* self, QPointF* param1 ```
QPointF* q_slider_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QSlider* self, QPoint* param1 ```
QPoint* q_slider_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSlider* self, QPointF* param1 ```
QPointF* q_slider_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QSlider* self, QPoint* param1 ```
QPoint* q_slider_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSlider* self, QPointF* param1 ```
QPointF* q_slider_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QSlider* self, QPoint* param1 ```
QPoint* q_slider_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSlider* self, QPointF* param1 ```
QPointF* q_slider_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QSlider* self, QPoint* param1 ```
QPoint* q_slider_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSlider* self, QWidget* param1, QPointF* param2 ```
QPointF* q_slider_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QSlider* self, QWidget* param1, QPoint* param2 ```
QPoint* q_slider_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSlider* self, QWidget* param1, QPointF* param2 ```
QPointF* q_slider_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QSlider* self, QWidget* param1, QPoint* param2 ```
QPoint* q_slider_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QSlider* self ```
QWidget* q_slider_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QSlider* self ```
QWidget* q_slider_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QSlider* self ```
QWidget* q_slider_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QSlider* self ```
QPalette* q_slider_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QSlider* self, QPalette* palette ```
void q_slider_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QSlider* self, enum QPalette__ColorRole backgroundRole ```
void q_slider_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QSlider* self ```
int64_t q_slider_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QSlider* self, enum QPalette__ColorRole foregroundRole ```
void q_slider_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QSlider* self ```
int64_t q_slider_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QSlider* self ```
QFont* q_slider_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QSlider* self, QFont* font ```
void q_slider_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QSlider* self ```
QFontMetrics* q_slider_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QSlider* self ```
QFontInfo* q_slider_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QSlider* self ```
QCursor* q_slider_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QSlider* self, QCursor* cursor ```
void q_slider_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QSlider* self ```
void q_slider_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QSlider* self, bool enable ```
void q_slider_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QSlider* self ```
bool q_slider_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QSlider* self ```
bool q_slider_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QSlider* self, bool enable ```
void q_slider_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QSlider* self ```
bool q_slider_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSlider* self, QBitmap* mask ```
void q_slider_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QSlider* self, QRegion* mask ```
void q_slider_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QSlider* self ```
QRegion* q_slider_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QSlider* self ```
void q_slider_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPaintDevice* target ```
void q_slider_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPainter* painter ```
void q_slider_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSlider* self ```
QPixmap* q_slider_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QSlider* self ```
QGraphicsEffect* q_slider_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QSlider* self, QGraphicsEffect* effect ```
void q_slider_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSlider* self, enum Qt__GestureType typeVal ```
void q_slider_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QSlider* self, enum Qt__GestureType typeVal ```
void q_slider_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QSlider* self, const char* windowTitle ```
void q_slider_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QSlider* self, const char* styleSheet ```
void q_slider_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QSlider* self ```
const char* q_slider_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QSlider* self ```
const char* q_slider_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QSlider* self, QIcon* icon ```
void q_slider_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QSlider* self ```
QIcon* q_slider_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QSlider* self, const char* windowIconText ```
void q_slider_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QSlider* self ```
const char* q_slider_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QSlider* self, const char* windowRole ```
void q_slider_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QSlider* self ```
const char* q_slider_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QSlider* self, const char* filePath ```
void q_slider_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QSlider* self ```
const char* q_slider_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QSlider* self, double level ```
void q_slider_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QSlider* self ```
double q_slider_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QSlider* self ```
bool q_slider_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QSlider* self, const char* toolTip ```
void q_slider_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QSlider* self ```
const char* q_slider_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QSlider* self, int msec ```
void q_slider_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QSlider* self ```
int32_t q_slider_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QSlider* self, const char* statusTip ```
void q_slider_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QSlider* self ```
const char* q_slider_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QSlider* self, const char* whatsThis ```
void q_slider_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QSlider* self ```
const char* q_slider_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QSlider* self ```
const char* q_slider_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QSlider* self, const char* name ```
void q_slider_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QSlider* self ```
const char* q_slider_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QSlider* self, const char* description ```
void q_slider_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QSlider* self, enum Qt__LayoutDirection direction ```
void q_slider_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QSlider* self ```
int64_t q_slider_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QSlider* self ```
void q_slider_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QSlider* self, QLocale* locale ```
void q_slider_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QSlider* self ```
QLocale* q_slider_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QSlider* self ```
void q_slider_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QSlider* self ```
bool q_slider_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QSlider* self ```
bool q_slider_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSlider* self ```
void q_slider_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QSlider* self ```
bool q_slider_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QSlider* self ```
void q_slider_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QSlider* self ```
void q_slider_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QSlider* self, enum Qt__FocusReason reason ```
void q_slider_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QSlider* self ```
int64_t q_slider_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QSlider* self, enum Qt__FocusPolicy policy ```
void q_slider_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QSlider* self ```
bool q_slider_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_slider_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QSlider* self, QWidget* focusProxy ```
void q_slider_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QSlider* self ```
QWidget* q_slider_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QSlider* self ```
int64_t q_slider_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QSlider* self, enum Qt__ContextMenuPolicy policy ```
void q_slider_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSlider* self ```
void q_slider_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QSlider* self, QCursor* param1 ```
void q_slider_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QSlider* self ```
void q_slider_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QSlider* self ```
void q_slider_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QSlider* self ```
void q_slider_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSlider* self, QKeySequence* key ```
int32_t q_slider_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QSlider* self, int id ```
void q_slider_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSlider* self, int id ```
void q_slider_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSlider* self, int id ```
void q_slider_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_slider_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_slider_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QSlider* self ```
bool q_slider_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QSlider* self, bool enable ```
void q_slider_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QSlider* self ```
QGraphicsProxyWidget* q_slider_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSlider* self ```
void q_slider_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSlider* self ```
void q_slider_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSlider* self, int x, int y, int w, int h ```
void q_slider_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSlider* self, QRect* param1 ```
void q_slider_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QSlider* self, QRegion* param1 ```
void q_slider_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSlider* self, int x, int y, int w, int h ```
void q_slider_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSlider* self, QRect* param1 ```
void q_slider_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QSlider* self, QRegion* param1 ```
void q_slider_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QSlider* self, bool hidden ```
void q_slider_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QSlider* self ```
void q_slider_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QSlider* self ```
void q_slider_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QSlider* self ```
void q_slider_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QSlider* self ```
void q_slider_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QSlider* self ```
void q_slider_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QSlider* self ```
void q_slider_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QSlider* self ```
bool q_slider_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QSlider* self ```
void q_slider_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QSlider* self ```
void q_slider_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QSlider* self, QWidget* param1 ```
void q_slider_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSlider* self, int x, int y ```
void q_slider_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QSlider* self, QPoint* param1 ```
void q_slider_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSlider* self, int w, int h ```
void q_slider_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QSlider* self, QSize* param1 ```
void q_slider_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSlider* self, int x, int y, int w, int h ```
void q_slider_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QSlider* self, QRect* geometry ```
void q_slider_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QSlider* self ```
char* q_slider_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QSlider* self, const char* geometry ```
bool q_slider_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QSlider* self ```
void q_slider_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QSlider* self ```
bool q_slider_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QSlider* self, QWidget* param1 ```
bool q_slider_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QSlider* self ```
bool q_slider_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QSlider* self ```
bool q_slider_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QSlider* self ```
bool q_slider_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QSlider* self ```
bool q_slider_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QSlider* self ```
int64_t q_slider_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QSlider* self, int state ```
void q_slider_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QSlider* self, int state ```
void q_slider_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QSlider* self ```
QSizePolicy* q_slider_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSlider* self, QSizePolicy* sizePolicy ```
void q_slider_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QSlider* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_slider_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QSlider* self ```
QRegion* q_slider_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSlider* self, int left, int top, int right, int bottom ```
void q_slider_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QSlider* self, QMargins* margins ```
void q_slider_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QSlider* self ```
QMargins* q_slider_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QSlider* self ```
QRect* q_slider_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QSlider* self ```
QLayout* q_slider_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QSlider* self, QLayout* layout ```
void q_slider_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QSlider* self ```
void q_slider_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSlider* self, QWidget* parent ```
void q_slider_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QSlider* self, QWidget* parent, int f ```
void q_slider_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSlider* self, int dx, int dy ```
void q_slider_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QSlider* self, int dx, int dy, QRect* param3 ```
void q_slider_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QSlider* self ```
QWidget* q_slider_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QSlider* self ```
QWidget* q_slider_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QSlider* self ```
QWidget* q_slider_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QSlider* self ```
bool q_slider_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QSlider* self, bool on ```
void q_slider_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSlider* self, QAction* action ```
void q_slider_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QSlider* self, QAction* actions[] ```
void q_slider_add_actions(void* self, void* actions[]) {
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
/// ``` QSlider* self, QAction* before, QAction* actions[] ```
void q_slider_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QSlider* self, QAction* before, QAction* action ```
void q_slider_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QSlider* self, QAction* action ```
void q_slider_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QSlider* self ```
libqt_list /* of QAction* */ q_slider_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSlider* self, const char* text ```
QAction* q_slider_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSlider* self, QIcon* icon, const char* text ```
QAction* q_slider_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSlider* self, const char* text, QKeySequence* shortcut ```
QAction* q_slider_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QSlider* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_slider_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QSlider* self ```
QWidget* q_slider_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QSlider* self, int typeVal ```
void q_slider_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QSlider* self ```
int64_t q_slider_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSlider* self, enum Qt__WindowType param1 ```
void q_slider_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QSlider* self, int typeVal ```
void q_slider_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QSlider* self ```
int64_t q_slider_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_slider_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSlider* self, int x, int y ```
QWidget* q_slider_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QSlider* self, QPoint* p ```
QWidget* q_slider_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSlider* self, enum Qt__WidgetAttribute param1 ```
void q_slider_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QSlider* self, enum Qt__WidgetAttribute param1 ```
bool q_slider_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QSlider* self ```
void q_slider_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QSlider* self, QWidget* child ```
bool q_slider_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QSlider* self ```
bool q_slider_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QSlider* self, bool enabled ```
void q_slider_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QSlider* self ```
QBackingStore* q_slider_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QSlider* self ```
QWindow* q_slider_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QSlider* self ```
QScreen* q_slider_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QSlider* self, QScreen* screen ```
void q_slider_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_slider_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QSlider* self, const char* title ```
void q_slider_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QSlider* self, void (*slot)(QWidget*, const char*) ```
void q_slider_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QSlider* self, QIcon* icon ```
void q_slider_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QSlider* self, void (*slot)(QWidget*, QIcon*) ```
void q_slider_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QSlider* self, const char* iconText ```
void q_slider_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QSlider* self, void (*slot)(QWidget*, const char*) ```
void q_slider_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QSlider* self, QPoint* pos ```
void q_slider_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QSlider* self, void (*slot)(QWidget*, QPoint*) ```
void q_slider_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QSlider* self ```
int64_t q_slider_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QSlider* self, int hints ```
void q_slider_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPaintDevice* target, QPoint* targetOffset ```
void q_slider_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_slider_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_slider_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPainter* painter, QPoint* targetOffset ```
void q_slider_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_slider_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QSlider* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_slider_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QSlider* self, QRect* rectangle ```
QPixmap* q_slider_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QSlider* self, enum Qt__GestureType typeVal, int flags ```
void q_slider_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QSlider* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_slider_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QSlider* self, int id, bool enable ```
void q_slider_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QSlider* self, int id, bool enable ```
void q_slider_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QSlider* self, enum Qt__WindowType param1, bool on ```
void q_slider_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QSlider* self, enum Qt__WidgetAttribute param1, bool on ```
void q_slider_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_slider_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_slider_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSlider* self ```
const char* q_slider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSlider* self, const char* name ```
void q_slider_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSlider* self ```
bool q_slider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSlider* self ```
bool q_slider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSlider* self ```
bool q_slider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSlider* self ```
bool q_slider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSlider* self, bool b ```
bool q_slider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSlider* self ```
QThread* q_slider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSlider* self, QThread* thread ```
void q_slider_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSlider* self, int interval ```
int32_t q_slider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSlider* self, int id ```
void q_slider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSlider* self ```
libqt_list /* of QObject* */ q_slider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSlider* self, QObject* filterObj ```
void q_slider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSlider* self, QObject* obj ```
void q_slider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_slider_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSlider* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_slider_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_slider_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_slider_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSlider* self ```
void q_slider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSlider* self ```
void q_slider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSlider* self, const char* name, QVariant* value ```
bool q_slider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSlider* self, const char* name ```
QVariant* q_slider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSlider* self ```
const char** q_slider_dynamic_property_names(void* self) {
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
/// ``` QSlider* self ```
QBindingStorage* q_slider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSlider* self ```
QBindingStorage* q_slider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSlider* self ```
void q_slider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSlider* self, void (*slot)(QObject*) ```
void q_slider_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSlider* self ```
QObject* q_slider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSlider* self, const char* classname ```
bool q_slider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSlider* self ```
void q_slider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSlider* self, int interval, enum Qt__TimerType timerType ```
int32_t q_slider_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_slider_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSlider* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_slider_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSlider* self, QObject* param1 ```
void q_slider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSlider* self, void (*slot)(QObject*, QObject*) ```
void q_slider_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QSlider* self ```
bool q_slider_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QSlider* self ```
int32_t q_slider_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QSlider* self ```
int32_t q_slider_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QSlider* self ```
int32_t q_slider_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QSlider* self ```
int32_t q_slider_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QSlider* self ```
int32_t q_slider_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QSlider* self ```
int32_t q_slider_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QSlider* self ```
double q_slider_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QSlider* self ```
double q_slider_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QSlider* self ```
int32_t q_slider_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QSlider* self ```
int32_t q_slider_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_slider_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, enum QAbstractSlider__SliderChange change ```
void q_slider_slider_change(void* self, int64_t change) {
    QSlider_SliderChange((QSlider*)self, change);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, enum QAbstractSlider__SliderChange change ```
void q_slider_qbase_slider_change(void* self, int64_t change) {
    QSlider_QBaseSliderChange((QSlider*)self, change);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, enum QAbstractSlider__SliderChange) ```
void q_slider_on_slider_change(void* self, void (*slot)(void*, int64_t)) {
    QSlider_OnSliderChange((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QKeyEvent* ev ```
void q_slider_key_press_event(void* self, void* ev) {
    QSlider_KeyPressEvent((QSlider*)self, (QKeyEvent*)ev);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QKeyEvent* ev ```
void q_slider_qbase_key_press_event(void* self, void* ev) {
    QSlider_QBaseKeyPressEvent((QSlider*)self, (QKeyEvent*)ev);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QKeyEvent*) ```
void q_slider_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnKeyPressEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QTimerEvent* param1 ```
void q_slider_timer_event(void* self, void* param1) {
    QSlider_TimerEvent((QSlider*)self, (QTimerEvent*)param1);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QTimerEvent* param1 ```
void q_slider_qbase_timer_event(void* self, void* param1) {
    QSlider_QBaseTimerEvent((QSlider*)self, (QTimerEvent*)param1);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QTimerEvent*) ```
void q_slider_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnTimerEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QWheelEvent* e ```
void q_slider_wheel_event(void* self, void* e) {
    QSlider_WheelEvent((QSlider*)self, (QWheelEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QWheelEvent* e ```
void q_slider_qbase_wheel_event(void* self, void* e) {
    QSlider_QBaseWheelEvent((QSlider*)self, (QWheelEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QWheelEvent*) ```
void q_slider_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnWheelEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QEvent* e ```
void q_slider_change_event(void* self, void* e) {
    QSlider_ChangeEvent((QSlider*)self, (QEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QEvent* e ```
void q_slider_qbase_change_event(void* self, void* e) {
    QSlider_QBaseChangeEvent((QSlider*)self, (QEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QEvent*) ```
void q_slider_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnChangeEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
int32_t q_slider_dev_type(void* self) {
    return QSlider_DevType((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
int32_t q_slider_qbase_dev_type(void* self) {
    return QSlider_QBaseDevType((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, int32_t (*slot)() ```
void q_slider_on_dev_type(void* self, int32_t (*slot)()) {
    QSlider_OnDevType((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, bool visible ```
void q_slider_set_visible(void* self, bool visible) {
    QSlider_SetVisible((QSlider*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, bool visible ```
void q_slider_qbase_set_visible(void* self, bool visible) {
    QSlider_QBaseSetVisible((QSlider*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, bool) ```
void q_slider_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSlider_OnSetVisible((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, int param1 ```
int32_t q_slider_height_for_width(void* self, int param1) {
    return QSlider_HeightForWidth((QSlider*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, int param1 ```
int32_t q_slider_qbase_height_for_width(void* self, int param1) {
    return QSlider_QBaseHeightForWidth((QSlider*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, int32_t (*slot)(QSlider*, int) ```
void q_slider_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSlider_OnHeightForWidth((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
bool q_slider_has_height_for_width(void* self) {
    return QSlider_HasHeightForWidth((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
bool q_slider_qbase_has_height_for_width(void* self) {
    return QSlider_QBaseHasHeightForWidth((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, bool (*slot)() ```
void q_slider_on_has_height_for_width(void* self, bool (*slot)()) {
    QSlider_OnHasHeightForWidth((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
QPaintEngine* q_slider_paint_engine(void* self) {
    return QSlider_PaintEngine((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
QPaintEngine* q_slider_qbase_paint_engine(void* self) {
    return QSlider_QBasePaintEngine((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, QPaintEngine* (*slot)() ```
void q_slider_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSlider_OnPaintEngine((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QMouseEvent* event ```
void q_slider_mouse_double_click_event(void* self, void* event) {
    QSlider_MouseDoubleClickEvent((QSlider*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QMouseEvent* event ```
void q_slider_qbase_mouse_double_click_event(void* self, void* event) {
    QSlider_QBaseMouseDoubleClickEvent((QSlider*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QMouseEvent*) ```
void q_slider_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMouseDoubleClickEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QKeyEvent* event ```
void q_slider_key_release_event(void* self, void* event) {
    QSlider_KeyReleaseEvent((QSlider*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QKeyEvent* event ```
void q_slider_qbase_key_release_event(void* self, void* event) {
    QSlider_QBaseKeyReleaseEvent((QSlider*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QKeyEvent*) ```
void q_slider_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnKeyReleaseEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QFocusEvent* event ```
void q_slider_focus_in_event(void* self, void* event) {
    QSlider_FocusInEvent((QSlider*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QFocusEvent* event ```
void q_slider_qbase_focus_in_event(void* self, void* event) {
    QSlider_QBaseFocusInEvent((QSlider*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QFocusEvent*) ```
void q_slider_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnFocusInEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QFocusEvent* event ```
void q_slider_focus_out_event(void* self, void* event) {
    QSlider_FocusOutEvent((QSlider*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QFocusEvent* event ```
void q_slider_qbase_focus_out_event(void* self, void* event) {
    QSlider_QBaseFocusOutEvent((QSlider*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QFocusEvent*) ```
void q_slider_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnFocusOutEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QEnterEvent* event ```
void q_slider_enter_event(void* self, void* event) {
    QSlider_EnterEvent((QSlider*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QEnterEvent* event ```
void q_slider_qbase_enter_event(void* self, void* event) {
    QSlider_QBaseEnterEvent((QSlider*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QEnterEvent*) ```
void q_slider_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnEnterEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QEvent* event ```
void q_slider_leave_event(void* self, void* event) {
    QSlider_LeaveEvent((QSlider*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QEvent* event ```
void q_slider_qbase_leave_event(void* self, void* event) {
    QSlider_QBaseLeaveEvent((QSlider*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QEvent*) ```
void q_slider_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnLeaveEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QMoveEvent* event ```
void q_slider_move_event(void* self, void* event) {
    QSlider_MoveEvent((QSlider*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QMoveEvent* event ```
void q_slider_qbase_move_event(void* self, void* event) {
    QSlider_QBaseMoveEvent((QSlider*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QMoveEvent*) ```
void q_slider_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMoveEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QResizeEvent* event ```
void q_slider_resize_event(void* self, void* event) {
    QSlider_ResizeEvent((QSlider*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QResizeEvent* event ```
void q_slider_qbase_resize_event(void* self, void* event) {
    QSlider_QBaseResizeEvent((QSlider*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QResizeEvent*) ```
void q_slider_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnResizeEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QCloseEvent* event ```
void q_slider_close_event(void* self, void* event) {
    QSlider_CloseEvent((QSlider*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QCloseEvent* event ```
void q_slider_qbase_close_event(void* self, void* event) {
    QSlider_QBaseCloseEvent((QSlider*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QCloseEvent*) ```
void q_slider_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnCloseEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QContextMenuEvent* event ```
void q_slider_context_menu_event(void* self, void* event) {
    QSlider_ContextMenuEvent((QSlider*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QContextMenuEvent* event ```
void q_slider_qbase_context_menu_event(void* self, void* event) {
    QSlider_QBaseContextMenuEvent((QSlider*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QContextMenuEvent*) ```
void q_slider_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnContextMenuEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QTabletEvent* event ```
void q_slider_tablet_event(void* self, void* event) {
    QSlider_TabletEvent((QSlider*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QTabletEvent* event ```
void q_slider_qbase_tablet_event(void* self, void* event) {
    QSlider_QBaseTabletEvent((QSlider*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QTabletEvent*) ```
void q_slider_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnTabletEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QActionEvent* event ```
void q_slider_action_event(void* self, void* event) {
    QSlider_ActionEvent((QSlider*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QActionEvent* event ```
void q_slider_qbase_action_event(void* self, void* event) {
    QSlider_QBaseActionEvent((QSlider*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QActionEvent*) ```
void q_slider_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnActionEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QDragEnterEvent* event ```
void q_slider_drag_enter_event(void* self, void* event) {
    QSlider_DragEnterEvent((QSlider*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QDragEnterEvent* event ```
void q_slider_qbase_drag_enter_event(void* self, void* event) {
    QSlider_QBaseDragEnterEvent((QSlider*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QDragEnterEvent*) ```
void q_slider_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDragEnterEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QDragMoveEvent* event ```
void q_slider_drag_move_event(void* self, void* event) {
    QSlider_DragMoveEvent((QSlider*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QDragMoveEvent* event ```
void q_slider_qbase_drag_move_event(void* self, void* event) {
    QSlider_QBaseDragMoveEvent((QSlider*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QDragMoveEvent*) ```
void q_slider_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDragMoveEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QDragLeaveEvent* event ```
void q_slider_drag_leave_event(void* self, void* event) {
    QSlider_DragLeaveEvent((QSlider*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QDragLeaveEvent* event ```
void q_slider_qbase_drag_leave_event(void* self, void* event) {
    QSlider_QBaseDragLeaveEvent((QSlider*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QDragLeaveEvent*) ```
void q_slider_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDragLeaveEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QDropEvent* event ```
void q_slider_drop_event(void* self, void* event) {
    QSlider_DropEvent((QSlider*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QDropEvent* event ```
void q_slider_qbase_drop_event(void* self, void* event) {
    QSlider_QBaseDropEvent((QSlider*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QDropEvent*) ```
void q_slider_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDropEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QShowEvent* event ```
void q_slider_show_event(void* self, void* event) {
    QSlider_ShowEvent((QSlider*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QShowEvent* event ```
void q_slider_qbase_show_event(void* self, void* event) {
    QSlider_QBaseShowEvent((QSlider*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QShowEvent*) ```
void q_slider_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnShowEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QHideEvent* event ```
void q_slider_hide_event(void* self, void* event) {
    QSlider_HideEvent((QSlider*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QHideEvent* event ```
void q_slider_qbase_hide_event(void* self, void* event) {
    QSlider_QBaseHideEvent((QSlider*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QHideEvent*) ```
void q_slider_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnHideEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, const char* eventType, void* message, intptr_t* result ```
bool q_slider_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSlider_NativeEvent((QSlider*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, const char* eventType, void* message, intptr_t* result ```
bool q_slider_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSlider_QBaseNativeEvent((QSlider*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, bool (*slot)(QSlider*, const char*, void*, intptr_t*) ```
void q_slider_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSlider_OnNativeEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_slider_metric(void* self, int64_t param1) {
    return QSlider_Metric((QSlider*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_slider_qbase_metric(void* self, int64_t param1) {
    return QSlider_QBaseMetric((QSlider*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, int32_t (*slot)(QSlider*, enum QPaintDevice__PaintDeviceMetric) ```
void q_slider_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSlider_OnMetric((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QPainter* painter ```
void q_slider_init_painter(void* self, void* painter) {
    QSlider_InitPainter((QSlider*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QPainter* painter ```
void q_slider_qbase_init_painter(void* self, void* painter) {
    QSlider_QBaseInitPainter((QSlider*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QPainter*) ```
void q_slider_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSlider_OnInitPainter((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QPoint* offset ```
QPaintDevice* q_slider_redirected(void* self, void* offset) {
    return QSlider_Redirected((QSlider*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QPoint* offset ```
QPaintDevice* q_slider_qbase_redirected(void* self, void* offset) {
    return QSlider_QBaseRedirected((QSlider*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, QPaintDevice* (*slot)(QSlider*, QPoint*) ```
void q_slider_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSlider_OnRedirected((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
QPainter* q_slider_shared_painter(void* self) {
    return QSlider_SharedPainter((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
QPainter* q_slider_qbase_shared_painter(void* self) {
    return QSlider_QBaseSharedPainter((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, QPainter* (*slot)() ```
void q_slider_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSlider_OnSharedPainter((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QInputMethodEvent* param1 ```
void q_slider_input_method_event(void* self, void* param1) {
    QSlider_InputMethodEvent((QSlider*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QInputMethodEvent* param1 ```
void q_slider_qbase_input_method_event(void* self, void* param1) {
    QSlider_QBaseInputMethodEvent((QSlider*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QInputMethodEvent*) ```
void q_slider_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnInputMethodEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_slider_input_method_query(void* self, int64_t param1) {
    return QSlider_InputMethodQuery((QSlider*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_slider_qbase_input_method_query(void* self, int64_t param1) {
    return QSlider_QBaseInputMethodQuery((QSlider*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, QVariant* (*slot)(QSlider*, enum Qt__InputMethodQuery) ```
void q_slider_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSlider_OnInputMethodQuery((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, bool next ```
bool q_slider_focus_next_prev_child(void* self, bool next) {
    return QSlider_FocusNextPrevChild((QSlider*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, bool next ```
bool q_slider_qbase_focus_next_prev_child(void* self, bool next) {
    return QSlider_QBaseFocusNextPrevChild((QSlider*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, bool (*slot)(QSlider*, bool) ```
void q_slider_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSlider_OnFocusNextPrevChild((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QObject* watched, QEvent* event ```
bool q_slider_event_filter(void* self, void* watched, void* event) {
    return QSlider_EventFilter((QSlider*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QObject* watched, QEvent* event ```
bool q_slider_qbase_event_filter(void* self, void* watched, void* event) {
    return QSlider_QBaseEventFilter((QSlider*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, bool (*slot)(QSlider*, QObject*, QEvent*) ```
void q_slider_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSlider_OnEventFilter((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QChildEvent* event ```
void q_slider_child_event(void* self, void* event) {
    QSlider_ChildEvent((QSlider*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QChildEvent* event ```
void q_slider_qbase_child_event(void* self, void* event) {
    QSlider_QBaseChildEvent((QSlider*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QChildEvent*) ```
void q_slider_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnChildEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QEvent* event ```
void q_slider_custom_event(void* self, void* event) {
    QSlider_CustomEvent((QSlider*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QEvent* event ```
void q_slider_qbase_custom_event(void* self, void* event) {
    QSlider_QBaseCustomEvent((QSlider*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QEvent*) ```
void q_slider_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnCustomEvent((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QMetaMethod* signal ```
void q_slider_connect_notify(void* self, void* signal) {
    QSlider_ConnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QMetaMethod* signal ```
void q_slider_qbase_connect_notify(void* self, void* signal) {
    QSlider_QBaseConnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QMetaMethod*) ```
void q_slider_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSlider_OnConnectNotify((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QMetaMethod* signal ```
void q_slider_disconnect_notify(void* self, void* signal) {
    QSlider_DisconnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QMetaMethod* signal ```
void q_slider_qbase_disconnect_notify(void* self, void* signal) {
    QSlider_QBaseDisconnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, QMetaMethod*) ```
void q_slider_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDisconnectNotify((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, enum QAbstractSlider__SliderAction action ```
void q_slider_set_repeat_action(void* self, int64_t action) {
    QSlider_SetRepeatAction((QSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, enum QAbstractSlider__SliderAction action ```
void q_slider_qbase_set_repeat_action(void* self, int64_t action) {
    QSlider_QBaseSetRepeatAction((QSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)(QSlider*, enum QAbstractSlider__SliderAction) ```
void q_slider_on_set_repeat_action(void* self, void (*slot)(void*, int64_t)) {
    QSlider_OnSetRepeatAction((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
int64_t q_slider_repeat_action(void* self) {
    return QSlider_RepeatAction((QSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
int64_t q_slider_qbase_repeat_action(void* self) {
    return QSlider_QBaseRepeatAction((QSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, int64_t (*slot)() ```
void q_slider_on_repeat_action(void* self, int64_t (*slot)()) {
    QSlider_OnRepeatAction((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
void q_slider_update_micro_focus(void* self) {
    QSlider_UpdateMicroFocus((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
void q_slider_qbase_update_micro_focus(void* self) {
    QSlider_QBaseUpdateMicroFocus((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)() ```
void q_slider_on_update_micro_focus(void* self, void (*slot)()) {
    QSlider_OnUpdateMicroFocus((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
void q_slider_create(void* self) {
    QSlider_Create((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
void q_slider_qbase_create(void* self) {
    QSlider_QBaseCreate((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)() ```
void q_slider_on_create(void* self, void (*slot)()) {
    QSlider_OnCreate((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
void q_slider_destroy(void* self) {
    QSlider_Destroy((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
void q_slider_qbase_destroy(void* self) {
    QSlider_QBaseDestroy((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, void (*slot)() ```
void q_slider_on_destroy(void* self, void (*slot)()) {
    QSlider_OnDestroy((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
bool q_slider_focus_next_child(void* self) {
    return QSlider_FocusNextChild((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
bool q_slider_qbase_focus_next_child(void* self) {
    return QSlider_QBaseFocusNextChild((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, bool (*slot)() ```
void q_slider_on_focus_next_child(void* self, bool (*slot)()) {
    QSlider_OnFocusNextChild((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
bool q_slider_focus_previous_child(void* self) {
    return QSlider_FocusPreviousChild((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
bool q_slider_qbase_focus_previous_child(void* self) {
    return QSlider_QBaseFocusPreviousChild((QSlider*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, bool (*slot)() ```
void q_slider_on_focus_previous_child(void* self, bool (*slot)()) {
    QSlider_OnFocusPreviousChild((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
QObject* q_slider_sender(void* self) {
    return QSlider_Sender((QSlider*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
QObject* q_slider_qbase_sender(void* self) {
    return QSlider_QBaseSender((QSlider*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, QObject* (*slot)() ```
void q_slider_on_sender(void* self, QObject* (*slot)()) {
    QSlider_OnSender((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self ```
int32_t q_slider_sender_signal_index(void* self) {
    return QSlider_SenderSignalIndex((QSlider*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self ```
int32_t q_slider_qbase_sender_signal_index(void* self) {
    return QSlider_QBaseSenderSignalIndex((QSlider*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, int32_t (*slot)() ```
void q_slider_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSlider_OnSenderSignalIndex((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, const char* signal ```
int32_t q_slider_receivers(void* self, const char* signal) {
    return QSlider_Receivers((QSlider*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, const char* signal ```
int32_t q_slider_qbase_receivers(void* self, const char* signal) {
    return QSlider_QBaseReceivers((QSlider*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, int32_t (*slot)(QSlider*, const char*) ```
void q_slider_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSlider_OnReceivers((QSlider*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSlider* self, QMetaMethod* signal ```
bool q_slider_is_signal_connected(void* self, void* signal) {
    return QSlider_IsSignalConnected((QSlider*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSlider* self, QMetaMethod* signal ```
bool q_slider_qbase_is_signal_connected(void* self, void* signal) {
    return QSlider_QBaseIsSignalConnected((QSlider*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSlider* self, bool (*slot)(QSlider*, QMetaMethod*) ```
void q_slider_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSlider_OnIsSignalConnected((QSlider*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSlider* self ```
void q_slider_delete(void* self) {
    QSlider_Delete((QSlider*)(self));
}