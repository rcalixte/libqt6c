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

QSlider* q_slider_new(void* parent) {
    return QSlider_new((QWidget*)parent);
}

QSlider* q_slider_new2() {
    return QSlider_new2();
}

QSlider* q_slider_new3(int64_t orientation) {
    return QSlider_new3(orientation);
}

QSlider* q_slider_new4(int64_t orientation, void* parent) {
    return QSlider_new4(orientation, (QWidget*)parent);
}

QMetaObject* q_slider_meta_object(void* self) {
    return QSlider_MetaObject((QSlider*)self);
}

void* q_slider_metacast(void* self, const char* param1) {
    return QSlider_Metacast((QSlider*)self, param1);
}

int32_t q_slider_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSlider_Metacall((QSlider*)self, param1, param2, param3);
}

void q_slider_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSlider_OnMetacall((QSlider*)self, (intptr_t)slot);
}

int32_t q_slider_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSlider_QBaseMetacall((QSlider*)self, param1, param2, param3);
}

const char* q_slider_tr(const char* s) {
    libqt_string _str = QSlider_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_slider_size_hint(void* self) {
    return QSlider_SizeHint((QSlider*)self);
}

void q_slider_on_size_hint(void* self, QSize* (*slot)()) {
    QSlider_OnSizeHint((QSlider*)self, (intptr_t)slot);
}

QSize* q_slider_qbase_size_hint(void* self) {
    return QSlider_QBaseSizeHint((QSlider*)self);
}

QSize* q_slider_minimum_size_hint(void* self) {
    return QSlider_MinimumSizeHint((QSlider*)self);
}

void q_slider_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QSlider_OnMinimumSizeHint((QSlider*)self, (intptr_t)slot);
}

QSize* q_slider_qbase_minimum_size_hint(void* self) {
    return QSlider_QBaseMinimumSizeHint((QSlider*)self);
}

void q_slider_set_tick_position(void* self, int64_t position) {
    QSlider_SetTickPosition((QSlider*)self, position);
}

int64_t q_slider_tick_position(void* self) {
    return QSlider_TickPosition((QSlider*)self);
}

void q_slider_set_tick_interval(void* self, int ti) {
    QSlider_SetTickInterval((QSlider*)self, ti);
}

int32_t q_slider_tick_interval(void* self) {
    return QSlider_TickInterval((QSlider*)self);
}

bool q_slider_event(void* self, void* event) {
    return QSlider_Event((QSlider*)self, (QEvent*)event);
}

void q_slider_on_event(void* self, bool (*slot)(void*, void*)) {
    QSlider_OnEvent((QSlider*)self, (intptr_t)slot);
}

bool q_slider_qbase_event(void* self, void* event) {
    return QSlider_QBaseEvent((QSlider*)self, (QEvent*)event);
}

void q_slider_paint_event(void* self, void* ev) {
    QSlider_PaintEvent((QSlider*)self, (QPaintEvent*)ev);
}

void q_slider_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnPaintEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_qbase_paint_event(void* self, void* ev) {
    QSlider_QBasePaintEvent((QSlider*)self, (QPaintEvent*)ev);
}

void q_slider_mouse_press_event(void* self, void* ev) {
    QSlider_MousePressEvent((QSlider*)self, (QMouseEvent*)ev);
}

void q_slider_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMousePressEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_qbase_mouse_press_event(void* self, void* ev) {
    QSlider_QBaseMousePressEvent((QSlider*)self, (QMouseEvent*)ev);
}

void q_slider_mouse_release_event(void* self, void* ev) {
    QSlider_MouseReleaseEvent((QSlider*)self, (QMouseEvent*)ev);
}

void q_slider_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMouseReleaseEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_qbase_mouse_release_event(void* self, void* ev) {
    QSlider_QBaseMouseReleaseEvent((QSlider*)self, (QMouseEvent*)ev);
}

void q_slider_mouse_move_event(void* self, void* ev) {
    QSlider_MouseMoveEvent((QSlider*)self, (QMouseEvent*)ev);
}

void q_slider_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMouseMoveEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_qbase_mouse_move_event(void* self, void* ev) {
    QSlider_QBaseMouseMoveEvent((QSlider*)self, (QMouseEvent*)ev);
}

