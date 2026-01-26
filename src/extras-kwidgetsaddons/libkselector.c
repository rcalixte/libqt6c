#include "../libqabstractslider.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkselector.hpp"
#include "libkselector.h"

KSelector* k_selector_new(void* parent) {
    return KSelector_new((QWidget*)parent);
}

KSelector* k_selector_new2() {
    return KSelector_new2();
}

KSelector* k_selector_new3(int32_t o) {
    return KSelector_new3(o);
}

KSelector* k_selector_new4(int32_t o, void* parent) {
    return KSelector_new4(o, (QWidget*)parent);
}

const QMetaObject* k_selector_meta_object(void* self) {
    return KSelector_MetaObject((KSelector*)self);
}

void k_selector_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSelector_OnMetaObject((KSelector*)self, (intptr_t)callback);
}

const QMetaObject* k_selector_qbase_meta_object(void* self) {
    return KSelector_QBaseMetaObject((KSelector*)self);
}

void* k_selector_metacast(void* self, const char* param1) {
    return KSelector_Metacast((KSelector*)self, param1);
}

void k_selector_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSelector_OnMetacast((KSelector*)self, (intptr_t)callback);
}

void* k_selector_qbase_metacast(void* self, const char* param1) {
    return KSelector_QBaseMetacast((KSelector*)self, param1);
}

int32_t k_selector_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelector_Metacall((KSelector*)self, param1, param2, param3);
}

void k_selector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSelector_OnMetacall((KSelector*)self, (intptr_t)callback);
}

int32_t k_selector_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSelector_QBaseMetacall((KSelector*)self, param1, param2, param3);
}

const char* k_selector_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRect* k_selector_contents_rect(void* self) {
    return KSelector_ContentsRect((KSelector*)self);
}

void k_selector_set_indent(void* self, bool i) {
    KSelector_SetIndent((KSelector*)self, i);
}

bool k_selector_indent(void* self) {
    return KSelector_Indent((KSelector*)self);
}

void k_selector_set_arrow_direction(void* self, int32_t direction) {
    KSelector_SetArrowDirection((KSelector*)self, direction);
}

int32_t k_selector_arrow_direction(void* self) {
    return KSelector_ArrowDirection((KSelector*)self);
}

void k_selector_draw_contents(void* self, void* param1) {
    KSelector_DrawContents((KSelector*)self, (QPainter*)param1);
}

void k_selector_on_draw_contents(void* self, void (*callback)(void*, void*)) {
    KSelector_OnDrawContents((KSelector*)self, (intptr_t)callback);
}

void k_selector_qbase_draw_contents(void* self, void* param1) {
    KSelector_QBaseDrawContents((KSelector*)self, (QPainter*)param1);
}

void k_selector_draw_arrow(void* self, void* painter, void* pos) {
    KSelector_DrawArrow((KSelector*)self, (QPainter*)painter, (QPoint*)pos);
}

void k_selector_on_draw_arrow(void* self, void (*callback)(void*, void*, void*)) {
    KSelector_OnDrawArrow((KSelector*)self, (intptr_t)callback);
}

void k_selector_qbase_draw_arrow(void* self, void* painter, void* pos) {
    KSelector_QBaseDrawArrow((KSelector*)self, (QPainter*)painter, (QPoint*)pos);
}

void k_selector_paint_event(void* self, void* param1) {
    KSelector_PaintEvent((KSelector*)self, (QPaintEvent*)param1);
}

void k_selector_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnPaintEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_qbase_paint_event(void* self, void* param1) {
    KSelector_QBasePaintEvent((KSelector*)self, (QPaintEvent*)param1);
}

void k_selector_mouse_press_event(void* self, void* e) {
    KSelector_MousePressEvent((KSelector*)self, (QMouseEvent*)e);
}

void k_selector_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnMousePressEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_qbase_mouse_press_event(void* self, void* e) {
    KSelector_QBaseMousePressEvent((KSelector*)self, (QMouseEvent*)e);
}

void k_selector_mouse_move_event(void* self, void* e) {
    KSelector_MouseMoveEvent((KSelector*)self, (QMouseEvent*)e);
}

void k_selector_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnMouseMoveEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_qbase_mouse_move_event(void* self, void* e) {
    KSelector_QBaseMouseMoveEvent((KSelector*)self, (QMouseEvent*)e);
}

void k_selector_mouse_release_event(void* self, void* e) {
    KSelector_MouseReleaseEvent((KSelector*)self, (QMouseEvent*)e);
}

void k_selector_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnMouseReleaseEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_qbase_mouse_release_event(void* self, void* e) {
    KSelector_QBaseMouseReleaseEvent((KSelector*)self, (QMouseEvent*)e);
}

void k_selector_wheel_event(void* self, void* param1) {
    KSelector_WheelEvent((KSelector*)self, (QWheelEvent*)param1);
}

void k_selector_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnWheelEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_qbase_wheel_event(void* self, void* param1) {
    KSelector_QBaseWheelEvent((KSelector*)self, (QWheelEvent*)param1);
}

const char* k_selector_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_selector_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

void k_selector_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

int32_t k_selector_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

void k_selector_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

int32_t k_selector_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

void k_selector_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

int32_t k_selector_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

void k_selector_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

int32_t k_selector_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

void k_selector_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

bool k_selector_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

void k_selector_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

bool k_selector_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

void k_selector_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

int32_t k_selector_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

void k_selector_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

bool k_selector_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

void k_selector_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

bool k_selector_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

int32_t k_selector_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

void k_selector_trigger_action(void* self, int32_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

void k_selector_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

void k_selector_set_orientation(void* self, int32_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

void k_selector_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

void k_selector_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

void k_selector_on_value_changed(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)callback);
}

void k_selector_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

void k_selector_on_slider_pressed(void* self, void (*callback)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)callback);
}

void k_selector_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

void k_selector_on_slider_moved(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)callback);
}

void k_selector_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

void k_selector_on_slider_released(void* self, void (*callback)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)callback);
}

void k_selector_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

void k_selector_on_range_changed(void* self, void (*callback)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)callback);
}

void k_selector_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

void k_selector_on_action_triggered(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)callback);
}

uintptr_t k_selector_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_selector_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_selector_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_selector_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_selector_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_selector_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_selector_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_selector_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_selector_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_selector_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_selector_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_selector_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_selector_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_selector_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_selector_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_selector_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_selector_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_selector_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_selector_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_selector_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_selector_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_selector_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_selector_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_selector_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_selector_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_selector_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_selector_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_selector_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_selector_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_selector_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_selector_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_selector_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_selector_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_selector_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_selector_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_selector_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_selector_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_selector_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_selector_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_selector_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_selector_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_selector_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_selector_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_selector_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_selector_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_selector_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_selector_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_selector_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_selector_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_selector_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_selector_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_selector_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_selector_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_selector_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_selector_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_selector_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_selector_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_selector_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_selector_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_selector_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_selector_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_selector_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_selector_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_selector_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_selector_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_selector_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_selector_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_selector_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_selector_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_selector_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_selector_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_selector_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_selector_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_selector_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_selector_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_selector_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_selector_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_selector_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_selector_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_selector_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_selector_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_selector_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_selector_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_selector_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_selector_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_selector_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_selector_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_selector_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_selector_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_selector_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_selector_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_selector_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_selector_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_selector_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_selector_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_selector_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_selector_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_selector_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_selector_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_selector_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selector_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_selector_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_selector_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_selector_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_selector_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_selector_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_selector_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_selector_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_selector_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_selector_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_selector_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_selector_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_selector_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_selector_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_selector_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_selector_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_selector_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_selector_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_selector_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_selector_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_selector_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_selector_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_selector_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_selector_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_selector_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_selector_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_selector_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_selector_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_selector_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_selector_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_selector_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_selector_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_selector_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_selector_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_selector_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_selector_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_selector_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_selector_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_selector_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_selector_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_selector_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_selector_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_selector_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_selector_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_selector_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_selector_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_selector_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_selector_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_selector_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_selector_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_selector_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_selector_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_selector_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_selector_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_selector_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_selector_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_selector_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_selector_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_selector_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_selector_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_selector_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_selector_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_selector_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_selector_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_selector_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_selector_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_selector_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_selector_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_selector_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_selector_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_selector_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_selector_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_selector_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_selector_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_selector_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_selector_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_selector_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_selector_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_selector_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_selector_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_selector_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_selector_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_selector_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_selector_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_selector_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_selector_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_selector_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_selector_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_selector_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_selector_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_selector_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_selector_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_selector_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_selector_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_selector_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QLayout* k_selector_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_selector_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_selector_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_selector_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_selector_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_selector_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_selector_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_selector_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_selector_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_selector_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_selector_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_selector_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_selector_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_selector_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_selector_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_selector_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_selector_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_selector_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_selector_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_selector_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_selector_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_selector_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_selector_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_selector_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_selector_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_selector_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_selector_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_selector_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_selector_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_selector_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_selector_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_selector_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_selector_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_selector_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_selector_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_selector_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_selector_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_selector_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_selector_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_selector_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_selector_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_selector_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_selector_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_selector_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_selector_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_selector_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_selector_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_selector_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_selector_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_selector_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_selector_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_selector_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_selector_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_selector_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_selector_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_selector_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_selector_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_selector_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_selector_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_selector_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_selector_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_selector_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_selector_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_selector_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_selector_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_selector_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_selector_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_selector_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_selector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_selector_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_selector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_selector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_selector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_selector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_selector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_selector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_selector_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_selector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_selector_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_selector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_selector_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_selector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_selector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_selector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_selector_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_selector_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_selector_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_selector_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_selector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_selector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_selector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_selector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_selector_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_selector_dynamic_property_names\n");
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

