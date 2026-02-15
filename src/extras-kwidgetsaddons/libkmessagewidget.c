#include "../libqaction.hpp"
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
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkmessagewidget.hpp"
#include "libkmessagewidget.h"

KMessageWidget* k_messagewidget_new(void* parent) {
    return KMessageWidget_new((QWidget*)parent);
}

KMessageWidget* k_messagewidget_new2() {
    return KMessageWidget_new2();
}

KMessageWidget* k_messagewidget_new3(const char* text) {
    return KMessageWidget_new3(qstring(text));
}

KMessageWidget* k_messagewidget_new4(const char* text, void* parent) {
    return KMessageWidget_new4(qstring(text), (QWidget*)parent);
}

const QMetaObject* k_messagewidget_meta_object(void* self) {
    return KMessageWidget_MetaObject((KMessageWidget*)self);
}

void k_messagewidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KMessageWidget_OnMetaObject((KMessageWidget*)self, (intptr_t)callback);
}

const QMetaObject* k_messagewidget_qbase_meta_object(void* self) {
    return KMessageWidget_QBaseMetaObject((KMessageWidget*)self);
}

void* k_messagewidget_metacast(void* self, const char* param1) {
    return KMessageWidget_Metacast((KMessageWidget*)self, param1);
}

void k_messagewidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KMessageWidget_OnMetacast((KMessageWidget*)self, (intptr_t)callback);
}

void* k_messagewidget_qbase_metacast(void* self, const char* param1) {
    return KMessageWidget_QBaseMetacast((KMessageWidget*)self, param1);
}

int32_t k_messagewidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMessageWidget_Metacall((KMessageWidget*)self, param1, param2, param3);
}

void k_messagewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KMessageWidget_OnMetacall((KMessageWidget*)self, (intptr_t)callback);
}

int32_t k_messagewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMessageWidget_QBaseMetacall((KMessageWidget*)self, param1, param2, param3);
}

const char* k_messagewidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_messagewidget_position(void* self) {
    return KMessageWidget_Position((KMessageWidget*)self);
}

