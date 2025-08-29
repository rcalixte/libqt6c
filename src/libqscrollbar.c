#include "libqabstractslider.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqscrollbar.hpp"
#include "libqscrollbar.h"

QScrollBar* q_scrollbar_new(void* parent) {
    return QScrollBar_new((QWidget*)parent);
}

QScrollBar* q_scrollbar_new2() {
    return QScrollBar_new2();
}

QScrollBar* q_scrollbar_new3(int32_t param1) {
    return QScrollBar_new3(param1);
}

QScrollBar* q_scrollbar_new4(int32_t param1, void* parent) {
    return QScrollBar_new4(param1, (QWidget*)parent);
}

const QMetaObject* q_scrollbar_meta_object(void* self) {
    return QScrollBar_MetaObject((QScrollBar*)self);
}

void* q_scrollbar_metacast(void* self, const char* param1) {
    return QScrollBar_Metacast((QScrollBar*)self, param1);
}

int32_t q_scrollbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScrollBar_Metacall((QScrollBar*)self, param1, param2, param3);
}

void q_scrollbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QScrollBar_OnMetacall((QScrollBar*)self, (intptr_t)callback);
}

int32_t q_scrollbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QScrollBar_QBaseMetacall((QScrollBar*)self, param1, param2, param3);
}