void q_slider_init_style_option(void* self, void* option) {
    QSlider_InitStyleOption((QSlider*)self, (QStyleOptionSlider*)option);
}

void q_slider_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QSlider_OnInitStyleOption((QSlider*)self, (intptr_t)slot);
}

void q_slider_qbase_init_style_option(void* self, void* option) {
    QSlider_QBaseInitStyleOption((QSlider*)self, (QStyleOptionSlider*)option);
}

const char* q_slider_tr2(const char* s, const char* c) {
    libqt_string _str = QSlider_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_slider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSlider_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_slider_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

void q_slider_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

int32_t q_slider_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

void q_slider_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

int32_t q_slider_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

void q_slider_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

int32_t q_slider_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

void q_slider_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

int32_t q_slider_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

void q_slider_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

bool q_slider_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

void q_slider_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

bool q_slider_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

void q_slider_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

int32_t q_slider_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

void q_slider_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

bool q_slider_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

void q_slider_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

bool q_slider_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

int32_t q_slider_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

void q_slider_trigger_action(void* self, int64_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

void q_slider_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

void q_slider_set_orientation(void* self, int64_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

void q_slider_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

void q_slider_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

void q_slider_on_value_changed(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)slot);
}

void q_slider_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

void q_slider_on_slider_pressed(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)slot);
}

void q_slider_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

void q_slider_on_slider_moved(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)slot);
}

void q_slider_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

void q_slider_on_slider_released(void* self, void (*slot)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)slot);
}

void q_slider_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

void q_slider_on_range_changed(void* self, void (*slot)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)slot);
}

void q_slider_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

void q_slider_on_action_triggered(void* self, void (*slot)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)slot);
}

uintptr_t q_slider_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_slider_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_slider_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_slider_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_slider_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_slider_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_slider_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_slider_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_slider_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_slider_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_slider_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_slider_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_slider_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_slider_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_slider_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_slider_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_slider_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_slider_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_slider_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_slider_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_slider_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_slider_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_slider_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_slider_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_slider_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_slider_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_slider_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_slider_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_slider_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_slider_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_slider_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_slider_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_slider_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_slider_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_slider_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_slider_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_slider_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_slider_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_slider_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_slider_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_slider_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_slider_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_slider_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_slider_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_slider_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_slider_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_slider_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_slider_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_slider_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_slider_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_slider_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_slider_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_slider_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_slider_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_slider_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_slider_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_slider_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_slider_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_slider_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_slider_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_slider_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_slider_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_slider_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_slider_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_slider_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_slider_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_slider_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_slider_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_slider_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_slider_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_slider_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_slider_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_slider_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_slider_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_slider_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_slider_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_slider_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_slider_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_slider_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_slider_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_slider_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_slider_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_slider_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_slider_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_slider_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_slider_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_slider_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_slider_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_slider_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_slider_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_slider_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_slider_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_slider_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_slider_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_slider_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_slider_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_slider_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_slider_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_slider_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_slider_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_slider_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_slider_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_slider_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_slider_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_slider_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_slider_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_slider_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_slider_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_slider_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_slider_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_slider_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_slider_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_slider_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_slider_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_slider_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_slider_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_slider_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_slider_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_slider_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_slider_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_slider_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_slider_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_slider_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_slider_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_slider_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_slider_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_slider_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_slider_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_slider_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_slider_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_slider_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_slider_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_slider_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_slider_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_slider_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_slider_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_slider_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_slider_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_slider_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_slider_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_slider_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_slider_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_slider_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_slider_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_slider_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_slider_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_slider_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_slider_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_slider_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_slider_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_slider_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_slider_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_slider_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_slider_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_slider_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_slider_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_slider_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_slider_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_slider_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_slider_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_slider_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_slider_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_slider_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_slider_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_slider_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_slider_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_slider_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_slider_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_slider_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_slider_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_slider_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_slider_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_slider_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_slider_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_slider_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_slider_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_slider_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_slider_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_slider_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_slider_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_slider_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_slider_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_slider_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_slider_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_slider_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_slider_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_slider_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_slider_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_slider_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_slider_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_slider_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_slider_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_slider_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_slider_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_slider_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_slider_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_slider_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_slider_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_slider_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_slider_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_slider_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_slider_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_slider_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_slider_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_slider_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_slider_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_slider_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_slider_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_slider_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

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

