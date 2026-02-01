#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
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
#include "libkcommandbar.hpp"
#include "libkcommandbar.h"

KCommandBar* k_commandbar_new(void* parent) {
    return KCommandBar_new((QWidget*)parent);
}

const QMetaObject* k_commandbar_meta_object(void* self) {
    return KCommandBar_MetaObject((KCommandBar*)self);
}

void k_commandbar_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KCommandBar_OnMetaObject((KCommandBar*)self, (intptr_t)callback);
}

const QMetaObject* k_commandbar_qbase_meta_object(void* self) {
    return KCommandBar_QBaseMetaObject((KCommandBar*)self);
}

void* k_commandbar_metacast(void* self, const char* param1) {
    return KCommandBar_Metacast((KCommandBar*)self, param1);
}

void k_commandbar_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCommandBar_OnMetacast((KCommandBar*)self, (intptr_t)callback);
}

void* k_commandbar_qbase_metacast(void* self, const char* param1) {
    return KCommandBar_QBaseMetacast((KCommandBar*)self, param1);
}

int32_t k_commandbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCommandBar_Metacall((KCommandBar*)self, param1, param2, param3);
}

void k_commandbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCommandBar_OnMetacall((KCommandBar*)self, (intptr_t)callback);
}

int32_t k_commandbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCommandBar_QBaseMetacall((KCommandBar*)self, param1, param2, param3);
}

const char* k_commandbar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_actions(void* self, libqt_list /* of KCommandBar__ActionGroup* */ actions) {
    KCommandBar_SetActions((KCommandBar*)self, actions);
}

void k_commandbar_show(void* self) {
    KCommandBar_Show((KCommandBar*)self);
}

bool k_commandbar_event_filter(void* self, void* obj, void* event) {
    return KCommandBar_EventFilter((KCommandBar*)self, (QObject*)obj, (QEvent*)event);
}

