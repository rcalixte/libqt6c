#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqabstractslider.hpp"
#include "libqabstractslider.h"

QAbstractSlider* q_abstractslider_new(void* parent) {
    return QAbstractSlider_new((QWidget*)parent);
}

QAbstractSlider* q_abstractslider_new2() {
    return QAbstractSlider_new2();
}

const QMetaObject* q_abstractslider_meta_object(void* self) {
    return QAbstractSlider_MetaObject((QAbstractSlider*)self);
}

void* q_abstractslider_metacast(void* self, const char* param1) {
    return QAbstractSlider_Metacast((QAbstractSlider*)self, param1);
}

int32_t q_abstractslider_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSlider_Metacall((QAbstractSlider*)self, param1, param2, param3);
}

void q_abstractslider_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractSlider_OnMetacall((QAbstractSlider*)self, (intptr_t)slot);
}

int32_t q_abstractslider_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSlider_QBaseMetacall((QAbstractSlider*)self, param1, param2, param3);
}

const char* q_abstractslider_tr(const char* s) {
    libqt_string _str = QAbstractSlider_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_abstractslider_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

void q_abstractslider_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

int32_t q_abstractslider_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

void q_abstractslider_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

int32_t q_abstractslider_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

void q_abstractslider_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

int32_t q_abstractslider_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

void q_abstractslider_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

int32_t q_abstractslider_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

void q_abstractslider_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

bool q_abstractslider_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

void q_abstractslider_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

bool q_abstractslider_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

void q_abstractslider_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

int32_t q_abstractslider_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

void q_abstractslider_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

bool q_abstractslider_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

void q_abstractslider_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

bool q_abstractslider_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

int32_t q_abstractslider_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

void q_abstractslider_trigger_action(void* self, int64_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

void q_abstractslider_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

void q_abstractslider_set_orientation(void* self, int64_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

void q_abstractslider_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

void q_abstractslider_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

void q_abstractslider_on_value_changed(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

void q_abstractslider_on_slider_pressed(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

void q_abstractslider_on_slider_moved(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

void q_abstractslider_on_slider_released(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

void q_abstractslider_on_range_changed(void* self, void (*slot)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

void q_abstractslider_on_action_triggered(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_event(void* self, void* e) {
    return QAbstractSlider_Event((QAbstractSlider*)self, (QEvent*)e);
}

void q_abstractslider_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractSlider_OnEvent((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_qbase_event(void* self, void* e) {
    return QAbstractSlider_QBaseEvent((QAbstractSlider*)self, (QEvent*)e);
}

void q_abstractslider_set_repeat_action(void* self, int64_t action) {
    QAbstractSlider_SetRepeatAction((QAbstractSlider*)self, action);
}

void q_abstractslider_on_set_repeat_action(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSlider_OnSetRepeatAction((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_set_repeat_action(void* self, int64_t action) {
    QAbstractSlider_QBaseSetRepeatAction((QAbstractSlider*)self, action);
}

int64_t q_abstractslider_repeat_action(void* self) {
    return QAbstractSlider_RepeatAction((QAbstractSlider*)self);
}

void q_abstractslider_on_repeat_action(void* self, int64_t (*slot)()) {
    QAbstractSlider_OnRepeatAction((QAbstractSlider*)self, (intptr_t)slot);
}

int64_t q_abstractslider_qbase_repeat_action(void* self) {
    return QAbstractSlider_QBaseRepeatAction((QAbstractSlider*)self);
}

void q_abstractslider_slider_change(void* self, int64_t change) {
    QAbstractSlider_SliderChange((QAbstractSlider*)self, change);
}

void q_abstractslider_on_slider_change(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSlider_OnSliderChange((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_slider_change(void* self, int64_t change) {
    QAbstractSlider_QBaseSliderChange((QAbstractSlider*)self, change);
}

void q_abstractslider_key_press_event(void* self, void* ev) {
    QAbstractSlider_KeyPressEvent((QAbstractSlider*)self, (QKeyEvent*)ev);
}

void q_abstractslider_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnKeyPressEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_key_press_event(void* self, void* ev) {
    QAbstractSlider_QBaseKeyPressEvent((QAbstractSlider*)self, (QKeyEvent*)ev);
}

void q_abstractslider_timer_event(void* self, void* param1) {
    QAbstractSlider_TimerEvent((QAbstractSlider*)self, (QTimerEvent*)param1);
}

void q_abstractslider_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnTimerEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_timer_event(void* self, void* param1) {
    QAbstractSlider_QBaseTimerEvent((QAbstractSlider*)self, (QTimerEvent*)param1);
}

void q_abstractslider_wheel_event(void* self, void* e) {
    QAbstractSlider_WheelEvent((QAbstractSlider*)self, (QWheelEvent*)e);
}

void q_abstractslider_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnWheelEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_wheel_event(void* self, void* e) {
    QAbstractSlider_QBaseWheelEvent((QAbstractSlider*)self, (QWheelEvent*)e);
}

void q_abstractslider_change_event(void* self, void* e) {
    QAbstractSlider_ChangeEvent((QAbstractSlider*)self, (QEvent*)e);
}

void q_abstractslider_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnChangeEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_change_event(void* self, void* e) {
    QAbstractSlider_QBaseChangeEvent((QAbstractSlider*)self, (QEvent*)e);
}

const char* q_abstractslider_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractSlider_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractslider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractSlider_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_repeat_action2(void* self, int64_t action, int thresholdTime) {
    QAbstractSlider_SetRepeatAction2((QAbstractSlider*)self, action, thresholdTime);
}

void q_abstractslider_on_set_repeat_action2(void* self, void (*slot)(void*, int64_t, int)) {
    QAbstractSlider_OnSetRepeatAction2((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_set_repeat_action2(void* self, int64_t action, int thresholdTime) {
    QAbstractSlider_QBaseSetRepeatAction2((QAbstractSlider*)self, action, thresholdTime);
}

void q_abstractslider_set_repeat_action3(void* self, int64_t action, int thresholdTime, int repeatTime) {
    QAbstractSlider_SetRepeatAction3((QAbstractSlider*)self, action, thresholdTime, repeatTime);
}

void q_abstractslider_on_set_repeat_action3(void* self, void (*slot)(void*, int64_t, int, int)) {
    QAbstractSlider_OnSetRepeatAction3((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_qbase_set_repeat_action3(void* self, int64_t action, int thresholdTime, int repeatTime) {
    QAbstractSlider_QBaseSetRepeatAction3((QAbstractSlider*)self, action, thresholdTime, repeatTime);
}

uintptr_t q_abstractslider_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_abstractslider_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_abstractslider_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_abstractslider_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_abstractslider_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_abstractslider_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_abstractslider_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_abstractslider_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_abstractslider_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_abstractslider_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_abstractslider_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_abstractslider_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_abstractslider_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_abstractslider_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_abstractslider_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_abstractslider_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_abstractslider_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_abstractslider_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_abstractslider_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_abstractslider_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_abstractslider_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_abstractslider_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_abstractslider_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_abstractslider_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_abstractslider_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_abstractslider_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_abstractslider_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_abstractslider_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_abstractslider_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_abstractslider_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_abstractslider_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_abstractslider_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_abstractslider_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_abstractslider_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_abstractslider_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_abstractslider_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_abstractslider_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_abstractslider_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_abstractslider_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_abstractslider_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_abstractslider_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_abstractslider_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_abstractslider_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_abstractslider_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_abstractslider_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_abstractslider_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_abstractslider_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_abstractslider_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_abstractslider_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_abstractslider_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_abstractslider_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_abstractslider_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_abstractslider_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_abstractslider_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractslider_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractslider_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractslider_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractslider_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractslider_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractslider_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractslider_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractslider_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractslider_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_abstractslider_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractslider_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_abstractslider_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_abstractslider_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_abstractslider_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_abstractslider_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_abstractslider_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_abstractslider_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_abstractslider_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_abstractslider_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_abstractslider_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_abstractslider_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_abstractslider_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_abstractslider_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_abstractslider_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_abstractslider_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_abstractslider_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_abstractslider_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_abstractslider_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_abstractslider_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_abstractslider_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_abstractslider_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_abstractslider_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_abstractslider_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_abstractslider_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_abstractslider_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_abstractslider_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_abstractslider_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_abstractslider_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_abstractslider_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_abstractslider_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_abstractslider_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_abstractslider_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_abstractslider_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_abstractslider_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_abstractslider_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_abstractslider_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractslider_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_abstractslider_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_abstractslider_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_abstractslider_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_abstractslider_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_abstractslider_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_abstractslider_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_abstractslider_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_abstractslider_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_abstractslider_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_abstractslider_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_abstractslider_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_abstractslider_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_abstractslider_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractslider_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_abstractslider_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_abstractslider_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_abstractslider_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_abstractslider_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_abstractslider_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_abstractslider_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_abstractslider_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_abstractslider_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_abstractslider_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_abstractslider_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_abstractslider_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_abstractslider_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_abstractslider_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_abstractslider_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_abstractslider_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_abstractslider_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_abstractslider_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_abstractslider_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_abstractslider_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_abstractslider_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_abstractslider_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_abstractslider_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_abstractslider_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_abstractslider_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_abstractslider_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_abstractslider_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_abstractslider_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_abstractslider_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_abstractslider_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_abstractslider_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_abstractslider_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_abstractslider_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_abstractslider_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_abstractslider_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_abstractslider_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_abstractslider_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_abstractslider_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_abstractslider_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_abstractslider_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_abstractslider_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_abstractslider_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_abstractslider_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_abstractslider_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_abstractslider_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_abstractslider_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_abstractslider_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_abstractslider_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_abstractslider_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_abstractslider_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_abstractslider_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_abstractslider_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_abstractslider_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_abstractslider_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_abstractslider_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_abstractslider_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_abstractslider_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_abstractslider_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_abstractslider_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_abstractslider_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_abstractslider_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_abstractslider_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_abstractslider_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractslider_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_abstractslider_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_abstractslider_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_abstractslider_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_abstractslider_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_abstractslider_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_abstractslider_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_abstractslider_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_abstractslider_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_abstractslider_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_abstractslider_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_abstractslider_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_abstractslider_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_abstractslider_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_abstractslider_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_abstractslider_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_abstractslider_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_abstractslider_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_abstractslider_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_abstractslider_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_abstractslider_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_abstractslider_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_abstractslider_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_abstractslider_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_abstractslider_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_abstractslider_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_abstractslider_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_abstractslider_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_abstractslider_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_abstractslider_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_abstractslider_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_abstractslider_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_abstractslider_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_abstractslider_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_abstractslider_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_abstractslider_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_abstractslider_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_abstractslider_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_abstractslider_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_abstractslider_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_abstractslider_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_abstractslider_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_abstractslider_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_abstractslider_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_abstractslider_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_abstractslider_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_abstractslider_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_abstractslider_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_abstractslider_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_abstractslider_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_abstractslider_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_abstractslider_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_abstractslider_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_abstractslider_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_abstractslider_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_abstractslider_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_abstractslider_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_abstractslider_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_abstractslider_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_abstractslider_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_abstractslider_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_abstractslider_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_abstractslider_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_abstractslider_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractslider_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_abstractslider_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractslider_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_abstractslider_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractslider_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_abstractslider_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_abstractslider_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_abstractslider_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_abstractslider_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_abstractslider_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractslider_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_abstractslider_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_abstractslider_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractslider_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_abstractslider_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_abstractslider_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_abstractslider_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_abstractslider_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_abstractslider_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_abstractslider_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_abstractslider_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_abstractslider_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_abstractslider_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_abstractslider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractslider_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractslider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractslider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractslider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractslider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractslider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractslider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractslider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractslider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractslider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractslider_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractslider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractslider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractslider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractslider_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractslider_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractslider_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractslider_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractslider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractslider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractslider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractslider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractslider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_abstractslider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractslider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractslider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractslider_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_abstractslider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractslider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractslider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractslider_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractslider_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractslider_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractslider_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractslider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractslider_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_abstractslider_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_abstractslider_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_abstractslider_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_abstractslider_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractslider_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_abstractslider_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractslider_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_abstractslider_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_abstractslider_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_abstractslider_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_abstractslider_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_abstractslider_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_abstractslider_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_abstractslider_dev_type(void* self) {
    return QAbstractSlider_DevType((QAbstractSlider*)self);
}

int32_t q_abstractslider_qbase_dev_type(void* self) {
    return QAbstractSlider_QBaseDevType((QAbstractSlider*)self);
}

void q_abstractslider_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractSlider_OnDevType((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_set_visible(void* self, bool visible) {
    QAbstractSlider_SetVisible((QAbstractSlider*)self, visible);
}

void q_abstractslider_qbase_set_visible(void* self, bool visible) {
    QAbstractSlider_QBaseSetVisible((QAbstractSlider*)self, visible);
}

void q_abstractslider_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractSlider_OnSetVisible((QAbstractSlider*)self, (intptr_t)slot);
}

QSize* q_abstractslider_size_hint(void* self) {
    return QAbstractSlider_SizeHint((QAbstractSlider*)self);
}

QSize* q_abstractslider_qbase_size_hint(void* self) {
    return QAbstractSlider_QBaseSizeHint((QAbstractSlider*)self);
}

void q_abstractslider_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractSlider_OnSizeHint((QAbstractSlider*)self, (intptr_t)slot);
}

QSize* q_abstractslider_minimum_size_hint(void* self) {
    return QAbstractSlider_MinimumSizeHint((QAbstractSlider*)self);
}

QSize* q_abstractslider_qbase_minimum_size_hint(void* self) {
    return QAbstractSlider_QBaseMinimumSizeHint((QAbstractSlider*)self);
}

void q_abstractslider_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractSlider_OnMinimumSizeHint((QAbstractSlider*)self, (intptr_t)slot);
}

int32_t q_abstractslider_height_for_width(void* self, int param1) {
    return QAbstractSlider_HeightForWidth((QAbstractSlider*)self, param1);
}

int32_t q_abstractslider_qbase_height_for_width(void* self, int param1) {
    return QAbstractSlider_QBaseHeightForWidth((QAbstractSlider*)self, param1);
}

void q_abstractslider_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractSlider_OnHeightForWidth((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_has_height_for_width(void* self) {
    return QAbstractSlider_HasHeightForWidth((QAbstractSlider*)self);
}

bool q_abstractslider_qbase_has_height_for_width(void* self) {
    return QAbstractSlider_QBaseHasHeightForWidth((QAbstractSlider*)self);
}

void q_abstractslider_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractSlider_OnHasHeightForWidth((QAbstractSlider*)self, (intptr_t)slot);
}

QPaintEngine* q_abstractslider_paint_engine(void* self) {
    return QAbstractSlider_PaintEngine((QAbstractSlider*)self);
}

QPaintEngine* q_abstractslider_qbase_paint_engine(void* self) {
    return QAbstractSlider_QBasePaintEngine((QAbstractSlider*)self);
}

void q_abstractslider_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractSlider_OnPaintEngine((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_mouse_press_event(void* self, void* event) {
    QAbstractSlider_MousePressEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_qbase_mouse_press_event(void* self, void* event) {
    QAbstractSlider_QBaseMousePressEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnMousePressEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_mouse_release_event(void* self, void* event) {
    QAbstractSlider_MouseReleaseEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_qbase_mouse_release_event(void* self, void* event) {
    QAbstractSlider_QBaseMouseReleaseEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnMouseReleaseEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_mouse_double_click_event(void* self, void* event) {
    QAbstractSlider_MouseDoubleClickEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractSlider_QBaseMouseDoubleClickEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnMouseDoubleClickEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_mouse_move_event(void* self, void* event) {
    QAbstractSlider_MouseMoveEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_qbase_mouse_move_event(void* self, void* event) {
    QAbstractSlider_QBaseMouseMoveEvent((QAbstractSlider*)self, (QMouseEvent*)event);
}

void q_abstractslider_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnMouseMoveEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_key_release_event(void* self, void* event) {
    QAbstractSlider_KeyReleaseEvent((QAbstractSlider*)self, (QKeyEvent*)event);
}

void q_abstractslider_qbase_key_release_event(void* self, void* event) {
    QAbstractSlider_QBaseKeyReleaseEvent((QAbstractSlider*)self, (QKeyEvent*)event);
}

void q_abstractslider_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnKeyReleaseEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_focus_in_event(void* self, void* event) {
    QAbstractSlider_FocusInEvent((QAbstractSlider*)self, (QFocusEvent*)event);
}

void q_abstractslider_qbase_focus_in_event(void* self, void* event) {
    QAbstractSlider_QBaseFocusInEvent((QAbstractSlider*)self, (QFocusEvent*)event);
}

void q_abstractslider_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnFocusInEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_focus_out_event(void* self, void* event) {
    QAbstractSlider_FocusOutEvent((QAbstractSlider*)self, (QFocusEvent*)event);
}

void q_abstractslider_qbase_focus_out_event(void* self, void* event) {
    QAbstractSlider_QBaseFocusOutEvent((QAbstractSlider*)self, (QFocusEvent*)event);
}

void q_abstractslider_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnFocusOutEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_enter_event(void* self, void* event) {
    QAbstractSlider_EnterEvent((QAbstractSlider*)self, (QEnterEvent*)event);
}

void q_abstractslider_qbase_enter_event(void* self, void* event) {
    QAbstractSlider_QBaseEnterEvent((QAbstractSlider*)self, (QEnterEvent*)event);
}

void q_abstractslider_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnEnterEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_leave_event(void* self, void* event) {
    QAbstractSlider_LeaveEvent((QAbstractSlider*)self, (QEvent*)event);
}

void q_abstractslider_qbase_leave_event(void* self, void* event) {
    QAbstractSlider_QBaseLeaveEvent((QAbstractSlider*)self, (QEvent*)event);
}

void q_abstractslider_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnLeaveEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_paint_event(void* self, void* event) {
    QAbstractSlider_PaintEvent((QAbstractSlider*)self, (QPaintEvent*)event);
}

void q_abstractslider_qbase_paint_event(void* self, void* event) {
    QAbstractSlider_QBasePaintEvent((QAbstractSlider*)self, (QPaintEvent*)event);
}

void q_abstractslider_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnPaintEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_move_event(void* self, void* event) {
    QAbstractSlider_MoveEvent((QAbstractSlider*)self, (QMoveEvent*)event);
}

void q_abstractslider_qbase_move_event(void* self, void* event) {
    QAbstractSlider_QBaseMoveEvent((QAbstractSlider*)self, (QMoveEvent*)event);
}

void q_abstractslider_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnMoveEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_resize_event(void* self, void* event) {
    QAbstractSlider_ResizeEvent((QAbstractSlider*)self, (QResizeEvent*)event);
}

void q_abstractslider_qbase_resize_event(void* self, void* event) {
    QAbstractSlider_QBaseResizeEvent((QAbstractSlider*)self, (QResizeEvent*)event);
}

void q_abstractslider_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnResizeEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_close_event(void* self, void* event) {
    QAbstractSlider_CloseEvent((QAbstractSlider*)self, (QCloseEvent*)event);
}

void q_abstractslider_qbase_close_event(void* self, void* event) {
    QAbstractSlider_QBaseCloseEvent((QAbstractSlider*)self, (QCloseEvent*)event);
}

void q_abstractslider_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnCloseEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_context_menu_event(void* self, void* event) {
    QAbstractSlider_ContextMenuEvent((QAbstractSlider*)self, (QContextMenuEvent*)event);
}

void q_abstractslider_qbase_context_menu_event(void* self, void* event) {
    QAbstractSlider_QBaseContextMenuEvent((QAbstractSlider*)self, (QContextMenuEvent*)event);
}

void q_abstractslider_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnContextMenuEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_tablet_event(void* self, void* event) {
    QAbstractSlider_TabletEvent((QAbstractSlider*)self, (QTabletEvent*)event);
}

void q_abstractslider_qbase_tablet_event(void* self, void* event) {
    QAbstractSlider_QBaseTabletEvent((QAbstractSlider*)self, (QTabletEvent*)event);
}

void q_abstractslider_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnTabletEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_action_event(void* self, void* event) {
    QAbstractSlider_ActionEvent((QAbstractSlider*)self, (QActionEvent*)event);
}

void q_abstractslider_qbase_action_event(void* self, void* event) {
    QAbstractSlider_QBaseActionEvent((QAbstractSlider*)self, (QActionEvent*)event);
}

void q_abstractslider_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnActionEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_drag_enter_event(void* self, void* event) {
    QAbstractSlider_DragEnterEvent((QAbstractSlider*)self, (QDragEnterEvent*)event);
}

void q_abstractslider_qbase_drag_enter_event(void* self, void* event) {
    QAbstractSlider_QBaseDragEnterEvent((QAbstractSlider*)self, (QDragEnterEvent*)event);
}

void q_abstractslider_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnDragEnterEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_drag_move_event(void* self, void* event) {
    QAbstractSlider_DragMoveEvent((QAbstractSlider*)self, (QDragMoveEvent*)event);
}

void q_abstractslider_qbase_drag_move_event(void* self, void* event) {
    QAbstractSlider_QBaseDragMoveEvent((QAbstractSlider*)self, (QDragMoveEvent*)event);
}

void q_abstractslider_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnDragMoveEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_drag_leave_event(void* self, void* event) {
    QAbstractSlider_DragLeaveEvent((QAbstractSlider*)self, (QDragLeaveEvent*)event);
}

void q_abstractslider_qbase_drag_leave_event(void* self, void* event) {
    QAbstractSlider_QBaseDragLeaveEvent((QAbstractSlider*)self, (QDragLeaveEvent*)event);
}

void q_abstractslider_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnDragLeaveEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_drop_event(void* self, void* event) {
    QAbstractSlider_DropEvent((QAbstractSlider*)self, (QDropEvent*)event);
}

void q_abstractslider_qbase_drop_event(void* self, void* event) {
    QAbstractSlider_QBaseDropEvent((QAbstractSlider*)self, (QDropEvent*)event);
}

void q_abstractslider_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnDropEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_show_event(void* self, void* event) {
    QAbstractSlider_ShowEvent((QAbstractSlider*)self, (QShowEvent*)event);
}

void q_abstractslider_qbase_show_event(void* self, void* event) {
    QAbstractSlider_QBaseShowEvent((QAbstractSlider*)self, (QShowEvent*)event);
}

void q_abstractslider_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnShowEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_hide_event(void* self, void* event) {
    QAbstractSlider_HideEvent((QAbstractSlider*)self, (QHideEvent*)event);
}

void q_abstractslider_qbase_hide_event(void* self, void* event) {
    QAbstractSlider_QBaseHideEvent((QAbstractSlider*)self, (QHideEvent*)event);
}

void q_abstractslider_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnHideEvent((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractSlider_NativeEvent((QAbstractSlider*)self, qstring(eventType), message, result);
}

bool q_abstractslider_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractSlider_QBaseNativeEvent((QAbstractSlider*)self, qstring(eventType), message, result);
}

void q_abstractslider_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractSlider_OnNativeEvent((QAbstractSlider*)self, (intptr_t)slot);
}

int32_t q_abstractslider_metric(void* self, int64_t param1) {
    return QAbstractSlider_Metric((QAbstractSlider*)self, param1);
}

int32_t q_abstractslider_qbase_metric(void* self, int64_t param1) {
    return QAbstractSlider_QBaseMetric((QAbstractSlider*)self, param1);
}

void q_abstractslider_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractSlider_OnMetric((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_init_painter(void* self, void* painter) {
    QAbstractSlider_InitPainter((QAbstractSlider*)self, (QPainter*)painter);
}

void q_abstractslider_qbase_init_painter(void* self, void* painter) {
    QAbstractSlider_QBaseInitPainter((QAbstractSlider*)self, (QPainter*)painter);
}

void q_abstractslider_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnInitPainter((QAbstractSlider*)self, (intptr_t)slot);
}

QPaintDevice* q_abstractslider_redirected(void* self, void* offset) {
    return QAbstractSlider_Redirected((QAbstractSlider*)self, (QPoint*)offset);
}

QPaintDevice* q_abstractslider_qbase_redirected(void* self, void* offset) {
    return QAbstractSlider_QBaseRedirected((QAbstractSlider*)self, (QPoint*)offset);
}

void q_abstractslider_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractSlider_OnRedirected((QAbstractSlider*)self, (intptr_t)slot);
}

QPainter* q_abstractslider_shared_painter(void* self) {
    return QAbstractSlider_SharedPainter((QAbstractSlider*)self);
}

QPainter* q_abstractslider_qbase_shared_painter(void* self) {
    return QAbstractSlider_QBaseSharedPainter((QAbstractSlider*)self);
}

void q_abstractslider_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractSlider_OnSharedPainter((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_input_method_event(void* self, void* param1) {
    QAbstractSlider_InputMethodEvent((QAbstractSlider*)self, (QInputMethodEvent*)param1);
}

void q_abstractslider_qbase_input_method_event(void* self, void* param1) {
    QAbstractSlider_QBaseInputMethodEvent((QAbstractSlider*)self, (QInputMethodEvent*)param1);
}

void q_abstractslider_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnInputMethodEvent((QAbstractSlider*)self, (intptr_t)slot);
}

QVariant* q_abstractslider_input_method_query(void* self, int64_t param1) {
    return QAbstractSlider_InputMethodQuery((QAbstractSlider*)self, param1);
}

QVariant* q_abstractslider_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractSlider_QBaseInputMethodQuery((QAbstractSlider*)self, param1);
}

void q_abstractslider_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractSlider_OnInputMethodQuery((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_focus_next_prev_child(void* self, bool next) {
    return QAbstractSlider_FocusNextPrevChild((QAbstractSlider*)self, next);
}

bool q_abstractslider_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractSlider_QBaseFocusNextPrevChild((QAbstractSlider*)self, next);
}

void q_abstractslider_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractSlider_OnFocusNextPrevChild((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_event_filter(void* self, void* watched, void* event) {
    return QAbstractSlider_EventFilter((QAbstractSlider*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractslider_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractSlider_QBaseEventFilter((QAbstractSlider*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractslider_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractSlider_OnEventFilter((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_child_event(void* self, void* event) {
    QAbstractSlider_ChildEvent((QAbstractSlider*)self, (QChildEvent*)event);
}

void q_abstractslider_qbase_child_event(void* self, void* event) {
    QAbstractSlider_QBaseChildEvent((QAbstractSlider*)self, (QChildEvent*)event);
}

void q_abstractslider_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnChildEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_custom_event(void* self, void* event) {
    QAbstractSlider_CustomEvent((QAbstractSlider*)self, (QEvent*)event);
}

void q_abstractslider_qbase_custom_event(void* self, void* event) {
    QAbstractSlider_QBaseCustomEvent((QAbstractSlider*)self, (QEvent*)event);
}

void q_abstractslider_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnCustomEvent((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_connect_notify(void* self, void* signal) {
    QAbstractSlider_ConnectNotify((QAbstractSlider*)self, (QMetaMethod*)signal);
}

void q_abstractslider_qbase_connect_notify(void* self, void* signal) {
    QAbstractSlider_QBaseConnectNotify((QAbstractSlider*)self, (QMetaMethod*)signal);
}

void q_abstractslider_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnConnectNotify((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_disconnect_notify(void* self, void* signal) {
    QAbstractSlider_DisconnectNotify((QAbstractSlider*)self, (QMetaMethod*)signal);
}

void q_abstractslider_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractSlider_QBaseDisconnectNotify((QAbstractSlider*)self, (QMetaMethod*)signal);
}

void q_abstractslider_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSlider_OnDisconnectNotify((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_update_micro_focus(void* self) {
    QAbstractSlider_UpdateMicroFocus((QAbstractSlider*)self);
}

void q_abstractslider_qbase_update_micro_focus(void* self) {
    QAbstractSlider_QBaseUpdateMicroFocus((QAbstractSlider*)self);
}

void q_abstractslider_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractSlider_OnUpdateMicroFocus((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_create(void* self) {
    QAbstractSlider_Create((QAbstractSlider*)self);
}

void q_abstractslider_qbase_create(void* self) {
    QAbstractSlider_QBaseCreate((QAbstractSlider*)self);
}

void q_abstractslider_on_create(void* self, void (*slot)()) {
    QAbstractSlider_OnCreate((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_destroy(void* self) {
    QAbstractSlider_Destroy((QAbstractSlider*)self);
}

void q_abstractslider_qbase_destroy(void* self) {
    QAbstractSlider_QBaseDestroy((QAbstractSlider*)self);
}

void q_abstractslider_on_destroy(void* self, void (*slot)()) {
    QAbstractSlider_OnDestroy((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_focus_next_child(void* self) {
    return QAbstractSlider_FocusNextChild((QAbstractSlider*)self);
}

bool q_abstractslider_qbase_focus_next_child(void* self) {
    return QAbstractSlider_QBaseFocusNextChild((QAbstractSlider*)self);
}

void q_abstractslider_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractSlider_OnFocusNextChild((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_focus_previous_child(void* self) {
    return QAbstractSlider_FocusPreviousChild((QAbstractSlider*)self);
}

bool q_abstractslider_qbase_focus_previous_child(void* self) {
    return QAbstractSlider_QBaseFocusPreviousChild((QAbstractSlider*)self);
}

void q_abstractslider_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractSlider_OnFocusPreviousChild((QAbstractSlider*)self, (intptr_t)slot);
}

QObject* q_abstractslider_sender(void* self) {
    return QAbstractSlider_Sender((QAbstractSlider*)self);
}

QObject* q_abstractslider_qbase_sender(void* self) {
    return QAbstractSlider_QBaseSender((QAbstractSlider*)self);
}

void q_abstractslider_on_sender(void* self, QObject* (*slot)()) {
    QAbstractSlider_OnSender((QAbstractSlider*)self, (intptr_t)slot);
}

int32_t q_abstractslider_sender_signal_index(void* self) {
    return QAbstractSlider_SenderSignalIndex((QAbstractSlider*)self);
}

int32_t q_abstractslider_qbase_sender_signal_index(void* self) {
    return QAbstractSlider_QBaseSenderSignalIndex((QAbstractSlider*)self);
}

void q_abstractslider_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractSlider_OnSenderSignalIndex((QAbstractSlider*)self, (intptr_t)slot);
}

int32_t q_abstractslider_receivers(void* self, const char* signal) {
    return QAbstractSlider_Receivers((QAbstractSlider*)self, signal);
}

int32_t q_abstractslider_qbase_receivers(void* self, const char* signal) {
    return QAbstractSlider_QBaseReceivers((QAbstractSlider*)self, signal);
}

void q_abstractslider_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractSlider_OnReceivers((QAbstractSlider*)self, (intptr_t)slot);
}

bool q_abstractslider_is_signal_connected(void* self, void* signal) {
    return QAbstractSlider_IsSignalConnected((QAbstractSlider*)self, (QMetaMethod*)signal);
}

bool q_abstractslider_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractSlider_QBaseIsSignalConnected((QAbstractSlider*)self, (QMetaMethod*)signal);
}

void q_abstractslider_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractSlider_OnIsSignalConnected((QAbstractSlider*)self, (intptr_t)slot);
}

double q_abstractslider_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QAbstractSlider_GetDecodedMetricF((QAbstractSlider*)self, metricA, metricB);
}

double q_abstractslider_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QAbstractSlider_QBaseGetDecodedMetricF((QAbstractSlider*)self, metricA, metricB);
}

void q_abstractslider_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QAbstractSlider_OnGetDecodedMetricF((QAbstractSlider*)self, (intptr_t)slot);
}

void q_abstractslider_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_abstractslider_delete(void* self) {
    QAbstractSlider_Delete((QAbstractSlider*)(self));
}