void q_slider_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_slider_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_slider_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_slider_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_slider_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_slider_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_slider_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_slider_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_slider_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_slider_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_slider_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_slider_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_slider_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_slider_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_slider_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_slider_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_slider_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_slider_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_slider_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_slider_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_slider_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_slider_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_slider_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_slider_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_slider_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_slider_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_slider_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_slider_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_slider_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_slider_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_slider_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_slider_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_slider_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_slider_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_slider_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_slider_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_slider_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_slider_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_slider_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_slider_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_slider_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_slider_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_slider_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_slider_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_slider_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_slider_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_slider_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_slider_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_slider_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_slider_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_slider_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_slider_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_slider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_slider_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_slider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_slider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_slider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_slider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_slider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_slider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_slider_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_slider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_slider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_slider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_slider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_slider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_slider_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_slider_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_slider_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_slider_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_slider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_slider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_slider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_slider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_slider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_slider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_slider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_slider_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_slider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_slider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_slider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_slider_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_slider_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_slider_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_slider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_slider_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_slider_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_slider_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_slider_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_slider_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_slider_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_slider_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_slider_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_slider_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_slider_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_slider_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_slider_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_slider_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

void q_slider_slider_change(void* self, int64_t change) {
    QSlider_SliderChange((QSlider*)self, change);
}

void q_slider_qbase_slider_change(void* self, int64_t change) {
    QSlider_QBaseSliderChange((QSlider*)self, change);
}

void q_slider_on_slider_change(void* self, void (*slot)(void*, int64_t)) {
    QSlider_OnSliderChange((QSlider*)self, (intptr_t)slot);
}

void q_slider_key_press_event(void* self, void* ev) {
    QSlider_KeyPressEvent((QSlider*)self, (QKeyEvent*)ev);
}

void q_slider_qbase_key_press_event(void* self, void* ev) {
    QSlider_QBaseKeyPressEvent((QSlider*)self, (QKeyEvent*)ev);
}

void q_slider_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnKeyPressEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_timer_event(void* self, void* param1) {
    QSlider_TimerEvent((QSlider*)self, (QTimerEvent*)param1);
}

void q_slider_qbase_timer_event(void* self, void* param1) {
    QSlider_QBaseTimerEvent((QSlider*)self, (QTimerEvent*)param1);
}

void q_slider_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnTimerEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_wheel_event(void* self, void* e) {
    QSlider_WheelEvent((QSlider*)self, (QWheelEvent*)e);
}

void q_slider_qbase_wheel_event(void* self, void* e) {
    QSlider_QBaseWheelEvent((QSlider*)self, (QWheelEvent*)e);
}

void q_slider_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnWheelEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_change_event(void* self, void* e) {
    QSlider_ChangeEvent((QSlider*)self, (QEvent*)e);
}

void q_slider_qbase_change_event(void* self, void* e) {
    QSlider_QBaseChangeEvent((QSlider*)self, (QEvent*)e);
}

void q_slider_on_change_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnChangeEvent((QSlider*)self, (intptr_t)slot);
}

int32_t q_slider_dev_type(void* self) {
    return QSlider_DevType((QSlider*)self);
}

int32_t q_slider_qbase_dev_type(void* self) {
    return QSlider_QBaseDevType((QSlider*)self);
}

void q_slider_on_dev_type(void* self, int32_t (*slot)()) {
    QSlider_OnDevType((QSlider*)self, (intptr_t)slot);
}

void q_slider_set_visible(void* self, bool visible) {
    QSlider_SetVisible((QSlider*)self, visible);
}

void q_slider_qbase_set_visible(void* self, bool visible) {
    QSlider_QBaseSetVisible((QSlider*)self, visible);
}

void q_slider_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QSlider_OnSetVisible((QSlider*)self, (intptr_t)slot);
}

int32_t q_slider_height_for_width(void* self, int param1) {
    return QSlider_HeightForWidth((QSlider*)self, param1);
}

int32_t q_slider_qbase_height_for_width(void* self, int param1) {
    return QSlider_QBaseHeightForWidth((QSlider*)self, param1);
}