QBindingStorage* k_selector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_selector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_selector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_selector_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_selector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_selector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_selector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_selector_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_selector_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_selector_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_selector_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_selector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_selector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_selector_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_selector_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_selector_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_selector_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_selector_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_selector_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_selector_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_selector_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_selector_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_selector_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_selector_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_selector_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_selector_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_selector_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool k_selector_event(void* self, void* e) {
    return KSelector_Event((KSelector*)self, (QEvent*)e);
}

bool k_selector_qbase_event(void* self, void* e) {
    return KSelector_QBaseEvent((KSelector*)self, (QEvent*)e);
}

void k_selector_on_event(void* self, bool (*callback)(void*, void*)) {
    KSelector_OnEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_slider_change(void* self, int32_t change) {
    KSelector_SliderChange((KSelector*)self, change);
}

void k_selector_qbase_slider_change(void* self, int32_t change) {
    KSelector_QBaseSliderChange((KSelector*)self, change);
}

void k_selector_on_slider_change(void* self, void (*callback)(void*, int32_t)) {
    KSelector_OnSliderChange((KSelector*)self, (intptr_t)callback);
}

void k_selector_key_press_event(void* self, void* ev) {
    KSelector_KeyPressEvent((KSelector*)self, (QKeyEvent*)ev);
}

void k_selector_qbase_key_press_event(void* self, void* ev) {
    KSelector_QBaseKeyPressEvent((KSelector*)self, (QKeyEvent*)ev);
}

void k_selector_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnKeyPressEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_timer_event(void* self, void* param1) {
    KSelector_TimerEvent((KSelector*)self, (QTimerEvent*)param1);
}

void k_selector_qbase_timer_event(void* self, void* param1) {
    KSelector_QBaseTimerEvent((KSelector*)self, (QTimerEvent*)param1);
}

void k_selector_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnTimerEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_change_event(void* self, void* e) {
    KSelector_ChangeEvent((KSelector*)self, (QEvent*)e);
}

void k_selector_qbase_change_event(void* self, void* e) {
    KSelector_QBaseChangeEvent((KSelector*)self, (QEvent*)e);
}

void k_selector_on_change_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnChangeEvent((KSelector*)self, (intptr_t)callback);
}

int32_t k_selector_dev_type(void* self) {
    return KSelector_DevType((KSelector*)self);
}

int32_t k_selector_qbase_dev_type(void* self) {
    return KSelector_QBaseDevType((KSelector*)self);
}

void k_selector_on_dev_type(void* self, int32_t (*callback)()) {
    KSelector_OnDevType((KSelector*)self, (intptr_t)callback);
}

void k_selector_set_visible(void* self, bool visible) {
    KSelector_SetVisible((KSelector*)self, visible);
}

void k_selector_qbase_set_visible(void* self, bool visible) {
    KSelector_QBaseSetVisible((KSelector*)self, visible);
}

void k_selector_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KSelector_OnSetVisible((KSelector*)self, (intptr_t)callback);
}

QSize* k_selector_size_hint(void* self) {
    return KSelector_SizeHint((KSelector*)self);
}

QSize* k_selector_qbase_size_hint(void* self) {
    return KSelector_QBaseSizeHint((KSelector*)self);
}

void k_selector_on_size_hint(void* self, QSize* (*callback)()) {
    KSelector_OnSizeHint((KSelector*)self, (intptr_t)callback);
}

QSize* k_selector_minimum_size_hint(void* self) {
    return KSelector_MinimumSizeHint((KSelector*)self);
}

QSize* k_selector_qbase_minimum_size_hint(void* self) {
    return KSelector_QBaseMinimumSizeHint((KSelector*)self);
}

void k_selector_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KSelector_OnMinimumSizeHint((KSelector*)self, (intptr_t)callback);
}

int32_t k_selector_height_for_width(void* self, int param1) {
    return KSelector_HeightForWidth((KSelector*)self, param1);
}

int32_t k_selector_qbase_height_for_width(void* self, int param1) {
    return KSelector_QBaseHeightForWidth((KSelector*)self, param1);
}

void k_selector_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KSelector_OnHeightForWidth((KSelector*)self, (intptr_t)callback);
}

bool k_selector_has_height_for_width(void* self) {
    return KSelector_HasHeightForWidth((KSelector*)self);
}

bool k_selector_qbase_has_height_for_width(void* self) {
    return KSelector_QBaseHasHeightForWidth((KSelector*)self);
}

void k_selector_on_has_height_for_width(void* self, bool (*callback)()) {
    KSelector_OnHasHeightForWidth((KSelector*)self, (intptr_t)callback);
}

QPaintEngine* k_selector_paint_engine(void* self) {
    return KSelector_PaintEngine((KSelector*)self);
}

QPaintEngine* k_selector_qbase_paint_engine(void* self) {
    return KSelector_QBasePaintEngine((KSelector*)self);
}

void k_selector_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KSelector_OnPaintEngine((KSelector*)self, (intptr_t)callback);
}

void k_selector_mouse_double_click_event(void* self, void* event) {
    KSelector_MouseDoubleClickEvent((KSelector*)self, (QMouseEvent*)event);
}

void k_selector_qbase_mouse_double_click_event(void* self, void* event) {
    KSelector_QBaseMouseDoubleClickEvent((KSelector*)self, (QMouseEvent*)event);
}

void k_selector_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnMouseDoubleClickEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_key_release_event(void* self, void* event) {
    KSelector_KeyReleaseEvent((KSelector*)self, (QKeyEvent*)event);
}

void k_selector_qbase_key_release_event(void* self, void* event) {
    KSelector_QBaseKeyReleaseEvent((KSelector*)self, (QKeyEvent*)event);
}

void k_selector_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnKeyReleaseEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_focus_in_event(void* self, void* event) {
    KSelector_FocusInEvent((KSelector*)self, (QFocusEvent*)event);
}

void k_selector_qbase_focus_in_event(void* self, void* event) {
    KSelector_QBaseFocusInEvent((KSelector*)self, (QFocusEvent*)event);
}

void k_selector_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnFocusInEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_focus_out_event(void* self, void* event) {
    KSelector_FocusOutEvent((KSelector*)self, (QFocusEvent*)event);
}

void k_selector_qbase_focus_out_event(void* self, void* event) {
    KSelector_QBaseFocusOutEvent((KSelector*)self, (QFocusEvent*)event);
}

void k_selector_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnFocusOutEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_enter_event(void* self, void* event) {
    KSelector_EnterEvent((KSelector*)self, (QEnterEvent*)event);
}

void k_selector_qbase_enter_event(void* self, void* event) {
    KSelector_QBaseEnterEvent((KSelector*)self, (QEnterEvent*)event);
}

void k_selector_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnEnterEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_leave_event(void* self, void* event) {
    KSelector_LeaveEvent((KSelector*)self, (QEvent*)event);
}

void k_selector_qbase_leave_event(void* self, void* event) {
    KSelector_QBaseLeaveEvent((KSelector*)self, (QEvent*)event);
}

void k_selector_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnLeaveEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_move_event(void* self, void* event) {
    KSelector_MoveEvent((KSelector*)self, (QMoveEvent*)event);
}

void k_selector_qbase_move_event(void* self, void* event) {
    KSelector_QBaseMoveEvent((KSelector*)self, (QMoveEvent*)event);
}

void k_selector_on_move_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnMoveEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_resize_event(void* self, void* event) {
    KSelector_ResizeEvent((KSelector*)self, (QResizeEvent*)event);
}

void k_selector_qbase_resize_event(void* self, void* event) {
    KSelector_QBaseResizeEvent((KSelector*)self, (QResizeEvent*)event);
}

void k_selector_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnResizeEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_close_event(void* self, void* event) {
    KSelector_CloseEvent((KSelector*)self, (QCloseEvent*)event);
}

void k_selector_qbase_close_event(void* self, void* event) {
    KSelector_QBaseCloseEvent((KSelector*)self, (QCloseEvent*)event);
}

void k_selector_on_close_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnCloseEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_context_menu_event(void* self, void* event) {
    KSelector_ContextMenuEvent((KSelector*)self, (QContextMenuEvent*)event);
}

void k_selector_qbase_context_menu_event(void* self, void* event) {
    KSelector_QBaseContextMenuEvent((KSelector*)self, (QContextMenuEvent*)event);
}

void k_selector_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnContextMenuEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_tablet_event(void* self, void* event) {
    KSelector_TabletEvent((KSelector*)self, (QTabletEvent*)event);
}

