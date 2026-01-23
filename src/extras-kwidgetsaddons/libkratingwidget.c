#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkratingwidget.hpp"
#include "libkratingwidget.h"

KRatingWidget* k_ratingwidget_new(void* parent) {
    return KRatingWidget_new((QWidget*)parent);
}

KRatingWidget* k_ratingwidget_new2() {
    return KRatingWidget_new2();
}

const QMetaObject* k_ratingwidget_meta_object(void* self) {
    return KRatingWidget_MetaObject((KRatingWidget*)self);
}

void* k_ratingwidget_metacast(void* self, const char* param1) {
    return KRatingWidget_Metacast((KRatingWidget*)self, param1);
}

int32_t k_ratingwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRatingWidget_Metacall((KRatingWidget*)self, param1, param2, param3);
}

void k_ratingwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KRatingWidget_OnMetacall((KRatingWidget*)self, (intptr_t)callback);
}

int32_t k_ratingwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KRatingWidget_QBaseMetacall((KRatingWidget*)self, param1, param2, param3);
}

const char* k_ratingwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_ratingwidget_rating(void* self) {
    return KRatingWidget_Rating((KRatingWidget*)self);
}

int32_t k_ratingwidget_max_rating(void* self) {
    return KRatingWidget_MaxRating((KRatingWidget*)self);
}

int32_t k_ratingwidget_alignment(void* self) {
    return KRatingWidget_Alignment((KRatingWidget*)self);
}

int32_t k_ratingwidget_layout_direction(void* self) {
    return KRatingWidget_LayoutDirection((KRatingWidget*)self);
}

int32_t k_ratingwidget_spacing(void* self) {
    return KRatingWidget_Spacing((KRatingWidget*)self);
}

QSize* k_ratingwidget_size_hint(void* self) {
    return KRatingWidget_SizeHint((KRatingWidget*)self);
}

void k_ratingwidget_on_size_hint(void* self, QSize* (*callback)()) {
    KRatingWidget_OnSizeHint((KRatingWidget*)self, (intptr_t)callback);
}

QSize* k_ratingwidget_qbase_size_hint(void* self) {
    return KRatingWidget_QBaseSizeHint((KRatingWidget*)self);
}

bool k_ratingwidget_half_steps_enabled(void* self) {
    return KRatingWidget_HalfStepsEnabled((KRatingWidget*)self);
}

QIcon* k_ratingwidget_icon(void* self) {
    return KRatingWidget_Icon((KRatingWidget*)self);
}

void k_ratingwidget_rating_changed(void* self, int rating) {
    KRatingWidget_RatingChanged((KRatingWidget*)self, rating);
}