void q_slider_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QSlider_OnHeightForWidth((QSlider*)self, (intptr_t)slot);
}

bool q_slider_has_height_for_width(void* self) {
    return QSlider_HasHeightForWidth((QSlider*)self);
}

bool q_slider_qbase_has_height_for_width(void* self) {
    return QSlider_QBaseHasHeightForWidth((QSlider*)self);
}

void q_slider_on_has_height_for_width(void* self, bool (*slot)()) {
    QSlider_OnHasHeightForWidth((QSlider*)self, (intptr_t)slot);
}

QPaintEngine* q_slider_paint_engine(void* self) {
    return QSlider_PaintEngine((QSlider*)self);
}

QPaintEngine* q_slider_qbase_paint_engine(void* self) {
    return QSlider_QBasePaintEngine((QSlider*)self);
}

void q_slider_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSlider_OnPaintEngine((QSlider*)self, (intptr_t)slot);
}

void q_slider_mouse_double_click_event(void* self, void* event) {
    QSlider_MouseDoubleClickEvent((QSlider*)self, (QMouseEvent*)event);
}

void q_slider_qbase_mouse_double_click_event(void* self, void* event) {
    QSlider_QBaseMouseDoubleClickEvent((QSlider*)self, (QMouseEvent*)event);
}

void q_slider_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMouseDoubleClickEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_key_release_event(void* self, void* event) {
    QSlider_KeyReleaseEvent((QSlider*)self, (QKeyEvent*)event);
}

void q_slider_qbase_key_release_event(void* self, void* event) {
    QSlider_QBaseKeyReleaseEvent((QSlider*)self, (QKeyEvent*)event);
}

void q_slider_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnKeyReleaseEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_focus_in_event(void* self, void* event) {
    QSlider_FocusInEvent((QSlider*)self, (QFocusEvent*)event);
}

void q_slider_qbase_focus_in_event(void* self, void* event) {
    QSlider_QBaseFocusInEvent((QSlider*)self, (QFocusEvent*)event);
}

void q_slider_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnFocusInEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_focus_out_event(void* self, void* event) {
    QSlider_FocusOutEvent((QSlider*)self, (QFocusEvent*)event);
}

void q_slider_qbase_focus_out_event(void* self, void* event) {
    QSlider_QBaseFocusOutEvent((QSlider*)self, (QFocusEvent*)event);
}

void q_slider_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnFocusOutEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_enter_event(void* self, void* event) {
    QSlider_EnterEvent((QSlider*)self, (QEnterEvent*)event);
}

void q_slider_qbase_enter_event(void* self, void* event) {
    QSlider_QBaseEnterEvent((QSlider*)self, (QEnterEvent*)event);
}

void q_slider_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnEnterEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_leave_event(void* self, void* event) {
    QSlider_LeaveEvent((QSlider*)self, (QEvent*)event);
}

void q_slider_qbase_leave_event(void* self, void* event) {
    QSlider_QBaseLeaveEvent((QSlider*)self, (QEvent*)event);
}

void q_slider_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnLeaveEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_move_event(void* self, void* event) {
    QSlider_MoveEvent((QSlider*)self, (QMoveEvent*)event);
}

void q_slider_qbase_move_event(void* self, void* event) {
    QSlider_QBaseMoveEvent((QSlider*)self, (QMoveEvent*)event);
}

void q_slider_on_move_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnMoveEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_resize_event(void* self, void* event) {
    QSlider_ResizeEvent((QSlider*)self, (QResizeEvent*)event);
}

void q_slider_qbase_resize_event(void* self, void* event) {
    QSlider_QBaseResizeEvent((QSlider*)self, (QResizeEvent*)event);
}

void q_slider_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnResizeEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_close_event(void* self, void* event) {
    QSlider_CloseEvent((QSlider*)self, (QCloseEvent*)event);
}

void q_slider_qbase_close_event(void* self, void* event) {
    QSlider_QBaseCloseEvent((QSlider*)self, (QCloseEvent*)event);
}

void q_slider_on_close_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnCloseEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_context_menu_event(void* self, void* event) {
    QSlider_ContextMenuEvent((QSlider*)self, (QContextMenuEvent*)event);
}