void k_commandbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCommandBar_OnEventFilter((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_qbase_event_filter(void* self, void* obj, void* event) {
    return KCommandBar_QBaseEventFilter((KCommandBar*)self, (QObject*)obj, (QEvent*)event);
}

const char* k_commandbar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_commandbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_commandbar_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_commandbar_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_commandbar_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_commandbar_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_commandbar_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_commandbar_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_commandbar_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_commandbar_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_commandbar_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_commandbar_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_commandbar_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_commandbar_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_commandbar_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_commandbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_commandbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_commandbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_commandbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_commandbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_commandbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_commandbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_commandbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_commandbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_commandbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_commandbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_commandbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_commandbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_commandbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_commandbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_commandbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_commandbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_commandbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_commandbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_commandbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_commandbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_commandbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_commandbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_commandbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_commandbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_commandbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_commandbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_commandbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_commandbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_commandbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_commandbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_commandbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_commandbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_commandbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_commandbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_commandbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_commandbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_commandbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_commandbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_commandbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_commandbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_commandbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_commandbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_commandbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_commandbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_commandbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_commandbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_commandbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_commandbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_commandbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_commandbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_commandbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_commandbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_commandbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_commandbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_commandbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_commandbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_commandbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_commandbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_commandbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_commandbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_commandbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_commandbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_commandbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_commandbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_commandbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_commandbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_commandbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_commandbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_commandbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_commandbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_commandbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_commandbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_commandbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_commandbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_commandbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_commandbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_commandbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_commandbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_commandbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_commandbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_commandbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_commandbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_commandbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_commandbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_commandbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_commandbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_commandbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_commandbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_commandbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_commandbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_commandbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_commandbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_commandbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_commandbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_commandbar_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_commandbar_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_commandbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_commandbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_commandbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_commandbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_commandbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_commandbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_commandbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_commandbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_commandbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_commandbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_commandbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_commandbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_commandbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_commandbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_commandbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_commandbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_commandbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_commandbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_commandbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_commandbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_commandbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_commandbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_commandbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_commandbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_commandbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_commandbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_commandbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_commandbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_commandbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_commandbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_commandbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_commandbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_commandbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_commandbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_commandbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_commandbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_commandbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_commandbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_commandbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_commandbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_commandbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_commandbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_commandbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_commandbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_commandbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_commandbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_commandbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_commandbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_commandbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_commandbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_commandbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_commandbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_commandbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_commandbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_commandbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_commandbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_commandbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_commandbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_commandbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_commandbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_commandbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_commandbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_commandbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_commandbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_commandbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_commandbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_commandbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_commandbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_commandbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_commandbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_commandbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_commandbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_commandbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_commandbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_commandbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_commandbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_commandbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_commandbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_commandbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_commandbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_commandbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_commandbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_commandbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_commandbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_commandbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_commandbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_commandbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_commandbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_commandbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_commandbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_commandbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_commandbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_commandbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_commandbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_commandbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_commandbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_commandbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_commandbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_commandbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_commandbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_commandbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_commandbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_commandbar_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_commandbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_commandbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_commandbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_commandbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_commandbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_commandbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_commandbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_commandbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_commandbar_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_commandbar_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_commandbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_commandbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_commandbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_commandbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_commandbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_commandbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_commandbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_commandbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_commandbar_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_commandbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_commandbar_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_commandbar_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_commandbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_commandbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_commandbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_commandbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_commandbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_commandbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_commandbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_commandbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_commandbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_commandbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_commandbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_commandbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_commandbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_commandbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_commandbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_commandbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_commandbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_commandbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_commandbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_commandbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_commandbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_commandbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_commandbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_commandbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_commandbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_commandbar_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_commandbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_commandbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_commandbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_commandbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_commandbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_commandbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_commandbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_commandbar_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_commandbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_commandbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_commandbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_commandbar_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_commandbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_commandbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_commandbar_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_commandbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_commandbar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_commandbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_commandbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_commandbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_commandbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_commandbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_commandbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_commandbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_commandbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_commandbar_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_commandbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_commandbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_commandbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_commandbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_commandbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_commandbar_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_commandbar_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_commandbar_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_commandbar_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_commandbar_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_commandbar_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_commandbar_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_commandbar_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_commandbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_commandbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_commandbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_commandbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_commandbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_commandbar_dynamic_property_names\n");
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

QBindingStorage* k_commandbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_commandbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_commandbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_commandbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_commandbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_commandbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_commandbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_commandbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_commandbar_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_commandbar_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_commandbar_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_commandbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_commandbar_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_commandbar_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_commandbar_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_commandbar_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_commandbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_commandbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_commandbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_commandbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_commandbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_commandbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_commandbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_commandbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_commandbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_commandbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_commandbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_commandbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_commandbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_commandbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_commandbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_commandbar_size_hint(void* self) {
    return KCommandBar_SizeHint((KCommandBar*)self);
}

QSize* k_commandbar_qbase_size_hint(void* self) {
    return KCommandBar_QBaseSizeHint((KCommandBar*)self);
}

void k_commandbar_on_size_hint(void* self, QSize* (*callback)()) {
    KCommandBar_OnSizeHint((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_event(void* self, void* e) {
    return KCommandBar_Event((KCommandBar*)self, (QEvent*)e);
}

bool k_commandbar_qbase_event(void* self, void* e) {
    return KCommandBar_QBaseEvent((KCommandBar*)self, (QEvent*)e);
}

void k_commandbar_on_event(void* self, bool (*callback)(void*, void*)) {
    KCommandBar_OnEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_paint_event(void* self, void* param1) {
    KCommandBar_PaintEvent((KCommandBar*)self, (QPaintEvent*)param1);
}

void k_commandbar_qbase_paint_event(void* self, void* param1) {
    KCommandBar_QBasePaintEvent((KCommandBar*)self, (QPaintEvent*)param1);
}

void k_commandbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnPaintEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_change_event(void* self, void* param1) {
    KCommandBar_ChangeEvent((KCommandBar*)self, (QEvent*)param1);
}

void k_commandbar_qbase_change_event(void* self, void* param1) {
    KCommandBar_QBaseChangeEvent((KCommandBar*)self, (QEvent*)param1);
}

void k_commandbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnChangeEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_init_style_option(void* self, void* option) {
    KCommandBar_InitStyleOption((KCommandBar*)self, (QStyleOptionFrame*)option);
}

void k_commandbar_qbase_init_style_option(void* self, void* option) {
    KCommandBar_QBaseInitStyleOption((KCommandBar*)self, (QStyleOptionFrame*)option);
}

void k_commandbar_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnInitStyleOption((KCommandBar*)self, (intptr_t)callback);
}

int32_t k_commandbar_dev_type(void* self) {
    return KCommandBar_DevType((KCommandBar*)self);
}

int32_t k_commandbar_qbase_dev_type(void* self) {
    return KCommandBar_QBaseDevType((KCommandBar*)self);
}

void k_commandbar_on_dev_type(void* self, int32_t (*callback)()) {
    KCommandBar_OnDevType((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_set_visible(void* self, bool visible) {
    KCommandBar_SetVisible((KCommandBar*)self, visible);
}

void k_commandbar_qbase_set_visible(void* self, bool visible) {
    KCommandBar_QBaseSetVisible((KCommandBar*)self, visible);
}

void k_commandbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KCommandBar_OnSetVisible((KCommandBar*)self, (intptr_t)callback);
}

QSize* k_commandbar_minimum_size_hint(void* self) {
    return KCommandBar_MinimumSizeHint((KCommandBar*)self);
}

QSize* k_commandbar_qbase_minimum_size_hint(void* self) {
    return KCommandBar_QBaseMinimumSizeHint((KCommandBar*)self);
}

void k_commandbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KCommandBar_OnMinimumSizeHint((KCommandBar*)self, (intptr_t)callback);
}

int32_t k_commandbar_height_for_width(void* self, int param1) {
    return KCommandBar_HeightForWidth((KCommandBar*)self, param1);
}

int32_t k_commandbar_qbase_height_for_width(void* self, int param1) {
    return KCommandBar_QBaseHeightForWidth((KCommandBar*)self, param1);
}

void k_commandbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KCommandBar_OnHeightForWidth((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_has_height_for_width(void* self) {
    return KCommandBar_HasHeightForWidth((KCommandBar*)self);
}

bool k_commandbar_qbase_has_height_for_width(void* self) {
    return KCommandBar_QBaseHasHeightForWidth((KCommandBar*)self);
}

void k_commandbar_on_has_height_for_width(void* self, bool (*callback)()) {
    KCommandBar_OnHasHeightForWidth((KCommandBar*)self, (intptr_t)callback);
}

QPaintEngine* k_commandbar_paint_engine(void* self) {
    return KCommandBar_PaintEngine((KCommandBar*)self);
}

QPaintEngine* k_commandbar_qbase_paint_engine(void* self) {
    return KCommandBar_QBasePaintEngine((KCommandBar*)self);
}

void k_commandbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KCommandBar_OnPaintEngine((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_mouse_press_event(void* self, void* event) {
    KCommandBar_MousePressEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_qbase_mouse_press_event(void* self, void* event) {
    KCommandBar_QBaseMousePressEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnMousePressEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_mouse_release_event(void* self, void* event) {
    KCommandBar_MouseReleaseEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_qbase_mouse_release_event(void* self, void* event) {
    KCommandBar_QBaseMouseReleaseEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnMouseReleaseEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_mouse_double_click_event(void* self, void* event) {
    KCommandBar_MouseDoubleClickEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_qbase_mouse_double_click_event(void* self, void* event) {
    KCommandBar_QBaseMouseDoubleClickEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnMouseDoubleClickEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_mouse_move_event(void* self, void* event) {
    KCommandBar_MouseMoveEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_qbase_mouse_move_event(void* self, void* event) {
    KCommandBar_QBaseMouseMoveEvent((KCommandBar*)self, (QMouseEvent*)event);
}

void k_commandbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnMouseMoveEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_wheel_event(void* self, void* event) {
    KCommandBar_WheelEvent((KCommandBar*)self, (QWheelEvent*)event);
}

void k_commandbar_qbase_wheel_event(void* self, void* event) {
    KCommandBar_QBaseWheelEvent((KCommandBar*)self, (QWheelEvent*)event);
}

void k_commandbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnWheelEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_key_press_event(void* self, void* event) {
    KCommandBar_KeyPressEvent((KCommandBar*)self, (QKeyEvent*)event);
}

void k_commandbar_qbase_key_press_event(void* self, void* event) {
    KCommandBar_QBaseKeyPressEvent((KCommandBar*)self, (QKeyEvent*)event);
}

void k_commandbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnKeyPressEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_key_release_event(void* self, void* event) {
    KCommandBar_KeyReleaseEvent((KCommandBar*)self, (QKeyEvent*)event);
}

void k_commandbar_qbase_key_release_event(void* self, void* event) {
    KCommandBar_QBaseKeyReleaseEvent((KCommandBar*)self, (QKeyEvent*)event);
}

void k_commandbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnKeyReleaseEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_focus_in_event(void* self, void* event) {
    KCommandBar_FocusInEvent((KCommandBar*)self, (QFocusEvent*)event);
}

void k_commandbar_qbase_focus_in_event(void* self, void* event) {
    KCommandBar_QBaseFocusInEvent((KCommandBar*)self, (QFocusEvent*)event);
}

void k_commandbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnFocusInEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_focus_out_event(void* self, void* event) {
    KCommandBar_FocusOutEvent((KCommandBar*)self, (QFocusEvent*)event);
}

void k_commandbar_qbase_focus_out_event(void* self, void* event) {
    KCommandBar_QBaseFocusOutEvent((KCommandBar*)self, (QFocusEvent*)event);
}

void k_commandbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnFocusOutEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_enter_event(void* self, void* event) {
    KCommandBar_EnterEvent((KCommandBar*)self, (QEnterEvent*)event);
}

void k_commandbar_qbase_enter_event(void* self, void* event) {
    KCommandBar_QBaseEnterEvent((KCommandBar*)self, (QEnterEvent*)event);
}

void k_commandbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnEnterEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_leave_event(void* self, void* event) {
    KCommandBar_LeaveEvent((KCommandBar*)self, (QEvent*)event);
}

void k_commandbar_qbase_leave_event(void* self, void* event) {
    KCommandBar_QBaseLeaveEvent((KCommandBar*)self, (QEvent*)event);
}

void k_commandbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnLeaveEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_move_event(void* self, void* event) {
    KCommandBar_MoveEvent((KCommandBar*)self, (QMoveEvent*)event);
}

void k_commandbar_qbase_move_event(void* self, void* event) {
    KCommandBar_QBaseMoveEvent((KCommandBar*)self, (QMoveEvent*)event);
}

void k_commandbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnMoveEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_resize_event(void* self, void* event) {
    KCommandBar_ResizeEvent((KCommandBar*)self, (QResizeEvent*)event);
}

void k_commandbar_qbase_resize_event(void* self, void* event) {
    KCommandBar_QBaseResizeEvent((KCommandBar*)self, (QResizeEvent*)event);
}

void k_commandbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnResizeEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_close_event(void* self, void* event) {
    KCommandBar_CloseEvent((KCommandBar*)self, (QCloseEvent*)event);
}

void k_commandbar_qbase_close_event(void* self, void* event) {
    KCommandBar_QBaseCloseEvent((KCommandBar*)self, (QCloseEvent*)event);
}

void k_commandbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnCloseEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_context_menu_event(void* self, void* event) {
    KCommandBar_ContextMenuEvent((KCommandBar*)self, (QContextMenuEvent*)event);
}

void k_commandbar_qbase_context_menu_event(void* self, void* event) {
    KCommandBar_QBaseContextMenuEvent((KCommandBar*)self, (QContextMenuEvent*)event);
}

void k_commandbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnContextMenuEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_tablet_event(void* self, void* event) {
    KCommandBar_TabletEvent((KCommandBar*)self, (QTabletEvent*)event);
}

void k_commandbar_qbase_tablet_event(void* self, void* event) {
    KCommandBar_QBaseTabletEvent((KCommandBar*)self, (QTabletEvent*)event);
}

void k_commandbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnTabletEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_action_event(void* self, void* event) {
    KCommandBar_ActionEvent((KCommandBar*)self, (QActionEvent*)event);
}

void k_commandbar_qbase_action_event(void* self, void* event) {
    KCommandBar_QBaseActionEvent((KCommandBar*)self, (QActionEvent*)event);
}

void k_commandbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnActionEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_drag_enter_event(void* self, void* event) {
    KCommandBar_DragEnterEvent((KCommandBar*)self, (QDragEnterEvent*)event);
}

void k_commandbar_qbase_drag_enter_event(void* self, void* event) {
    KCommandBar_QBaseDragEnterEvent((KCommandBar*)self, (QDragEnterEvent*)event);
}

void k_commandbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnDragEnterEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_drag_move_event(void* self, void* event) {
    KCommandBar_DragMoveEvent((KCommandBar*)self, (QDragMoveEvent*)event);
}

void k_commandbar_qbase_drag_move_event(void* self, void* event) {
    KCommandBar_QBaseDragMoveEvent((KCommandBar*)self, (QDragMoveEvent*)event);
}

void k_commandbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnDragMoveEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_drag_leave_event(void* self, void* event) {
    KCommandBar_DragLeaveEvent((KCommandBar*)self, (QDragLeaveEvent*)event);
}

void k_commandbar_qbase_drag_leave_event(void* self, void* event) {
    KCommandBar_QBaseDragLeaveEvent((KCommandBar*)self, (QDragLeaveEvent*)event);
}

void k_commandbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnDragLeaveEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_drop_event(void* self, void* event) {
    KCommandBar_DropEvent((KCommandBar*)self, (QDropEvent*)event);
}

void k_commandbar_qbase_drop_event(void* self, void* event) {
    KCommandBar_QBaseDropEvent((KCommandBar*)self, (QDropEvent*)event);
}

void k_commandbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnDropEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_show_event(void* self, void* event) {
    KCommandBar_ShowEvent((KCommandBar*)self, (QShowEvent*)event);
}

void k_commandbar_qbase_show_event(void* self, void* event) {
    KCommandBar_QBaseShowEvent((KCommandBar*)self, (QShowEvent*)event);
}

void k_commandbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnShowEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_hide_event(void* self, void* event) {
    KCommandBar_HideEvent((KCommandBar*)self, (QHideEvent*)event);
}

void k_commandbar_qbase_hide_event(void* self, void* event) {
    KCommandBar_QBaseHideEvent((KCommandBar*)self, (QHideEvent*)event);
}

void k_commandbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnHideEvent((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCommandBar_NativeEvent((KCommandBar*)self, qstring(eventType), message, result);
}

bool k_commandbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCommandBar_QBaseNativeEvent((KCommandBar*)self, qstring(eventType), message, result);
}

void k_commandbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KCommandBar_OnNativeEvent((KCommandBar*)self, (intptr_t)callback);
}

int32_t k_commandbar_metric(void* self, int32_t param1) {
    return KCommandBar_Metric((KCommandBar*)self, param1);
}

int32_t k_commandbar_qbase_metric(void* self, int32_t param1) {
    return KCommandBar_QBaseMetric((KCommandBar*)self, param1);
}

void k_commandbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KCommandBar_OnMetric((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_init_painter(void* self, void* painter) {
    KCommandBar_InitPainter((KCommandBar*)self, (QPainter*)painter);
}

void k_commandbar_qbase_init_painter(void* self, void* painter) {
    KCommandBar_QBaseInitPainter((KCommandBar*)self, (QPainter*)painter);
}

void k_commandbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnInitPainter((KCommandBar*)self, (intptr_t)callback);
}

QPaintDevice* k_commandbar_redirected(void* self, void* offset) {
    return KCommandBar_Redirected((KCommandBar*)self, (QPoint*)offset);
}

QPaintDevice* k_commandbar_qbase_redirected(void* self, void* offset) {
    return KCommandBar_QBaseRedirected((KCommandBar*)self, (QPoint*)offset);
}

void k_commandbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KCommandBar_OnRedirected((KCommandBar*)self, (intptr_t)callback);
}

QPainter* k_commandbar_shared_painter(void* self) {
    return KCommandBar_SharedPainter((KCommandBar*)self);
}

QPainter* k_commandbar_qbase_shared_painter(void* self) {
    return KCommandBar_QBaseSharedPainter((KCommandBar*)self);
}

void k_commandbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    KCommandBar_OnSharedPainter((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_input_method_event(void* self, void* param1) {
    KCommandBar_InputMethodEvent((KCommandBar*)self, (QInputMethodEvent*)param1);
}

void k_commandbar_qbase_input_method_event(void* self, void* param1) {
    KCommandBar_QBaseInputMethodEvent((KCommandBar*)self, (QInputMethodEvent*)param1);
}

void k_commandbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnInputMethodEvent((KCommandBar*)self, (intptr_t)callback);
}

QVariant* k_commandbar_input_method_query(void* self, int32_t param1) {
    return KCommandBar_InputMethodQuery((KCommandBar*)self, param1);
}

QVariant* k_commandbar_qbase_input_method_query(void* self, int32_t param1) {
    return KCommandBar_QBaseInputMethodQuery((KCommandBar*)self, param1);
}

void k_commandbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KCommandBar_OnInputMethodQuery((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_focus_next_prev_child(void* self, bool next) {
    return KCommandBar_FocusNextPrevChild((KCommandBar*)self, next);
}

bool k_commandbar_qbase_focus_next_prev_child(void* self, bool next) {
    return KCommandBar_QBaseFocusNextPrevChild((KCommandBar*)self, next);
}

void k_commandbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KCommandBar_OnFocusNextPrevChild((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_timer_event(void* self, void* event) {
    KCommandBar_TimerEvent((KCommandBar*)self, (QTimerEvent*)event);
}

void k_commandbar_qbase_timer_event(void* self, void* event) {
    KCommandBar_QBaseTimerEvent((KCommandBar*)self, (QTimerEvent*)event);
}

void k_commandbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnTimerEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_child_event(void* self, void* event) {
    KCommandBar_ChildEvent((KCommandBar*)self, (QChildEvent*)event);
}

void k_commandbar_qbase_child_event(void* self, void* event) {
    KCommandBar_QBaseChildEvent((KCommandBar*)self, (QChildEvent*)event);
}

void k_commandbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnChildEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_custom_event(void* self, void* event) {
    KCommandBar_CustomEvent((KCommandBar*)self, (QEvent*)event);
}

void k_commandbar_qbase_custom_event(void* self, void* event) {
    KCommandBar_QBaseCustomEvent((KCommandBar*)self, (QEvent*)event);
}

void k_commandbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnCustomEvent((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_connect_notify(void* self, void* signal) {
    KCommandBar_ConnectNotify((KCommandBar*)self, (QMetaMethod*)signal);
}

void k_commandbar_qbase_connect_notify(void* self, void* signal) {
    KCommandBar_QBaseConnectNotify((KCommandBar*)self, (QMetaMethod*)signal);
}

void k_commandbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnConnectNotify((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_disconnect_notify(void* self, void* signal) {
    KCommandBar_DisconnectNotify((KCommandBar*)self, (QMetaMethod*)signal);
}

void k_commandbar_qbase_disconnect_notify(void* self, void* signal) {
    KCommandBar_QBaseDisconnectNotify((KCommandBar*)self, (QMetaMethod*)signal);
}

void k_commandbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnDisconnectNotify((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_draw_frame(void* self, void* param1) {
    KCommandBar_DrawFrame((KCommandBar*)self, (QPainter*)param1);
}

void k_commandbar_qbase_draw_frame(void* self, void* param1) {
    KCommandBar_QBaseDrawFrame((KCommandBar*)self, (QPainter*)param1);
}

void k_commandbar_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KCommandBar_OnDrawFrame((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_update_micro_focus(void* self) {
    KCommandBar_UpdateMicroFocus((KCommandBar*)self);
}

void k_commandbar_qbase_update_micro_focus(void* self) {
    KCommandBar_QBaseUpdateMicroFocus((KCommandBar*)self);
}

void k_commandbar_on_update_micro_focus(void* self, void (*callback)()) {
    KCommandBar_OnUpdateMicroFocus((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_create(void* self) {
    KCommandBar_Create((KCommandBar*)self);
}

void k_commandbar_qbase_create(void* self) {
    KCommandBar_QBaseCreate((KCommandBar*)self);
}

void k_commandbar_on_create(void* self, void (*callback)()) {
    KCommandBar_OnCreate((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_destroy(void* self) {
    KCommandBar_Destroy((KCommandBar*)self);
}

void k_commandbar_qbase_destroy(void* self) {
    KCommandBar_QBaseDestroy((KCommandBar*)self);
}

void k_commandbar_on_destroy(void* self, void (*callback)()) {
    KCommandBar_OnDestroy((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_focus_next_child(void* self) {
    return KCommandBar_FocusNextChild((KCommandBar*)self);
}

bool k_commandbar_qbase_focus_next_child(void* self) {
    return KCommandBar_QBaseFocusNextChild((KCommandBar*)self);
}

void k_commandbar_on_focus_next_child(void* self, bool (*callback)()) {
    KCommandBar_OnFocusNextChild((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_focus_previous_child(void* self) {
    return KCommandBar_FocusPreviousChild((KCommandBar*)self);
}

bool k_commandbar_qbase_focus_previous_child(void* self) {
    return KCommandBar_QBaseFocusPreviousChild((KCommandBar*)self);
}

void k_commandbar_on_focus_previous_child(void* self, bool (*callback)()) {
    KCommandBar_OnFocusPreviousChild((KCommandBar*)self, (intptr_t)callback);
}

QObject* k_commandbar_sender(void* self) {
    return KCommandBar_Sender((KCommandBar*)self);
}

QObject* k_commandbar_qbase_sender(void* self) {
    return KCommandBar_QBaseSender((KCommandBar*)self);
}

void k_commandbar_on_sender(void* self, QObject* (*callback)()) {
    KCommandBar_OnSender((KCommandBar*)self, (intptr_t)callback);
}

int32_t k_commandbar_sender_signal_index(void* self) {
    return KCommandBar_SenderSignalIndex((KCommandBar*)self);
}

int32_t k_commandbar_qbase_sender_signal_index(void* self) {
    return KCommandBar_QBaseSenderSignalIndex((KCommandBar*)self);
}

void k_commandbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCommandBar_OnSenderSignalIndex((KCommandBar*)self, (intptr_t)callback);
}

int32_t k_commandbar_receivers(void* self, const char* signal) {
    return KCommandBar_Receivers((KCommandBar*)self, signal);
}

int32_t k_commandbar_qbase_receivers(void* self, const char* signal) {
    return KCommandBar_QBaseReceivers((KCommandBar*)self, signal);
}

void k_commandbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCommandBar_OnReceivers((KCommandBar*)self, (intptr_t)callback);
}

bool k_commandbar_is_signal_connected(void* self, void* signal) {
    return KCommandBar_IsSignalConnected((KCommandBar*)self, (QMetaMethod*)signal);
}

bool k_commandbar_qbase_is_signal_connected(void* self, void* signal) {
    return KCommandBar_QBaseIsSignalConnected((KCommandBar*)self, (QMetaMethod*)signal);
}

void k_commandbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCommandBar_OnIsSignalConnected((KCommandBar*)self, (intptr_t)callback);
}

double k_commandbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCommandBar_GetDecodedMetricF((KCommandBar*)self, metricA, metricB);
}

double k_commandbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCommandBar_QBaseGetDecodedMetricF((KCommandBar*)self, metricA, metricB);
}

void k_commandbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KCommandBar_OnGetDecodedMetricF((KCommandBar*)self, (intptr_t)callback);
}

void k_commandbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_commandbar_delete(void* self) {
    KCommandBar_Delete((KCommandBar*)(self));
}

KCommandBar__ActionGroup* k_commandbar__actiongroup_new(void* param1) {
    return KCommandBar__ActionGroup_new((KCommandBar__ActionGroup*)param1);
}

KCommandBar__ActionGroup* k_commandbar__actiongroup_new2() {
    return KCommandBar__ActionGroup_new2();
}

const char* k_commandbar__actiongroup_name(void* self) {
    libqt_string name_str = KCommandBar__ActionGroup_Name((KCommandBar__ActionGroup*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void k_commandbar__actiongroup_set_name(void* self, const char* name) {
    KCommandBar__ActionGroup_SetName((KCommandBar__ActionGroup*)self, qstring(name));
}

libqt_list /* of QAction* */ k_commandbar__actiongroup_actions(void* self) {
    libqt_list actions_arr = KCommandBar__ActionGroup_Actions((KCommandBar__ActionGroup*)self);
    return actions_arr;
}

void k_commandbar__actiongroup_set_actions(void* self, libqt_list /* of QAction* */ actions) {
    KCommandBar__ActionGroup_SetActions((KCommandBar__ActionGroup*)self, actions);
}

void k_commandbar__actiongroup_operator_assign(void* self, void* param1) {
    KCommandBar__ActionGroup_OperatorAssign((KCommandBar__ActionGroup*)self, (KCommandBar__ActionGroup*)param1);
}

void k_commandbar__actiongroup_delete(void* self) {
    KCommandBar__ActionGroup_Delete((KCommandBar__ActionGroup*)(self));
}