const char* k_messagewidget_text(void* self) {
    libqt_string _str = KMessageWidget_Text((KMessageWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_messagewidget_text_format(void* self) {
    return KMessageWidget_TextFormat((KMessageWidget*)self);
}

void k_messagewidget_set_text_format(void* self, int32_t textFormat) {
    KMessageWidget_SetTextFormat((KMessageWidget*)self, textFormat);
}

bool k_messagewidget_word_wrap(void* self) {
    return KMessageWidget_WordWrap((KMessageWidget*)self);
}

bool k_messagewidget_is_close_button_visible(void* self) {
    return KMessageWidget_IsCloseButtonVisible((KMessageWidget*)self);
}

int32_t k_messagewidget_message_type(void* self) {
    return KMessageWidget_MessageType((KMessageWidget*)self);
}

void k_messagewidget_add_action(void* self, void* action) {
    KMessageWidget_AddAction((KMessageWidget*)self, (QAction*)action);
}

void k_messagewidget_remove_action(void* self, void* action) {
    KMessageWidget_RemoveAction((KMessageWidget*)self, (QAction*)action);
}

void k_messagewidget_clear_actions(void* self) {
    KMessageWidget_ClearActions((KMessageWidget*)self);
}

QSize* k_messagewidget_size_hint(void* self) {
    return KMessageWidget_SizeHint((KMessageWidget*)self);
}

void k_messagewidget_on_size_hint(void* self, QSize* (*callback)()) {
    KMessageWidget_OnSizeHint((KMessageWidget*)self, (intptr_t)callback);
}

QSize* k_messagewidget_qbase_size_hint(void* self) {
    return KMessageWidget_QBaseSizeHint((KMessageWidget*)self);
}

QSize* k_messagewidget_minimum_size_hint(void* self) {
    return KMessageWidget_MinimumSizeHint((KMessageWidget*)self);
}

void k_messagewidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KMessageWidget_OnMinimumSizeHint((KMessageWidget*)self, (intptr_t)callback);
}

QSize* k_messagewidget_qbase_minimum_size_hint(void* self) {
    return KMessageWidget_QBaseMinimumSizeHint((KMessageWidget*)self);
}

int32_t k_messagewidget_height_for_width(void* self, int width) {
    return KMessageWidget_HeightForWidth((KMessageWidget*)self, width);
}

void k_messagewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KMessageWidget_OnHeightForWidth((KMessageWidget*)self, (intptr_t)callback);
}

int32_t k_messagewidget_qbase_height_for_width(void* self, int width) {
    return KMessageWidget_QBaseHeightForWidth((KMessageWidget*)self, width);
}

QIcon* k_messagewidget_icon(void* self) {
    return KMessageWidget_Icon((KMessageWidget*)self);
}

bool k_messagewidget_is_hide_animation_running(void* self) {
    return KMessageWidget_IsHideAnimationRunning((KMessageWidget*)self);
}

bool k_messagewidget_is_show_animation_running(void* self) {
    return KMessageWidget_IsShowAnimationRunning((KMessageWidget*)self);
}

void k_messagewidget_set_text(void* self, const char* text) {
    KMessageWidget_SetText((KMessageWidget*)self, qstring(text));
}

void k_messagewidget_set_position(void* self, int32_t position) {
    KMessageWidget_SetPosition((KMessageWidget*)self, position);
}

void k_messagewidget_set_word_wrap(void* self, bool wordWrap) {
    KMessageWidget_SetWordWrap((KMessageWidget*)self, wordWrap);
}

void k_messagewidget_set_close_button_visible(void* self, bool visible) {
    KMessageWidget_SetCloseButtonVisible((KMessageWidget*)self, visible);
}

void k_messagewidget_set_message_type(void* self, int32_t type) {
    KMessageWidget_SetMessageType((KMessageWidget*)self, type);
}

void k_messagewidget_animated_show(void* self) {
    KMessageWidget_AnimatedShow((KMessageWidget*)self);
}

void k_messagewidget_animated_hide(void* self) {
    KMessageWidget_AnimatedHide((KMessageWidget*)self);
}

void k_messagewidget_set_icon(void* self, void* icon) {
    KMessageWidget_SetIcon((KMessageWidget*)self, (QIcon*)icon);
}

void k_messagewidget_link_activated(void* self, const char* contents) {
    KMessageWidget_LinkActivated((KMessageWidget*)self, qstring(contents));
}

void k_messagewidget_on_link_activated(void* self, void (*callback)(void*, const char*)) {
    KMessageWidget_Connect_LinkActivated((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_link_hovered(void* self, const char* contents) {
    KMessageWidget_LinkHovered((KMessageWidget*)self, qstring(contents));
}

void k_messagewidget_on_link_hovered(void* self, void (*callback)(void*, const char*)) {
    KMessageWidget_Connect_LinkHovered((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_hide_animation_finished(void* self) {
    KMessageWidget_HideAnimationFinished((KMessageWidget*)self);
}

void k_messagewidget_on_hide_animation_finished(void* self, void (*callback)(void*)) {
    KMessageWidget_Connect_HideAnimationFinished((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_show_animation_finished(void* self) {
    KMessageWidget_ShowAnimationFinished((KMessageWidget*)self);
}

void k_messagewidget_on_show_animation_finished(void* self, void (*callback)(void*)) {
    KMessageWidget_Connect_ShowAnimationFinished((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_paint_event(void* self, void* event) {
    KMessageWidget_PaintEvent((KMessageWidget*)self, (QPaintEvent*)event);
}

void k_messagewidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnPaintEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_qbase_paint_event(void* self, void* event) {
    KMessageWidget_QBasePaintEvent((KMessageWidget*)self, (QPaintEvent*)event);
}

bool k_messagewidget_event(void* self, void* event) {
    return KMessageWidget_Event((KMessageWidget*)self, (QEvent*)event);
}

void k_messagewidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KMessageWidget_OnEvent((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_qbase_event(void* self, void* event) {
    return KMessageWidget_QBaseEvent((KMessageWidget*)self, (QEvent*)event);
}

void k_messagewidget_resize_event(void* self, void* event) {
    KMessageWidget_ResizeEvent((KMessageWidget*)self, (QResizeEvent*)event);
}

void k_messagewidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnResizeEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_qbase_resize_event(void* self, void* event) {
    KMessageWidget_QBaseResizeEvent((KMessageWidget*)self, (QResizeEvent*)event);
}

const char* k_messagewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_messagewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_messagewidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_messagewidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_messagewidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_messagewidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_messagewidget_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_messagewidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_messagewidget_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_messagewidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_messagewidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_messagewidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_messagewidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_messagewidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_messagewidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_messagewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_messagewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_messagewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_messagewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_messagewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_messagewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_messagewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_messagewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_messagewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_messagewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_messagewidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_messagewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_messagewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_messagewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_messagewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_messagewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_messagewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_messagewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_messagewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_messagewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_messagewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_messagewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_messagewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_messagewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_messagewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_messagewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_messagewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_messagewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_messagewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_messagewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_messagewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_messagewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_messagewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_messagewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_messagewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_messagewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_messagewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_messagewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_messagewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_messagewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_messagewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_messagewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_messagewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_messagewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_messagewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_messagewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_messagewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_messagewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_messagewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_messagewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_messagewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_messagewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_messagewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_messagewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagewidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagewidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagewidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_messagewidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_messagewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_messagewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_messagewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_messagewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_messagewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_messagewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_messagewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_messagewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_messagewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_messagewidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_messagewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_messagewidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_messagewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_messagewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_messagewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_messagewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_messagewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_messagewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_messagewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_messagewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_messagewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_messagewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_messagewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_messagewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_messagewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_messagewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_messagewidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_messagewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_messagewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_messagewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_messagewidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_messagewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_messagewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_messagewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_messagewidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_messagewidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_messagewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_messagewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_messagewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_messagewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_messagewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_messagewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_messagewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_messagewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_messagewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_messagewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_messagewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_messagewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_messagewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_messagewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_messagewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_messagewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_messagewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_messagewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_messagewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_messagewidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_messagewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_messagewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_messagewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_messagewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_messagewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_messagewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_messagewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_messagewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_messagewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_messagewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_messagewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_messagewidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_messagewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_messagewidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_messagewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_messagewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_messagewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_messagewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_messagewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_messagewidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_messagewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_messagewidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_messagewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_messagewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_messagewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_messagewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_messagewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_messagewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_messagewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_messagewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_messagewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_messagewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_messagewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_messagewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_messagewidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_messagewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_messagewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_messagewidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_messagewidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_messagewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_messagewidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_messagewidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_messagewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_messagewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_messagewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_messagewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_messagewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_messagewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_messagewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_messagewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_messagewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_messagewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_messagewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_messagewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_messagewidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_messagewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_messagewidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_messagewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_messagewidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_messagewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_messagewidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_messagewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_messagewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_messagewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_messagewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_messagewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_messagewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_messagewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_messagewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_messagewidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_messagewidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_messagewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_messagewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_messagewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_messagewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_messagewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_messagewidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_messagewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_messagewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_messagewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_messagewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_messagewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_messagewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_messagewidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_messagewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_messagewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_messagewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_messagewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_messagewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_messagewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_messagewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_messagewidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_messagewidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_messagewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

libqt_list /* of QAction* */ k_messagewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_messagewidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_messagewidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_messagewidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_messagewidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_messagewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_messagewidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_messagewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_messagewidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_messagewidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_messagewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_messagewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_messagewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_messagewidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_messagewidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_messagewidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_messagewidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_messagewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_messagewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_messagewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_messagewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_messagewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_messagewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_messagewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_messagewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_messagewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_messagewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_messagewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_messagewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_messagewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_messagewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_messagewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_messagewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_messagewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_messagewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_messagewidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_messagewidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_messagewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_messagewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_messagewidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_messagewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_messagewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_messagewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_messagewidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_messagewidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_messagewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_messagewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_messagewidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_messagewidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_messagewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_messagewidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_messagewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_messagewidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_messagewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_messagewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_messagewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_messagewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_messagewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_messagewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_messagewidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_messagewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_messagewidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_messagewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_messagewidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_messagewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_messagewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_messagewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_messagewidget_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_messagewidget_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_messagewidget_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_messagewidget_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_messagewidget_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_messagewidget_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_messagewidget_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_messagewidget_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_messagewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_messagewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_messagewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_messagewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_messagewidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagewidget_dynamic_property_names\n");
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

QBindingStorage* k_messagewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_messagewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_messagewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_messagewidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_messagewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_messagewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_messagewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_messagewidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_messagewidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_messagewidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_messagewidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_messagewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_messagewidget_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_messagewidget_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_messagewidget_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_messagewidget_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_messagewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_messagewidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_messagewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_messagewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_messagewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_messagewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_messagewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_messagewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_messagewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_messagewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_messagewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_messagewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_messagewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_messagewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_messagewidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_messagewidget_change_event(void* self, void* param1) {
    KMessageWidget_ChangeEvent((KMessageWidget*)self, (QEvent*)param1);
}

void k_messagewidget_qbase_change_event(void* self, void* param1) {
    KMessageWidget_QBaseChangeEvent((KMessageWidget*)self, (QEvent*)param1);
}

void k_messagewidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnChangeEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_init_style_option(void* self, void* option) {
    KMessageWidget_InitStyleOption((KMessageWidget*)self, (QStyleOptionFrame*)option);
}

void k_messagewidget_qbase_init_style_option(void* self, void* option) {
    KMessageWidget_QBaseInitStyleOption((KMessageWidget*)self, (QStyleOptionFrame*)option);
}

void k_messagewidget_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnInitStyleOption((KMessageWidget*)self, (intptr_t)callback);
}

int32_t k_messagewidget_dev_type(void* self) {
    return KMessageWidget_DevType((KMessageWidget*)self);
}

int32_t k_messagewidget_qbase_dev_type(void* self) {
    return KMessageWidget_QBaseDevType((KMessageWidget*)self);
}

void k_messagewidget_on_dev_type(void* self, int32_t (*callback)()) {
    KMessageWidget_OnDevType((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_set_visible(void* self, bool visible) {
    KMessageWidget_SetVisible((KMessageWidget*)self, visible);
}

void k_messagewidget_qbase_set_visible(void* self, bool visible) {
    KMessageWidget_QBaseSetVisible((KMessageWidget*)self, visible);
}

void k_messagewidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KMessageWidget_OnSetVisible((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_has_height_for_width(void* self) {
    return KMessageWidget_HasHeightForWidth((KMessageWidget*)self);
}

bool k_messagewidget_qbase_has_height_for_width(void* self) {
    return KMessageWidget_QBaseHasHeightForWidth((KMessageWidget*)self);
}

void k_messagewidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KMessageWidget_OnHasHeightForWidth((KMessageWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_messagewidget_paint_engine(void* self) {
    return KMessageWidget_PaintEngine((KMessageWidget*)self);
}

QPaintEngine* k_messagewidget_qbase_paint_engine(void* self) {
    return KMessageWidget_QBasePaintEngine((KMessageWidget*)self);
}

void k_messagewidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KMessageWidget_OnPaintEngine((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_mouse_press_event(void* self, void* event) {
    KMessageWidget_MousePressEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_qbase_mouse_press_event(void* self, void* event) {
    KMessageWidget_QBaseMousePressEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnMousePressEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_mouse_release_event(void* self, void* event) {
    KMessageWidget_MouseReleaseEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_qbase_mouse_release_event(void* self, void* event) {
    KMessageWidget_QBaseMouseReleaseEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnMouseReleaseEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_mouse_double_click_event(void* self, void* event) {
    KMessageWidget_MouseDoubleClickEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_qbase_mouse_double_click_event(void* self, void* event) {
    KMessageWidget_QBaseMouseDoubleClickEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnMouseDoubleClickEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_mouse_move_event(void* self, void* event) {
    KMessageWidget_MouseMoveEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_qbase_mouse_move_event(void* self, void* event) {
    KMessageWidget_QBaseMouseMoveEvent((KMessageWidget*)self, (QMouseEvent*)event);
}

void k_messagewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnMouseMoveEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_wheel_event(void* self, void* event) {
    KMessageWidget_WheelEvent((KMessageWidget*)self, (QWheelEvent*)event);
}

void k_messagewidget_qbase_wheel_event(void* self, void* event) {
    KMessageWidget_QBaseWheelEvent((KMessageWidget*)self, (QWheelEvent*)event);
}

void k_messagewidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnWheelEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_key_press_event(void* self, void* event) {
    KMessageWidget_KeyPressEvent((KMessageWidget*)self, (QKeyEvent*)event);
}

void k_messagewidget_qbase_key_press_event(void* self, void* event) {
    KMessageWidget_QBaseKeyPressEvent((KMessageWidget*)self, (QKeyEvent*)event);
}

void k_messagewidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnKeyPressEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_key_release_event(void* self, void* event) {
    KMessageWidget_KeyReleaseEvent((KMessageWidget*)self, (QKeyEvent*)event);
}

void k_messagewidget_qbase_key_release_event(void* self, void* event) {
    KMessageWidget_QBaseKeyReleaseEvent((KMessageWidget*)self, (QKeyEvent*)event);
}

void k_messagewidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnKeyReleaseEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_focus_in_event(void* self, void* event) {
    KMessageWidget_FocusInEvent((KMessageWidget*)self, (QFocusEvent*)event);
}

void k_messagewidget_qbase_focus_in_event(void* self, void* event) {
    KMessageWidget_QBaseFocusInEvent((KMessageWidget*)self, (QFocusEvent*)event);
}

void k_messagewidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnFocusInEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_focus_out_event(void* self, void* event) {
    KMessageWidget_FocusOutEvent((KMessageWidget*)self, (QFocusEvent*)event);
}

void k_messagewidget_qbase_focus_out_event(void* self, void* event) {
    KMessageWidget_QBaseFocusOutEvent((KMessageWidget*)self, (QFocusEvent*)event);
}

void k_messagewidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnFocusOutEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_enter_event(void* self, void* event) {
    KMessageWidget_EnterEvent((KMessageWidget*)self, (QEnterEvent*)event);
}

void k_messagewidget_qbase_enter_event(void* self, void* event) {
    KMessageWidget_QBaseEnterEvent((KMessageWidget*)self, (QEnterEvent*)event);
}

void k_messagewidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnEnterEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_leave_event(void* self, void* event) {
    KMessageWidget_LeaveEvent((KMessageWidget*)self, (QEvent*)event);
}

void k_messagewidget_qbase_leave_event(void* self, void* event) {
    KMessageWidget_QBaseLeaveEvent((KMessageWidget*)self, (QEvent*)event);
}

void k_messagewidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnLeaveEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_move_event(void* self, void* event) {
    KMessageWidget_MoveEvent((KMessageWidget*)self, (QMoveEvent*)event);
}

void k_messagewidget_qbase_move_event(void* self, void* event) {
    KMessageWidget_QBaseMoveEvent((KMessageWidget*)self, (QMoveEvent*)event);
}

void k_messagewidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnMoveEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_close_event(void* self, void* event) {
    KMessageWidget_CloseEvent((KMessageWidget*)self, (QCloseEvent*)event);
}

void k_messagewidget_qbase_close_event(void* self, void* event) {
    KMessageWidget_QBaseCloseEvent((KMessageWidget*)self, (QCloseEvent*)event);
}

void k_messagewidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnCloseEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_context_menu_event(void* self, void* event) {
    KMessageWidget_ContextMenuEvent((KMessageWidget*)self, (QContextMenuEvent*)event);
}

void k_messagewidget_qbase_context_menu_event(void* self, void* event) {
    KMessageWidget_QBaseContextMenuEvent((KMessageWidget*)self, (QContextMenuEvent*)event);
}

void k_messagewidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnContextMenuEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_tablet_event(void* self, void* event) {
    KMessageWidget_TabletEvent((KMessageWidget*)self, (QTabletEvent*)event);
}

void k_messagewidget_qbase_tablet_event(void* self, void* event) {
    KMessageWidget_QBaseTabletEvent((KMessageWidget*)self, (QTabletEvent*)event);
}

void k_messagewidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnTabletEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_action_event(void* self, void* event) {
    KMessageWidget_ActionEvent((KMessageWidget*)self, (QActionEvent*)event);
}

void k_messagewidget_qbase_action_event(void* self, void* event) {
    KMessageWidget_QBaseActionEvent((KMessageWidget*)self, (QActionEvent*)event);
}

void k_messagewidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnActionEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_drag_enter_event(void* self, void* event) {
    KMessageWidget_DragEnterEvent((KMessageWidget*)self, (QDragEnterEvent*)event);
}

void k_messagewidget_qbase_drag_enter_event(void* self, void* event) {
    KMessageWidget_QBaseDragEnterEvent((KMessageWidget*)self, (QDragEnterEvent*)event);
}

void k_messagewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnDragEnterEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_drag_move_event(void* self, void* event) {
    KMessageWidget_DragMoveEvent((KMessageWidget*)self, (QDragMoveEvent*)event);
}

void k_messagewidget_qbase_drag_move_event(void* self, void* event) {
    KMessageWidget_QBaseDragMoveEvent((KMessageWidget*)self, (QDragMoveEvent*)event);
}

void k_messagewidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnDragMoveEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_drag_leave_event(void* self, void* event) {
    KMessageWidget_DragLeaveEvent((KMessageWidget*)self, (QDragLeaveEvent*)event);
}

void k_messagewidget_qbase_drag_leave_event(void* self, void* event) {
    KMessageWidget_QBaseDragLeaveEvent((KMessageWidget*)self, (QDragLeaveEvent*)event);
}

void k_messagewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnDragLeaveEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_drop_event(void* self, void* event) {
    KMessageWidget_DropEvent((KMessageWidget*)self, (QDropEvent*)event);
}

void k_messagewidget_qbase_drop_event(void* self, void* event) {
    KMessageWidget_QBaseDropEvent((KMessageWidget*)self, (QDropEvent*)event);
}

void k_messagewidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnDropEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_show_event(void* self, void* event) {
    KMessageWidget_ShowEvent((KMessageWidget*)self, (QShowEvent*)event);
}

void k_messagewidget_qbase_show_event(void* self, void* event) {
    KMessageWidget_QBaseShowEvent((KMessageWidget*)self, (QShowEvent*)event);
}

void k_messagewidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnShowEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_hide_event(void* self, void* event) {
    KMessageWidget_HideEvent((KMessageWidget*)self, (QHideEvent*)event);
}

void k_messagewidget_qbase_hide_event(void* self, void* event) {
    KMessageWidget_QBaseHideEvent((KMessageWidget*)self, (QHideEvent*)event);
}

void k_messagewidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnHideEvent((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KMessageWidget_NativeEvent((KMessageWidget*)self, qstring(eventType), message, result);
}

bool k_messagewidget_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KMessageWidget_QBaseNativeEvent((KMessageWidget*)self, qstring(eventType), message, result);
}

void k_messagewidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KMessageWidget_OnNativeEvent((KMessageWidget*)self, (intptr_t)callback);
}

int32_t k_messagewidget_metric(void* self, int32_t param1) {
    return KMessageWidget_Metric((KMessageWidget*)self, param1);
}

int32_t k_messagewidget_qbase_metric(void* self, int32_t param1) {
    return KMessageWidget_QBaseMetric((KMessageWidget*)self, param1);
}

void k_messagewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KMessageWidget_OnMetric((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_init_painter(void* self, void* painter) {
    KMessageWidget_InitPainter((KMessageWidget*)self, (QPainter*)painter);
}

void k_messagewidget_qbase_init_painter(void* self, void* painter) {
    KMessageWidget_QBaseInitPainter((KMessageWidget*)self, (QPainter*)painter);
}

void k_messagewidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnInitPainter((KMessageWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_messagewidget_redirected(void* self, void* offset) {
    return KMessageWidget_Redirected((KMessageWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_messagewidget_qbase_redirected(void* self, void* offset) {
    return KMessageWidget_QBaseRedirected((KMessageWidget*)self, (QPoint*)offset);
}

void k_messagewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KMessageWidget_OnRedirected((KMessageWidget*)self, (intptr_t)callback);
}

QPainter* k_messagewidget_shared_painter(void* self) {
    return KMessageWidget_SharedPainter((KMessageWidget*)self);
}

QPainter* k_messagewidget_qbase_shared_painter(void* self) {
    return KMessageWidget_QBaseSharedPainter((KMessageWidget*)self);
}

void k_messagewidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KMessageWidget_OnSharedPainter((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_input_method_event(void* self, void* param1) {
    KMessageWidget_InputMethodEvent((KMessageWidget*)self, (QInputMethodEvent*)param1);
}

void k_messagewidget_qbase_input_method_event(void* self, void* param1) {
    KMessageWidget_QBaseInputMethodEvent((KMessageWidget*)self, (QInputMethodEvent*)param1);
}

void k_messagewidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnInputMethodEvent((KMessageWidget*)self, (intptr_t)callback);
}

QVariant* k_messagewidget_input_method_query(void* self, int32_t param1) {
    return KMessageWidget_InputMethodQuery((KMessageWidget*)self, param1);
}

QVariant* k_messagewidget_qbase_input_method_query(void* self, int32_t param1) {
    return KMessageWidget_QBaseInputMethodQuery((KMessageWidget*)self, param1);
}

void k_messagewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KMessageWidget_OnInputMethodQuery((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_focus_next_prev_child(void* self, bool next) {
    return KMessageWidget_FocusNextPrevChild((KMessageWidget*)self, next);
}

bool k_messagewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KMessageWidget_QBaseFocusNextPrevChild((KMessageWidget*)self, next);
}

void k_messagewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KMessageWidget_OnFocusNextPrevChild((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_event_filter(void* self, void* watched, void* event) {
    return KMessageWidget_EventFilter((KMessageWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_messagewidget_qbase_event_filter(void* self, void* watched, void* event) {
    return KMessageWidget_QBaseEventFilter((KMessageWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_messagewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KMessageWidget_OnEventFilter((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_timer_event(void* self, void* event) {
    KMessageWidget_TimerEvent((KMessageWidget*)self, (QTimerEvent*)event);
}

void k_messagewidget_qbase_timer_event(void* self, void* event) {
    KMessageWidget_QBaseTimerEvent((KMessageWidget*)self, (QTimerEvent*)event);
}

void k_messagewidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnTimerEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_child_event(void* self, void* event) {
    KMessageWidget_ChildEvent((KMessageWidget*)self, (QChildEvent*)event);
}

void k_messagewidget_qbase_child_event(void* self, void* event) {
    KMessageWidget_QBaseChildEvent((KMessageWidget*)self, (QChildEvent*)event);
}

void k_messagewidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnChildEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_custom_event(void* self, void* event) {
    KMessageWidget_CustomEvent((KMessageWidget*)self, (QEvent*)event);
}

void k_messagewidget_qbase_custom_event(void* self, void* event) {
    KMessageWidget_QBaseCustomEvent((KMessageWidget*)self, (QEvent*)event);
}

void k_messagewidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnCustomEvent((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_connect_notify(void* self, void* signal) {
    KMessageWidget_ConnectNotify((KMessageWidget*)self, (QMetaMethod*)signal);
}

void k_messagewidget_qbase_connect_notify(void* self, void* signal) {
    KMessageWidget_QBaseConnectNotify((KMessageWidget*)self, (QMetaMethod*)signal);
}

void k_messagewidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnConnectNotify((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_disconnect_notify(void* self, void* signal) {
    KMessageWidget_DisconnectNotify((KMessageWidget*)self, (QMetaMethod*)signal);
}

void k_messagewidget_qbase_disconnect_notify(void* self, void* signal) {
    KMessageWidget_QBaseDisconnectNotify((KMessageWidget*)self, (QMetaMethod*)signal);
}

void k_messagewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnDisconnectNotify((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_draw_frame(void* self, void* param1) {
    KMessageWidget_DrawFrame((KMessageWidget*)self, (QPainter*)param1);
}

void k_messagewidget_qbase_draw_frame(void* self, void* param1) {
    KMessageWidget_QBaseDrawFrame((KMessageWidget*)self, (QPainter*)param1);
}

void k_messagewidget_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KMessageWidget_OnDrawFrame((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_update_micro_focus(void* self) {
    KMessageWidget_UpdateMicroFocus((KMessageWidget*)self);
}

void k_messagewidget_qbase_update_micro_focus(void* self) {
    KMessageWidget_QBaseUpdateMicroFocus((KMessageWidget*)self);
}

void k_messagewidget_on_update_micro_focus(void* self, void (*callback)()) {
    KMessageWidget_OnUpdateMicroFocus((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_create(void* self) {
    KMessageWidget_Create((KMessageWidget*)self);
}

void k_messagewidget_qbase_create(void* self) {
    KMessageWidget_QBaseCreate((KMessageWidget*)self);
}

void k_messagewidget_on_create(void* self, void (*callback)()) {
    KMessageWidget_OnCreate((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_destroy(void* self) {
    KMessageWidget_Destroy((KMessageWidget*)self);
}

void k_messagewidget_qbase_destroy(void* self) {
    KMessageWidget_QBaseDestroy((KMessageWidget*)self);
}

void k_messagewidget_on_destroy(void* self, void (*callback)()) {
    KMessageWidget_OnDestroy((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_focus_next_child(void* self) {
    return KMessageWidget_FocusNextChild((KMessageWidget*)self);
}

bool k_messagewidget_qbase_focus_next_child(void* self) {
    return KMessageWidget_QBaseFocusNextChild((KMessageWidget*)self);
}

void k_messagewidget_on_focus_next_child(void* self, bool (*callback)()) {
    KMessageWidget_OnFocusNextChild((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_focus_previous_child(void* self) {
    return KMessageWidget_FocusPreviousChild((KMessageWidget*)self);
}

bool k_messagewidget_qbase_focus_previous_child(void* self) {
    return KMessageWidget_QBaseFocusPreviousChild((KMessageWidget*)self);
}

void k_messagewidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KMessageWidget_OnFocusPreviousChild((KMessageWidget*)self, (intptr_t)callback);
}

QObject* k_messagewidget_sender(void* self) {
    return KMessageWidget_Sender((KMessageWidget*)self);
}

QObject* k_messagewidget_qbase_sender(void* self) {
    return KMessageWidget_QBaseSender((KMessageWidget*)self);
}

void k_messagewidget_on_sender(void* self, QObject* (*callback)()) {
    KMessageWidget_OnSender((KMessageWidget*)self, (intptr_t)callback);
}

int32_t k_messagewidget_sender_signal_index(void* self) {
    return KMessageWidget_SenderSignalIndex((KMessageWidget*)self);
}

int32_t k_messagewidget_qbase_sender_signal_index(void* self) {
    return KMessageWidget_QBaseSenderSignalIndex((KMessageWidget*)self);
}

void k_messagewidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KMessageWidget_OnSenderSignalIndex((KMessageWidget*)self, (intptr_t)callback);
}

int32_t k_messagewidget_receivers(void* self, const char* signal) {
    return KMessageWidget_Receivers((KMessageWidget*)self, signal);
}

int32_t k_messagewidget_qbase_receivers(void* self, const char* signal) {
    return KMessageWidget_QBaseReceivers((KMessageWidget*)self, signal);
}

void k_messagewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KMessageWidget_OnReceivers((KMessageWidget*)self, (intptr_t)callback);
}

bool k_messagewidget_is_signal_connected(void* self, void* signal) {
    return KMessageWidget_IsSignalConnected((KMessageWidget*)self, (QMetaMethod*)signal);
}

bool k_messagewidget_qbase_is_signal_connected(void* self, void* signal) {
    return KMessageWidget_QBaseIsSignalConnected((KMessageWidget*)self, (QMetaMethod*)signal);
}

void k_messagewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KMessageWidget_OnIsSignalConnected((KMessageWidget*)self, (intptr_t)callback);
}

double k_messagewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMessageWidget_GetDecodedMetricF((KMessageWidget*)self, metricA, metricB);
}

double k_messagewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMessageWidget_QBaseGetDecodedMetricF((KMessageWidget*)self, metricA, metricB);
}

void k_messagewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KMessageWidget_OnGetDecodedMetricF((KMessageWidget*)self, (intptr_t)callback);
}

void k_messagewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_messagewidget_delete(void* self) {
    KMessageWidget_Delete((KMessageWidget*)(self));
}