void q_slider_qbase_context_menu_event(void* self, void* event) {
    QSlider_QBaseContextMenuEvent((QSlider*)self, (QContextMenuEvent*)event);
}

void q_slider_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnContextMenuEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_tablet_event(void* self, void* event) {
    QSlider_TabletEvent((QSlider*)self, (QTabletEvent*)event);
}

void q_slider_qbase_tablet_event(void* self, void* event) {
    QSlider_QBaseTabletEvent((QSlider*)self, (QTabletEvent*)event);
}

void q_slider_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnTabletEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_action_event(void* self, void* event) {
    QSlider_ActionEvent((QSlider*)self, (QActionEvent*)event);
}

void q_slider_qbase_action_event(void* self, void* event) {
    QSlider_QBaseActionEvent((QSlider*)self, (QActionEvent*)event);
}

void q_slider_on_action_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnActionEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_drag_enter_event(void* self, void* event) {
    QSlider_DragEnterEvent((QSlider*)self, (QDragEnterEvent*)event);
}

void q_slider_qbase_drag_enter_event(void* self, void* event) {
    QSlider_QBaseDragEnterEvent((QSlider*)self, (QDragEnterEvent*)event);
}

void q_slider_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDragEnterEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_drag_move_event(void* self, void* event) {
    QSlider_DragMoveEvent((QSlider*)self, (QDragMoveEvent*)event);
}

void q_slider_qbase_drag_move_event(void* self, void* event) {
    QSlider_QBaseDragMoveEvent((QSlider*)self, (QDragMoveEvent*)event);
}

void q_slider_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDragMoveEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_drag_leave_event(void* self, void* event) {
    QSlider_DragLeaveEvent((QSlider*)self, (QDragLeaveEvent*)event);
}

void q_slider_qbase_drag_leave_event(void* self, void* event) {
    QSlider_QBaseDragLeaveEvent((QSlider*)self, (QDragLeaveEvent*)event);
}

void q_slider_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDragLeaveEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_drop_event(void* self, void* event) {
    QSlider_DropEvent((QSlider*)self, (QDropEvent*)event);
}

void q_slider_qbase_drop_event(void* self, void* event) {
    QSlider_QBaseDropEvent((QSlider*)self, (QDropEvent*)event);
}

void q_slider_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDropEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_show_event(void* self, void* event) {
    QSlider_ShowEvent((QSlider*)self, (QShowEvent*)event);
}

void q_slider_qbase_show_event(void* self, void* event) {
    QSlider_QBaseShowEvent((QSlider*)self, (QShowEvent*)event);
}

void q_slider_on_show_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnShowEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_hide_event(void* self, void* event) {
    QSlider_HideEvent((QSlider*)self, (QHideEvent*)event);
}

void q_slider_qbase_hide_event(void* self, void* event) {
    QSlider_QBaseHideEvent((QSlider*)self, (QHideEvent*)event);
}

void q_slider_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnHideEvent((QSlider*)self, (intptr_t)slot);
}

bool q_slider_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSlider_NativeEvent((QSlider*)self, qstring(eventType), message, result);
}

bool q_slider_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSlider_QBaseNativeEvent((QSlider*)self, qstring(eventType), message, result);
}

void q_slider_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QSlider_OnNativeEvent((QSlider*)self, (intptr_t)slot);
}

int32_t q_slider_metric(void* self, int64_t param1) {
    return QSlider_Metric((QSlider*)self, param1);
}

int32_t q_slider_qbase_metric(void* self, int64_t param1) {
    return QSlider_QBaseMetric((QSlider*)self, param1);
}

void q_slider_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSlider_OnMetric((QSlider*)self, (intptr_t)slot);
}

void q_slider_init_painter(void* self, void* painter) {
    QSlider_InitPainter((QSlider*)self, (QPainter*)painter);
}

void q_slider_qbase_init_painter(void* self, void* painter) {
    QSlider_QBaseInitPainter((QSlider*)self, (QPainter*)painter);
}

void q_slider_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSlider_OnInitPainter((QSlider*)self, (intptr_t)slot);
}

QPaintDevice* q_slider_redirected(void* self, void* offset) {
    return QSlider_Redirected((QSlider*)self, (QPoint*)offset);
}