void k_selector_qbase_tablet_event(void* self, void* event) {
    KSelector_QBaseTabletEvent((KSelector*)self, (QTabletEvent*)event);
}

void k_selector_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnTabletEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_action_event(void* self, void* event) {
    KSelector_ActionEvent((KSelector*)self, (QActionEvent*)event);
}

void k_selector_qbase_action_event(void* self, void* event) {
    KSelector_QBaseActionEvent((KSelector*)self, (QActionEvent*)event);
}

void k_selector_on_action_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnActionEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_drag_enter_event(void* self, void* event) {
    KSelector_DragEnterEvent((KSelector*)self, (QDragEnterEvent*)event);
}

void k_selector_qbase_drag_enter_event(void* self, void* event) {
    KSelector_QBaseDragEnterEvent((KSelector*)self, (QDragEnterEvent*)event);
}

void k_selector_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnDragEnterEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_drag_move_event(void* self, void* event) {
    KSelector_DragMoveEvent((KSelector*)self, (QDragMoveEvent*)event);
}

void k_selector_qbase_drag_move_event(void* self, void* event) {
    KSelector_QBaseDragMoveEvent((KSelector*)self, (QDragMoveEvent*)event);
}

void k_selector_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnDragMoveEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_drag_leave_event(void* self, void* event) {
    KSelector_DragLeaveEvent((KSelector*)self, (QDragLeaveEvent*)event);
}

void k_selector_qbase_drag_leave_event(void* self, void* event) {
    KSelector_QBaseDragLeaveEvent((KSelector*)self, (QDragLeaveEvent*)event);
}

void k_selector_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnDragLeaveEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_drop_event(void* self, void* event) {
    KSelector_DropEvent((KSelector*)self, (QDropEvent*)event);
}

void k_selector_qbase_drop_event(void* self, void* event) {
    KSelector_QBaseDropEvent((KSelector*)self, (QDropEvent*)event);
}

void k_selector_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnDropEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_show_event(void* self, void* event) {
    KSelector_ShowEvent((KSelector*)self, (QShowEvent*)event);
}

void k_selector_qbase_show_event(void* self, void* event) {
    KSelector_QBaseShowEvent((KSelector*)self, (QShowEvent*)event);
}

void k_selector_on_show_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnShowEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_hide_event(void* self, void* event) {
    KSelector_HideEvent((KSelector*)self, (QHideEvent*)event);
}

void k_selector_qbase_hide_event(void* self, void* event) {
    KSelector_QBaseHideEvent((KSelector*)self, (QHideEvent*)event);
}

void k_selector_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnHideEvent((KSelector*)self, (intptr_t)callback);
}

bool k_selector_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KSelector_NativeEvent((KSelector*)self, qstring(eventType), message, result);
}

bool k_selector_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KSelector_QBaseNativeEvent((KSelector*)self, qstring(eventType), message, result);
}

void k_selector_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KSelector_OnNativeEvent((KSelector*)self, (intptr_t)callback);
}

int32_t k_selector_metric(void* self, int32_t param1) {
    return KSelector_Metric((KSelector*)self, param1);
}

int32_t k_selector_qbase_metric(void* self, int32_t param1) {
    return KSelector_QBaseMetric((KSelector*)self, param1);
}

void k_selector_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KSelector_OnMetric((KSelector*)self, (intptr_t)callback);
}

void k_selector_init_painter(void* self, void* painter) {
    KSelector_InitPainter((KSelector*)self, (QPainter*)painter);
}

void k_selector_qbase_init_painter(void* self, void* painter) {
    KSelector_QBaseInitPainter((KSelector*)self, (QPainter*)painter);
}

void k_selector_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KSelector_OnInitPainter((KSelector*)self, (intptr_t)callback);
}

QPaintDevice* k_selector_redirected(void* self, void* offset) {
    return KSelector_Redirected((KSelector*)self, (QPoint*)offset);
}

QPaintDevice* k_selector_qbase_redirected(void* self, void* offset) {
    return KSelector_QBaseRedirected((KSelector*)self, (QPoint*)offset);
}

void k_selector_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KSelector_OnRedirected((KSelector*)self, (intptr_t)callback);
}

QPainter* k_selector_shared_painter(void* self) {
    return KSelector_SharedPainter((KSelector*)self);
}

QPainter* k_selector_qbase_shared_painter(void* self) {
    return KSelector_QBaseSharedPainter((KSelector*)self);
}

void k_selector_on_shared_painter(void* self, QPainter* (*callback)()) {
    KSelector_OnSharedPainter((KSelector*)self, (intptr_t)callback);
}

void k_selector_input_method_event(void* self, void* param1) {
    KSelector_InputMethodEvent((KSelector*)self, (QInputMethodEvent*)param1);
}

void k_selector_qbase_input_method_event(void* self, void* param1) {
    KSelector_QBaseInputMethodEvent((KSelector*)self, (QInputMethodEvent*)param1);
}

void k_selector_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnInputMethodEvent((KSelector*)self, (intptr_t)callback);
}

QVariant* k_selector_input_method_query(void* self, int32_t param1) {
    return KSelector_InputMethodQuery((KSelector*)self, param1);
}

QVariant* k_selector_qbase_input_method_query(void* self, int32_t param1) {
    return KSelector_QBaseInputMethodQuery((KSelector*)self, param1);
}

void k_selector_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KSelector_OnInputMethodQuery((KSelector*)self, (intptr_t)callback);
}

bool k_selector_focus_next_prev_child(void* self, bool next) {
    return KSelector_FocusNextPrevChild((KSelector*)self, next);
}

bool k_selector_qbase_focus_next_prev_child(void* self, bool next) {
    return KSelector_QBaseFocusNextPrevChild((KSelector*)self, next);
}

void k_selector_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KSelector_OnFocusNextPrevChild((KSelector*)self, (intptr_t)callback);
}

bool k_selector_event_filter(void* self, void* watched, void* event) {
    return KSelector_EventFilter((KSelector*)self, (QObject*)watched, (QEvent*)event);
}

bool k_selector_qbase_event_filter(void* self, void* watched, void* event) {
    return KSelector_QBaseEventFilter((KSelector*)self, (QObject*)watched, (QEvent*)event);
}

void k_selector_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSelector_OnEventFilter((KSelector*)self, (intptr_t)callback);
}

void k_selector_child_event(void* self, void* event) {
    KSelector_ChildEvent((KSelector*)self, (QChildEvent*)event);
}

void k_selector_qbase_child_event(void* self, void* event) {
    KSelector_QBaseChildEvent((KSelector*)self, (QChildEvent*)event);
}

void k_selector_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnChildEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_custom_event(void* self, void* event) {
    KSelector_CustomEvent((KSelector*)self, (QEvent*)event);
}

void k_selector_qbase_custom_event(void* self, void* event) {
    KSelector_QBaseCustomEvent((KSelector*)self, (QEvent*)event);
}

void k_selector_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSelector_OnCustomEvent((KSelector*)self, (intptr_t)callback);
}

void k_selector_connect_notify(void* self, void* signal) {
    KSelector_ConnectNotify((KSelector*)self, (QMetaMethod*)signal);
}

void k_selector_qbase_connect_notify(void* self, void* signal) {
    KSelector_QBaseConnectNotify((KSelector*)self, (QMetaMethod*)signal);
}

void k_selector_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSelector_OnConnectNotify((KSelector*)self, (intptr_t)callback);
}

void k_selector_disconnect_notify(void* self, void* signal) {
    KSelector_DisconnectNotify((KSelector*)self, (QMetaMethod*)signal);
}

void k_selector_qbase_disconnect_notify(void* self, void* signal) {
    KSelector_QBaseDisconnectNotify((KSelector*)self, (QMetaMethod*)signal);
}

void k_selector_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSelector_OnDisconnectNotify((KSelector*)self, (intptr_t)callback);
}

void k_selector_set_repeat_action(void* self, int32_t action) {
    KSelector_SetRepeatAction((KSelector*)self, action);
}

void k_selector_qbase_set_repeat_action(void* self, int32_t action) {
    KSelector_QBaseSetRepeatAction((KSelector*)self, action);
}

void k_selector_on_set_repeat_action(void* self, void (*callback)(void*, int32_t)) {
    KSelector_OnSetRepeatAction((KSelector*)self, (intptr_t)callback);
}

int32_t k_selector_repeat_action(void* self) {
    return KSelector_RepeatAction((KSelector*)self);
}

int32_t k_selector_qbase_repeat_action(void* self) {
    return KSelector_QBaseRepeatAction((KSelector*)self);
}

void k_selector_on_repeat_action(void* self, int32_t (*callback)()) {
    KSelector_OnRepeatAction((KSelector*)self, (intptr_t)callback);
}

void k_selector_update_micro_focus(void* self) {
    KSelector_UpdateMicroFocus((KSelector*)self);
}

void k_selector_qbase_update_micro_focus(void* self) {
    KSelector_QBaseUpdateMicroFocus((KSelector*)self);
}

void k_selector_on_update_micro_focus(void* self, void (*callback)()) {
    KSelector_OnUpdateMicroFocus((KSelector*)self, (intptr_t)callback);
}