const char* q_scrollbar_tr(const char* s) {
    libqt_string _str = QScrollBar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_scrollbar_size_hint(void* self) {
    return QScrollBar_SizeHint((QScrollBar*)self);
}

void q_scrollbar_on_size_hint(void* self, QSize* (*callback)()) {
    QScrollBar_OnSizeHint((QScrollBar*)self, (intptr_t)callback);
}

QSize* q_scrollbar_qbase_size_hint(void* self) {
    return QScrollBar_QBaseSizeHint((QScrollBar*)self);
}

bool q_scrollbar_event(void* self, void* event) {
    return QScrollBar_Event((QScrollBar*)self, (QEvent*)event);
}

void q_scrollbar_on_event(void* self, bool (*callback)(void*, void*)) {
    QScrollBar_OnEvent((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_qbase_event(void* self, void* event) {
    return QScrollBar_QBaseEvent((QScrollBar*)self, (QEvent*)event);
}

void q_scrollbar_wheel_event(void* self, void* param1) {
    QScrollBar_WheelEvent((QScrollBar*)self, (QWheelEvent*)param1);
}

void q_scrollbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnWheelEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_wheel_event(void* self, void* param1) {
    QScrollBar_QBaseWheelEvent((QScrollBar*)self, (QWheelEvent*)param1);
}

void q_scrollbar_paint_event(void* self, void* param1) {
    QScrollBar_PaintEvent((QScrollBar*)self, (QPaintEvent*)param1);
}

void q_scrollbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnPaintEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_paint_event(void* self, void* param1) {
    QScrollBar_QBasePaintEvent((QScrollBar*)self, (QPaintEvent*)param1);
}

void q_scrollbar_mouse_press_event(void* self, void* param1) {
    QScrollBar_MousePressEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

void q_scrollbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnMousePressEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_mouse_press_event(void* self, void* param1) {
    QScrollBar_QBaseMousePressEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

void q_scrollbar_mouse_release_event(void* self, void* param1) {
    QScrollBar_MouseReleaseEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

void q_scrollbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnMouseReleaseEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_mouse_release_event(void* self, void* param1) {
    QScrollBar_QBaseMouseReleaseEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

void q_scrollbar_mouse_move_event(void* self, void* param1) {
    QScrollBar_MouseMoveEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

void q_scrollbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnMouseMoveEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_mouse_move_event(void* self, void* param1) {
    QScrollBar_QBaseMouseMoveEvent((QScrollBar*)self, (QMouseEvent*)param1);
}

void q_scrollbar_hide_event(void* self, void* param1) {
    QScrollBar_HideEvent((QScrollBar*)self, (QHideEvent*)param1);
}

void q_scrollbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnHideEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_hide_event(void* self, void* param1) {
    QScrollBar_QBaseHideEvent((QScrollBar*)self, (QHideEvent*)param1);
}

void q_scrollbar_slider_change(void* self, int32_t change) {
    QScrollBar_SliderChange((QScrollBar*)self, change);
}

void q_scrollbar_on_slider_change(void* self, void (*callback)(void*, int32_t)) {
    QScrollBar_OnSliderChange((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_slider_change(void* self, int32_t change) {
    QScrollBar_QBaseSliderChange((QScrollBar*)self, change);
}

void q_scrollbar_context_menu_event(void* self, void* param1) {
    QScrollBar_ContextMenuEvent((QScrollBar*)self, (QContextMenuEvent*)param1);
}

void q_scrollbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnContextMenuEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_context_menu_event(void* self, void* param1) {
    QScrollBar_QBaseContextMenuEvent((QScrollBar*)self, (QContextMenuEvent*)param1);
}

void q_scrollbar_init_style_option(void* self, void* option) {
    QScrollBar_InitStyleOption((QScrollBar*)self, (QStyleOptionSlider*)option);
}

void q_scrollbar_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnInitStyleOption((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_qbase_init_style_option(void* self, void* option) {
    QScrollBar_QBaseInitStyleOption((QScrollBar*)self, (QStyleOptionSlider*)option);
}

const char* q_scrollbar_tr2(const char* s, const char* c) {
    libqt_string _str = QScrollBar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scrollbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScrollBar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_scrollbar_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

void q_scrollbar_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

int32_t q_scrollbar_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

void q_scrollbar_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

int32_t q_scrollbar_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

void q_scrollbar_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

int32_t q_scrollbar_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

void q_scrollbar_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

int32_t q_scrollbar_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

void q_scrollbar_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

bool q_scrollbar_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

void q_scrollbar_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

bool q_scrollbar_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

void q_scrollbar_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

int32_t q_scrollbar_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

void q_scrollbar_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

bool q_scrollbar_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

void q_scrollbar_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

bool q_scrollbar_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

int32_t q_scrollbar_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

void q_scrollbar_trigger_action(void* self, int32_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

void q_scrollbar_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

void q_scrollbar_set_orientation(void* self, int32_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

void q_scrollbar_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

void q_scrollbar_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

void q_scrollbar_on_value_changed(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)callback);
}

void q_scrollbar_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

void q_scrollbar_on_slider_pressed(void* self, void (*callback)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)callback);
}

void q_scrollbar_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

void q_scrollbar_on_slider_moved(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)callback);
}

void q_scrollbar_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

void q_scrollbar_on_slider_released(void* self, void (*callback)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)callback);
}

void q_scrollbar_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

void q_scrollbar_on_range_changed(void* self, void (*callback)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)callback);
}

void q_scrollbar_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

void q_scrollbar_on_action_triggered(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)callback);
}

uintptr_t q_scrollbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_scrollbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_scrollbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_scrollbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_scrollbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_scrollbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_scrollbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_scrollbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_scrollbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_scrollbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_scrollbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_scrollbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_scrollbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_scrollbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_scrollbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_scrollbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_scrollbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_scrollbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_scrollbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_scrollbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_scrollbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_scrollbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_scrollbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_scrollbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_scrollbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_scrollbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_scrollbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_scrollbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_scrollbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_scrollbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_scrollbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_scrollbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_scrollbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_scrollbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_scrollbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_scrollbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_scrollbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_scrollbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_scrollbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_scrollbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_scrollbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_scrollbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_scrollbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_scrollbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_scrollbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_scrollbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_scrollbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_scrollbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_scrollbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_scrollbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_scrollbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_scrollbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_scrollbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_scrollbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_scrollbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_scrollbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_scrollbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_scrollbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_scrollbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_scrollbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_scrollbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_scrollbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_scrollbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_scrollbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_scrollbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_scrollbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_scrollbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_scrollbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_scrollbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_scrollbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_scrollbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_scrollbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_scrollbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_scrollbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_scrollbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_scrollbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_scrollbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_scrollbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_scrollbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_scrollbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_scrollbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_scrollbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_scrollbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_scrollbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_scrollbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_scrollbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_scrollbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_scrollbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_scrollbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_scrollbar_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_scrollbar_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_scrollbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_scrollbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_scrollbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scrollbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_scrollbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_scrollbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_scrollbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_scrollbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_scrollbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_scrollbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_scrollbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_scrollbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_scrollbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_scrollbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_scrollbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_scrollbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_scrollbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scrollbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_scrollbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_scrollbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_scrollbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_scrollbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_scrollbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_scrollbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_scrollbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_scrollbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_scrollbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_scrollbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_scrollbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_scrollbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_scrollbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_scrollbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_scrollbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_scrollbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_scrollbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_scrollbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_scrollbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_scrollbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_scrollbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_scrollbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_scrollbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_scrollbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_scrollbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_scrollbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_scrollbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_scrollbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_scrollbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_scrollbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_scrollbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_scrollbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_scrollbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_scrollbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_scrollbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_scrollbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_scrollbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_scrollbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_scrollbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_scrollbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_scrollbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_scrollbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_scrollbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_scrollbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_scrollbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_scrollbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_scrollbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_scrollbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_scrollbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_scrollbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_scrollbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_scrollbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_scrollbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_scrollbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_scrollbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_scrollbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_scrollbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_scrollbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_scrollbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_scrollbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_scrollbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_scrollbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_scrollbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_scrollbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_scrollbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_scrollbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_scrollbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_scrollbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_scrollbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_scrollbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_scrollbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_scrollbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_scrollbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_scrollbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_scrollbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_scrollbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_scrollbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_scrollbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_scrollbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_scrollbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_scrollbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_scrollbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_scrollbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_scrollbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_scrollbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_scrollbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_scrollbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_scrollbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_scrollbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_scrollbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_scrollbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_scrollbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_scrollbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_scrollbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_scrollbar_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_scrollbar_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_scrollbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_scrollbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_scrollbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_scrollbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_scrollbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_scrollbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_scrollbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_scrollbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_scrollbar_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_scrollbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_scrollbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_scrollbar_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_scrollbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_scrollbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_scrollbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_scrollbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_scrollbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_scrollbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_scrollbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_scrollbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_scrollbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_scrollbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_scrollbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_scrollbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_scrollbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_scrollbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_scrollbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_scrollbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_scrollbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_scrollbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_scrollbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_scrollbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_scrollbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_scrollbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_scrollbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_scrollbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_scrollbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_scrollbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_scrollbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_scrollbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_scrollbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_scrollbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_scrollbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_scrollbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_scrollbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_scrollbar_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_scrollbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_scrollbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_scrollbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_scrollbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_scrollbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_scrollbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_scrollbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_scrollbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scrollbar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scrollbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scrollbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scrollbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scrollbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scrollbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scrollbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scrollbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scrollbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scrollbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scrollbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scrollbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scrollbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scrollbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scrollbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scrollbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scrollbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scrollbar_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scrollbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scrollbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scrollbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scrollbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scrollbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scrollbar_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scrollbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scrollbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scrollbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scrollbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scrollbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scrollbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scrollbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scrollbar_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scrollbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scrollbar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scrollbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scrollbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scrollbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_scrollbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_scrollbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_scrollbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_scrollbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_scrollbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_scrollbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_scrollbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_scrollbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_scrollbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_scrollbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_scrollbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_scrollbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_scrollbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_scrollbar_key_press_event(void* self, void* ev) {
    QScrollBar_KeyPressEvent((QScrollBar*)self, (QKeyEvent*)ev);
}

void q_scrollbar_qbase_key_press_event(void* self, void* ev) {
    QScrollBar_QBaseKeyPressEvent((QScrollBar*)self, (QKeyEvent*)ev);
}

void q_scrollbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnKeyPressEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_timer_event(void* self, void* param1) {
    QScrollBar_TimerEvent((QScrollBar*)self, (QTimerEvent*)param1);
}

void q_scrollbar_qbase_timer_event(void* self, void* param1) {
    QScrollBar_QBaseTimerEvent((QScrollBar*)self, (QTimerEvent*)param1);
}

void q_scrollbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnTimerEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_change_event(void* self, void* e) {
    QScrollBar_ChangeEvent((QScrollBar*)self, (QEvent*)e);
}

void q_scrollbar_qbase_change_event(void* self, void* e) {
    QScrollBar_QBaseChangeEvent((QScrollBar*)self, (QEvent*)e);
}

void q_scrollbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnChangeEvent((QScrollBar*)self, (intptr_t)callback);
}

int32_t q_scrollbar_dev_type(void* self) {
    return QScrollBar_DevType((QScrollBar*)self);
}

int32_t q_scrollbar_qbase_dev_type(void* self) {
    return QScrollBar_QBaseDevType((QScrollBar*)self);
}

void q_scrollbar_on_dev_type(void* self, int32_t (*callback)()) {
    QScrollBar_OnDevType((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_set_visible(void* self, bool visible) {
    QScrollBar_SetVisible((QScrollBar*)self, visible);
}

void q_scrollbar_qbase_set_visible(void* self, bool visible) {
    QScrollBar_QBaseSetVisible((QScrollBar*)self, visible);
}

void q_scrollbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QScrollBar_OnSetVisible((QScrollBar*)self, (intptr_t)callback);
}

QSize* q_scrollbar_minimum_size_hint(void* self) {
    return QScrollBar_MinimumSizeHint((QScrollBar*)self);
}

QSize* q_scrollbar_qbase_minimum_size_hint(void* self) {
    return QScrollBar_QBaseMinimumSizeHint((QScrollBar*)self);
}

void q_scrollbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QScrollBar_OnMinimumSizeHint((QScrollBar*)self, (intptr_t)callback);
}

int32_t q_scrollbar_height_for_width(void* self, int param1) {
    return QScrollBar_HeightForWidth((QScrollBar*)self, param1);
}

int32_t q_scrollbar_qbase_height_for_width(void* self, int param1) {
    return QScrollBar_QBaseHeightForWidth((QScrollBar*)self, param1);
}

void q_scrollbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QScrollBar_OnHeightForWidth((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_has_height_for_width(void* self) {
    return QScrollBar_HasHeightForWidth((QScrollBar*)self);
}

bool q_scrollbar_qbase_has_height_for_width(void* self) {
    return QScrollBar_QBaseHasHeightForWidth((QScrollBar*)self);
}

void q_scrollbar_on_has_height_for_width(void* self, bool (*callback)()) {
    QScrollBar_OnHasHeightForWidth((QScrollBar*)self, (intptr_t)callback);
}

QPaintEngine* q_scrollbar_paint_engine(void* self) {
    return QScrollBar_PaintEngine((QScrollBar*)self);
}

QPaintEngine* q_scrollbar_qbase_paint_engine(void* self) {
    return QScrollBar_QBasePaintEngine((QScrollBar*)self);
}

void q_scrollbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QScrollBar_OnPaintEngine((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_mouse_double_click_event(void* self, void* event) {
    QScrollBar_MouseDoubleClickEvent((QScrollBar*)self, (QMouseEvent*)event);
}

void q_scrollbar_qbase_mouse_double_click_event(void* self, void* event) {
    QScrollBar_QBaseMouseDoubleClickEvent((QScrollBar*)self, (QMouseEvent*)event);
}

void q_scrollbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnMouseDoubleClickEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_key_release_event(void* self, void* event) {
    QScrollBar_KeyReleaseEvent((QScrollBar*)self, (QKeyEvent*)event);
}

void q_scrollbar_qbase_key_release_event(void* self, void* event) {
    QScrollBar_QBaseKeyReleaseEvent((QScrollBar*)self, (QKeyEvent*)event);
}

void q_scrollbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnKeyReleaseEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_focus_in_event(void* self, void* event) {
    QScrollBar_FocusInEvent((QScrollBar*)self, (QFocusEvent*)event);
}

void q_scrollbar_qbase_focus_in_event(void* self, void* event) {
    QScrollBar_QBaseFocusInEvent((QScrollBar*)self, (QFocusEvent*)event);
}

void q_scrollbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnFocusInEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_focus_out_event(void* self, void* event) {
    QScrollBar_FocusOutEvent((QScrollBar*)self, (QFocusEvent*)event);
}

void q_scrollbar_qbase_focus_out_event(void* self, void* event) {
    QScrollBar_QBaseFocusOutEvent((QScrollBar*)self, (QFocusEvent*)event);
}

void q_scrollbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnFocusOutEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_enter_event(void* self, void* event) {
    QScrollBar_EnterEvent((QScrollBar*)self, (QEnterEvent*)event);
}

void q_scrollbar_qbase_enter_event(void* self, void* event) {
    QScrollBar_QBaseEnterEvent((QScrollBar*)self, (QEnterEvent*)event);
}

void q_scrollbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnEnterEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_leave_event(void* self, void* event) {
    QScrollBar_LeaveEvent((QScrollBar*)self, (QEvent*)event);
}

void q_scrollbar_qbase_leave_event(void* self, void* event) {
    QScrollBar_QBaseLeaveEvent((QScrollBar*)self, (QEvent*)event);
}

void q_scrollbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnLeaveEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_move_event(void* self, void* event) {
    QScrollBar_MoveEvent((QScrollBar*)self, (QMoveEvent*)event);
}

void q_scrollbar_qbase_move_event(void* self, void* event) {
    QScrollBar_QBaseMoveEvent((QScrollBar*)self, (QMoveEvent*)event);
}

void q_scrollbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnMoveEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_resize_event(void* self, void* event) {
    QScrollBar_ResizeEvent((QScrollBar*)self, (QResizeEvent*)event);
}

void q_scrollbar_qbase_resize_event(void* self, void* event) {
    QScrollBar_QBaseResizeEvent((QScrollBar*)self, (QResizeEvent*)event);
}

void q_scrollbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnResizeEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_close_event(void* self, void* event) {
    QScrollBar_CloseEvent((QScrollBar*)self, (QCloseEvent*)event);
}

void q_scrollbar_qbase_close_event(void* self, void* event) {
    QScrollBar_QBaseCloseEvent((QScrollBar*)self, (QCloseEvent*)event);
}

void q_scrollbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnCloseEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_tablet_event(void* self, void* event) {
    QScrollBar_TabletEvent((QScrollBar*)self, (QTabletEvent*)event);
}

void q_scrollbar_qbase_tablet_event(void* self, void* event) {
    QScrollBar_QBaseTabletEvent((QScrollBar*)self, (QTabletEvent*)event);
}

void q_scrollbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnTabletEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_action_event(void* self, void* event) {
    QScrollBar_ActionEvent((QScrollBar*)self, (QActionEvent*)event);
}

void q_scrollbar_qbase_action_event(void* self, void* event) {
    QScrollBar_QBaseActionEvent((QScrollBar*)self, (QActionEvent*)event);
}

void q_scrollbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnActionEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_drag_enter_event(void* self, void* event) {
    QScrollBar_DragEnterEvent((QScrollBar*)self, (QDragEnterEvent*)event);
}

void q_scrollbar_qbase_drag_enter_event(void* self, void* event) {
    QScrollBar_QBaseDragEnterEvent((QScrollBar*)self, (QDragEnterEvent*)event);
}

void q_scrollbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnDragEnterEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_drag_move_event(void* self, void* event) {
    QScrollBar_DragMoveEvent((QScrollBar*)self, (QDragMoveEvent*)event);
}

void q_scrollbar_qbase_drag_move_event(void* self, void* event) {
    QScrollBar_QBaseDragMoveEvent((QScrollBar*)self, (QDragMoveEvent*)event);
}

void q_scrollbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnDragMoveEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_drag_leave_event(void* self, void* event) {
    QScrollBar_DragLeaveEvent((QScrollBar*)self, (QDragLeaveEvent*)event);
}

void q_scrollbar_qbase_drag_leave_event(void* self, void* event) {
    QScrollBar_QBaseDragLeaveEvent((QScrollBar*)self, (QDragLeaveEvent*)event);
}

void q_scrollbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnDragLeaveEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_drop_event(void* self, void* event) {
    QScrollBar_DropEvent((QScrollBar*)self, (QDropEvent*)event);
}

void q_scrollbar_qbase_drop_event(void* self, void* event) {
    QScrollBar_QBaseDropEvent((QScrollBar*)self, (QDropEvent*)event);
}

void q_scrollbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnDropEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_show_event(void* self, void* event) {
    QScrollBar_ShowEvent((QScrollBar*)self, (QShowEvent*)event);
}

void q_scrollbar_qbase_show_event(void* self, void* event) {
    QScrollBar_QBaseShowEvent((QScrollBar*)self, (QShowEvent*)event);
}

void q_scrollbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnShowEvent((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollBar_NativeEvent((QScrollBar*)self, qstring(eventType), message, result);
}

bool q_scrollbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollBar_QBaseNativeEvent((QScrollBar*)self, qstring(eventType), message, result);
}

void q_scrollbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QScrollBar_OnNativeEvent((QScrollBar*)self, (intptr_t)callback);
}

int32_t q_scrollbar_metric(void* self, int32_t param1) {
    return QScrollBar_Metric((QScrollBar*)self, param1);
}

int32_t q_scrollbar_qbase_metric(void* self, int32_t param1) {
    return QScrollBar_QBaseMetric((QScrollBar*)self, param1);
}

void q_scrollbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QScrollBar_OnMetric((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_init_painter(void* self, void* painter) {
    QScrollBar_InitPainter((QScrollBar*)self, (QPainter*)painter);
}

void q_scrollbar_qbase_init_painter(void* self, void* painter) {
    QScrollBar_QBaseInitPainter((QScrollBar*)self, (QPainter*)painter);
}

void q_scrollbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnInitPainter((QScrollBar*)self, (intptr_t)callback);
}

QPaintDevice* q_scrollbar_redirected(void* self, void* offset) {
    return QScrollBar_Redirected((QScrollBar*)self, (QPoint*)offset);
}

QPaintDevice* q_scrollbar_qbase_redirected(void* self, void* offset) {
    return QScrollBar_QBaseRedirected((QScrollBar*)self, (QPoint*)offset);
}

void q_scrollbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QScrollBar_OnRedirected((QScrollBar*)self, (intptr_t)callback);
}

QPainter* q_scrollbar_shared_painter(void* self) {
    return QScrollBar_SharedPainter((QScrollBar*)self);
}

QPainter* q_scrollbar_qbase_shared_painter(void* self) {
    return QScrollBar_QBaseSharedPainter((QScrollBar*)self);
}

void q_scrollbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    QScrollBar_OnSharedPainter((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_input_method_event(void* self, void* param1) {
    QScrollBar_InputMethodEvent((QScrollBar*)self, (QInputMethodEvent*)param1);
}

void q_scrollbar_qbase_input_method_event(void* self, void* param1) {
    QScrollBar_QBaseInputMethodEvent((QScrollBar*)self, (QInputMethodEvent*)param1);
}

void q_scrollbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnInputMethodEvent((QScrollBar*)self, (intptr_t)callback);
}

QVariant* q_scrollbar_input_method_query(void* self, int64_t param1) {
    return QScrollBar_InputMethodQuery((QScrollBar*)self, param1);
}

QVariant* q_scrollbar_qbase_input_method_query(void* self, int64_t param1) {
    return QScrollBar_QBaseInputMethodQuery((QScrollBar*)self, param1);
}

void q_scrollbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QScrollBar_OnInputMethodQuery((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_focus_next_prev_child(void* self, bool next) {
    return QScrollBar_FocusNextPrevChild((QScrollBar*)self, next);
}

bool q_scrollbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QScrollBar_QBaseFocusNextPrevChild((QScrollBar*)self, next);
}

void q_scrollbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QScrollBar_OnFocusNextPrevChild((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_event_filter(void* self, void* watched, void* event) {
    return QScrollBar_EventFilter((QScrollBar*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scrollbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QScrollBar_QBaseEventFilter((QScrollBar*)self, (QObject*)watched, (QEvent*)event);
}

void q_scrollbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QScrollBar_OnEventFilter((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_child_event(void* self, void* event) {
    QScrollBar_ChildEvent((QScrollBar*)self, (QChildEvent*)event);
}

void q_scrollbar_qbase_child_event(void* self, void* event) {
    QScrollBar_QBaseChildEvent((QScrollBar*)self, (QChildEvent*)event);
}

void q_scrollbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnChildEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_custom_event(void* self, void* event) {
    QScrollBar_CustomEvent((QScrollBar*)self, (QEvent*)event);
}

void q_scrollbar_qbase_custom_event(void* self, void* event) {
    QScrollBar_QBaseCustomEvent((QScrollBar*)self, (QEvent*)event);
}

void q_scrollbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnCustomEvent((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_connect_notify(void* self, void* signal) {
    QScrollBar_ConnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

void q_scrollbar_qbase_connect_notify(void* self, void* signal) {
    QScrollBar_QBaseConnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

void q_scrollbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnConnectNotify((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_disconnect_notify(void* self, void* signal) {
    QScrollBar_DisconnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

void q_scrollbar_qbase_disconnect_notify(void* self, void* signal) {
    QScrollBar_QBaseDisconnectNotify((QScrollBar*)self, (QMetaMethod*)signal);
}

void q_scrollbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QScrollBar_OnDisconnectNotify((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_set_repeat_action(void* self, int32_t action) {
    QScrollBar_SetRepeatAction((QScrollBar*)self, action);
}

void q_scrollbar_qbase_set_repeat_action(void* self, int32_t action) {
    QScrollBar_QBaseSetRepeatAction((QScrollBar*)self, action);
}

void q_scrollbar_on_set_repeat_action(void* self, void (*callback)(void*, int32_t)) {
    QScrollBar_OnSetRepeatAction((QScrollBar*)self, (intptr_t)callback);
}

int32_t q_scrollbar_repeat_action(void* self) {
    return QScrollBar_RepeatAction((QScrollBar*)self);
}

int32_t q_scrollbar_qbase_repeat_action(void* self) {
    return QScrollBar_QBaseRepeatAction((QScrollBar*)self);
}

void q_scrollbar_on_repeat_action(void* self, int32_t (*callback)()) {
    QScrollBar_OnRepeatAction((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_update_micro_focus(void* self) {
    QScrollBar_UpdateMicroFocus((QScrollBar*)self);
}

void q_scrollbar_qbase_update_micro_focus(void* self) {
    QScrollBar_QBaseUpdateMicroFocus((QScrollBar*)self);
}

void q_scrollbar_on_update_micro_focus(void* self, void (*callback)()) {
    QScrollBar_OnUpdateMicroFocus((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_create(void* self) {
    QScrollBar_Create((QScrollBar*)self);
}

void q_scrollbar_qbase_create(void* self) {
    QScrollBar_QBaseCreate((QScrollBar*)self);
}

void q_scrollbar_on_create(void* self, void (*callback)()) {
    QScrollBar_OnCreate((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_destroy(void* self) {
    QScrollBar_Destroy((QScrollBar*)self);
}

void q_scrollbar_qbase_destroy(void* self) {
    QScrollBar_QBaseDestroy((QScrollBar*)self);
}

void q_scrollbar_on_destroy(void* self, void (*callback)()) {
    QScrollBar_OnDestroy((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_focus_next_child(void* self) {
    return QScrollBar_FocusNextChild((QScrollBar*)self);
}

bool q_scrollbar_qbase_focus_next_child(void* self) {
    return QScrollBar_QBaseFocusNextChild((QScrollBar*)self);
}

void q_scrollbar_on_focus_next_child(void* self, bool (*callback)()) {
    QScrollBar_OnFocusNextChild((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_focus_previous_child(void* self) {
    return QScrollBar_FocusPreviousChild((QScrollBar*)self);
}

bool q_scrollbar_qbase_focus_previous_child(void* self) {
    return QScrollBar_QBaseFocusPreviousChild((QScrollBar*)self);
}

void q_scrollbar_on_focus_previous_child(void* self, bool (*callback)()) {
    QScrollBar_OnFocusPreviousChild((QScrollBar*)self, (intptr_t)callback);
}

QObject* q_scrollbar_sender(void* self) {
    return QScrollBar_Sender((QScrollBar*)self);
}

QObject* q_scrollbar_qbase_sender(void* self) {
    return QScrollBar_QBaseSender((QScrollBar*)self);
}

void q_scrollbar_on_sender(void* self, QObject* (*callback)()) {
    QScrollBar_OnSender((QScrollBar*)self, (intptr_t)callback);
}

int32_t q_scrollbar_sender_signal_index(void* self) {
    return QScrollBar_SenderSignalIndex((QScrollBar*)self);
}

int32_t q_scrollbar_qbase_sender_signal_index(void* self) {
    return QScrollBar_QBaseSenderSignalIndex((QScrollBar*)self);
}

void q_scrollbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QScrollBar_OnSenderSignalIndex((QScrollBar*)self, (intptr_t)callback);
}

int32_t q_scrollbar_receivers(void* self, const char* signal) {
    return QScrollBar_Receivers((QScrollBar*)self, signal);
}

int32_t q_scrollbar_qbase_receivers(void* self, const char* signal) {
    return QScrollBar_QBaseReceivers((QScrollBar*)self, signal);
}

void q_scrollbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QScrollBar_OnReceivers((QScrollBar*)self, (intptr_t)callback);
}

bool q_scrollbar_is_signal_connected(void* self, void* signal) {
    return QScrollBar_IsSignalConnected((QScrollBar*)self, (QMetaMethod*)signal);
}

bool q_scrollbar_qbase_is_signal_connected(void* self, void* signal) {
    return QScrollBar_QBaseIsSignalConnected((QScrollBar*)self, (QMetaMethod*)signal);
}

void q_scrollbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QScrollBar_OnIsSignalConnected((QScrollBar*)self, (intptr_t)callback);
}

double q_scrollbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QScrollBar_GetDecodedMetricF((QScrollBar*)self, metricA, metricB);
}

double q_scrollbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QScrollBar_QBaseGetDecodedMetricF((QScrollBar*)self, metricA, metricB);
}

void q_scrollbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QScrollBar_OnGetDecodedMetricF((QScrollBar*)self, (intptr_t)callback);
}

void q_scrollbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scrollbar_delete(void* self) {
    QScrollBar_Delete((QScrollBar*)(self));
}