QPaintDevice* q_slider_qbase_redirected(void* self, void* offset) {
    return QSlider_QBaseRedirected((QSlider*)self, (QPoint*)offset);
}

void q_slider_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSlider_OnRedirected((QSlider*)self, (intptr_t)slot);
}

QPainter* q_slider_shared_painter(void* self) {
    return QSlider_SharedPainter((QSlider*)self);
}

QPainter* q_slider_qbase_shared_painter(void* self) {
    return QSlider_QBaseSharedPainter((QSlider*)self);
}

void q_slider_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSlider_OnSharedPainter((QSlider*)self, (intptr_t)slot);
}

void q_slider_input_method_event(void* self, void* param1) {
    QSlider_InputMethodEvent((QSlider*)self, (QInputMethodEvent*)param1);
}

void q_slider_qbase_input_method_event(void* self, void* param1) {
    QSlider_QBaseInputMethodEvent((QSlider*)self, (QInputMethodEvent*)param1);
}

void q_slider_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnInputMethodEvent((QSlider*)self, (intptr_t)slot);
}

QVariant* q_slider_input_method_query(void* self, int64_t param1) {
    return QSlider_InputMethodQuery((QSlider*)self, param1);
}

QVariant* q_slider_qbase_input_method_query(void* self, int64_t param1) {
    return QSlider_QBaseInputMethodQuery((QSlider*)self, param1);
}

void q_slider_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSlider_OnInputMethodQuery((QSlider*)self, (intptr_t)slot);
}

bool q_slider_focus_next_prev_child(void* self, bool next) {
    return QSlider_FocusNextPrevChild((QSlider*)self, next);
}

bool q_slider_qbase_focus_next_prev_child(void* self, bool next) {
    return QSlider_QBaseFocusNextPrevChild((QSlider*)self, next);
}

void q_slider_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QSlider_OnFocusNextPrevChild((QSlider*)self, (intptr_t)slot);
}

bool q_slider_event_filter(void* self, void* watched, void* event) {
    return QSlider_EventFilter((QSlider*)self, (QObject*)watched, (QEvent*)event);
}

bool q_slider_qbase_event_filter(void* self, void* watched, void* event) {
    return QSlider_QBaseEventFilter((QSlider*)self, (QObject*)watched, (QEvent*)event);
}

void q_slider_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSlider_OnEventFilter((QSlider*)self, (intptr_t)slot);
}

void q_slider_child_event(void* self, void* event) {
    QSlider_ChildEvent((QSlider*)self, (QChildEvent*)event);
}

void q_slider_qbase_child_event(void* self, void* event) {
    QSlider_QBaseChildEvent((QSlider*)self, (QChildEvent*)event);
}

void q_slider_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnChildEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_custom_event(void* self, void* event) {
    QSlider_CustomEvent((QSlider*)self, (QEvent*)event);
}

void q_slider_qbase_custom_event(void* self, void* event) {
    QSlider_QBaseCustomEvent((QSlider*)self, (QEvent*)event);
}

void q_slider_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSlider_OnCustomEvent((QSlider*)self, (intptr_t)slot);
}