void k_selector_create(void* self) {
    KSelector_Create((KSelector*)self);
}

void k_selector_qbase_create(void* self) {
    KSelector_QBaseCreate((KSelector*)self);
}

void k_selector_on_create(void* self, void (*callback)()) {
    KSelector_OnCreate((KSelector*)self, (intptr_t)callback);
}

void k_selector_destroy(void* self) {
    KSelector_Destroy((KSelector*)self);
}

void k_selector_qbase_destroy(void* self) {
    KSelector_QBaseDestroy((KSelector*)self);
}

void k_selector_on_destroy(void* self, void (*callback)()) {
    KSelector_OnDestroy((KSelector*)self, (intptr_t)callback);
}

bool k_selector_focus_next_child(void* self) {
    return KSelector_FocusNextChild((KSelector*)self);
}

bool k_selector_qbase_focus_next_child(void* self) {
    return KSelector_QBaseFocusNextChild((KSelector*)self);
}

void k_selector_on_focus_next_child(void* self, bool (*callback)()) {
    KSelector_OnFocusNextChild((KSelector*)self, (intptr_t)callback);
}

bool k_selector_focus_previous_child(void* self) {
    return KSelector_FocusPreviousChild((KSelector*)self);
}

bool k_selector_qbase_focus_previous_child(void* self) {
    return KSelector_QBaseFocusPreviousChild((KSelector*)self);
}

void k_selector_on_focus_previous_child(void* self, bool (*callback)()) {
    KSelector_OnFocusPreviousChild((KSelector*)self, (intptr_t)callback);
}

QObject* k_selector_sender(void* self) {
    return KSelector_Sender((KSelector*)self);
}

QObject* k_selector_qbase_sender(void* self) {
    return KSelector_QBaseSender((KSelector*)self);
}

void k_selector_on_sender(void* self, QObject* (*callback)()) {
    KSelector_OnSender((KSelector*)self, (intptr_t)callback);
}

int32_t k_selector_sender_signal_index(void* self) {
    return KSelector_SenderSignalIndex((KSelector*)self);
}

int32_t k_selector_qbase_sender_signal_index(void* self) {
    return KSelector_QBaseSenderSignalIndex((KSelector*)self);
}

void k_selector_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSelector_OnSenderSignalIndex((KSelector*)self, (intptr_t)callback);
}

int32_t k_selector_receivers(void* self, const char* signal) {
    return KSelector_Receivers((KSelector*)self, signal);
}

int32_t k_selector_qbase_receivers(void* self, const char* signal) {
    return KSelector_QBaseReceivers((KSelector*)self, signal);
}

void k_selector_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSelector_OnReceivers((KSelector*)self, (intptr_t)callback);
}

bool k_selector_is_signal_connected(void* self, void* signal) {
    return KSelector_IsSignalConnected((KSelector*)self, (QMetaMethod*)signal);
}

bool k_selector_qbase_is_signal_connected(void* self, void* signal) {
    return KSelector_QBaseIsSignalConnected((KSelector*)self, (QMetaMethod*)signal);
}

void k_selector_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSelector_OnIsSignalConnected((KSelector*)self, (intptr_t)callback);
}

double k_selector_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KSelector_GetDecodedMetricF((KSelector*)self, metricA, metricB);
}

double k_selector_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KSelector_QBaseGetDecodedMetricF((KSelector*)self, metricA, metricB);
}

void k_selector_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KSelector_OnGetDecodedMetricF((KSelector*)self, (intptr_t)callback);
}

void k_selector_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_selector_delete(void* self) {
    KSelector_Delete((KSelector*)(self));
}

KGradientSelector* k_gradientselector_new(void* parent) {
    return KGradientSelector_new((QWidget*)parent);
}

KGradientSelector* k_gradientselector_new2() {
    return KGradientSelector_new2();
}

KGradientSelector* k_gradientselector_new3(int32_t o) {
    return KGradientSelector_new3(o);
}

KGradientSelector* k_gradientselector_new4(int32_t o, void* parent) {
    return KGradientSelector_new4(o, (QWidget*)parent);
}

const QMetaObject* k_gradientselector_meta_object(void* self) {
    return KGradientSelector_MetaObject((KGradientSelector*)self);
}

void k_gradientselector_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KGradientSelector_OnMetaObject((KGradientSelector*)self, (intptr_t)callback);
}

const QMetaObject* k_gradientselector_qbase_meta_object(void* self) {
    return KGradientSelector_QBaseMetaObject((KGradientSelector*)self);
}

void* k_gradientselector_metacast(void* self, const char* param1) {
    return KGradientSelector_Metacast((KGradientSelector*)self, param1);
}

void k_gradientselector_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KGradientSelector_OnMetacast((KGradientSelector*)self, (intptr_t)callback);
}

void* k_gradientselector_qbase_metacast(void* self, const char* param1) {
    return KGradientSelector_QBaseMetacast((KGradientSelector*)self, param1);
}

int32_t k_gradientselector_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KGradientSelector_Metacall((KGradientSelector*)self, param1, param2, param3);
}

void k_gradientselector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KGradientSelector_OnMetacall((KGradientSelector*)self, (intptr_t)callback);
}

int32_t k_gradientselector_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KGradientSelector_QBaseMetacall((KGradientSelector*)self, param1, param2, param3);
}

const char* k_gradientselector_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_stops(void* self, libqt_list /* of pair_double_qcolor tuple of double and QColor* */ stops) {
    KGradientSelector_SetStops((KGradientSelector*)self, stops);
}

libqt_list /* of pair_double_qcolor tuple of double and QColor* */ k_gradientselector_stops(void* self) {
    return KGradientSelector_Stops((KGradientSelector*)self);
}

void k_gradientselector_set_colors(void* self, void* col1, void* col2) {
    KGradientSelector_SetColors((KGradientSelector*)self, (QColor*)col1, (QColor*)col2);
}

void k_gradientselector_set_text(void* self, const char* t1, const char* t2) {
    KGradientSelector_SetText((KGradientSelector*)self, qstring(t1), qstring(t2));
}

void k_gradientselector_set_first_color(void* self, void* col) {
    KGradientSelector_SetFirstColor((KGradientSelector*)self, (QColor*)col);
}

void k_gradientselector_set_second_color(void* self, void* col) {
    KGradientSelector_SetSecondColor((KGradientSelector*)self, (QColor*)col);
}

void k_gradientselector_set_first_text(void* self, const char* t) {
    KGradientSelector_SetFirstText((KGradientSelector*)self, qstring(t));
}

void k_gradientselector_set_second_text(void* self, const char* t) {
    KGradientSelector_SetSecondText((KGradientSelector*)self, qstring(t));
}

QColor* k_gradientselector_first_color(void* self) {
    return KGradientSelector_FirstColor((KGradientSelector*)self);
}

QColor* k_gradientselector_second_color(void* self) {
    return KGradientSelector_SecondColor((KGradientSelector*)self);
}

