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
#include "libqscrollbar.hpp"
#include "libqscrollbar.h"

/// https://doc.qt.io/qt-6/qscrollbar.html

/// q_scrollbar_new constructs a new QScrollBar object.
///
/// ``` QWidget* parent ```
QScrollBar* q_scrollbar_new(void* parent) {
    return QScrollBar_new((QWidget*)parent);
}

/// q_scrollbar_new2 constructs a new QScrollBar object.
///
///
QScrollBar* q_scrollbar_new2() {
    return QScrollBar_new2();
}

/// q_scrollbar_new3 constructs a new QScrollBar object.
///
/// ``` enum Qt__Orientation param1 ```
QScrollBar* q_scrollbar_new3(int64_t param1) {
    return QScrollBar_new3(param1);
}

/// q_scrollbar_new4 constructs a new QScrollBar object.
///
/// ``` enum Qt__Orientation param1, QWidget* parent ```
QScrollBar* q_scrollbar_new4(int64_t param1, void* parent) {
    return QScrollBar_new4(param1, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScrollBar* self ```
QMetaObject* q_scrollbar_meta_object(void* self) {
    return QScrollBar_MetaObject((QScrollBar*)self);
}

/// ``` QScrollBar* self, const char* param1 ```
void* q_scrollbar_metacast(void* self, const char* param1) {
    return QScrollBar_Metacast((QScrollBar*)self, param1);
}

/// ``` QScrollBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scrollbar_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScrollBar_Metacall((QScrollBar*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, int32_t (*slot)(QScrollBar*, enum QMetaObject__Call, int, void*) ```
void q_scrollbar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QScrollBar_OnMetacall((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scrollbar_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScrollBar_QBaseMetacall((QScrollBar*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scrollbar_tr(const char* s) {
    libqt_string _str = QScrollBar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#sizeHint)
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_size_hint(void* self) {
    return QScrollBar_SizeHint((QScrollBar*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, QSize* (*slot)() ```
void q_scrollbar_on_size_hint(void* self, QSize* (*slot)()) {
    QScrollBar_OnSizeHint((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_qbase_size_hint(void* self) {
    return QScrollBar_QBaseSizeHint((QScrollBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#event)
///
/// ``` QScrollBar* self, QEvent* event ```
bool q_scrollbar_event(void* self, void* event) {
    return QScrollBar_Event((QScrollBar*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, bool (*slot)(QScrollBar*, QEvent*) ```
void q_scrollbar_on_event(void* self, bool (*slot)(void*, void*)) {
    QScrollBar_OnEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QEvent* event ```
bool q_scrollbar_qbase_event(void* self, void* event) {
    return QScrollBar_QBaseEvent((QScrollBar*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#wheelEvent)
///
/// ``` QScrollBar* self, QWheelEvent* param1 ```
void q_scrollbar_wheel_event(void* self, void* param1) {
    QScrollBar_WheelEvent((QScrollBar*)self, (QWheelEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QWheelEvent*) ```
void q_scrollbar_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnWheelEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QWheelEvent* param1 ```
void q_scrollbar_qbase_wheel_event(void* self, void* param1) {
    QScrollBar_QBaseWheelEvent((QScrollBar*)self, (QWheelEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#paintEvent)
///
/// ``` QScrollBar* self, QPaintEvent* param1 ```
void q_scrollbar_paint_event(void* self, void* param1) {
    QScrollBar_PaintEvent((QScrollBar*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QPaintEvent*) ```
void q_scrollbar_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnPaintEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QPaintEvent* param1 ```
void q_scrollbar_qbase_paint_event(void* self, void* param1) {
    QScrollBar_QBasePaintEvent((QScrollBar*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#mousePressEvent)
///
/// ``` QScrollBar* self, QMouseEvent* param1 ```
void q_scrollbar_mouse_press_event(void* self, void* param1) {
    QScrollBar_MousePressEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QMouseEvent*) ```
void q_scrollbar_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnMousePressEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QMouseEvent* param1 ```
void q_scrollbar_qbase_mouse_press_event(void* self, void* param1) {
    QScrollBar_QBaseMousePressEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#mouseReleaseEvent)
///
/// ``` QScrollBar* self, QMouseEvent* param1 ```
void q_scrollbar_mouse_release_event(void* self, void* param1) {
    QScrollBar_MouseReleaseEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QMouseEvent*) ```
void q_scrollbar_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnMouseReleaseEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QMouseEvent* param1 ```
void q_scrollbar_qbase_mouse_release_event(void* self, void* param1) {
    QScrollBar_QBaseMouseReleaseEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#mouseMoveEvent)
///
/// ``` QScrollBar* self, QMouseEvent* param1 ```
void q_scrollbar_mouse_move_event(void* self, void* param1) {
    QScrollBar_MouseMoveEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QMouseEvent*) ```
void q_scrollbar_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnMouseMoveEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QMouseEvent* param1 ```
void q_scrollbar_qbase_mouse_move_event(void* self, void* param1) {
    QScrollBar_QBaseMouseMoveEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#hideEvent)
///
/// ``` QScrollBar* self, QHideEvent* param1 ```
void q_scrollbar_hide_event(void* self, void* param1) {
    QScrollBar_HideEvent((QScrollBar*)self, (QHideEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QHideEvent*) ```
void q_scrollbar_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnHideEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QHideEvent* param1 ```
void q_scrollbar_qbase_hide_event(void* self, void* param1) {
    QScrollBar_QBaseHideEvent((QScrollBar*)self, (QHideEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#sliderChange)
///
/// ``` QScrollBar* self, enum QAbstractSlider__SliderChange change ```
void q_scrollbar_slider_change(void* self, int64_t change) {
    QScrollBar_SliderChange((QScrollBar*)self, change);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, enum QAbstractSlider__SliderChange) ```
void q_scrollbar_on_slider_change(void* self, void (*slot)(void*, int64_t)) {
    QScrollBar_OnSliderChange((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, enum QAbstractSlider__SliderChange change ```
void q_scrollbar_qbase_slider_change(void* self, int64_t change) {
    QScrollBar_QBaseSliderChange((QScrollBar*)self, change);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#contextMenuEvent)
///
/// ``` QScrollBar* self, QContextMenuEvent* param1 ```
void q_scrollbar_context_menu_event(void* self, void* param1) {
    QScrollBar_ContextMenuEvent((QScrollBar*)self, (QContextMenuEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QContextMenuEvent*) ```
void q_scrollbar_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnContextMenuEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QContextMenuEvent* param1 ```
void q_scrollbar_qbase_context_menu_event(void* self, void* param1) {
    QScrollBar_QBaseContextMenuEvent((QScrollBar*)self, (QContextMenuEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollbar.html#initStyleOption)
///
/// ``` QScrollBar* self, QStyleOptionSlider* option ```
void q_scrollbar_init_style_option(void* self, void* option) {
    QScrollBar_InitStyleOption((QScrollBar*)self, (QStyleOptionSlider*)option);
}

/// Allows for overriding the related default method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QStyleOptionSlider*) ```
void q_scrollbar_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnInitStyleOption((QScrollBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollBar* self, QStyleOptionSlider* option ```
void q_scrollbar_qbase_init_style_option(void* self, void* option) {
    QScrollBar_QBaseInitStyleOption((QScrollBar*)self, (QStyleOptionSlider*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scrollbar_tr2(const char* s, const char* c) {
    libqt_string _str = QScrollBar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scrollbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScrollBar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#orientation)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMinimum)
///
/// ``` QScrollBar* self, int minimum ```
void q_scrollbar_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#minimum)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMaximum)
///
/// ``` QScrollBar* self, int maximum ```
void q_scrollbar_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#maximum)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSingleStep)
///
/// ``` QScrollBar* self, int singleStep ```
void q_scrollbar_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#singleStep)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setPageStep)
///
/// ``` QScrollBar* self, int pageStep ```
void q_scrollbar_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#pageStep)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setTracking)
///
/// ``` QScrollBar* self, bool enable ```
void q_scrollbar_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#hasTracking)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderDown)
///
/// ``` QScrollBar* self, bool sliderDown ```
void q_scrollbar_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#isSliderDown)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderPosition)
///
/// ``` QScrollBar* self, int sliderPosition ```
void q_scrollbar_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPosition)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedAppearance)
///
/// ``` QScrollBar* self, bool invertedAppearance ```
void q_scrollbar_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedAppearance)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedControls)
///
/// ``` QScrollBar* self, bool invertedControls ```
void q_scrollbar_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedControls)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#value)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#triggerAction)
///
/// ``` QScrollBar* self, enum QAbstractSlider__SliderAction action ```
void q_scrollbar_trigger_action(void* self, int64_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setValue)
///
/// ``` QScrollBar* self, int value ```
void q_scrollbar_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setOrientation)
///
/// ``` QScrollBar* self, enum Qt__Orientation orientation ```
void q_scrollbar_set_orientation(void* self, int64_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRange)
///
/// ``` QScrollBar* self, int min, int max ```
void q_scrollbar_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
///
/// ``` QScrollBar* self, int value ```
void q_scrollbar_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

/// Inherited from QAbstractSlider
///
/// ``` QScrollBar* self, void (*slot)(QAbstractSlider*, int) ```
void q_scrollbar_on_value_changed(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
///
/// ``` QScrollBar* self ```
void q_scrollbar_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// ``` QScrollBar* self, void (*slot)(QAbstractSlider*) ```
void q_scrollbar_on_slider_pressed(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
///
/// ``` QScrollBar* self, int position ```
void q_scrollbar_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

/// Inherited from QAbstractSlider
///
/// ``` QScrollBar* self, void (*slot)(QAbstractSlider*, int) ```
void q_scrollbar_on_slider_moved(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
///
/// ``` QScrollBar* self ```
void q_scrollbar_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

/// Inherited from QAbstractSlider
///
/// ``` QScrollBar* self, void (*slot)(QAbstractSlider*) ```
void q_scrollbar_on_slider_released(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
///
/// ``` QScrollBar* self, int min, int max ```
void q_scrollbar_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

/// Inherited from QAbstractSlider
///
/// ``` QScrollBar* self, void (*slot)(QAbstractSlider*, int, int) ```
void q_scrollbar_on_range_changed(void* self, void (*slot)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
///
/// ``` QScrollBar* self, int action ```
void q_scrollbar_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

/// Inherited from QAbstractSlider
///
/// ``` QScrollBar* self, void (*slot)(QAbstractSlider*, int) ```
void q_scrollbar_on_action_triggered(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QScrollBar* self ```
uintptr_t q_scrollbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QScrollBar* self ```
void q_scrollbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QScrollBar* self ```
uintptr_t q_scrollbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QScrollBar* self ```
uintptr_t q_scrollbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QScrollBar* self ```
QStyle* q_scrollbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QScrollBar* self, QStyle* style ```
void q_scrollbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QScrollBar* self, enum Qt__WindowModality windowModality ```
void q_scrollbar_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QScrollBar* self, QWidget* param1 ```
bool q_scrollbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QScrollBar* self, bool enabled ```
void q_scrollbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QScrollBar* self, bool disabled ```
void q_scrollbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QScrollBar* self, bool windowModified ```
void q_scrollbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QScrollBar* self ```
QRect* q_scrollbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QScrollBar* self ```
QRect* q_scrollbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QScrollBar* self ```
QRect* q_scrollbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QScrollBar* self ```
QPoint* q_scrollbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QScrollBar* self ```
QRect* q_scrollbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QScrollBar* self ```
QRect* q_scrollbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QScrollBar* self ```
QRegion* q_scrollbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QScrollBar* self, QSize* minimumSize ```
void q_scrollbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QScrollBar* self, int minw, int minh ```
void q_scrollbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QScrollBar* self, QSize* maximumSize ```
void q_scrollbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QScrollBar* self, int maxw, int maxh ```
void q_scrollbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QScrollBar* self, int minw ```
void q_scrollbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QScrollBar* self, int minh ```
void q_scrollbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QScrollBar* self, int maxw ```
void q_scrollbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QScrollBar* self, int maxh ```
void q_scrollbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QScrollBar* self, QSize* sizeIncrement ```
void q_scrollbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QScrollBar* self, int w, int h ```
void q_scrollbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QScrollBar* self, QSize* baseSize ```
void q_scrollbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QScrollBar* self, int basew, int baseh ```
void q_scrollbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QScrollBar* self, QSize* fixedSize ```
void q_scrollbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QScrollBar* self, int w, int h ```
void q_scrollbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QScrollBar* self, int w ```
void q_scrollbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QScrollBar* self, int h ```
void q_scrollbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QScrollBar* self, QPointF* param1 ```
QPointF* q_scrollbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QScrollBar* self, QPoint* param1 ```
QPoint* q_scrollbar_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QScrollBar* self, QPointF* param1 ```
QPointF* q_scrollbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QScrollBar* self, QPoint* param1 ```
QPoint* q_scrollbar_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QScrollBar* self, QPointF* param1 ```
QPointF* q_scrollbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QScrollBar* self, QPoint* param1 ```
QPoint* q_scrollbar_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QScrollBar* self, QPointF* param1 ```
QPointF* q_scrollbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QScrollBar* self, QPoint* param1 ```
QPoint* q_scrollbar_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QScrollBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_scrollbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QScrollBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_scrollbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QScrollBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_scrollbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QScrollBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_scrollbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QScrollBar* self ```
QPalette* q_scrollbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QScrollBar* self, QPalette* palette ```
void q_scrollbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QScrollBar* self, enum QPalette__ColorRole backgroundRole ```
void q_scrollbar_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QScrollBar* self, enum QPalette__ColorRole foregroundRole ```
void q_scrollbar_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QScrollBar* self ```
QFont* q_scrollbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QScrollBar* self, QFont* font ```
void q_scrollbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QScrollBar* self ```
QFontMetrics* q_scrollbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QScrollBar* self ```
QFontInfo* q_scrollbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QScrollBar* self ```
QCursor* q_scrollbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QScrollBar* self, QCursor* cursor ```
void q_scrollbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QScrollBar* self ```
void q_scrollbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QScrollBar* self, bool enable ```
void q_scrollbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QScrollBar* self, bool enable ```
void q_scrollbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QScrollBar* self, QBitmap* mask ```
void q_scrollbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QScrollBar* self, QRegion* mask ```
void q_scrollbar_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QScrollBar* self ```
QRegion* q_scrollbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QScrollBar* self ```
void q_scrollbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPaintDevice* target ```
void q_scrollbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPainter* painter ```
void q_scrollbar_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QScrollBar* self ```
QPixmap* q_scrollbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QScrollBar* self ```
QGraphicsEffect* q_scrollbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QScrollBar* self, QGraphicsEffect* effect ```
void q_scrollbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QScrollBar* self, enum Qt__GestureType typeVal ```
void q_scrollbar_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QScrollBar* self, enum Qt__GestureType typeVal ```
void q_scrollbar_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QScrollBar* self, const char* windowTitle ```
void q_scrollbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QScrollBar* self, const char* styleSheet ```
void q_scrollbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QScrollBar* self, QIcon* icon ```
void q_scrollbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QScrollBar* self ```
QIcon* q_scrollbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QScrollBar* self, const char* windowIconText ```
void q_scrollbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QScrollBar* self, const char* windowRole ```
void q_scrollbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QScrollBar* self, const char* filePath ```
void q_scrollbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QScrollBar* self, double level ```
void q_scrollbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QScrollBar* self ```
double q_scrollbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QScrollBar* self, const char* toolTip ```
void q_scrollbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QScrollBar* self, int msec ```
void q_scrollbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QScrollBar* self, const char* statusTip ```
void q_scrollbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QScrollBar* self, const char* whatsThis ```
void q_scrollbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QScrollBar* self, const char* name ```
void q_scrollbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QScrollBar* self, const char* description ```
void q_scrollbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QScrollBar* self, enum Qt__LayoutDirection direction ```
void q_scrollbar_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QScrollBar* self ```
void q_scrollbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QScrollBar* self, QLocale* locale ```
void q_scrollbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QScrollBar* self ```
QLocale* q_scrollbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QScrollBar* self ```
void q_scrollbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QScrollBar* self ```
void q_scrollbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QScrollBar* self ```
void q_scrollbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QScrollBar* self ```
void q_scrollbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QScrollBar* self, enum Qt__FocusReason reason ```
void q_scrollbar_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QScrollBar* self, enum Qt__FocusPolicy policy ```
void q_scrollbar_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_scrollbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QScrollBar* self, QWidget* focusProxy ```
void q_scrollbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QScrollBar* self, enum Qt__ContextMenuPolicy policy ```
void q_scrollbar_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QScrollBar* self ```
void q_scrollbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QScrollBar* self, QCursor* param1 ```
void q_scrollbar_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QScrollBar* self ```
void q_scrollbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QScrollBar* self ```
void q_scrollbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QScrollBar* self ```
void q_scrollbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QScrollBar* self, QKeySequence* key ```
int32_t q_scrollbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QScrollBar* self, int id ```
void q_scrollbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QScrollBar* self, int id ```
void q_scrollbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QScrollBar* self, int id ```
void q_scrollbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_scrollbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_scrollbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QScrollBar* self, bool enable ```
void q_scrollbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QScrollBar* self ```
QGraphicsProxyWidget* q_scrollbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollBar* self ```
void q_scrollbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollBar* self ```
void q_scrollbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollBar* self, int x, int y, int w, int h ```
void q_scrollbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollBar* self, QRect* param1 ```
void q_scrollbar_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollBar* self, QRegion* param1 ```
void q_scrollbar_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollBar* self, int x, int y, int w, int h ```
void q_scrollbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollBar* self, QRect* param1 ```
void q_scrollbar_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollBar* self, QRegion* param1 ```
void q_scrollbar_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QScrollBar* self, bool hidden ```
void q_scrollbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QScrollBar* self ```
void q_scrollbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QScrollBar* self ```
void q_scrollbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QScrollBar* self ```
void q_scrollbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QScrollBar* self ```
void q_scrollbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QScrollBar* self ```
void q_scrollbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QScrollBar* self ```
void q_scrollbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QScrollBar* self ```
void q_scrollbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QScrollBar* self ```
void q_scrollbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QScrollBar* self, QWidget* param1 ```
void q_scrollbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QScrollBar* self, int x, int y ```
void q_scrollbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QScrollBar* self, QPoint* param1 ```
void q_scrollbar_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QScrollBar* self, int w, int h ```
void q_scrollbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QScrollBar* self, QSize* param1 ```
void q_scrollbar_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QScrollBar* self, int x, int y, int w, int h ```
void q_scrollbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QScrollBar* self, QRect* geometry ```
void q_scrollbar_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QScrollBar* self ```
char* q_scrollbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QScrollBar* self, const char* geometry ```
bool q_scrollbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QScrollBar* self ```
void q_scrollbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QScrollBar* self, QWidget* param1 ```
bool q_scrollbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QScrollBar* self, int state ```
void q_scrollbar_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QScrollBar* self, int state ```
void q_scrollbar_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QScrollBar* self ```
QSizePolicy* q_scrollbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QScrollBar* self, QSizePolicy* sizePolicy ```
void q_scrollbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QScrollBar* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_scrollbar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QScrollBar* self ```
QRegion* q_scrollbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QScrollBar* self, int left, int top, int right, int bottom ```
void q_scrollbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QScrollBar* self, QMargins* margins ```
void q_scrollbar_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QScrollBar* self ```
QMargins* q_scrollbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QScrollBar* self ```
QRect* q_scrollbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QScrollBar* self ```
QLayout* q_scrollbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QScrollBar* self, QLayout* layout ```
void q_scrollbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QScrollBar* self ```
void q_scrollbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QScrollBar* self, QWidget* parent ```
void q_scrollbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QScrollBar* self, QWidget* parent, int f ```
void q_scrollbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QScrollBar* self, int dx, int dy ```
void q_scrollbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QScrollBar* self, int dx, int dy, QRect* param3 ```
void q_scrollbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QScrollBar* self, bool on ```
void q_scrollbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollBar* self, QAction* action ```
void q_scrollbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QScrollBar* self, QAction* actions[] ```
void q_scrollbar_add_actions(void* self, void* actions[]) {
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
/// ``` QScrollBar* self, QAction* before, QAction* actions[] ```
void q_scrollbar_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QScrollBar* self, QAction* before, QAction* action ```
void q_scrollbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QScrollBar* self, QAction* action ```
void q_scrollbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QScrollBar* self ```
libqt_list /* of QAction* */ q_scrollbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollBar* self, const char* text ```
QAction* q_scrollbar_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollBar* self, QIcon* icon, const char* text ```
QAction* q_scrollbar_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollBar* self, const char* text, QKeySequence* shortcut ```
QAction* q_scrollbar_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollBar* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_scrollbar_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QScrollBar* self ```
QWidget* q_scrollbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QScrollBar* self, int typeVal ```
void q_scrollbar_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QScrollBar* self, enum Qt__WindowType param1 ```
void q_scrollbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QScrollBar* self, int typeVal ```
void q_scrollbar_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_scrollbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QScrollBar* self, int x, int y ```
QWidget* q_scrollbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QScrollBar* self, QPoint* p ```
QWidget* q_scrollbar_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QScrollBar* self, enum Qt__WidgetAttribute param1 ```
void q_scrollbar_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QScrollBar* self, enum Qt__WidgetAttribute param1 ```
bool q_scrollbar_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QScrollBar* self ```
void q_scrollbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QScrollBar* self, QWidget* child ```
bool q_scrollbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QScrollBar* self, bool enabled ```
void q_scrollbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QScrollBar* self ```
QBackingStore* q_scrollbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QScrollBar* self ```
QWindow* q_scrollbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QScrollBar* self ```
QScreen* q_scrollbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QScrollBar* self, QScreen* screen ```
void q_scrollbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_scrollbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QScrollBar* self, const char* title ```
void q_scrollbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QScrollBar* self, void (*slot)(QWidget*, const char*) ```
void q_scrollbar_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QScrollBar* self, QIcon* icon ```
void q_scrollbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QScrollBar* self, void (*slot)(QWidget*, QIcon*) ```
void q_scrollbar_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QScrollBar* self, const char* iconText ```
void q_scrollbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QScrollBar* self, void (*slot)(QWidget*, const char*) ```
void q_scrollbar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QScrollBar* self, QPoint* pos ```
void q_scrollbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QScrollBar* self, void (*slot)(QWidget*, QPoint*) ```
void q_scrollbar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QScrollBar* self, int hints ```
void q_scrollbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPaintDevice* target, QPoint* targetOffset ```
void q_scrollbar_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_scrollbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_scrollbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPainter* painter, QPoint* targetOffset ```
void q_scrollbar_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_scrollbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_scrollbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QScrollBar* self, QRect* rectangle ```
QPixmap* q_scrollbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QScrollBar* self, enum Qt__GestureType typeVal, int flags ```
void q_scrollbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QScrollBar* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_scrollbar_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QScrollBar* self, int id, bool enable ```
void q_scrollbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QScrollBar* self, int id, bool enable ```
void q_scrollbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QScrollBar* self, enum Qt__WindowType param1, bool on ```
void q_scrollbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QScrollBar* self, enum Qt__WidgetAttribute param1, bool on ```
void q_scrollbar_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_scrollbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_scrollbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScrollBar* self ```
const char* q_scrollbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScrollBar* self, const char* name ```
void q_scrollbar_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScrollBar* self, bool b ```
bool q_scrollbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScrollBar* self ```
QThread* q_scrollbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScrollBar* self, QThread* thread ```
void q_scrollbar_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScrollBar* self, int interval ```
int32_t q_scrollbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScrollBar* self, int id ```
void q_scrollbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScrollBar* self ```
libqt_list /* of QObject* */ q_scrollbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScrollBar* self, QObject* filterObj ```
void q_scrollbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScrollBar* self, QObject* obj ```
void q_scrollbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scrollbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScrollBar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scrollbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scrollbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scrollbar_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScrollBar* self ```
void q_scrollbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScrollBar* self ```
void q_scrollbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScrollBar* self, const char* name, QVariant* value ```
bool q_scrollbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScrollBar* self, const char* name ```
QVariant* q_scrollbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScrollBar* self ```
const char** q_scrollbar_dynamic_property_names(void* self) {
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
/// ``` QScrollBar* self ```
QBindingStorage* q_scrollbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScrollBar* self ```
QBindingStorage* q_scrollbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScrollBar* self ```
void q_scrollbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QScrollBar* self, void (*slot)(QObject*) ```
void q_scrollbar_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScrollBar* self ```
QObject* q_scrollbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScrollBar* self, const char* classname ```
bool q_scrollbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScrollBar* self ```
void q_scrollbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScrollBar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scrollbar_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scrollbar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScrollBar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scrollbar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScrollBar* self, QObject* param1 ```
void q_scrollbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QScrollBar* self, void (*slot)(QObject*, QObject*) ```
void q_scrollbar_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QScrollBar* self ```
bool q_scrollbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QScrollBar* self ```
double q_scrollbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QScrollBar* self ```
double q_scrollbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_scrollbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QKeyEvent* ev ```
void q_scrollbar_key_press_event(void* self, void* ev) {
    QScrollBar_KeyPressEvent((QScrollBar*)self, (QKeyEvent*)ev);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QKeyEvent* ev ```
void q_scrollbar_qbase_key_press_event(void* self, void* ev) {
    QScrollBar_QBaseKeyPressEvent((QScrollBar*)self, (QKeyEvent*)ev);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QKeyEvent*) ```
void q_scrollbar_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnKeyPressEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QTimerEvent* param1 ```
void q_scrollbar_timer_event(void* self, void* param1) {
    QScrollBar_TimerEvent((QScrollBar*)self, (QTimerEvent*)param1);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QTimerEvent* param1 ```
void q_scrollbar_qbase_timer_event(void* self, void* param1) {
    QScrollBar_QBaseTimerEvent((QScrollBar*)self, (QTimerEvent*)param1);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QTimerEvent*) ```
void q_scrollbar_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnTimerEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QEvent* e ```
void q_scrollbar_change_event(void* self, void* e) {
    QScrollBar_ChangeEvent((QScrollBar*)self, (QEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QEvent* e ```
void q_scrollbar_qbase_change_event(void* self, void* e) {
    QScrollBar_QBaseChangeEvent((QScrollBar*)self, (QEvent*)e);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QEvent*) ```
void q_scrollbar_on_change_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnChangeEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_dev_type(void* self) {
    return QScrollBar_DevType((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_qbase_dev_type(void* self) {
    return QScrollBar_QBaseDevType((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, int32_t (*slot)() ```
void q_scrollbar_on_dev_type(void* self, int32_t (*slot)()) {
    QScrollBar_OnDevType((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, bool visible ```
void q_scrollbar_set_visible(void* self, bool visible) {
    QScrollBar_SetVisible((QScrollBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, bool visible ```
void q_scrollbar_qbase_set_visible(void* self, bool visible) {
    QScrollBar_QBaseSetVisible((QScrollBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, bool) ```
void q_scrollbar_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QScrollBar_OnSetVisible((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_minimum_size_hint(void* self) {
    return QScrollBar_MinimumSizeHint((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
QSize* q_scrollbar_qbase_minimum_size_hint(void* self) {
    return QScrollBar_QBaseMinimumSizeHint((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, QSize* (*slot)() ```
void q_scrollbar_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QScrollBar_OnMinimumSizeHint((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, int param1 ```
int32_t q_scrollbar_height_for_width(void* self, int param1) {
    return QScrollBar_HeightForWidth((QScrollBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, int param1 ```
int32_t q_scrollbar_qbase_height_for_width(void* self, int param1) {
    return QScrollBar_QBaseHeightForWidth((QScrollBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, int32_t (*slot)(QScrollBar*, int) ```
void q_scrollbar_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QScrollBar_OnHeightForWidth((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
bool q_scrollbar_has_height_for_width(void* self) {
    return QScrollBar_HasHeightForWidth((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
bool q_scrollbar_qbase_has_height_for_width(void* self) {
    return QScrollBar_QBaseHasHeightForWidth((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, bool (*slot)() ```
void q_scrollbar_on_has_height_for_width(void* self, bool (*slot)()) {
    QScrollBar_OnHasHeightForWidth((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
QPaintEngine* q_scrollbar_paint_engine(void* self) {
    return QScrollBar_PaintEngine((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
QPaintEngine* q_scrollbar_qbase_paint_engine(void* self) {
    return QScrollBar_QBasePaintEngine((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, QPaintEngine* (*slot)() ```
void q_scrollbar_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QScrollBar_OnPaintEngine((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QMouseEvent* event ```
void q_scrollbar_mouse_double_click_event(void* self, void* event) {
    QScrollBar_MouseDoubleClickEvent((QScrollBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QMouseEvent* event ```
void q_scrollbar_qbase_mouse_double_click_event(void* self, void* event) {
    QScrollBar_QBaseMouseDoubleClickEvent((QScrollBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QMouseEvent*) ```
void q_scrollbar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnMouseDoubleClickEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QKeyEvent* event ```
void q_scrollbar_key_release_event(void* self, void* event) {
    QScrollBar_KeyReleaseEvent((QScrollBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QKeyEvent* event ```
void q_scrollbar_qbase_key_release_event(void* self, void* event) {
    QScrollBar_QBaseKeyReleaseEvent((QScrollBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QKeyEvent*) ```
void q_scrollbar_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnKeyReleaseEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QFocusEvent* event ```
void q_scrollbar_focus_in_event(void* self, void* event) {
    QScrollBar_FocusInEvent((QScrollBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QFocusEvent* event ```
void q_scrollbar_qbase_focus_in_event(void* self, void* event) {
    QScrollBar_QBaseFocusInEvent((QScrollBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QFocusEvent*) ```
void q_scrollbar_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnFocusInEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QFocusEvent* event ```
void q_scrollbar_focus_out_event(void* self, void* event) {
    QScrollBar_FocusOutEvent((QScrollBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QFocusEvent* event ```
void q_scrollbar_qbase_focus_out_event(void* self, void* event) {
    QScrollBar_QBaseFocusOutEvent((QScrollBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QFocusEvent*) ```
void q_scrollbar_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnFocusOutEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QEnterEvent* event ```
void q_scrollbar_enter_event(void* self, void* event) {
    QScrollBar_EnterEvent((QScrollBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QEnterEvent* event ```
void q_scrollbar_qbase_enter_event(void* self, void* event) {
    QScrollBar_QBaseEnterEvent((QScrollBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QEnterEvent*) ```
void q_scrollbar_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnEnterEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QEvent* event ```
void q_scrollbar_leave_event(void* self, void* event) {
    QScrollBar_LeaveEvent((QScrollBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QEvent* event ```
void q_scrollbar_qbase_leave_event(void* self, void* event) {
    QScrollBar_QBaseLeaveEvent((QScrollBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QEvent*) ```
void q_scrollbar_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnLeaveEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QMoveEvent* event ```
void q_scrollbar_move_event(void* self, void* event) {
    QScrollBar_MoveEvent((QScrollBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QMoveEvent* event ```
void q_scrollbar_qbase_move_event(void* self, void* event) {
    QScrollBar_QBaseMoveEvent((QScrollBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QMoveEvent*) ```
void q_scrollbar_on_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnMoveEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QResizeEvent* event ```
void q_scrollbar_resize_event(void* self, void* event) {
    QScrollBar_ResizeEvent((QScrollBar*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QResizeEvent* event ```
void q_scrollbar_qbase_resize_event(void* self, void* event) {
    QScrollBar_QBaseResizeEvent((QScrollBar*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QResizeEvent*) ```
void q_scrollbar_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnResizeEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QCloseEvent* event ```
void q_scrollbar_close_event(void* self, void* event) {
    QScrollBar_CloseEvent((QScrollBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QCloseEvent* event ```
void q_scrollbar_qbase_close_event(void* self, void* event) {
    QScrollBar_QBaseCloseEvent((QScrollBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QCloseEvent*) ```
void q_scrollbar_on_close_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnCloseEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QTabletEvent* event ```
void q_scrollbar_tablet_event(void* self, void* event) {
    QScrollBar_TabletEvent((QScrollBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QTabletEvent* event ```
void q_scrollbar_qbase_tablet_event(void* self, void* event) {
    QScrollBar_QBaseTabletEvent((QScrollBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QTabletEvent*) ```
void q_scrollbar_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnTabletEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QActionEvent* event ```
void q_scrollbar_action_event(void* self, void* event) {
    QScrollBar_ActionEvent((QScrollBar*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QActionEvent* event ```
void q_scrollbar_qbase_action_event(void* self, void* event) {
    QScrollBar_QBaseActionEvent((QScrollBar*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QActionEvent*) ```
void q_scrollbar_on_action_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnActionEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QDragEnterEvent* event ```
void q_scrollbar_drag_enter_event(void* self, void* event) {
    QScrollBar_DragEnterEvent((QScrollBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QDragEnterEvent* event ```
void q_scrollbar_qbase_drag_enter_event(void* self, void* event) {
    QScrollBar_QBaseDragEnterEvent((QScrollBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QDragEnterEvent*) ```
void q_scrollbar_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnDragEnterEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QDragMoveEvent* event ```
void q_scrollbar_drag_move_event(void* self, void* event) {
    QScrollBar_DragMoveEvent((QScrollBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QDragMoveEvent* event ```
void q_scrollbar_qbase_drag_move_event(void* self, void* event) {
    QScrollBar_QBaseDragMoveEvent((QScrollBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QDragMoveEvent*) ```
void q_scrollbar_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnDragMoveEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QDragLeaveEvent* event ```
void q_scrollbar_drag_leave_event(void* self, void* event) {
    QScrollBar_DragLeaveEvent((QScrollBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QDragLeaveEvent* event ```
void q_scrollbar_qbase_drag_leave_event(void* self, void* event) {
    QScrollBar_QBaseDragLeaveEvent((QScrollBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QDragLeaveEvent*) ```
void q_scrollbar_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnDragLeaveEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QDropEvent* event ```
void q_scrollbar_drop_event(void* self, void* event) {
    QScrollBar_DropEvent((QScrollBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QDropEvent* event ```
void q_scrollbar_qbase_drop_event(void* self, void* event) {
    QScrollBar_QBaseDropEvent((QScrollBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QDropEvent*) ```
void q_scrollbar_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnDropEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QShowEvent* event ```
void q_scrollbar_show_event(void* self, void* event) {
    QScrollBar_ShowEvent((QScrollBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QShowEvent* event ```
void q_scrollbar_qbase_show_event(void* self, void* event) {
    QScrollBar_QBaseShowEvent((QScrollBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QShowEvent*) ```
void q_scrollbar_on_show_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnShowEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_scrollbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollBar_NativeEvent((QScrollBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_scrollbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollBar_QBaseNativeEvent((QScrollBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, bool (*slot)(QScrollBar*, const char*, void*, intptr_t*) ```
void q_scrollbar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QScrollBar_OnNativeEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_scrollbar_metric(void* self, int64_t param1) {
    return QScrollBar_Metric((QScrollBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_scrollbar_qbase_metric(void* self, int64_t param1) {
    return QScrollBar_QBaseMetric((QScrollBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, int32_t (*slot)(QScrollBar*, enum QPaintDevice__PaintDeviceMetric) ```
void q_scrollbar_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QScrollBar_OnMetric((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QPainter* painter ```
void q_scrollbar_init_painter(void* self, void* painter) {
    QScrollBar_InitPainter((QScrollBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QPainter* painter ```
void q_scrollbar_qbase_init_painter(void* self, void* painter) {
    QScrollBar_QBaseInitPainter((QScrollBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QPainter*) ```
void q_scrollbar_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnInitPainter((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QPoint* offset ```
QPaintDevice* q_scrollbar_redirected(void* self, void* offset) {
    return QScrollBar_Redirected((QScrollBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QPoint* offset ```
QPaintDevice* q_scrollbar_qbase_redirected(void* self, void* offset) {
    return QScrollBar_QBaseRedirected((QScrollBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, QPaintDevice* (*slot)(QScrollBar*, QPoint*) ```
void q_scrollbar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QScrollBar_OnRedirected((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
QPainter* q_scrollbar_shared_painter(void* self) {
    return QScrollBar_SharedPainter((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
QPainter* q_scrollbar_qbase_shared_painter(void* self) {
    return QScrollBar_QBaseSharedPainter((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, QPainter* (*slot)() ```
void q_scrollbar_on_shared_painter(void* self, QPainter* (*slot)()) {
    QScrollBar_OnSharedPainter((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QInputMethodEvent* param1 ```
void q_scrollbar_input_method_event(void* self, void* param1) {
    QScrollBar_InputMethodEvent((QScrollBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QInputMethodEvent* param1 ```
void q_scrollbar_qbase_input_method_event(void* self, void* param1) {
    QScrollBar_QBaseInputMethodEvent((QScrollBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QInputMethodEvent*) ```
void q_scrollbar_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnInputMethodEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_scrollbar_input_method_query(void* self, int64_t param1) {
    return QScrollBar_InputMethodQuery((QScrollBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_scrollbar_qbase_input_method_query(void* self, int64_t param1) {
    return QScrollBar_QBaseInputMethodQuery((QScrollBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, QVariant* (*slot)(QScrollBar*, enum Qt__InputMethodQuery) ```
void q_scrollbar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QScrollBar_OnInputMethodQuery((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, bool next ```
bool q_scrollbar_focus_next_prev_child(void* self, bool next) {
    return QScrollBar_FocusNextPrevChild((QScrollBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, bool next ```
bool q_scrollbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QScrollBar_QBaseFocusNextPrevChild((QScrollBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, bool (*slot)(QScrollBar*, bool) ```
void q_scrollbar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QScrollBar_OnFocusNextPrevChild((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QObject* watched, QEvent* event ```
bool q_scrollbar_event_filter(void* self, void* watched, void* event) {
    return QScrollBar_EventFilter((QScrollBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QObject* watched, QEvent* event ```
bool q_scrollbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QScrollBar_QBaseEventFilter((QScrollBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, bool (*slot)(QScrollBar*, QObject*, QEvent*) ```
void q_scrollbar_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QScrollBar_OnEventFilter((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QChildEvent* event ```
void q_scrollbar_child_event(void* self, void* event) {
    QScrollBar_ChildEvent((QScrollBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QChildEvent* event ```
void q_scrollbar_qbase_child_event(void* self, void* event) {
    QScrollBar_QBaseChildEvent((QScrollBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QChildEvent*) ```
void q_scrollbar_on_child_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnChildEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QEvent* event ```
void q_scrollbar_custom_event(void* self, void* event) {
    QScrollBar_CustomEvent((QScrollBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QEvent* event ```
void q_scrollbar_qbase_custom_event(void* self, void* event) {
    QScrollBar_QBaseCustomEvent((QScrollBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QEvent*) ```
void q_scrollbar_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnCustomEvent((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QMetaMethod* signal ```
void q_scrollbar_connect_notify(void* self, void* signal) {
    QScrollBar_ConnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QMetaMethod* signal ```
void q_scrollbar_qbase_connect_notify(void* self, void* signal) {
    QScrollBar_QBaseConnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QMetaMethod*) ```
void q_scrollbar_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnConnectNotify((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QMetaMethod* signal ```
void q_scrollbar_disconnect_notify(void* self, void* signal) {
    QScrollBar_DisconnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QMetaMethod* signal ```
void q_scrollbar_qbase_disconnect_notify(void* self, void* signal) {
    QScrollBar_QBaseDisconnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, QMetaMethod*) ```
void q_scrollbar_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QScrollBar_OnDisconnectNotify((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, enum QAbstractSlider__SliderAction action ```
void q_scrollbar_set_repeat_action(void* self, int64_t action) {
    QScrollBar_SetRepeatAction((QScrollBar*)self, action);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, enum QAbstractSlider__SliderAction action ```
void q_scrollbar_qbase_set_repeat_action(void* self, int64_t action) {
    QScrollBar_QBaseSetRepeatAction((QScrollBar*)self, action);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)(QScrollBar*, enum QAbstractSlider__SliderAction) ```
void q_scrollbar_on_set_repeat_action(void* self, void (*slot)(void*, int64_t)) {
    QScrollBar_OnSetRepeatAction((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSlider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_repeat_action(void* self) {
    return QScrollBar_RepeatAction((QScrollBar*)self);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
int64_t q_scrollbar_qbase_repeat_action(void* self) {
    return QScrollBar_QBaseRepeatAction((QScrollBar*)self);
}

/// Inherited from QAbstractSlider
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, int64_t (*slot)() ```
void q_scrollbar_on_repeat_action(void* self, int64_t (*slot)()) {
    QScrollBar_OnRepeatAction((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
void q_scrollbar_update_micro_focus(void* self) {
    QScrollBar_UpdateMicroFocus((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
void q_scrollbar_qbase_update_micro_focus(void* self) {
    QScrollBar_QBaseUpdateMicroFocus((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)() ```
void q_scrollbar_on_update_micro_focus(void* self, void (*slot)()) {
    QScrollBar_OnUpdateMicroFocus((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
void q_scrollbar_create(void* self) {
    QScrollBar_Create((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
void q_scrollbar_qbase_create(void* self) {
    QScrollBar_QBaseCreate((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)() ```
void q_scrollbar_on_create(void* self, void (*slot)()) {
    QScrollBar_OnCreate((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
void q_scrollbar_destroy(void* self) {
    QScrollBar_Destroy((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
void q_scrollbar_qbase_destroy(void* self) {
    QScrollBar_QBaseDestroy((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, void (*slot)() ```
void q_scrollbar_on_destroy(void* self, void (*slot)()) {
    QScrollBar_OnDestroy((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
bool q_scrollbar_focus_next_child(void* self) {
    return QScrollBar_FocusNextChild((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
bool q_scrollbar_qbase_focus_next_child(void* self) {
    return QScrollBar_QBaseFocusNextChild((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, bool (*slot)() ```
void q_scrollbar_on_focus_next_child(void* self, bool (*slot)()) {
    QScrollBar_OnFocusNextChild((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
bool q_scrollbar_focus_previous_child(void* self) {
    return QScrollBar_FocusPreviousChild((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
bool q_scrollbar_qbase_focus_previous_child(void* self) {
    return QScrollBar_QBaseFocusPreviousChild((QScrollBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, bool (*slot)() ```
void q_scrollbar_on_focus_previous_child(void* self, bool (*slot)()) {
    QScrollBar_OnFocusPreviousChild((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
QObject* q_scrollbar_sender(void* self) {
    return QScrollBar_Sender((QScrollBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
QObject* q_scrollbar_qbase_sender(void* self) {
    return QScrollBar_QBaseSender((QScrollBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, QObject* (*slot)() ```
void q_scrollbar_on_sender(void* self, QObject* (*slot)()) {
    QScrollBar_OnSender((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_sender_signal_index(void* self) {
    return QScrollBar_SenderSignalIndex((QScrollBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self ```
int32_t q_scrollbar_qbase_sender_signal_index(void* self) {
    return QScrollBar_QBaseSenderSignalIndex((QScrollBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, int32_t (*slot)() ```
void q_scrollbar_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QScrollBar_OnSenderSignalIndex((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, const char* signal ```
int32_t q_scrollbar_receivers(void* self, const char* signal) {
    return QScrollBar_Receivers((QScrollBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, const char* signal ```
int32_t q_scrollbar_qbase_receivers(void* self, const char* signal) {
    return QScrollBar_QBaseReceivers((QScrollBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, int32_t (*slot)(QScrollBar*, const char*) ```
void q_scrollbar_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QScrollBar_OnReceivers((QScrollBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollBar* self, QMetaMethod* signal ```
bool q_scrollbar_is_signal_connected(void* self, void* signal) {
    return QScrollBar_IsSignalConnected((QScrollBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollBar* self, QMetaMethod* signal ```
bool q_scrollbar_qbase_is_signal_connected(void* self, void* signal) {
    return QScrollBar_QBaseIsSignalConnected((QScrollBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollBar* self, bool (*slot)(QScrollBar*, QMetaMethod*) ```
void q_scrollbar_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QScrollBar_OnIsSignalConnected((QScrollBar*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QScrollBar* self ```
void q_scrollbar_delete(void* self) {
    QScrollBar_Delete((QScrollBar*)(self));
}