void q_slider_connect_notify(void* self, void* signal) {
    QSlider_ConnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

void q_slider_qbase_connect_notify(void* self, void* signal) {
    QSlider_QBaseConnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

void q_slider_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSlider_OnConnectNotify((QSlider*)self, (intptr_t)slot);
}

void q_slider_disconnect_notify(void* self, void* signal) {
    QSlider_DisconnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

void q_slider_qbase_disconnect_notify(void* self, void* signal) {
    QSlider_QBaseDisconnectNotify((QSlider*)self, (QMetaMethod*)signal);
}

void q_slider_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSlider_OnDisconnectNotify((QSlider*)self, (intptr_t)slot);
}

void q_slider_set_repeat_action(void* self, int64_t action) {
    QSlider_SetRepeatAction((QSlider*)self, action);
}

void q_slider_qbase_set_repeat_action(void* self, int64_t action) {
    QSlider_QBaseSetRepeatAction((QSlider*)self, action);
}

void q_slider_on_set_repeat_action(void* self, void (*slot)(void*, int64_t)) {
    QSlider_OnSetRepeatAction((QSlider*)self, (intptr_t)slot);
}

int64_t q_slider_repeat_action(void* self) {
    return QSlider_RepeatAction((QSlider*)self);
}

int64_t q_slider_qbase_repeat_action(void* self) {
    return QSlider_QBaseRepeatAction((QSlider*)self);
}

void q_slider_on_repeat_action(void* self, int64_t (*slot)()) {
    QSlider_OnRepeatAction((QSlider*)self, (intptr_t)slot);
}

void q_slider_update_micro_focus(void* self) {
    QSlider_UpdateMicroFocus((QSlider*)self);
}

void q_slider_qbase_update_micro_focus(void* self) {
    QSlider_QBaseUpdateMicroFocus((QSlider*)self);
}

void q_slider_on_update_micro_focus(void* self, void (*slot)()) {
    QSlider_OnUpdateMicroFocus((QSlider*)self, (intptr_t)slot);
}

void q_slider_create(void* self) {
    QSlider_Create((QSlider*)self);
}

void q_slider_qbase_create(void* self) {
    QSlider_QBaseCreate((QSlider*)self);
}

void q_slider_on_create(void* self, void (*slot)()) {
    QSlider_OnCreate((QSlider*)self, (intptr_t)slot);
}

void q_slider_destroy(void* self) {
    QSlider_Destroy((QSlider*)self);
}

void q_slider_qbase_destroy(void* self) {
    QSlider_QBaseDestroy((QSlider*)self);
}

void q_slider_on_destroy(void* self, void (*slot)()) {
    QSlider_OnDestroy((QSlider*)self, (intptr_t)slot);
}

bool q_slider_focus_next_child(void* self) {
    return QSlider_FocusNextChild((QSlider*)self);
}

bool q_slider_qbase_focus_next_child(void* self) {
    return QSlider_QBaseFocusNextChild((QSlider*)self);
}

void q_slider_on_focus_next_child(void* self, bool (*slot)()) {
    QSlider_OnFocusNextChild((QSlider*)self, (intptr_t)slot);
}

bool q_slider_focus_previous_child(void* self) {
    return QSlider_FocusPreviousChild((QSlider*)self);
}

bool q_slider_qbase_focus_previous_child(void* self) {
    return QSlider_QBaseFocusPreviousChild((QSlider*)self);
}

void q_slider_on_focus_previous_child(void* self, bool (*slot)()) {
    QSlider_OnFocusPreviousChild((QSlider*)self, (intptr_t)slot);
}

QObject* q_slider_sender(void* self) {
    return QSlider_Sender((QSlider*)self);
}

QObject* q_slider_qbase_sender(void* self) {
    return QSlider_QBaseSender((QSlider*)self);
}

void q_slider_on_sender(void* self, QObject* (*slot)()) {
    QSlider_OnSender((QSlider*)self, (intptr_t)slot);
}

int32_t q_slider_sender_signal_index(void* self) {
    return QSlider_SenderSignalIndex((QSlider*)self);
}

int32_t q_slider_qbase_sender_signal_index(void* self) {
    return QSlider_QBaseSenderSignalIndex((QSlider*)self);
}

void q_slider_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSlider_OnSenderSignalIndex((QSlider*)self, (intptr_t)slot);
}

int32_t q_slider_receivers(void* self, const char* signal) {
    return QSlider_Receivers((QSlider*)self, signal);
}

int32_t q_slider_qbase_receivers(void* self, const char* signal) {
    return QSlider_QBaseReceivers((QSlider*)self, signal);
}

void q_slider_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSlider_OnReceivers((QSlider*)self, (intptr_t)slot);
}

bool q_slider_is_signal_connected(void* self, void* signal) {
    return QSlider_IsSignalConnected((QSlider*)self, (QMetaMethod*)signal);
}

bool q_slider_qbase_is_signal_connected(void* self, void* signal) {
    return QSlider_QBaseIsSignalConnected((QSlider*)self, (QMetaMethod*)signal);
}

void q_slider_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSlider_OnIsSignalConnected((QSlider*)self, (intptr_t)slot);
}

void q_slider_delete(void* self) {
    QSlider_Delete((QSlider*)(self));
}