const char* k_gradientselector_first_text(void* self) {
    libqt_string _str = KGradientSelector_FirstText((KGradientSelector*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_gradientselector_second_text(void* self) {
    libqt_string _str = KGradientSelector_SecondText((KGradientSelector*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_draw_contents(void* self, void* param1) {
    KGradientSelector_DrawContents((KGradientSelector*)self, (QPainter*)param1);
}

void k_gradientselector_on_draw_contents(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnDrawContents((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_qbase_draw_contents(void* self, void* param1) {
    KGradientSelector_QBaseDrawContents((KGradientSelector*)self, (QPainter*)param1);
}

QSize* k_gradientselector_minimum_size(void* self) {
    return KGradientSelector_MinimumSize((KGradientSelector*)self);
}

void k_gradientselector_on_minimum_size(void* self, QSize* (*callback)()) {
    KGradientSelector_OnMinimumSize((KGradientSelector*)self, (intptr_t)callback);
}

QSize* k_gradientselector_qbase_minimum_size(void* self) {
    return KGradientSelector_QBaseMinimumSize((KGradientSelector*)self);
}

const char* k_gradientselector_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_gradientselector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRect* k_gradientselector_contents_rect(void* self) {
    return KSelector_ContentsRect((KSelector*)self);
}

void k_gradientselector_set_indent(void* self, bool i) {
    KSelector_SetIndent((KSelector*)self, i);
}

bool k_gradientselector_indent(void* self) {
    return KSelector_Indent((KSelector*)self);
}

void k_gradientselector_set_arrow_direction(void* self, int32_t direction) {
    KSelector_SetArrowDirection((KSelector*)self, direction);
}

int32_t k_gradientselector_arrow_direction(void* self) {
    return KSelector_ArrowDirection((KSelector*)self);
}

int32_t k_gradientselector_orientation(void* self) {
    return QAbstractSlider_Orientation((QAbstractSlider*)self);
}

void k_gradientselector_set_minimum(void* self, int minimum) {
    QAbstractSlider_SetMinimum((QAbstractSlider*)self, minimum);
}

int32_t k_gradientselector_minimum(void* self) {
    return QAbstractSlider_Minimum((QAbstractSlider*)self);
}

void k_gradientselector_set_maximum(void* self, int maximum) {
    QAbstractSlider_SetMaximum((QAbstractSlider*)self, maximum);
}

int32_t k_gradientselector_maximum(void* self) {
    return QAbstractSlider_Maximum((QAbstractSlider*)self);
}

void k_gradientselector_set_single_step(void* self, int singleStep) {
    QAbstractSlider_SetSingleStep((QAbstractSlider*)self, singleStep);
}

int32_t k_gradientselector_single_step(void* self) {
    return QAbstractSlider_SingleStep((QAbstractSlider*)self);
}

void k_gradientselector_set_page_step(void* self, int pageStep) {
    QAbstractSlider_SetPageStep((QAbstractSlider*)self, pageStep);
}

int32_t k_gradientselector_page_step(void* self) {
    return QAbstractSlider_PageStep((QAbstractSlider*)self);
}

void k_gradientselector_set_tracking(void* self, bool enable) {
    QAbstractSlider_SetTracking((QAbstractSlider*)self, enable);
}

bool k_gradientselector_has_tracking(void* self) {
    return QAbstractSlider_HasTracking((QAbstractSlider*)self);
}

void k_gradientselector_set_slider_down(void* self, bool sliderDown) {
    QAbstractSlider_SetSliderDown((QAbstractSlider*)self, sliderDown);
}

bool k_gradientselector_is_slider_down(void* self) {
    return QAbstractSlider_IsSliderDown((QAbstractSlider*)self);
}

void k_gradientselector_set_slider_position(void* self, int sliderPosition) {
    QAbstractSlider_SetSliderPosition((QAbstractSlider*)self, sliderPosition);
}

int32_t k_gradientselector_slider_position(void* self) {
    return QAbstractSlider_SliderPosition((QAbstractSlider*)self);
}

void k_gradientselector_set_inverted_appearance(void* self, bool invertedAppearance) {
    QAbstractSlider_SetInvertedAppearance((QAbstractSlider*)self, invertedAppearance);
}

bool k_gradientselector_inverted_appearance(void* self) {
    return QAbstractSlider_InvertedAppearance((QAbstractSlider*)self);
}

void k_gradientselector_set_inverted_controls(void* self, bool invertedControls) {
    QAbstractSlider_SetInvertedControls((QAbstractSlider*)self, invertedControls);
}

bool k_gradientselector_inverted_controls(void* self) {
    return QAbstractSlider_InvertedControls((QAbstractSlider*)self);
}

int32_t k_gradientselector_value(void* self) {
    return QAbstractSlider_Value((QAbstractSlider*)self);
}

void k_gradientselector_trigger_action(void* self, int32_t action) {
    QAbstractSlider_TriggerAction((QAbstractSlider*)self, action);
}

void k_gradientselector_set_value(void* self, int value) {
    QAbstractSlider_SetValue((QAbstractSlider*)self, value);
}

void k_gradientselector_set_orientation(void* self, int32_t orientation) {
    QAbstractSlider_SetOrientation((QAbstractSlider*)self, orientation);
}

void k_gradientselector_set_range(void* self, int min, int max) {
    QAbstractSlider_SetRange((QAbstractSlider*)self, min, max);
}

void k_gradientselector_value_changed(void* self, int value) {
    QAbstractSlider_ValueChanged((QAbstractSlider*)self, value);
}

void k_gradientselector_on_value_changed(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_ValueChanged((QAbstractSlider*)self, (intptr_t)callback);
}

void k_gradientselector_slider_pressed(void* self) {
    QAbstractSlider_SliderPressed((QAbstractSlider*)self);
}

void k_gradientselector_on_slider_pressed(void* self, void (*callback)(void*)) {
    QAbstractSlider_Connect_SliderPressed((QAbstractSlider*)self, (intptr_t)callback);
}

void k_gradientselector_slider_moved(void* self, int position) {
    QAbstractSlider_SliderMoved((QAbstractSlider*)self, position);
}

void k_gradientselector_on_slider_moved(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_SliderMoved((QAbstractSlider*)self, (intptr_t)callback);
}

void k_gradientselector_slider_released(void* self) {
    QAbstractSlider_SliderReleased((QAbstractSlider*)self);
}

void k_gradientselector_on_slider_released(void* self, void (*callback)(void*)) {
    QAbstractSlider_Connect_SliderReleased((QAbstractSlider*)self, (intptr_t)callback);
}

void k_gradientselector_range_changed(void* self, int min, int max) {
    QAbstractSlider_RangeChanged((QAbstractSlider*)self, min, max);
}

void k_gradientselector_on_range_changed(void* self, void (*callback)(void*, int, int)) {
    QAbstractSlider_Connect_RangeChanged((QAbstractSlider*)self, (intptr_t)callback);
}

void k_gradientselector_action_triggered(void* self, int action) {
    QAbstractSlider_ActionTriggered((QAbstractSlider*)self, action);
}

void k_gradientselector_on_action_triggered(void* self, void (*callback)(void*, int)) {
    QAbstractSlider_Connect_ActionTriggered((QAbstractSlider*)self, (intptr_t)callback);
}

uintptr_t k_gradientselector_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_gradientselector_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_gradientselector_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_gradientselector_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_gradientselector_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_gradientselector_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_gradientselector_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_gradientselector_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_gradientselector_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_gradientselector_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_gradientselector_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_gradientselector_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_gradientselector_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_gradientselector_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_gradientselector_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_gradientselector_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_gradientselector_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_gradientselector_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_gradientselector_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_gradientselector_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_gradientselector_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_gradientselector_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_gradientselector_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_gradientselector_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_gradientselector_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_gradientselector_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_gradientselector_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_gradientselector_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_gradientselector_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_gradientselector_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_gradientselector_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_gradientselector_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_gradientselector_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_gradientselector_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_gradientselector_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_gradientselector_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_gradientselector_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_gradientselector_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_gradientselector_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_gradientselector_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_gradientselector_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_gradientselector_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_gradientselector_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_gradientselector_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_gradientselector_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_gradientselector_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_gradientselector_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_gradientselector_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_gradientselector_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_gradientselector_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_gradientselector_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_gradientselector_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_gradientselector_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_gradientselector_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_gradientselector_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_gradientselector_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_gradientselector_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_gradientselector_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_gradientselector_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_gradientselector_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_gradientselector_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_gradientselector_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_gradientselector_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_gradientselector_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_gradientselector_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_gradientselector_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_gradientselector_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_gradientselector_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_gradientselector_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_gradientselector_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_gradientselector_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_gradientselector_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_gradientselector_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_gradientselector_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_gradientselector_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_gradientselector_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_gradientselector_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_gradientselector_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_gradientselector_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_gradientselector_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_gradientselector_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_gradientselector_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_gradientselector_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_gradientselector_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_gradientselector_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_gradientselector_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_gradientselector_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_gradientselector_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_gradientselector_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_gradientselector_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_gradientselector_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_gradientselector_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_gradientselector_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_gradientselector_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_gradientselector_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_gradientselector_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_gradientselector_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_gradientselector_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_gradientselector_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_gradientselector_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_gradientselector_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_gradientselector_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_gradientselector_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_gradientselector_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_gradientselector_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_gradientselector_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_gradientselector_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_gradientselector_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_gradientselector_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_gradientselector_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_gradientselector_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_gradientselector_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_gradientselector_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_gradientselector_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_gradientselector_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_gradientselector_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_gradientselector_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_gradientselector_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_gradientselector_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_gradientselector_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_gradientselector_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_gradientselector_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_gradientselector_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_gradientselector_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_gradientselector_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_gradientselector_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_gradientselector_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_gradientselector_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_gradientselector_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_gradientselector_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_gradientselector_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_gradientselector_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_gradientselector_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_gradientselector_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_gradientselector_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_gradientselector_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_gradientselector_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_gradientselector_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_gradientselector_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_gradientselector_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_gradientselector_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_gradientselector_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_gradientselector_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_gradientselector_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_gradientselector_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_gradientselector_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_gradientselector_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_gradientselector_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_gradientselector_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_gradientselector_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_gradientselector_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_gradientselector_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_gradientselector_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_gradientselector_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_gradientselector_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_gradientselector_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_gradientselector_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_gradientselector_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_gradientselector_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_gradientselector_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_gradientselector_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_gradientselector_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_gradientselector_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_gradientselector_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_gradientselector_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_gradientselector_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_gradientselector_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_gradientselector_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_gradientselector_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_gradientselector_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_gradientselector_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_gradientselector_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_gradientselector_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_gradientselector_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_gradientselector_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_gradientselector_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_gradientselector_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_gradientselector_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_gradientselector_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_gradientselector_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_gradientselector_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_gradientselector_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_gradientselector_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_gradientselector_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_gradientselector_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_gradientselector_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_gradientselector_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_gradientselector_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_gradientselector_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_gradientselector_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_gradientselector_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_gradientselector_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_gradientselector_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_gradientselector_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QLayout* k_gradientselector_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_gradientselector_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_gradientselector_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_gradientselector_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_gradientselector_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_gradientselector_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_gradientselector_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_gradientselector_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_gradientselector_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_gradientselector_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_gradientselector_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_gradientselector_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_gradientselector_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_gradientselector_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_gradientselector_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_gradientselector_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_gradientselector_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_gradientselector_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_gradientselector_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_gradientselector_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_gradientselector_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_gradientselector_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_gradientselector_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_gradientselector_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_gradientselector_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_gradientselector_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_gradientselector_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_gradientselector_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_gradientselector_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_gradientselector_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_gradientselector_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_gradientselector_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_gradientselector_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_gradientselector_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_gradientselector_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_gradientselector_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_gradientselector_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_gradientselector_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_gradientselector_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_gradientselector_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_gradientselector_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_gradientselector_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_gradientselector_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_gradientselector_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_gradientselector_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_gradientselector_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_gradientselector_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_gradientselector_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_gradientselector_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_gradientselector_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_gradientselector_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_gradientselector_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_gradientselector_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_gradientselector_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_gradientselector_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_gradientselector_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_gradientselector_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_gradientselector_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_gradientselector_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_gradientselector_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_gradientselector_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_gradientselector_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_gradientselector_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_gradientselector_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_gradientselector_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_gradientselector_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_gradientselector_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_gradientselector_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_gradientselector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_gradientselector_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_gradientselector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_gradientselector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_gradientselector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_gradientselector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_gradientselector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_gradientselector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_gradientselector_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_gradientselector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_gradientselector_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_gradientselector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_gradientselector_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_gradientselector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_gradientselector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_gradientselector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_gradientselector_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_gradientselector_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_gradientselector_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_gradientselector_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_gradientselector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_gradientselector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_gradientselector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_gradientselector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_gradientselector_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_gradientselector_dynamic_property_names\n");
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

QBindingStorage* k_gradientselector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_gradientselector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_gradientselector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_gradientselector_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_gradientselector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_gradientselector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_gradientselector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_gradientselector_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_gradientselector_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_gradientselector_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_gradientselector_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_gradientselector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_gradientselector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_gradientselector_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_gradientselector_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_gradientselector_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_gradientselector_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_gradientselector_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_gradientselector_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_gradientselector_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_gradientselector_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_gradientselector_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_gradientselector_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_gradientselector_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_gradientselector_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_gradientselector_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_gradientselector_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_gradientselector_draw_arrow(void* self, void* painter, void* pos) {
    KGradientSelector_DrawArrow((KGradientSelector*)self, (QPainter*)painter, (QPoint*)pos);
}

void k_gradientselector_qbase_draw_arrow(void* self, void* painter, void* pos) {
    KGradientSelector_QBaseDrawArrow((KGradientSelector*)self, (QPainter*)painter, (QPoint*)pos);
}

void k_gradientselector_on_draw_arrow(void* self, void (*callback)(void*, void*, void*)) {
    KGradientSelector_OnDrawArrow((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_paint_event(void* self, void* param1) {
    KGradientSelector_PaintEvent((KGradientSelector*)self, (QPaintEvent*)param1);
}

void k_gradientselector_qbase_paint_event(void* self, void* param1) {
    KGradientSelector_QBasePaintEvent((KGradientSelector*)self, (QPaintEvent*)param1);
}

void k_gradientselector_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnPaintEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_mouse_press_event(void* self, void* e) {
    KGradientSelector_MousePressEvent((KGradientSelector*)self, (QMouseEvent*)e);
}

void k_gradientselector_qbase_mouse_press_event(void* self, void* e) {
    KGradientSelector_QBaseMousePressEvent((KGradientSelector*)self, (QMouseEvent*)e);
}

void k_gradientselector_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnMousePressEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_mouse_move_event(void* self, void* e) {
    KGradientSelector_MouseMoveEvent((KGradientSelector*)self, (QMouseEvent*)e);
}

void k_gradientselector_qbase_mouse_move_event(void* self, void* e) {
    KGradientSelector_QBaseMouseMoveEvent((KGradientSelector*)self, (QMouseEvent*)e);
}

void k_gradientselector_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnMouseMoveEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_mouse_release_event(void* self, void* e) {
    KGradientSelector_MouseReleaseEvent((KGradientSelector*)self, (QMouseEvent*)e);
}

void k_gradientselector_qbase_mouse_release_event(void* self, void* e) {
    KGradientSelector_QBaseMouseReleaseEvent((KGradientSelector*)self, (QMouseEvent*)e);
}

void k_gradientselector_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnMouseReleaseEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_wheel_event(void* self, void* param1) {
    KGradientSelector_WheelEvent((KGradientSelector*)self, (QWheelEvent*)param1);
}

void k_gradientselector_qbase_wheel_event(void* self, void* param1) {
    KGradientSelector_QBaseWheelEvent((KGradientSelector*)self, (QWheelEvent*)param1);
}

void k_gradientselector_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnWheelEvent((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_event(void* self, void* e) {
    return KGradientSelector_Event((KGradientSelector*)self, (QEvent*)e);
}

bool k_gradientselector_qbase_event(void* self, void* e) {
    return KGradientSelector_QBaseEvent((KGradientSelector*)self, (QEvent*)e);
}

void k_gradientselector_on_event(void* self, bool (*callback)(void*, void*)) {
    KGradientSelector_OnEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_slider_change(void* self, int32_t change) {
    KGradientSelector_SliderChange((KGradientSelector*)self, change);
}

void k_gradientselector_qbase_slider_change(void* self, int32_t change) {
    KGradientSelector_QBaseSliderChange((KGradientSelector*)self, change);
}

void k_gradientselector_on_slider_change(void* self, void (*callback)(void*, int32_t)) {
    KGradientSelector_OnSliderChange((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_key_press_event(void* self, void* ev) {
    KGradientSelector_KeyPressEvent((KGradientSelector*)self, (QKeyEvent*)ev);
}

void k_gradientselector_qbase_key_press_event(void* self, void* ev) {
    KGradientSelector_QBaseKeyPressEvent((KGradientSelector*)self, (QKeyEvent*)ev);
}

void k_gradientselector_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnKeyPressEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_timer_event(void* self, void* param1) {
    KGradientSelector_TimerEvent((KGradientSelector*)self, (QTimerEvent*)param1);
}

void k_gradientselector_qbase_timer_event(void* self, void* param1) {
    KGradientSelector_QBaseTimerEvent((KGradientSelector*)self, (QTimerEvent*)param1);
}

void k_gradientselector_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnTimerEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_change_event(void* self, void* e) {
    KGradientSelector_ChangeEvent((KGradientSelector*)self, (QEvent*)e);
}

void k_gradientselector_qbase_change_event(void* self, void* e) {
    KGradientSelector_QBaseChangeEvent((KGradientSelector*)self, (QEvent*)e);
}

void k_gradientselector_on_change_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnChangeEvent((KGradientSelector*)self, (intptr_t)callback);
}

int32_t k_gradientselector_dev_type(void* self) {
    return KGradientSelector_DevType((KGradientSelector*)self);
}

int32_t k_gradientselector_qbase_dev_type(void* self) {
    return KGradientSelector_QBaseDevType((KGradientSelector*)self);
}

void k_gradientselector_on_dev_type(void* self, int32_t (*callback)()) {
    KGradientSelector_OnDevType((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_set_visible(void* self, bool visible) {
    KGradientSelector_SetVisible((KGradientSelector*)self, visible);
}

void k_gradientselector_qbase_set_visible(void* self, bool visible) {
    KGradientSelector_QBaseSetVisible((KGradientSelector*)self, visible);
}

void k_gradientselector_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KGradientSelector_OnSetVisible((KGradientSelector*)self, (intptr_t)callback);
}

QSize* k_gradientselector_size_hint(void* self) {
    return KGradientSelector_SizeHint((KGradientSelector*)self);
}

QSize* k_gradientselector_qbase_size_hint(void* self) {
    return KGradientSelector_QBaseSizeHint((KGradientSelector*)self);
}

void k_gradientselector_on_size_hint(void* self, QSize* (*callback)()) {
    KGradientSelector_OnSizeHint((KGradientSelector*)self, (intptr_t)callback);
}

QSize* k_gradientselector_minimum_size_hint(void* self) {
    return KGradientSelector_MinimumSizeHint((KGradientSelector*)self);
}

QSize* k_gradientselector_qbase_minimum_size_hint(void* self) {
    return KGradientSelector_QBaseMinimumSizeHint((KGradientSelector*)self);
}

void k_gradientselector_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KGradientSelector_OnMinimumSizeHint((KGradientSelector*)self, (intptr_t)callback);
}

int32_t k_gradientselector_height_for_width(void* self, int param1) {
    return KGradientSelector_HeightForWidth((KGradientSelector*)self, param1);
}

int32_t k_gradientselector_qbase_height_for_width(void* self, int param1) {
    return KGradientSelector_QBaseHeightForWidth((KGradientSelector*)self, param1);
}

void k_gradientselector_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KGradientSelector_OnHeightForWidth((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_has_height_for_width(void* self) {
    return KGradientSelector_HasHeightForWidth((KGradientSelector*)self);
}

bool k_gradientselector_qbase_has_height_for_width(void* self) {
    return KGradientSelector_QBaseHasHeightForWidth((KGradientSelector*)self);
}

void k_gradientselector_on_has_height_for_width(void* self, bool (*callback)()) {
    KGradientSelector_OnHasHeightForWidth((KGradientSelector*)self, (intptr_t)callback);
}

QPaintEngine* k_gradientselector_paint_engine(void* self) {
    return KGradientSelector_PaintEngine((KGradientSelector*)self);
}

QPaintEngine* k_gradientselector_qbase_paint_engine(void* self) {
    return KGradientSelector_QBasePaintEngine((KGradientSelector*)self);
}

void k_gradientselector_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KGradientSelector_OnPaintEngine((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_mouse_double_click_event(void* self, void* event) {
    KGradientSelector_MouseDoubleClickEvent((KGradientSelector*)self, (QMouseEvent*)event);
}

void k_gradientselector_qbase_mouse_double_click_event(void* self, void* event) {
    KGradientSelector_QBaseMouseDoubleClickEvent((KGradientSelector*)self, (QMouseEvent*)event);
}

void k_gradientselector_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnMouseDoubleClickEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_key_release_event(void* self, void* event) {
    KGradientSelector_KeyReleaseEvent((KGradientSelector*)self, (QKeyEvent*)event);
}

void k_gradientselector_qbase_key_release_event(void* self, void* event) {
    KGradientSelector_QBaseKeyReleaseEvent((KGradientSelector*)self, (QKeyEvent*)event);
}

void k_gradientselector_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnKeyReleaseEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_focus_in_event(void* self, void* event) {
    KGradientSelector_FocusInEvent((KGradientSelector*)self, (QFocusEvent*)event);
}

void k_gradientselector_qbase_focus_in_event(void* self, void* event) {
    KGradientSelector_QBaseFocusInEvent((KGradientSelector*)self, (QFocusEvent*)event);
}

void k_gradientselector_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnFocusInEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_focus_out_event(void* self, void* event) {
    KGradientSelector_FocusOutEvent((KGradientSelector*)self, (QFocusEvent*)event);
}

void k_gradientselector_qbase_focus_out_event(void* self, void* event) {
    KGradientSelector_QBaseFocusOutEvent((KGradientSelector*)self, (QFocusEvent*)event);
}

void k_gradientselector_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnFocusOutEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_enter_event(void* self, void* event) {
    KGradientSelector_EnterEvent((KGradientSelector*)self, (QEnterEvent*)event);
}

void k_gradientselector_qbase_enter_event(void* self, void* event) {
    KGradientSelector_QBaseEnterEvent((KGradientSelector*)self, (QEnterEvent*)event);
}

void k_gradientselector_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnEnterEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_leave_event(void* self, void* event) {
    KGradientSelector_LeaveEvent((KGradientSelector*)self, (QEvent*)event);
}

void k_gradientselector_qbase_leave_event(void* self, void* event) {
    KGradientSelector_QBaseLeaveEvent((KGradientSelector*)self, (QEvent*)event);
}

void k_gradientselector_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnLeaveEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_move_event(void* self, void* event) {
    KGradientSelector_MoveEvent((KGradientSelector*)self, (QMoveEvent*)event);
}

void k_gradientselector_qbase_move_event(void* self, void* event) {
    KGradientSelector_QBaseMoveEvent((KGradientSelector*)self, (QMoveEvent*)event);
}

void k_gradientselector_on_move_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnMoveEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_resize_event(void* self, void* event) {
    KGradientSelector_ResizeEvent((KGradientSelector*)self, (QResizeEvent*)event);
}

void k_gradientselector_qbase_resize_event(void* self, void* event) {
    KGradientSelector_QBaseResizeEvent((KGradientSelector*)self, (QResizeEvent*)event);
}

void k_gradientselector_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnResizeEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_close_event(void* self, void* event) {
    KGradientSelector_CloseEvent((KGradientSelector*)self, (QCloseEvent*)event);
}

void k_gradientselector_qbase_close_event(void* self, void* event) {
    KGradientSelector_QBaseCloseEvent((KGradientSelector*)self, (QCloseEvent*)event);
}

void k_gradientselector_on_close_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnCloseEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_context_menu_event(void* self, void* event) {
    KGradientSelector_ContextMenuEvent((KGradientSelector*)self, (QContextMenuEvent*)event);
}

void k_gradientselector_qbase_context_menu_event(void* self, void* event) {
    KGradientSelector_QBaseContextMenuEvent((KGradientSelector*)self, (QContextMenuEvent*)event);
}

void k_gradientselector_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnContextMenuEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_tablet_event(void* self, void* event) {
    KGradientSelector_TabletEvent((KGradientSelector*)self, (QTabletEvent*)event);
}

void k_gradientselector_qbase_tablet_event(void* self, void* event) {
    KGradientSelector_QBaseTabletEvent((KGradientSelector*)self, (QTabletEvent*)event);
}

void k_gradientselector_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnTabletEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_action_event(void* self, void* event) {
    KGradientSelector_ActionEvent((KGradientSelector*)self, (QActionEvent*)event);
}

void k_gradientselector_qbase_action_event(void* self, void* event) {
    KGradientSelector_QBaseActionEvent((KGradientSelector*)self, (QActionEvent*)event);
}

void k_gradientselector_on_action_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnActionEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_drag_enter_event(void* self, void* event) {
    KGradientSelector_DragEnterEvent((KGradientSelector*)self, (QDragEnterEvent*)event);
}

void k_gradientselector_qbase_drag_enter_event(void* self, void* event) {
    KGradientSelector_QBaseDragEnterEvent((KGradientSelector*)self, (QDragEnterEvent*)event);
}

void k_gradientselector_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnDragEnterEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_drag_move_event(void* self, void* event) {
    KGradientSelector_DragMoveEvent((KGradientSelector*)self, (QDragMoveEvent*)event);
}

void k_gradientselector_qbase_drag_move_event(void* self, void* event) {
    KGradientSelector_QBaseDragMoveEvent((KGradientSelector*)self, (QDragMoveEvent*)event);
}

void k_gradientselector_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnDragMoveEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_drag_leave_event(void* self, void* event) {
    KGradientSelector_DragLeaveEvent((KGradientSelector*)self, (QDragLeaveEvent*)event);
}

void k_gradientselector_qbase_drag_leave_event(void* self, void* event) {
    KGradientSelector_QBaseDragLeaveEvent((KGradientSelector*)self, (QDragLeaveEvent*)event);
}

void k_gradientselector_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnDragLeaveEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_drop_event(void* self, void* event) {
    KGradientSelector_DropEvent((KGradientSelector*)self, (QDropEvent*)event);
}

void k_gradientselector_qbase_drop_event(void* self, void* event) {
    KGradientSelector_QBaseDropEvent((KGradientSelector*)self, (QDropEvent*)event);
}

void k_gradientselector_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnDropEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_show_event(void* self, void* event) {
    KGradientSelector_ShowEvent((KGradientSelector*)self, (QShowEvent*)event);
}

void k_gradientselector_qbase_show_event(void* self, void* event) {
    KGradientSelector_QBaseShowEvent((KGradientSelector*)self, (QShowEvent*)event);
}

void k_gradientselector_on_show_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnShowEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_hide_event(void* self, void* event) {
    KGradientSelector_HideEvent((KGradientSelector*)self, (QHideEvent*)event);
}

void k_gradientselector_qbase_hide_event(void* self, void* event) {
    KGradientSelector_QBaseHideEvent((KGradientSelector*)self, (QHideEvent*)event);
}

void k_gradientselector_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnHideEvent((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KGradientSelector_NativeEvent((KGradientSelector*)self, qstring(eventType), message, result);
}

bool k_gradientselector_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KGradientSelector_QBaseNativeEvent((KGradientSelector*)self, qstring(eventType), message, result);
}

void k_gradientselector_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KGradientSelector_OnNativeEvent((KGradientSelector*)self, (intptr_t)callback);
}

int32_t k_gradientselector_metric(void* self, int32_t param1) {
    return KGradientSelector_Metric((KGradientSelector*)self, param1);
}

int32_t k_gradientselector_qbase_metric(void* self, int32_t param1) {
    return KGradientSelector_QBaseMetric((KGradientSelector*)self, param1);
}

void k_gradientselector_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KGradientSelector_OnMetric((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_init_painter(void* self, void* painter) {
    KGradientSelector_InitPainter((KGradientSelector*)self, (QPainter*)painter);
}

void k_gradientselector_qbase_init_painter(void* self, void* painter) {
    KGradientSelector_QBaseInitPainter((KGradientSelector*)self, (QPainter*)painter);
}

void k_gradientselector_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnInitPainter((KGradientSelector*)self, (intptr_t)callback);
}

QPaintDevice* k_gradientselector_redirected(void* self, void* offset) {
    return KGradientSelector_Redirected((KGradientSelector*)self, (QPoint*)offset);
}

QPaintDevice* k_gradientselector_qbase_redirected(void* self, void* offset) {
    return KGradientSelector_QBaseRedirected((KGradientSelector*)self, (QPoint*)offset);
}

void k_gradientselector_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KGradientSelector_OnRedirected((KGradientSelector*)self, (intptr_t)callback);
}

QPainter* k_gradientselector_shared_painter(void* self) {
    return KGradientSelector_SharedPainter((KGradientSelector*)self);
}

QPainter* k_gradientselector_qbase_shared_painter(void* self) {
    return KGradientSelector_QBaseSharedPainter((KGradientSelector*)self);
}

void k_gradientselector_on_shared_painter(void* self, QPainter* (*callback)()) {
    KGradientSelector_OnSharedPainter((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_input_method_event(void* self, void* param1) {
    KGradientSelector_InputMethodEvent((KGradientSelector*)self, (QInputMethodEvent*)param1);
}

void k_gradientselector_qbase_input_method_event(void* self, void* param1) {
    KGradientSelector_QBaseInputMethodEvent((KGradientSelector*)self, (QInputMethodEvent*)param1);
}

void k_gradientselector_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnInputMethodEvent((KGradientSelector*)self, (intptr_t)callback);
}

QVariant* k_gradientselector_input_method_query(void* self, int32_t param1) {
    return KGradientSelector_InputMethodQuery((KGradientSelector*)self, param1);
}

QVariant* k_gradientselector_qbase_input_method_query(void* self, int32_t param1) {
    return KGradientSelector_QBaseInputMethodQuery((KGradientSelector*)self, param1);
}

void k_gradientselector_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KGradientSelector_OnInputMethodQuery((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_focus_next_prev_child(void* self, bool next) {
    return KGradientSelector_FocusNextPrevChild((KGradientSelector*)self, next);
}

bool k_gradientselector_qbase_focus_next_prev_child(void* self, bool next) {
    return KGradientSelector_QBaseFocusNextPrevChild((KGradientSelector*)self, next);
}

void k_gradientselector_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KGradientSelector_OnFocusNextPrevChild((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_event_filter(void* self, void* watched, void* event) {
    return KGradientSelector_EventFilter((KGradientSelector*)self, (QObject*)watched, (QEvent*)event);
}

bool k_gradientselector_qbase_event_filter(void* self, void* watched, void* event) {
    return KGradientSelector_QBaseEventFilter((KGradientSelector*)self, (QObject*)watched, (QEvent*)event);
}

void k_gradientselector_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KGradientSelector_OnEventFilter((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_child_event(void* self, void* event) {
    KGradientSelector_ChildEvent((KGradientSelector*)self, (QChildEvent*)event);
}

void k_gradientselector_qbase_child_event(void* self, void* event) {
    KGradientSelector_QBaseChildEvent((KGradientSelector*)self, (QChildEvent*)event);
}

void k_gradientselector_on_child_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnChildEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_custom_event(void* self, void* event) {
    KGradientSelector_CustomEvent((KGradientSelector*)self, (QEvent*)event);
}

void k_gradientselector_qbase_custom_event(void* self, void* event) {
    KGradientSelector_QBaseCustomEvent((KGradientSelector*)self, (QEvent*)event);
}

void k_gradientselector_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnCustomEvent((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_connect_notify(void* self, void* signal) {
    KGradientSelector_ConnectNotify((KGradientSelector*)self, (QMetaMethod*)signal);
}

void k_gradientselector_qbase_connect_notify(void* self, void* signal) {
    KGradientSelector_QBaseConnectNotify((KGradientSelector*)self, (QMetaMethod*)signal);
}

void k_gradientselector_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnConnectNotify((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_disconnect_notify(void* self, void* signal) {
    KGradientSelector_DisconnectNotify((KGradientSelector*)self, (QMetaMethod*)signal);
}

void k_gradientselector_qbase_disconnect_notify(void* self, void* signal) {
    KGradientSelector_QBaseDisconnectNotify((KGradientSelector*)self, (QMetaMethod*)signal);
}

void k_gradientselector_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KGradientSelector_OnDisconnectNotify((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_set_repeat_action(void* self, int32_t action) {
    KGradientSelector_SetRepeatAction((KGradientSelector*)self, action);
}

void k_gradientselector_qbase_set_repeat_action(void* self, int32_t action) {
    KGradientSelector_QBaseSetRepeatAction((KGradientSelector*)self, action);
}

void k_gradientselector_on_set_repeat_action(void* self, void (*callback)(void*, int32_t)) {
    KGradientSelector_OnSetRepeatAction((KGradientSelector*)self, (intptr_t)callback);
}

int32_t k_gradientselector_repeat_action(void* self) {
    return KGradientSelector_RepeatAction((KGradientSelector*)self);
}

int32_t k_gradientselector_qbase_repeat_action(void* self) {
    return KGradientSelector_QBaseRepeatAction((KGradientSelector*)self);
}

void k_gradientselector_on_repeat_action(void* self, int32_t (*callback)()) {
    KGradientSelector_OnRepeatAction((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_update_micro_focus(void* self) {
    KGradientSelector_UpdateMicroFocus((KGradientSelector*)self);
}

void k_gradientselector_qbase_update_micro_focus(void* self) {
    KGradientSelector_QBaseUpdateMicroFocus((KGradientSelector*)self);
}

void k_gradientselector_on_update_micro_focus(void* self, void (*callback)()) {
    KGradientSelector_OnUpdateMicroFocus((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_create(void* self) {
    KGradientSelector_Create((KGradientSelector*)self);
}

void k_gradientselector_qbase_create(void* self) {
    KGradientSelector_QBaseCreate((KGradientSelector*)self);
}

void k_gradientselector_on_create(void* self, void (*callback)()) {
    KGradientSelector_OnCreate((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_destroy(void* self) {
    KGradientSelector_Destroy((KGradientSelector*)self);
}

void k_gradientselector_qbase_destroy(void* self) {
    KGradientSelector_QBaseDestroy((KGradientSelector*)self);
}

void k_gradientselector_on_destroy(void* self, void (*callback)()) {
    KGradientSelector_OnDestroy((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_focus_next_child(void* self) {
    return KGradientSelector_FocusNextChild((KGradientSelector*)self);
}

bool k_gradientselector_qbase_focus_next_child(void* self) {
    return KGradientSelector_QBaseFocusNextChild((KGradientSelector*)self);
}

void k_gradientselector_on_focus_next_child(void* self, bool (*callback)()) {
    KGradientSelector_OnFocusNextChild((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_focus_previous_child(void* self) {
    return KGradientSelector_FocusPreviousChild((KGradientSelector*)self);
}

bool k_gradientselector_qbase_focus_previous_child(void* self) {
    return KGradientSelector_QBaseFocusPreviousChild((KGradientSelector*)self);
}

void k_gradientselector_on_focus_previous_child(void* self, bool (*callback)()) {
    KGradientSelector_OnFocusPreviousChild((KGradientSelector*)self, (intptr_t)callback);
}

QObject* k_gradientselector_sender(void* self) {
    return KGradientSelector_Sender((KGradientSelector*)self);
}

QObject* k_gradientselector_qbase_sender(void* self) {
    return KGradientSelector_QBaseSender((KGradientSelector*)self);
}

void k_gradientselector_on_sender(void* self, QObject* (*callback)()) {
    KGradientSelector_OnSender((KGradientSelector*)self, (intptr_t)callback);
}

int32_t k_gradientselector_sender_signal_index(void* self) {
    return KGradientSelector_SenderSignalIndex((KGradientSelector*)self);
}

int32_t k_gradientselector_qbase_sender_signal_index(void* self) {
    return KGradientSelector_QBaseSenderSignalIndex((KGradientSelector*)self);
}

void k_gradientselector_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KGradientSelector_OnSenderSignalIndex((KGradientSelector*)self, (intptr_t)callback);
}

int32_t k_gradientselector_receivers(void* self, const char* signal) {
    return KGradientSelector_Receivers((KGradientSelector*)self, signal);
}

int32_t k_gradientselector_qbase_receivers(void* self, const char* signal) {
    return KGradientSelector_QBaseReceivers((KGradientSelector*)self, signal);
}

void k_gradientselector_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KGradientSelector_OnReceivers((KGradientSelector*)self, (intptr_t)callback);
}

bool k_gradientselector_is_signal_connected(void* self, void* signal) {
    return KGradientSelector_IsSignalConnected((KGradientSelector*)self, (QMetaMethod*)signal);
}

bool k_gradientselector_qbase_is_signal_connected(void* self, void* signal) {
    return KGradientSelector_QBaseIsSignalConnected((KGradientSelector*)self, (QMetaMethod*)signal);
}

void k_gradientselector_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KGradientSelector_OnIsSignalConnected((KGradientSelector*)self, (intptr_t)callback);
}

double k_gradientselector_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KGradientSelector_GetDecodedMetricF((KGradientSelector*)self, metricA, metricB);
}

double k_gradientselector_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KGradientSelector_QBaseGetDecodedMetricF((KGradientSelector*)self, metricA, metricB);
}

void k_gradientselector_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KGradientSelector_OnGetDecodedMetricF((KGradientSelector*)self, (intptr_t)callback);
}

void k_gradientselector_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_gradientselector_delete(void* self) {
    KGradientSelector_Delete((KGradientSelector*)(self));
}
