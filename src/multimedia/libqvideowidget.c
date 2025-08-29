#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libqvideosink.hpp"
#include "../libqwidget.hpp"
#include "libqvideowidget.hpp"
#include "libqvideowidget.h"

QVideoWidget* q_videowidget_new(void* parent) {
    return QVideoWidget_new((QWidget*)parent);
}

QVideoWidget* q_videowidget_new2() {
    return QVideoWidget_new2();
}

const QMetaObject* q_videowidget_meta_object(void* self) {
    return QVideoWidget_MetaObject((QVideoWidget*)self);
}

void* q_videowidget_metacast(void* self, const char* param1) {
    return QVideoWidget_Metacast((QVideoWidget*)self, param1);
}

int32_t q_videowidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVideoWidget_Metacall((QVideoWidget*)self, param1, param2, param3);
}

void q_videowidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVideoWidget_OnMetacall((QVideoWidget*)self, (intptr_t)callback);
}

int32_t q_videowidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVideoWidget_QBaseMetacall((QVideoWidget*)self, param1, param2, param3);
}

const char* q_videowidget_tr(const char* s) {
    libqt_string _str = QVideoWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVideoSink* q_videowidget_video_sink(void* self) {
    return QVideoWidget_VideoSink((QVideoWidget*)self);
}

int32_t q_videowidget_aspect_ratio_mode(void* self) {
    return QVideoWidget_AspectRatioMode((QVideoWidget*)self);
}

QSize* q_videowidget_size_hint(void* self) {
    return QVideoWidget_SizeHint((QVideoWidget*)self);
}

void q_videowidget_on_size_hint(void* self, QSize* (*callback)()) {
    QVideoWidget_OnSizeHint((QVideoWidget*)self, (intptr_t)callback);
}

QSize* q_videowidget_qbase_size_hint(void* self) {
    return QVideoWidget_QBaseSizeHint((QVideoWidget*)self);
}

void q_videowidget_set_full_screen(void* self, bool fullScreen) {
    QVideoWidget_SetFullScreen((QVideoWidget*)self, fullScreen);
}

void q_videowidget_set_aspect_ratio_mode(void* self, int32_t mode) {
    QVideoWidget_SetAspectRatioMode((QVideoWidget*)self, mode);
}

void q_videowidget_full_screen_changed(void* self, bool fullScreen) {
    QVideoWidget_FullScreenChanged((QVideoWidget*)self, fullScreen);
}

void q_videowidget_on_full_screen_changed(void* self, void (*callback)(void*, bool)) {
    QVideoWidget_Connect_FullScreenChanged((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_aspect_ratio_mode_changed(void* self, int32_t mode) {
    QVideoWidget_AspectRatioModeChanged((QVideoWidget*)self, mode);
}

void q_videowidget_on_aspect_ratio_mode_changed(void* self, void (*callback)(void*, int32_t)) {
    QVideoWidget_Connect_AspectRatioModeChanged((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_event(void* self, void* event) {
    return QVideoWidget_Event((QVideoWidget*)self, (QEvent*)event);
}

void q_videowidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QVideoWidget_OnEvent((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_qbase_event(void* self, void* event) {
    return QVideoWidget_QBaseEvent((QVideoWidget*)self, (QEvent*)event);
}

void q_videowidget_show_event(void* self, void* event) {
    QVideoWidget_ShowEvent((QVideoWidget*)self, (QShowEvent*)event);
}

void q_videowidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnShowEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_qbase_show_event(void* self, void* event) {
    QVideoWidget_QBaseShowEvent((QVideoWidget*)self, (QShowEvent*)event);
}

void q_videowidget_hide_event(void* self, void* event) {
    QVideoWidget_HideEvent((QVideoWidget*)self, (QHideEvent*)event);
}

void q_videowidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnHideEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_qbase_hide_event(void* self, void* event) {
    QVideoWidget_QBaseHideEvent((QVideoWidget*)self, (QHideEvent*)event);
}

void q_videowidget_resize_event(void* self, void* event) {
    QVideoWidget_ResizeEvent((QVideoWidget*)self, (QResizeEvent*)event);
}

void q_videowidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnResizeEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_qbase_resize_event(void* self, void* event) {
    QVideoWidget_QBaseResizeEvent((QVideoWidget*)self, (QResizeEvent*)event);
}

void q_videowidget_move_event(void* self, void* event) {
    QVideoWidget_MoveEvent((QVideoWidget*)self, (QMoveEvent*)event);
}

void q_videowidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnMoveEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_qbase_move_event(void* self, void* event) {
    QVideoWidget_QBaseMoveEvent((QVideoWidget*)self, (QMoveEvent*)event);
}

const char* q_videowidget_tr2(const char* s, const char* c) {
    libqt_string _str = QVideoWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videowidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVideoWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_videowidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_videowidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_videowidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_videowidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_videowidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_videowidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_videowidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_videowidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_videowidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_videowidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_videowidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_videowidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_videowidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_videowidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_videowidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_videowidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_videowidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_videowidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_videowidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_videowidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_videowidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_videowidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_videowidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_videowidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_videowidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_videowidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_videowidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_videowidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_videowidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_videowidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_videowidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_videowidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_videowidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_videowidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_videowidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_videowidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_videowidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_videowidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_videowidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_videowidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_videowidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_videowidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_videowidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_videowidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_videowidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_videowidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_videowidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_videowidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_videowidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_videowidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_videowidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_videowidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_videowidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_videowidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_videowidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_videowidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_videowidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_videowidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_videowidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_videowidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_videowidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_videowidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_videowidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_videowidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_videowidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_videowidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_videowidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_videowidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_videowidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_videowidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_videowidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_videowidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_videowidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_videowidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_videowidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_videowidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_videowidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_videowidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_videowidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_videowidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_videowidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_videowidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_videowidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_videowidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_videowidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_videowidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_videowidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_videowidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_videowidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_videowidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_videowidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_videowidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_videowidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_videowidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_videowidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_videowidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_videowidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_videowidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_videowidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_videowidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videowidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_videowidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_videowidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_videowidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_videowidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_videowidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_videowidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_videowidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_videowidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_videowidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_videowidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_videowidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_videowidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_videowidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_videowidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_videowidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_videowidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_videowidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_videowidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_videowidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_videowidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_videowidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_videowidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_videowidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_videowidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_videowidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_videowidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_videowidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_videowidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_videowidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_videowidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_videowidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_videowidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_videowidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_videowidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_videowidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_videowidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_videowidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_videowidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_videowidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_videowidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_videowidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_videowidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_videowidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_videowidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_videowidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_videowidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_videowidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_videowidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_videowidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_videowidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_videowidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_videowidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_videowidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_videowidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_videowidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_videowidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_videowidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_videowidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_videowidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_videowidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_videowidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_videowidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_videowidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_videowidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_videowidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_videowidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_videowidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_videowidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_videowidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_videowidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_videowidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_videowidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_videowidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_videowidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_videowidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_videowidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_videowidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_videowidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_videowidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_videowidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_videowidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_videowidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_videowidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_videowidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_videowidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_videowidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_videowidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_videowidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_videowidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_videowidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_videowidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_videowidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_videowidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_videowidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_videowidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_videowidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_videowidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_videowidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_videowidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_videowidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_videowidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_videowidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_videowidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_videowidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_videowidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_videowidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_videowidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_videowidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_videowidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_videowidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_videowidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_videowidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_videowidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_videowidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_videowidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_videowidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_videowidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_videowidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_videowidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_videowidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_videowidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_videowidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_videowidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_videowidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_videowidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_videowidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_videowidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_videowidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_videowidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_videowidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_videowidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_videowidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_videowidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_videowidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_videowidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_videowidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_videowidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_videowidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_videowidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_videowidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_videowidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_videowidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_videowidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_videowidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_videowidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_videowidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_videowidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_videowidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_videowidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_videowidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_videowidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_videowidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_videowidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_videowidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_videowidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_videowidget_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_videowidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_videowidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_videowidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_videowidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_videowidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_videowidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_videowidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_videowidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_videowidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_videowidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_videowidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_videowidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_videowidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_videowidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_videowidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_videowidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_videowidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_videowidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_videowidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_videowidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_videowidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_videowidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_videowidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_videowidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_videowidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_videowidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_videowidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_videowidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_videowidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_videowidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_videowidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_videowidget_dynamic_property_names");
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

QBindingStorage* q_videowidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_videowidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_videowidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_videowidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_videowidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_videowidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_videowidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_videowidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_videowidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_videowidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_videowidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_videowidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_videowidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_videowidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_videowidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_videowidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_videowidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_videowidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_videowidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_videowidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_videowidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_videowidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_videowidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_videowidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_videowidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_videowidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_videowidget_dev_type(void* self) {
    return QVideoWidget_DevType((QVideoWidget*)self);
}

int32_t q_videowidget_qbase_dev_type(void* self) {
    return QVideoWidget_QBaseDevType((QVideoWidget*)self);
}

void q_videowidget_on_dev_type(void* self, int32_t (*callback)()) {
    QVideoWidget_OnDevType((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_set_visible(void* self, bool visible) {
    QVideoWidget_SetVisible((QVideoWidget*)self, visible);
}

void q_videowidget_qbase_set_visible(void* self, bool visible) {
    QVideoWidget_QBaseSetVisible((QVideoWidget*)self, visible);
}

void q_videowidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QVideoWidget_OnSetVisible((QVideoWidget*)self, (intptr_t)callback);
}

QSize* q_videowidget_minimum_size_hint(void* self) {
    return QVideoWidget_MinimumSizeHint((QVideoWidget*)self);
}

QSize* q_videowidget_qbase_minimum_size_hint(void* self) {
    return QVideoWidget_QBaseMinimumSizeHint((QVideoWidget*)self);
}

void q_videowidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QVideoWidget_OnMinimumSizeHint((QVideoWidget*)self, (intptr_t)callback);
}

int32_t q_videowidget_height_for_width(void* self, int param1) {
    return QVideoWidget_HeightForWidth((QVideoWidget*)self, param1);
}

int32_t q_videowidget_qbase_height_for_width(void* self, int param1) {
    return QVideoWidget_QBaseHeightForWidth((QVideoWidget*)self, param1);
}

void q_videowidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QVideoWidget_OnHeightForWidth((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_has_height_for_width(void* self) {
    return QVideoWidget_HasHeightForWidth((QVideoWidget*)self);
}

bool q_videowidget_qbase_has_height_for_width(void* self) {
    return QVideoWidget_QBaseHasHeightForWidth((QVideoWidget*)self);
}

void q_videowidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QVideoWidget_OnHasHeightForWidth((QVideoWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_videowidget_paint_engine(void* self) {
    return QVideoWidget_PaintEngine((QVideoWidget*)self);
}

QPaintEngine* q_videowidget_qbase_paint_engine(void* self) {
    return QVideoWidget_QBasePaintEngine((QVideoWidget*)self);
}

void q_videowidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QVideoWidget_OnPaintEngine((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_mouse_press_event(void* self, void* event) {
    QVideoWidget_MousePressEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_qbase_mouse_press_event(void* self, void* event) {
    QVideoWidget_QBaseMousePressEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnMousePressEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_mouse_release_event(void* self, void* event) {
    QVideoWidget_MouseReleaseEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_qbase_mouse_release_event(void* self, void* event) {
    QVideoWidget_QBaseMouseReleaseEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnMouseReleaseEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_mouse_double_click_event(void* self, void* event) {
    QVideoWidget_MouseDoubleClickEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_qbase_mouse_double_click_event(void* self, void* event) {
    QVideoWidget_QBaseMouseDoubleClickEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnMouseDoubleClickEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_mouse_move_event(void* self, void* event) {
    QVideoWidget_MouseMoveEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_qbase_mouse_move_event(void* self, void* event) {
    QVideoWidget_QBaseMouseMoveEvent((QVideoWidget*)self, (QMouseEvent*)event);
}

void q_videowidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnMouseMoveEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_wheel_event(void* self, void* event) {
    QVideoWidget_WheelEvent((QVideoWidget*)self, (QWheelEvent*)event);
}

void q_videowidget_qbase_wheel_event(void* self, void* event) {
    QVideoWidget_QBaseWheelEvent((QVideoWidget*)self, (QWheelEvent*)event);
}

void q_videowidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnWheelEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_key_press_event(void* self, void* event) {
    QVideoWidget_KeyPressEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

void q_videowidget_qbase_key_press_event(void* self, void* event) {
    QVideoWidget_QBaseKeyPressEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

void q_videowidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnKeyPressEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_key_release_event(void* self, void* event) {
    QVideoWidget_KeyReleaseEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

void q_videowidget_qbase_key_release_event(void* self, void* event) {
    QVideoWidget_QBaseKeyReleaseEvent((QVideoWidget*)self, (QKeyEvent*)event);
}

void q_videowidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnKeyReleaseEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_focus_in_event(void* self, void* event) {
    QVideoWidget_FocusInEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

void q_videowidget_qbase_focus_in_event(void* self, void* event) {
    QVideoWidget_QBaseFocusInEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

void q_videowidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnFocusInEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_focus_out_event(void* self, void* event) {
    QVideoWidget_FocusOutEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

void q_videowidget_qbase_focus_out_event(void* self, void* event) {
    QVideoWidget_QBaseFocusOutEvent((QVideoWidget*)self, (QFocusEvent*)event);
}

void q_videowidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnFocusOutEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_enter_event(void* self, void* event) {
    QVideoWidget_EnterEvent((QVideoWidget*)self, (QEnterEvent*)event);
}

void q_videowidget_qbase_enter_event(void* self, void* event) {
    QVideoWidget_QBaseEnterEvent((QVideoWidget*)self, (QEnterEvent*)event);
}

void q_videowidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnEnterEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_leave_event(void* self, void* event) {
    QVideoWidget_LeaveEvent((QVideoWidget*)self, (QEvent*)event);
}

void q_videowidget_qbase_leave_event(void* self, void* event) {
    QVideoWidget_QBaseLeaveEvent((QVideoWidget*)self, (QEvent*)event);
}

void q_videowidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnLeaveEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_paint_event(void* self, void* event) {
    QVideoWidget_PaintEvent((QVideoWidget*)self, (QPaintEvent*)event);
}

void q_videowidget_qbase_paint_event(void* self, void* event) {
    QVideoWidget_QBasePaintEvent((QVideoWidget*)self, (QPaintEvent*)event);
}

void q_videowidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnPaintEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_close_event(void* self, void* event) {
    QVideoWidget_CloseEvent((QVideoWidget*)self, (QCloseEvent*)event);
}

void q_videowidget_qbase_close_event(void* self, void* event) {
    QVideoWidget_QBaseCloseEvent((QVideoWidget*)self, (QCloseEvent*)event);
}

void q_videowidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnCloseEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_context_menu_event(void* self, void* event) {
    QVideoWidget_ContextMenuEvent((QVideoWidget*)self, (QContextMenuEvent*)event);
}

void q_videowidget_qbase_context_menu_event(void* self, void* event) {
    QVideoWidget_QBaseContextMenuEvent((QVideoWidget*)self, (QContextMenuEvent*)event);
}

void q_videowidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnContextMenuEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_tablet_event(void* self, void* event) {
    QVideoWidget_TabletEvent((QVideoWidget*)self, (QTabletEvent*)event);
}

void q_videowidget_qbase_tablet_event(void* self, void* event) {
    QVideoWidget_QBaseTabletEvent((QVideoWidget*)self, (QTabletEvent*)event);
}

void q_videowidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnTabletEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_action_event(void* self, void* event) {
    QVideoWidget_ActionEvent((QVideoWidget*)self, (QActionEvent*)event);
}

void q_videowidget_qbase_action_event(void* self, void* event) {
    QVideoWidget_QBaseActionEvent((QVideoWidget*)self, (QActionEvent*)event);
}

void q_videowidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnActionEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_drag_enter_event(void* self, void* event) {
    QVideoWidget_DragEnterEvent((QVideoWidget*)self, (QDragEnterEvent*)event);
}

void q_videowidget_qbase_drag_enter_event(void* self, void* event) {
    QVideoWidget_QBaseDragEnterEvent((QVideoWidget*)self, (QDragEnterEvent*)event);
}

void q_videowidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnDragEnterEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_drag_move_event(void* self, void* event) {
    QVideoWidget_DragMoveEvent((QVideoWidget*)self, (QDragMoveEvent*)event);
}

void q_videowidget_qbase_drag_move_event(void* self, void* event) {
    QVideoWidget_QBaseDragMoveEvent((QVideoWidget*)self, (QDragMoveEvent*)event);
}

void q_videowidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnDragMoveEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_drag_leave_event(void* self, void* event) {
    QVideoWidget_DragLeaveEvent((QVideoWidget*)self, (QDragLeaveEvent*)event);
}

void q_videowidget_qbase_drag_leave_event(void* self, void* event) {
    QVideoWidget_QBaseDragLeaveEvent((QVideoWidget*)self, (QDragLeaveEvent*)event);
}

void q_videowidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnDragLeaveEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_drop_event(void* self, void* event) {
    QVideoWidget_DropEvent((QVideoWidget*)self, (QDropEvent*)event);
}

void q_videowidget_qbase_drop_event(void* self, void* event) {
    QVideoWidget_QBaseDropEvent((QVideoWidget*)self, (QDropEvent*)event);
}

void q_videowidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnDropEvent((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QVideoWidget_NativeEvent((QVideoWidget*)self, qstring(eventType), message, result);
}

bool q_videowidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QVideoWidget_QBaseNativeEvent((QVideoWidget*)self, qstring(eventType), message, result);
}

void q_videowidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QVideoWidget_OnNativeEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_change_event(void* self, void* param1) {
    QVideoWidget_ChangeEvent((QVideoWidget*)self, (QEvent*)param1);
}

void q_videowidget_qbase_change_event(void* self, void* param1) {
    QVideoWidget_QBaseChangeEvent((QVideoWidget*)self, (QEvent*)param1);
}

void q_videowidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnChangeEvent((QVideoWidget*)self, (intptr_t)callback);
}

int32_t q_videowidget_metric(void* self, int32_t param1) {
    return QVideoWidget_Metric((QVideoWidget*)self, param1);
}

int32_t q_videowidget_qbase_metric(void* self, int32_t param1) {
    return QVideoWidget_QBaseMetric((QVideoWidget*)self, param1);
}

void q_videowidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QVideoWidget_OnMetric((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_init_painter(void* self, void* painter) {
    QVideoWidget_InitPainter((QVideoWidget*)self, (QPainter*)painter);
}

void q_videowidget_qbase_init_painter(void* self, void* painter) {
    QVideoWidget_QBaseInitPainter((QVideoWidget*)self, (QPainter*)painter);
}

void q_videowidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnInitPainter((QVideoWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_videowidget_redirected(void* self, void* offset) {
    return QVideoWidget_Redirected((QVideoWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_videowidget_qbase_redirected(void* self, void* offset) {
    return QVideoWidget_QBaseRedirected((QVideoWidget*)self, (QPoint*)offset);
}

void q_videowidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QVideoWidget_OnRedirected((QVideoWidget*)self, (intptr_t)callback);
}

QPainter* q_videowidget_shared_painter(void* self) {
    return QVideoWidget_SharedPainter((QVideoWidget*)self);
}

QPainter* q_videowidget_qbase_shared_painter(void* self) {
    return QVideoWidget_QBaseSharedPainter((QVideoWidget*)self);
}

void q_videowidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QVideoWidget_OnSharedPainter((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_input_method_event(void* self, void* param1) {
    QVideoWidget_InputMethodEvent((QVideoWidget*)self, (QInputMethodEvent*)param1);
}

void q_videowidget_qbase_input_method_event(void* self, void* param1) {
    QVideoWidget_QBaseInputMethodEvent((QVideoWidget*)self, (QInputMethodEvent*)param1);
}

void q_videowidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnInputMethodEvent((QVideoWidget*)self, (intptr_t)callback);
}

QVariant* q_videowidget_input_method_query(void* self, int64_t param1) {
    return QVideoWidget_InputMethodQuery((QVideoWidget*)self, param1);
}

QVariant* q_videowidget_qbase_input_method_query(void* self, int64_t param1) {
    return QVideoWidget_QBaseInputMethodQuery((QVideoWidget*)self, param1);
}

void q_videowidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QVideoWidget_OnInputMethodQuery((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_focus_next_prev_child(void* self, bool next) {
    return QVideoWidget_FocusNextPrevChild((QVideoWidget*)self, next);
}

bool q_videowidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QVideoWidget_QBaseFocusNextPrevChild((QVideoWidget*)self, next);
}

void q_videowidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QVideoWidget_OnFocusNextPrevChild((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_event_filter(void* self, void* watched, void* event) {
    return QVideoWidget_EventFilter((QVideoWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_videowidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QVideoWidget_QBaseEventFilter((QVideoWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_videowidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVideoWidget_OnEventFilter((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_timer_event(void* self, void* event) {
    QVideoWidget_TimerEvent((QVideoWidget*)self, (QTimerEvent*)event);
}

void q_videowidget_qbase_timer_event(void* self, void* event) {
    QVideoWidget_QBaseTimerEvent((QVideoWidget*)self, (QTimerEvent*)event);
}

void q_videowidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnTimerEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_child_event(void* self, void* event) {
    QVideoWidget_ChildEvent((QVideoWidget*)self, (QChildEvent*)event);
}

void q_videowidget_qbase_child_event(void* self, void* event) {
    QVideoWidget_QBaseChildEvent((QVideoWidget*)self, (QChildEvent*)event);
}

void q_videowidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnChildEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_custom_event(void* self, void* event) {
    QVideoWidget_CustomEvent((QVideoWidget*)self, (QEvent*)event);
}

void q_videowidget_qbase_custom_event(void* self, void* event) {
    QVideoWidget_QBaseCustomEvent((QVideoWidget*)self, (QEvent*)event);
}

void q_videowidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnCustomEvent((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_connect_notify(void* self, void* signal) {
    QVideoWidget_ConnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

void q_videowidget_qbase_connect_notify(void* self, void* signal) {
    QVideoWidget_QBaseConnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

void q_videowidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnConnectNotify((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_disconnect_notify(void* self, void* signal) {
    QVideoWidget_DisconnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

void q_videowidget_qbase_disconnect_notify(void* self, void* signal) {
    QVideoWidget_QBaseDisconnectNotify((QVideoWidget*)self, (QMetaMethod*)signal);
}

void q_videowidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QVideoWidget_OnDisconnectNotify((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_update_micro_focus(void* self) {
    QVideoWidget_UpdateMicroFocus((QVideoWidget*)self);
}

void q_videowidget_qbase_update_micro_focus(void* self) {
    QVideoWidget_QBaseUpdateMicroFocus((QVideoWidget*)self);
}

void q_videowidget_on_update_micro_focus(void* self, void (*callback)()) {
    QVideoWidget_OnUpdateMicroFocus((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_create(void* self) {
    QVideoWidget_Create((QVideoWidget*)self);
}

void q_videowidget_qbase_create(void* self) {
    QVideoWidget_QBaseCreate((QVideoWidget*)self);
}

void q_videowidget_on_create(void* self, void (*callback)()) {
    QVideoWidget_OnCreate((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_destroy(void* self) {
    QVideoWidget_Destroy((QVideoWidget*)self);
}

void q_videowidget_qbase_destroy(void* self) {
    QVideoWidget_QBaseDestroy((QVideoWidget*)self);
}

void q_videowidget_on_destroy(void* self, void (*callback)()) {
    QVideoWidget_OnDestroy((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_focus_next_child(void* self) {
    return QVideoWidget_FocusNextChild((QVideoWidget*)self);
}

bool q_videowidget_qbase_focus_next_child(void* self) {
    return QVideoWidget_QBaseFocusNextChild((QVideoWidget*)self);
}

void q_videowidget_on_focus_next_child(void* self, bool (*callback)()) {
    QVideoWidget_OnFocusNextChild((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_focus_previous_child(void* self) {
    return QVideoWidget_FocusPreviousChild((QVideoWidget*)self);
}

bool q_videowidget_qbase_focus_previous_child(void* self) {
    return QVideoWidget_QBaseFocusPreviousChild((QVideoWidget*)self);
}

void q_videowidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QVideoWidget_OnFocusPreviousChild((QVideoWidget*)self, (intptr_t)callback);
}

QObject* q_videowidget_sender(void* self) {
    return QVideoWidget_Sender((QVideoWidget*)self);
}

QObject* q_videowidget_qbase_sender(void* self) {
    return QVideoWidget_QBaseSender((QVideoWidget*)self);
}

void q_videowidget_on_sender(void* self, QObject* (*callback)()) {
    QVideoWidget_OnSender((QVideoWidget*)self, (intptr_t)callback);
}

int32_t q_videowidget_sender_signal_index(void* self) {
    return QVideoWidget_SenderSignalIndex((QVideoWidget*)self);
}

int32_t q_videowidget_qbase_sender_signal_index(void* self) {
    return QVideoWidget_QBaseSenderSignalIndex((QVideoWidget*)self);
}

void q_videowidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QVideoWidget_OnSenderSignalIndex((QVideoWidget*)self, (intptr_t)callback);
}

int32_t q_videowidget_receivers(void* self, const char* signal) {
    return QVideoWidget_Receivers((QVideoWidget*)self, signal);
}

int32_t q_videowidget_qbase_receivers(void* self, const char* signal) {
    return QVideoWidget_QBaseReceivers((QVideoWidget*)self, signal);
}

void q_videowidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QVideoWidget_OnReceivers((QVideoWidget*)self, (intptr_t)callback);
}

bool q_videowidget_is_signal_connected(void* self, void* signal) {
    return QVideoWidget_IsSignalConnected((QVideoWidget*)self, (QMetaMethod*)signal);
}

bool q_videowidget_qbase_is_signal_connected(void* self, void* signal) {
    return QVideoWidget_QBaseIsSignalConnected((QVideoWidget*)self, (QMetaMethod*)signal);
}

void q_videowidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QVideoWidget_OnIsSignalConnected((QVideoWidget*)self, (intptr_t)callback);
}

double q_videowidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QVideoWidget_GetDecodedMetricF((QVideoWidget*)self, metricA, metricB);
}

double q_videowidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QVideoWidget_QBaseGetDecodedMetricF((QVideoWidget*)self, metricA, metricB);
}

void q_videowidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QVideoWidget_OnGetDecodedMetricF((QVideoWidget*)self, (intptr_t)callback);
}

void q_videowidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_videowidget_delete(void* self) {
    QVideoWidget_Delete((QVideoWidget*)(self));
}