void k_ratingwidget_on_rating_changed(void* self, void (*callback)(void*, int)) {
    KRatingWidget_Connect_RatingChanged((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_set_rating(void* self, int rating) {
    KRatingWidget_SetRating((KRatingWidget*)self, rating);
}

void k_ratingwidget_set_max_rating(void* self, int max) {
    KRatingWidget_SetMaxRating((KRatingWidget*)self, max);
}

void k_ratingwidget_set_half_steps_enabled(void* self, bool enabled) {
    KRatingWidget_SetHalfStepsEnabled((KRatingWidget*)self, enabled);
}

void k_ratingwidget_set_spacing(void* self, int spacing) {
    KRatingWidget_SetSpacing((KRatingWidget*)self, spacing);
}

void k_ratingwidget_set_alignment(void* self, int32_t align) {
    KRatingWidget_SetAlignment((KRatingWidget*)self, align);
}

void k_ratingwidget_set_layout_direction(void* self, int32_t direction) {
    KRatingWidget_SetLayoutDirection((KRatingWidget*)self, direction);
}

void k_ratingwidget_set_icon(void* self, void* icon) {
    KRatingWidget_SetIcon((KRatingWidget*)self, (QIcon*)icon);
}

void k_ratingwidget_set_custom_pixmap(void* self, void* pixmap) {
    KRatingWidget_SetCustomPixmap((KRatingWidget*)self, (QPixmap*)pixmap);
}

void k_ratingwidget_set_pixmap_size(void* self, int size) {
    KRatingWidget_SetPixmapSize((KRatingWidget*)self, size);
}

void k_ratingwidget_mouse_press_event(void* self, void* e) {
    KRatingWidget_MousePressEvent((KRatingWidget*)self, (QMouseEvent*)e);
}

void k_ratingwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnMousePressEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_qbase_mouse_press_event(void* self, void* e) {
    KRatingWidget_QBaseMousePressEvent((KRatingWidget*)self, (QMouseEvent*)e);
}

void k_ratingwidget_mouse_move_event(void* self, void* e) {
    KRatingWidget_MouseMoveEvent((KRatingWidget*)self, (QMouseEvent*)e);
}

void k_ratingwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnMouseMoveEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_qbase_mouse_move_event(void* self, void* e) {
    KRatingWidget_QBaseMouseMoveEvent((KRatingWidget*)self, (QMouseEvent*)e);
}

void k_ratingwidget_leave_event(void* self, void* e) {
    KRatingWidget_LeaveEvent((KRatingWidget*)self, (QEvent*)e);
}

void k_ratingwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnLeaveEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_qbase_leave_event(void* self, void* e) {
    KRatingWidget_QBaseLeaveEvent((KRatingWidget*)self, (QEvent*)e);
}

void k_ratingwidget_paint_event(void* self, void* e) {
    KRatingWidget_PaintEvent((KRatingWidget*)self, (QPaintEvent*)e);
}

void k_ratingwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnPaintEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_qbase_paint_event(void* self, void* e) {
    KRatingWidget_QBasePaintEvent((KRatingWidget*)self, (QPaintEvent*)e);
}

void k_ratingwidget_resize_event(void* self, void* e) {
    KRatingWidget_ResizeEvent((KRatingWidget*)self, (QResizeEvent*)e);
}

void k_ratingwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnResizeEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_qbase_resize_event(void* self, void* e) {
    KRatingWidget_QBaseResizeEvent((KRatingWidget*)self, (QResizeEvent*)e);
}

const char* k_ratingwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_ratingwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_ratingwidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_ratingwidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_ratingwidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_ratingwidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_ratingwidget_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_ratingwidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_ratingwidget_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_ratingwidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_ratingwidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_ratingwidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_ratingwidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_ratingwidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_ratingwidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_ratingwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_ratingwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_ratingwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_ratingwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_ratingwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_ratingwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_ratingwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_ratingwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_ratingwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_ratingwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_ratingwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_ratingwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_ratingwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_ratingwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_ratingwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_ratingwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_ratingwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_ratingwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_ratingwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_ratingwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_ratingwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_ratingwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_ratingwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_ratingwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_ratingwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_ratingwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_ratingwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_ratingwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_ratingwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_ratingwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_ratingwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_ratingwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_ratingwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_ratingwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_ratingwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_ratingwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_ratingwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_ratingwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_ratingwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_ratingwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_ratingwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_ratingwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_ratingwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_ratingwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_ratingwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_ratingwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_ratingwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_ratingwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_ratingwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_ratingwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_ratingwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_ratingwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_ratingwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_ratingwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_ratingwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_ratingwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_ratingwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_ratingwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_ratingwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_ratingwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_ratingwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_ratingwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_ratingwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_ratingwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_ratingwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_ratingwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_ratingwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_ratingwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_ratingwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_ratingwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_ratingwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_ratingwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_ratingwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_ratingwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_ratingwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_ratingwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_ratingwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_ratingwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_ratingwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_ratingwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_ratingwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_ratingwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_ratingwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_ratingwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_ratingwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_ratingwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_ratingwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_ratingwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_ratingwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_ratingwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_ratingwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_ratingwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_ratingwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_ratingwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_ratingwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_ratingwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_ratingwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_ratingwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_ratingwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_ratingwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_ratingwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_ratingwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_ratingwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_ratingwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_ratingwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_ratingwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_ratingwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_ratingwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_ratingwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_ratingwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_ratingwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_ratingwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_ratingwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_ratingwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_ratingwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_ratingwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_ratingwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_ratingwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_ratingwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_ratingwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_ratingwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_ratingwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_ratingwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_ratingwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_ratingwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_ratingwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_ratingwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_ratingwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_ratingwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_ratingwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_ratingwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_ratingwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_ratingwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_ratingwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_ratingwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_ratingwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_ratingwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_ratingwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_ratingwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_ratingwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_ratingwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_ratingwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_ratingwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_ratingwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_ratingwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_ratingwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_ratingwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_ratingwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_ratingwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_ratingwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_ratingwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_ratingwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_ratingwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_ratingwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_ratingwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_ratingwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_ratingwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_ratingwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_ratingwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_ratingwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_ratingwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_ratingwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_ratingwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_ratingwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_ratingwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_ratingwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_ratingwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_ratingwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_ratingwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_ratingwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_ratingwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_ratingwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_ratingwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_ratingwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_ratingwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_ratingwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_ratingwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_ratingwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_ratingwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_ratingwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_ratingwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_ratingwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_ratingwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_ratingwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_ratingwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_ratingwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_ratingwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_ratingwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_ratingwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_ratingwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_ratingwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_ratingwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_ratingwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_ratingwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_ratingwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_ratingwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_ratingwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_ratingwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_ratingwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_ratingwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_ratingwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_ratingwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_ratingwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_ratingwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_ratingwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_ratingwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_ratingwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_ratingwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_ratingwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_ratingwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_ratingwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_ratingwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_ratingwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_ratingwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_ratingwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_ratingwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_ratingwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_ratingwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_ratingwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_ratingwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_ratingwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_ratingwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_ratingwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_ratingwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_ratingwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_ratingwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_ratingwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_ratingwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_ratingwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_ratingwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_ratingwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_ratingwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_ratingwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_ratingwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_ratingwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_ratingwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_ratingwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_ratingwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_ratingwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_ratingwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_ratingwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_ratingwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_ratingwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_ratingwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_ratingwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_ratingwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_ratingwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_ratingwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_ratingwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_ratingwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_ratingwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_ratingwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_ratingwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_ratingwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_ratingwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_ratingwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_ratingwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_ratingwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_ratingwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_ratingwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_ratingwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_ratingwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_ratingwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_ratingwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_ratingwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_ratingwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_ratingwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_ratingwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_ratingwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_ratingwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_ratingwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_ratingwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_ratingwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_ratingwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_ratingwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_ratingwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_ratingwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_ratingwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_ratingwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_ratingwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_ratingwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_ratingwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_ratingwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_ratingwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_ratingwidget_dynamic_property_names\n");
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

QBindingStorage* k_ratingwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_ratingwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_ratingwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_ratingwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_ratingwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_ratingwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_ratingwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_ratingwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_ratingwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_ratingwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_ratingwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_ratingwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_ratingwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_ratingwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_ratingwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_ratingwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_ratingwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_ratingwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_ratingwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_ratingwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_ratingwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_ratingwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_ratingwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_ratingwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_ratingwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_ratingwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_ratingwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool k_ratingwidget_event(void* self, void* e) {
    return KRatingWidget_Event((KRatingWidget*)self, (QEvent*)e);
}

bool k_ratingwidget_qbase_event(void* self, void* e) {
    return KRatingWidget_QBaseEvent((KRatingWidget*)self, (QEvent*)e);
}

void k_ratingwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KRatingWidget_OnEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_change_event(void* self, void* param1) {
    KRatingWidget_ChangeEvent((KRatingWidget*)self, (QEvent*)param1);
}

void k_ratingwidget_qbase_change_event(void* self, void* param1) {
    KRatingWidget_QBaseChangeEvent((KRatingWidget*)self, (QEvent*)param1);
}

void k_ratingwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnChangeEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_init_style_option(void* self, void* option) {
    KRatingWidget_InitStyleOption((KRatingWidget*)self, (QStyleOptionFrame*)option);
}

void k_ratingwidget_qbase_init_style_option(void* self, void* option) {
    KRatingWidget_QBaseInitStyleOption((KRatingWidget*)self, (QStyleOptionFrame*)option);
}

void k_ratingwidget_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnInitStyleOption((KRatingWidget*)self, (intptr_t)callback);
}

int32_t k_ratingwidget_dev_type(void* self) {
    return KRatingWidget_DevType((KRatingWidget*)self);
}

int32_t k_ratingwidget_qbase_dev_type(void* self) {
    return KRatingWidget_QBaseDevType((KRatingWidget*)self);
}

void k_ratingwidget_on_dev_type(void* self, int32_t (*callback)()) {
    KRatingWidget_OnDevType((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_set_visible(void* self, bool visible) {
    KRatingWidget_SetVisible((KRatingWidget*)self, visible);
}

void k_ratingwidget_qbase_set_visible(void* self, bool visible) {
    KRatingWidget_QBaseSetVisible((KRatingWidget*)self, visible);
}

void k_ratingwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KRatingWidget_OnSetVisible((KRatingWidget*)self, (intptr_t)callback);
}

QSize* k_ratingwidget_minimum_size_hint(void* self) {
    return KRatingWidget_MinimumSizeHint((KRatingWidget*)self);
}

QSize* k_ratingwidget_qbase_minimum_size_hint(void* self) {
    return KRatingWidget_QBaseMinimumSizeHint((KRatingWidget*)self);
}

void k_ratingwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KRatingWidget_OnMinimumSizeHint((KRatingWidget*)self, (intptr_t)callback);
}

int32_t k_ratingwidget_height_for_width(void* self, int param1) {
    return KRatingWidget_HeightForWidth((KRatingWidget*)self, param1);
}

int32_t k_ratingwidget_qbase_height_for_width(void* self, int param1) {
    return KRatingWidget_QBaseHeightForWidth((KRatingWidget*)self, param1);
}

void k_ratingwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KRatingWidget_OnHeightForWidth((KRatingWidget*)self, (intptr_t)callback);
}

bool k_ratingwidget_has_height_for_width(void* self) {
    return KRatingWidget_HasHeightForWidth((KRatingWidget*)self);
}

bool k_ratingwidget_qbase_has_height_for_width(void* self) {
    return KRatingWidget_QBaseHasHeightForWidth((KRatingWidget*)self);
}

void k_ratingwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KRatingWidget_OnHasHeightForWidth((KRatingWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_ratingwidget_paint_engine(void* self) {
    return KRatingWidget_PaintEngine((KRatingWidget*)self);
}

QPaintEngine* k_ratingwidget_qbase_paint_engine(void* self) {
    return KRatingWidget_QBasePaintEngine((KRatingWidget*)self);
}

void k_ratingwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KRatingWidget_OnPaintEngine((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_mouse_release_event(void* self, void* event) {
    KRatingWidget_MouseReleaseEvent((KRatingWidget*)self, (QMouseEvent*)event);
}

void k_ratingwidget_qbase_mouse_release_event(void* self, void* event) {
    KRatingWidget_QBaseMouseReleaseEvent((KRatingWidget*)self, (QMouseEvent*)event);
}

void k_ratingwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnMouseReleaseEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_mouse_double_click_event(void* self, void* event) {
    KRatingWidget_MouseDoubleClickEvent((KRatingWidget*)self, (QMouseEvent*)event);
}

void k_ratingwidget_qbase_mouse_double_click_event(void* self, void* event) {
    KRatingWidget_QBaseMouseDoubleClickEvent((KRatingWidget*)self, (QMouseEvent*)event);
}

void k_ratingwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnMouseDoubleClickEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_wheel_event(void* self, void* event) {
    KRatingWidget_WheelEvent((KRatingWidget*)self, (QWheelEvent*)event);
}

void k_ratingwidget_qbase_wheel_event(void* self, void* event) {
    KRatingWidget_QBaseWheelEvent((KRatingWidget*)self, (QWheelEvent*)event);
}

void k_ratingwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnWheelEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_key_press_event(void* self, void* event) {
    KRatingWidget_KeyPressEvent((KRatingWidget*)self, (QKeyEvent*)event);
}

void k_ratingwidget_qbase_key_press_event(void* self, void* event) {
    KRatingWidget_QBaseKeyPressEvent((KRatingWidget*)self, (QKeyEvent*)event);
}

void k_ratingwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnKeyPressEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_key_release_event(void* self, void* event) {
    KRatingWidget_KeyReleaseEvent((KRatingWidget*)self, (QKeyEvent*)event);
}

void k_ratingwidget_qbase_key_release_event(void* self, void* event) {
    KRatingWidget_QBaseKeyReleaseEvent((KRatingWidget*)self, (QKeyEvent*)event);
}

void k_ratingwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnKeyReleaseEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_focus_in_event(void* self, void* event) {
    KRatingWidget_FocusInEvent((KRatingWidget*)self, (QFocusEvent*)event);
}

void k_ratingwidget_qbase_focus_in_event(void* self, void* event) {
    KRatingWidget_QBaseFocusInEvent((KRatingWidget*)self, (QFocusEvent*)event);
}

void k_ratingwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnFocusInEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_focus_out_event(void* self, void* event) {
    KRatingWidget_FocusOutEvent((KRatingWidget*)self, (QFocusEvent*)event);
}

void k_ratingwidget_qbase_focus_out_event(void* self, void* event) {
    KRatingWidget_QBaseFocusOutEvent((KRatingWidget*)self, (QFocusEvent*)event);
}

void k_ratingwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnFocusOutEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_enter_event(void* self, void* event) {
    KRatingWidget_EnterEvent((KRatingWidget*)self, (QEnterEvent*)event);
}

void k_ratingwidget_qbase_enter_event(void* self, void* event) {
    KRatingWidget_QBaseEnterEvent((KRatingWidget*)self, (QEnterEvent*)event);
}

void k_ratingwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnEnterEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_move_event(void* self, void* event) {
    KRatingWidget_MoveEvent((KRatingWidget*)self, (QMoveEvent*)event);
}

void k_ratingwidget_qbase_move_event(void* self, void* event) {
    KRatingWidget_QBaseMoveEvent((KRatingWidget*)self, (QMoveEvent*)event);
}

void k_ratingwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnMoveEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_close_event(void* self, void* event) {
    KRatingWidget_CloseEvent((KRatingWidget*)self, (QCloseEvent*)event);
}

void k_ratingwidget_qbase_close_event(void* self, void* event) {
    KRatingWidget_QBaseCloseEvent((KRatingWidget*)self, (QCloseEvent*)event);
}

void k_ratingwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnCloseEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_context_menu_event(void* self, void* event) {
    KRatingWidget_ContextMenuEvent((KRatingWidget*)self, (QContextMenuEvent*)event);
}

void k_ratingwidget_qbase_context_menu_event(void* self, void* event) {
    KRatingWidget_QBaseContextMenuEvent((KRatingWidget*)self, (QContextMenuEvent*)event);
}

void k_ratingwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnContextMenuEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_tablet_event(void* self, void* event) {
    KRatingWidget_TabletEvent((KRatingWidget*)self, (QTabletEvent*)event);
}

void k_ratingwidget_qbase_tablet_event(void* self, void* event) {
    KRatingWidget_QBaseTabletEvent((KRatingWidget*)self, (QTabletEvent*)event);
}

void k_ratingwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnTabletEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_action_event(void* self, void* event) {
    KRatingWidget_ActionEvent((KRatingWidget*)self, (QActionEvent*)event);
}

void k_ratingwidget_qbase_action_event(void* self, void* event) {
    KRatingWidget_QBaseActionEvent((KRatingWidget*)self, (QActionEvent*)event);
}

void k_ratingwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnActionEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_drag_enter_event(void* self, void* event) {
    KRatingWidget_DragEnterEvent((KRatingWidget*)self, (QDragEnterEvent*)event);
}

void k_ratingwidget_qbase_drag_enter_event(void* self, void* event) {
    KRatingWidget_QBaseDragEnterEvent((KRatingWidget*)self, (QDragEnterEvent*)event);
}

void k_ratingwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnDragEnterEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_drag_move_event(void* self, void* event) {
    KRatingWidget_DragMoveEvent((KRatingWidget*)self, (QDragMoveEvent*)event);
}

void k_ratingwidget_qbase_drag_move_event(void* self, void* event) {
    KRatingWidget_QBaseDragMoveEvent((KRatingWidget*)self, (QDragMoveEvent*)event);
}

void k_ratingwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnDragMoveEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_drag_leave_event(void* self, void* event) {
    KRatingWidget_DragLeaveEvent((KRatingWidget*)self, (QDragLeaveEvent*)event);
}

void k_ratingwidget_qbase_drag_leave_event(void* self, void* event) {
    KRatingWidget_QBaseDragLeaveEvent((KRatingWidget*)self, (QDragLeaveEvent*)event);
}

void k_ratingwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnDragLeaveEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_drop_event(void* self, void* event) {
    KRatingWidget_DropEvent((KRatingWidget*)self, (QDropEvent*)event);
}

void k_ratingwidget_qbase_drop_event(void* self, void* event) {
    KRatingWidget_QBaseDropEvent((KRatingWidget*)self, (QDropEvent*)event);
}

void k_ratingwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnDropEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_show_event(void* self, void* event) {
    KRatingWidget_ShowEvent((KRatingWidget*)self, (QShowEvent*)event);
}

void k_ratingwidget_qbase_show_event(void* self, void* event) {
    KRatingWidget_QBaseShowEvent((KRatingWidget*)self, (QShowEvent*)event);
}

void k_ratingwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnShowEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_hide_event(void* self, void* event) {
    KRatingWidget_HideEvent((KRatingWidget*)self, (QHideEvent*)event);
}

void k_ratingwidget_qbase_hide_event(void* self, void* event) {
    KRatingWidget_QBaseHideEvent((KRatingWidget*)self, (QHideEvent*)event);
}

void k_ratingwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnHideEvent((KRatingWidget*)self, (intptr_t)callback);
}

bool k_ratingwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KRatingWidget_NativeEvent((KRatingWidget*)self, qstring(eventType), message, result);
}

bool k_ratingwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KRatingWidget_QBaseNativeEvent((KRatingWidget*)self, qstring(eventType), message, result);
}

void k_ratingwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KRatingWidget_OnNativeEvent((KRatingWidget*)self, (intptr_t)callback);
}

int32_t k_ratingwidget_metric(void* self, int32_t param1) {
    return KRatingWidget_Metric((KRatingWidget*)self, param1);
}

int32_t k_ratingwidget_qbase_metric(void* self, int32_t param1) {
    return KRatingWidget_QBaseMetric((KRatingWidget*)self, param1);
}

void k_ratingwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KRatingWidget_OnMetric((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_init_painter(void* self, void* painter) {
    KRatingWidget_InitPainter((KRatingWidget*)self, (QPainter*)painter);
}

void k_ratingwidget_qbase_init_painter(void* self, void* painter) {
    KRatingWidget_QBaseInitPainter((KRatingWidget*)self, (QPainter*)painter);
}

void k_ratingwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnInitPainter((KRatingWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_ratingwidget_redirected(void* self, void* offset) {
    return KRatingWidget_Redirected((KRatingWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_ratingwidget_qbase_redirected(void* self, void* offset) {
    return KRatingWidget_QBaseRedirected((KRatingWidget*)self, (QPoint*)offset);
}

void k_ratingwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KRatingWidget_OnRedirected((KRatingWidget*)self, (intptr_t)callback);
}

QPainter* k_ratingwidget_shared_painter(void* self) {
    return KRatingWidget_SharedPainter((KRatingWidget*)self);
}

QPainter* k_ratingwidget_qbase_shared_painter(void* self) {
    return KRatingWidget_QBaseSharedPainter((KRatingWidget*)self);
}

void k_ratingwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KRatingWidget_OnSharedPainter((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_input_method_event(void* self, void* param1) {
    KRatingWidget_InputMethodEvent((KRatingWidget*)self, (QInputMethodEvent*)param1);
}

void k_ratingwidget_qbase_input_method_event(void* self, void* param1) {
    KRatingWidget_QBaseInputMethodEvent((KRatingWidget*)self, (QInputMethodEvent*)param1);
}

void k_ratingwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnInputMethodEvent((KRatingWidget*)self, (intptr_t)callback);
}

QVariant* k_ratingwidget_input_method_query(void* self, int32_t param1) {
    return KRatingWidget_InputMethodQuery((KRatingWidget*)self, param1);
}

QVariant* k_ratingwidget_qbase_input_method_query(void* self, int32_t param1) {
    return KRatingWidget_QBaseInputMethodQuery((KRatingWidget*)self, param1);
}

void k_ratingwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KRatingWidget_OnInputMethodQuery((KRatingWidget*)self, (intptr_t)callback);
}

bool k_ratingwidget_focus_next_prev_child(void* self, bool next) {
    return KRatingWidget_FocusNextPrevChild((KRatingWidget*)self, next);
}

bool k_ratingwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KRatingWidget_QBaseFocusNextPrevChild((KRatingWidget*)self, next);
}

void k_ratingwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KRatingWidget_OnFocusNextPrevChild((KRatingWidget*)self, (intptr_t)callback);
}

bool k_ratingwidget_event_filter(void* self, void* watched, void* event) {
    return KRatingWidget_EventFilter((KRatingWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_ratingwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return KRatingWidget_QBaseEventFilter((KRatingWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_ratingwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KRatingWidget_OnEventFilter((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_timer_event(void* self, void* event) {
    KRatingWidget_TimerEvent((KRatingWidget*)self, (QTimerEvent*)event);
}

void k_ratingwidget_qbase_timer_event(void* self, void* event) {
    KRatingWidget_QBaseTimerEvent((KRatingWidget*)self, (QTimerEvent*)event);
}

void k_ratingwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnTimerEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_child_event(void* self, void* event) {
    KRatingWidget_ChildEvent((KRatingWidget*)self, (QChildEvent*)event);
}

void k_ratingwidget_qbase_child_event(void* self, void* event) {
    KRatingWidget_QBaseChildEvent((KRatingWidget*)self, (QChildEvent*)event);
}

void k_ratingwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnChildEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_custom_event(void* self, void* event) {
    KRatingWidget_CustomEvent((KRatingWidget*)self, (QEvent*)event);
}

void k_ratingwidget_qbase_custom_event(void* self, void* event) {
    KRatingWidget_QBaseCustomEvent((KRatingWidget*)self, (QEvent*)event);
}

void k_ratingwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnCustomEvent((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_connect_notify(void* self, void* signal) {
    KRatingWidget_ConnectNotify((KRatingWidget*)self, (QMetaMethod*)signal);
}

void k_ratingwidget_qbase_connect_notify(void* self, void* signal) {
    KRatingWidget_QBaseConnectNotify((KRatingWidget*)self, (QMetaMethod*)signal);
}

void k_ratingwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnConnectNotify((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_disconnect_notify(void* self, void* signal) {
    KRatingWidget_DisconnectNotify((KRatingWidget*)self, (QMetaMethod*)signal);
}

void k_ratingwidget_qbase_disconnect_notify(void* self, void* signal) {
    KRatingWidget_QBaseDisconnectNotify((KRatingWidget*)self, (QMetaMethod*)signal);
}

void k_ratingwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnDisconnectNotify((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_draw_frame(void* self, void* param1) {
    KRatingWidget_DrawFrame((KRatingWidget*)self, (QPainter*)param1);
}

void k_ratingwidget_qbase_draw_frame(void* self, void* param1) {
    KRatingWidget_QBaseDrawFrame((KRatingWidget*)self, (QPainter*)param1);
}

void k_ratingwidget_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KRatingWidget_OnDrawFrame((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_update_micro_focus(void* self) {
    KRatingWidget_UpdateMicroFocus((KRatingWidget*)self);
}

void k_ratingwidget_qbase_update_micro_focus(void* self) {
    KRatingWidget_QBaseUpdateMicroFocus((KRatingWidget*)self);
}

void k_ratingwidget_on_update_micro_focus(void* self, void (*callback)()) {
    KRatingWidget_OnUpdateMicroFocus((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_create(void* self) {
    KRatingWidget_Create((KRatingWidget*)self);
}

void k_ratingwidget_qbase_create(void* self) {
    KRatingWidget_QBaseCreate((KRatingWidget*)self);
}

void k_ratingwidget_on_create(void* self, void (*callback)()) {
    KRatingWidget_OnCreate((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_destroy(void* self) {
    KRatingWidget_Destroy((KRatingWidget*)self);
}

void k_ratingwidget_qbase_destroy(void* self) {
    KRatingWidget_QBaseDestroy((KRatingWidget*)self);
}

void k_ratingwidget_on_destroy(void* self, void (*callback)()) {
    KRatingWidget_OnDestroy((KRatingWidget*)self, (intptr_t)callback);
}

bool k_ratingwidget_focus_next_child(void* self) {
    return KRatingWidget_FocusNextChild((KRatingWidget*)self);
}

bool k_ratingwidget_qbase_focus_next_child(void* self) {
    return KRatingWidget_QBaseFocusNextChild((KRatingWidget*)self);
}

void k_ratingwidget_on_focus_next_child(void* self, bool (*callback)()) {
    KRatingWidget_OnFocusNextChild((KRatingWidget*)self, (intptr_t)callback);
}

bool k_ratingwidget_focus_previous_child(void* self) {
    return KRatingWidget_FocusPreviousChild((KRatingWidget*)self);
}

bool k_ratingwidget_qbase_focus_previous_child(void* self) {
    return KRatingWidget_QBaseFocusPreviousChild((KRatingWidget*)self);
}

void k_ratingwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KRatingWidget_OnFocusPreviousChild((KRatingWidget*)self, (intptr_t)callback);
}

QObject* k_ratingwidget_sender(void* self) {
    return KRatingWidget_Sender((KRatingWidget*)self);
}

QObject* k_ratingwidget_qbase_sender(void* self) {
    return KRatingWidget_QBaseSender((KRatingWidget*)self);
}

void k_ratingwidget_on_sender(void* self, QObject* (*callback)()) {
    KRatingWidget_OnSender((KRatingWidget*)self, (intptr_t)callback);
}

int32_t k_ratingwidget_sender_signal_index(void* self) {
    return KRatingWidget_SenderSignalIndex((KRatingWidget*)self);
}

int32_t k_ratingwidget_qbase_sender_signal_index(void* self) {
    return KRatingWidget_QBaseSenderSignalIndex((KRatingWidget*)self);
}

void k_ratingwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KRatingWidget_OnSenderSignalIndex((KRatingWidget*)self, (intptr_t)callback);
}

int32_t k_ratingwidget_receivers(void* self, const char* signal) {
    return KRatingWidget_Receivers((KRatingWidget*)self, signal);
}

int32_t k_ratingwidget_qbase_receivers(void* self, const char* signal) {
    return KRatingWidget_QBaseReceivers((KRatingWidget*)self, signal);
}

void k_ratingwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KRatingWidget_OnReceivers((KRatingWidget*)self, (intptr_t)callback);
}

bool k_ratingwidget_is_signal_connected(void* self, void* signal) {
    return KRatingWidget_IsSignalConnected((KRatingWidget*)self, (QMetaMethod*)signal);
}

bool k_ratingwidget_qbase_is_signal_connected(void* self, void* signal) {
    return KRatingWidget_QBaseIsSignalConnected((KRatingWidget*)self, (QMetaMethod*)signal);
}

void k_ratingwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KRatingWidget_OnIsSignalConnected((KRatingWidget*)self, (intptr_t)callback);
}

double k_ratingwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KRatingWidget_GetDecodedMetricF((KRatingWidget*)self, metricA, metricB);
}

double k_ratingwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KRatingWidget_QBaseGetDecodedMetricF((KRatingWidget*)self, metricA, metricB);
}

void k_ratingwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KRatingWidget_OnGetDecodedMetricF((KRatingWidget*)self, (intptr_t)callback);
}

void k_ratingwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_ratingwidget_delete(void* self) {
    KRatingWidget_Delete((KRatingWidget*)(self));
}
