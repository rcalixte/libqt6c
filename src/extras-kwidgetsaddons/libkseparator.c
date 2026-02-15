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
#include "libkseparator.hpp"
#include "libkseparator.h"

KSeparator* k_separator_new(void* parent) {
    return KSeparator_new((QWidget*)parent);
}

KSeparator* k_separator_new2() {
    return KSeparator_new2();
}

KSeparator* k_separator_new3(int32_t orientation) {
    return KSeparator_new3(orientation);
}

KSeparator* k_separator_new4(void* parent, int32_t f) {
    return KSeparator_new4((QWidget*)parent, f);
}

KSeparator* k_separator_new5(int32_t orientation, void* parent) {
    return KSeparator_new5(orientation, (QWidget*)parent);
}

KSeparator* k_separator_new6(int32_t orientation, void* parent, int32_t f) {
    return KSeparator_new6(orientation, (QWidget*)parent, f);
}

const QMetaObject* k_separator_meta_object(void* self) {
    return KSeparator_MetaObject((KSeparator*)self);
}

void k_separator_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSeparator_OnMetaObject((KSeparator*)self, (intptr_t)callback);
}

const QMetaObject* k_separator_qbase_meta_object(void* self) {
    return KSeparator_QBaseMetaObject((KSeparator*)self);
}

void* k_separator_metacast(void* self, const char* param1) {
    return KSeparator_Metacast((KSeparator*)self, param1);
}

void k_separator_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSeparator_OnMetacast((KSeparator*)self, (intptr_t)callback);
}

void* k_separator_qbase_metacast(void* self, const char* param1) {
    return KSeparator_QBaseMetacast((KSeparator*)self, param1);
}

int32_t k_separator_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSeparator_Metacall((KSeparator*)self, param1, param2, param3);
}

void k_separator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSeparator_OnMetacall((KSeparator*)self, (intptr_t)callback);
}

int32_t k_separator_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSeparator_QBaseMetacall((KSeparator*)self, param1, param2, param3);
}

const char* k_separator_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_separator_orientation(void* self) {
    return KSeparator_Orientation((KSeparator*)self);
}

void k_separator_set_orientation(void* self, int32_t orientation) {
    KSeparator_SetOrientation((KSeparator*)self, orientation);
}

const char* k_separator_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_separator_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_separator_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_separator_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_separator_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_separator_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_separator_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_separator_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_separator_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_separator_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_separator_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_separator_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_separator_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_separator_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_separator_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_separator_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_separator_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_separator_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_separator_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_separator_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_separator_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_separator_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_separator_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_separator_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_separator_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_separator_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_separator_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_separator_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_separator_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_separator_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_separator_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_separator_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_separator_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_separator_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_separator_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_separator_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_separator_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_separator_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_separator_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_separator_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_separator_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_separator_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_separator_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_separator_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_separator_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_separator_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_separator_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_separator_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_separator_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_separator_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_separator_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_separator_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_separator_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_separator_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_separator_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_separator_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_separator_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_separator_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_separator_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_separator_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_separator_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_separator_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_separator_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_separator_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_separator_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_separator_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_separator_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_separator_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_separator_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_separator_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_separator_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_separator_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_separator_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_separator_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_separator_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_separator_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_separator_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_separator_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_separator_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_separator_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_separator_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_separator_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_separator_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_separator_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_separator_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_separator_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_separator_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_separator_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_separator_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_separator_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_separator_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_separator_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_separator_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_separator_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_separator_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_separator_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_separator_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_separator_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_separator_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_separator_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_separator_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_separator_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_separator_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_separator_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_separator_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_separator_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_separator_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_separator_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_separator_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_separator_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_separator_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_separator_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_separator_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_separator_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_separator_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_separator_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_separator_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_separator_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_separator_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_separator_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_separator_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_separator_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_separator_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_separator_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_separator_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_separator_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_separator_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_separator_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_separator_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_separator_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_separator_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_separator_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_separator_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_separator_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_separator_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_separator_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_separator_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_separator_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_separator_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_separator_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_separator_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_separator_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_separator_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_separator_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_separator_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_separator_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_separator_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_separator_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_separator_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_separator_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_separator_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_separator_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_separator_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_separator_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_separator_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_separator_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_separator_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_separator_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_separator_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_separator_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_separator_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_separator_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_separator_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_separator_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_separator_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_separator_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_separator_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_separator_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_separator_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_separator_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_separator_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_separator_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_separator_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_separator_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_separator_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_separator_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_separator_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_separator_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_separator_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_separator_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_separator_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_separator_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_separator_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_separator_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_separator_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_separator_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_separator_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_separator_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_separator_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_separator_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_separator_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_separator_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_separator_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_separator_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_separator_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_separator_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_separator_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_separator_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_separator_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_separator_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_separator_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_separator_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_separator_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_separator_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_separator_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_separator_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_separator_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_separator_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_separator_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_separator_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_separator_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_separator_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_separator_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_separator_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_separator_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_separator_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_separator_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_separator_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_separator_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_separator_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_separator_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_separator_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_separator_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_separator_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_separator_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_separator_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_separator_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_separator_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_separator_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_separator_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_separator_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_separator_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_separator_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_separator_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_separator_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_separator_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_separator_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_separator_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_separator_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_separator_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_separator_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_separator_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_separator_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_separator_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_separator_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_separator_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_separator_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_separator_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_separator_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_separator_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_separator_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_separator_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_separator_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_separator_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_separator_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_separator_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_separator_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_separator_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_separator_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_separator_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_separator_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_separator_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_separator_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_separator_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_separator_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_separator_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_separator_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_separator_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_separator_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_separator_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_separator_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_separator_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_separator_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_separator_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_separator_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_separator_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_separator_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_separator_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_separator_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_separator_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_separator_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_separator_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_separator_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_separator_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_separator_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_separator_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_separator_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_separator_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_separator_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_separator_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_separator_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_separator_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_separator_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_separator_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_separator_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_separator_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_separator_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_separator_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_separator_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_separator_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_separator_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_separator_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_separator_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_separator_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_separator_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_separator_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_separator_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_separator_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_separator_dynamic_property_names\n");
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

QBindingStorage* k_separator_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_separator_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_separator_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_separator_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_separator_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_separator_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_separator_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_separator_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_separator_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_separator_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_separator_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_separator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_separator_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_separator_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_separator_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_separator_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_separator_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_separator_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_separator_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_separator_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_separator_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_separator_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_separator_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_separator_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_separator_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_separator_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_separator_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_separator_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_separator_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_separator_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_separator_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_separator_size_hint(void* self) {
    return KSeparator_SizeHint((KSeparator*)self);
}

QSize* k_separator_qbase_size_hint(void* self) {
    return KSeparator_QBaseSizeHint((KSeparator*)self);
}

void k_separator_on_size_hint(void* self, QSize* (*callback)()) {
    KSeparator_OnSizeHint((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_event(void* self, void* e) {
    return KSeparator_Event((KSeparator*)self, (QEvent*)e);
}

bool k_separator_qbase_event(void* self, void* e) {
    return KSeparator_QBaseEvent((KSeparator*)self, (QEvent*)e);
}

void k_separator_on_event(void* self, bool (*callback)(void*, void*)) {
    KSeparator_OnEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_paint_event(void* self, void* param1) {
    KSeparator_PaintEvent((KSeparator*)self, (QPaintEvent*)param1);
}

void k_separator_qbase_paint_event(void* self, void* param1) {
    KSeparator_QBasePaintEvent((KSeparator*)self, (QPaintEvent*)param1);
}

void k_separator_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnPaintEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_change_event(void* self, void* param1) {
    KSeparator_ChangeEvent((KSeparator*)self, (QEvent*)param1);
}

void k_separator_qbase_change_event(void* self, void* param1) {
    KSeparator_QBaseChangeEvent((KSeparator*)self, (QEvent*)param1);
}

void k_separator_on_change_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnChangeEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_init_style_option(void* self, void* option) {
    KSeparator_InitStyleOption((KSeparator*)self, (QStyleOptionFrame*)option);
}

void k_separator_qbase_init_style_option(void* self, void* option) {
    KSeparator_QBaseInitStyleOption((KSeparator*)self, (QStyleOptionFrame*)option);
}

void k_separator_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnInitStyleOption((KSeparator*)self, (intptr_t)callback);
}

int32_t k_separator_dev_type(void* self) {
    return KSeparator_DevType((KSeparator*)self);
}

int32_t k_separator_qbase_dev_type(void* self) {
    return KSeparator_QBaseDevType((KSeparator*)self);
}

void k_separator_on_dev_type(void* self, int32_t (*callback)()) {
    KSeparator_OnDevType((KSeparator*)self, (intptr_t)callback);
}

void k_separator_set_visible(void* self, bool visible) {
    KSeparator_SetVisible((KSeparator*)self, visible);
}

void k_separator_qbase_set_visible(void* self, bool visible) {
    KSeparator_QBaseSetVisible((KSeparator*)self, visible);
}

void k_separator_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KSeparator_OnSetVisible((KSeparator*)self, (intptr_t)callback);
}

QSize* k_separator_minimum_size_hint(void* self) {
    return KSeparator_MinimumSizeHint((KSeparator*)self);
}

QSize* k_separator_qbase_minimum_size_hint(void* self) {
    return KSeparator_QBaseMinimumSizeHint((KSeparator*)self);
}

void k_separator_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KSeparator_OnMinimumSizeHint((KSeparator*)self, (intptr_t)callback);
}

int32_t k_separator_height_for_width(void* self, int param1) {
    return KSeparator_HeightForWidth((KSeparator*)self, param1);
}

int32_t k_separator_qbase_height_for_width(void* self, int param1) {
    return KSeparator_QBaseHeightForWidth((KSeparator*)self, param1);
}

void k_separator_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KSeparator_OnHeightForWidth((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_has_height_for_width(void* self) {
    return KSeparator_HasHeightForWidth((KSeparator*)self);
}

bool k_separator_qbase_has_height_for_width(void* self) {
    return KSeparator_QBaseHasHeightForWidth((KSeparator*)self);
}

void k_separator_on_has_height_for_width(void* self, bool (*callback)()) {
    KSeparator_OnHasHeightForWidth((KSeparator*)self, (intptr_t)callback);
}

QPaintEngine* k_separator_paint_engine(void* self) {
    return KSeparator_PaintEngine((KSeparator*)self);
}

QPaintEngine* k_separator_qbase_paint_engine(void* self) {
    return KSeparator_QBasePaintEngine((KSeparator*)self);
}

void k_separator_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KSeparator_OnPaintEngine((KSeparator*)self, (intptr_t)callback);
}

void k_separator_mouse_press_event(void* self, void* event) {
    KSeparator_MousePressEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_qbase_mouse_press_event(void* self, void* event) {
    KSeparator_QBaseMousePressEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnMousePressEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_mouse_release_event(void* self, void* event) {
    KSeparator_MouseReleaseEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_qbase_mouse_release_event(void* self, void* event) {
    KSeparator_QBaseMouseReleaseEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnMouseReleaseEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_mouse_double_click_event(void* self, void* event) {
    KSeparator_MouseDoubleClickEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_qbase_mouse_double_click_event(void* self, void* event) {
    KSeparator_QBaseMouseDoubleClickEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnMouseDoubleClickEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_mouse_move_event(void* self, void* event) {
    KSeparator_MouseMoveEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_qbase_mouse_move_event(void* self, void* event) {
    KSeparator_QBaseMouseMoveEvent((KSeparator*)self, (QMouseEvent*)event);
}

void k_separator_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnMouseMoveEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_wheel_event(void* self, void* event) {
    KSeparator_WheelEvent((KSeparator*)self, (QWheelEvent*)event);
}

void k_separator_qbase_wheel_event(void* self, void* event) {
    KSeparator_QBaseWheelEvent((KSeparator*)self, (QWheelEvent*)event);
}

void k_separator_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnWheelEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_key_press_event(void* self, void* event) {
    KSeparator_KeyPressEvent((KSeparator*)self, (QKeyEvent*)event);
}

void k_separator_qbase_key_press_event(void* self, void* event) {
    KSeparator_QBaseKeyPressEvent((KSeparator*)self, (QKeyEvent*)event);
}

void k_separator_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnKeyPressEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_key_release_event(void* self, void* event) {
    KSeparator_KeyReleaseEvent((KSeparator*)self, (QKeyEvent*)event);
}

void k_separator_qbase_key_release_event(void* self, void* event) {
    KSeparator_QBaseKeyReleaseEvent((KSeparator*)self, (QKeyEvent*)event);
}

void k_separator_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnKeyReleaseEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_focus_in_event(void* self, void* event) {
    KSeparator_FocusInEvent((KSeparator*)self, (QFocusEvent*)event);
}

void k_separator_qbase_focus_in_event(void* self, void* event) {
    KSeparator_QBaseFocusInEvent((KSeparator*)self, (QFocusEvent*)event);
}

void k_separator_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnFocusInEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_focus_out_event(void* self, void* event) {
    KSeparator_FocusOutEvent((KSeparator*)self, (QFocusEvent*)event);
}

void k_separator_qbase_focus_out_event(void* self, void* event) {
    KSeparator_QBaseFocusOutEvent((KSeparator*)self, (QFocusEvent*)event);
}

void k_separator_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnFocusOutEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_enter_event(void* self, void* event) {
    KSeparator_EnterEvent((KSeparator*)self, (QEnterEvent*)event);
}

void k_separator_qbase_enter_event(void* self, void* event) {
    KSeparator_QBaseEnterEvent((KSeparator*)self, (QEnterEvent*)event);
}

void k_separator_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnEnterEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_leave_event(void* self, void* event) {
    KSeparator_LeaveEvent((KSeparator*)self, (QEvent*)event);
}

void k_separator_qbase_leave_event(void* self, void* event) {
    KSeparator_QBaseLeaveEvent((KSeparator*)self, (QEvent*)event);
}

void k_separator_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnLeaveEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_move_event(void* self, void* event) {
    KSeparator_MoveEvent((KSeparator*)self, (QMoveEvent*)event);
}

void k_separator_qbase_move_event(void* self, void* event) {
    KSeparator_QBaseMoveEvent((KSeparator*)self, (QMoveEvent*)event);
}

void k_separator_on_move_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnMoveEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_resize_event(void* self, void* event) {
    KSeparator_ResizeEvent((KSeparator*)self, (QResizeEvent*)event);
}

void k_separator_qbase_resize_event(void* self, void* event) {
    KSeparator_QBaseResizeEvent((KSeparator*)self, (QResizeEvent*)event);
}

void k_separator_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnResizeEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_close_event(void* self, void* event) {
    KSeparator_CloseEvent((KSeparator*)self, (QCloseEvent*)event);
}

void k_separator_qbase_close_event(void* self, void* event) {
    KSeparator_QBaseCloseEvent((KSeparator*)self, (QCloseEvent*)event);
}

void k_separator_on_close_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnCloseEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_context_menu_event(void* self, void* event) {
    KSeparator_ContextMenuEvent((KSeparator*)self, (QContextMenuEvent*)event);
}

void k_separator_qbase_context_menu_event(void* self, void* event) {
    KSeparator_QBaseContextMenuEvent((KSeparator*)self, (QContextMenuEvent*)event);
}

void k_separator_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnContextMenuEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_tablet_event(void* self, void* event) {
    KSeparator_TabletEvent((KSeparator*)self, (QTabletEvent*)event);
}

void k_separator_qbase_tablet_event(void* self, void* event) {
    KSeparator_QBaseTabletEvent((KSeparator*)self, (QTabletEvent*)event);
}

void k_separator_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnTabletEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_action_event(void* self, void* event) {
    KSeparator_ActionEvent((KSeparator*)self, (QActionEvent*)event);
}

void k_separator_qbase_action_event(void* self, void* event) {
    KSeparator_QBaseActionEvent((KSeparator*)self, (QActionEvent*)event);
}

void k_separator_on_action_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnActionEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_drag_enter_event(void* self, void* event) {
    KSeparator_DragEnterEvent((KSeparator*)self, (QDragEnterEvent*)event);
}

void k_separator_qbase_drag_enter_event(void* self, void* event) {
    KSeparator_QBaseDragEnterEvent((KSeparator*)self, (QDragEnterEvent*)event);
}

void k_separator_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnDragEnterEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_drag_move_event(void* self, void* event) {
    KSeparator_DragMoveEvent((KSeparator*)self, (QDragMoveEvent*)event);
}

void k_separator_qbase_drag_move_event(void* self, void* event) {
    KSeparator_QBaseDragMoveEvent((KSeparator*)self, (QDragMoveEvent*)event);
}

void k_separator_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnDragMoveEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_drag_leave_event(void* self, void* event) {
    KSeparator_DragLeaveEvent((KSeparator*)self, (QDragLeaveEvent*)event);
}

void k_separator_qbase_drag_leave_event(void* self, void* event) {
    KSeparator_QBaseDragLeaveEvent((KSeparator*)self, (QDragLeaveEvent*)event);
}

void k_separator_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnDragLeaveEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_drop_event(void* self, void* event) {
    KSeparator_DropEvent((KSeparator*)self, (QDropEvent*)event);
}

void k_separator_qbase_drop_event(void* self, void* event) {
    KSeparator_QBaseDropEvent((KSeparator*)self, (QDropEvent*)event);
}

void k_separator_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnDropEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_show_event(void* self, void* event) {
    KSeparator_ShowEvent((KSeparator*)self, (QShowEvent*)event);
}

void k_separator_qbase_show_event(void* self, void* event) {
    KSeparator_QBaseShowEvent((KSeparator*)self, (QShowEvent*)event);
}

void k_separator_on_show_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnShowEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_hide_event(void* self, void* event) {
    KSeparator_HideEvent((KSeparator*)self, (QHideEvent*)event);
}

void k_separator_qbase_hide_event(void* self, void* event) {
    KSeparator_QBaseHideEvent((KSeparator*)self, (QHideEvent*)event);
}

void k_separator_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnHideEvent((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KSeparator_NativeEvent((KSeparator*)self, qstring(eventType), message, result);
}

bool k_separator_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KSeparator_QBaseNativeEvent((KSeparator*)self, qstring(eventType), message, result);
}

void k_separator_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KSeparator_OnNativeEvent((KSeparator*)self, (intptr_t)callback);
}

int32_t k_separator_metric(void* self, int32_t param1) {
    return KSeparator_Metric((KSeparator*)self, param1);
}

int32_t k_separator_qbase_metric(void* self, int32_t param1) {
    return KSeparator_QBaseMetric((KSeparator*)self, param1);
}

void k_separator_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KSeparator_OnMetric((KSeparator*)self, (intptr_t)callback);
}

void k_separator_init_painter(void* self, void* painter) {
    KSeparator_InitPainter((KSeparator*)self, (QPainter*)painter);
}

void k_separator_qbase_init_painter(void* self, void* painter) {
    KSeparator_QBaseInitPainter((KSeparator*)self, (QPainter*)painter);
}

void k_separator_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnInitPainter((KSeparator*)self, (intptr_t)callback);
}

QPaintDevice* k_separator_redirected(void* self, void* offset) {
    return KSeparator_Redirected((KSeparator*)self, (QPoint*)offset);
}

QPaintDevice* k_separator_qbase_redirected(void* self, void* offset) {
    return KSeparator_QBaseRedirected((KSeparator*)self, (QPoint*)offset);
}

void k_separator_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KSeparator_OnRedirected((KSeparator*)self, (intptr_t)callback);
}

QPainter* k_separator_shared_painter(void* self) {
    return KSeparator_SharedPainter((KSeparator*)self);
}

QPainter* k_separator_qbase_shared_painter(void* self) {
    return KSeparator_QBaseSharedPainter((KSeparator*)self);
}

void k_separator_on_shared_painter(void* self, QPainter* (*callback)()) {
    KSeparator_OnSharedPainter((KSeparator*)self, (intptr_t)callback);
}

void k_separator_input_method_event(void* self, void* param1) {
    KSeparator_InputMethodEvent((KSeparator*)self, (QInputMethodEvent*)param1);
}

void k_separator_qbase_input_method_event(void* self, void* param1) {
    KSeparator_QBaseInputMethodEvent((KSeparator*)self, (QInputMethodEvent*)param1);
}

void k_separator_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnInputMethodEvent((KSeparator*)self, (intptr_t)callback);
}

QVariant* k_separator_input_method_query(void* self, int32_t param1) {
    return KSeparator_InputMethodQuery((KSeparator*)self, param1);
}

QVariant* k_separator_qbase_input_method_query(void* self, int32_t param1) {
    return KSeparator_QBaseInputMethodQuery((KSeparator*)self, param1);
}

void k_separator_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KSeparator_OnInputMethodQuery((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_focus_next_prev_child(void* self, bool next) {
    return KSeparator_FocusNextPrevChild((KSeparator*)self, next);
}

bool k_separator_qbase_focus_next_prev_child(void* self, bool next) {
    return KSeparator_QBaseFocusNextPrevChild((KSeparator*)self, next);
}

void k_separator_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KSeparator_OnFocusNextPrevChild((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_event_filter(void* self, void* watched, void* event) {
    return KSeparator_EventFilter((KSeparator*)self, (QObject*)watched, (QEvent*)event);
}

bool k_separator_qbase_event_filter(void* self, void* watched, void* event) {
    return KSeparator_QBaseEventFilter((KSeparator*)self, (QObject*)watched, (QEvent*)event);
}

void k_separator_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSeparator_OnEventFilter((KSeparator*)self, (intptr_t)callback);
}

void k_separator_timer_event(void* self, void* event) {
    KSeparator_TimerEvent((KSeparator*)self, (QTimerEvent*)event);
}

void k_separator_qbase_timer_event(void* self, void* event) {
    KSeparator_QBaseTimerEvent((KSeparator*)self, (QTimerEvent*)event);
}

void k_separator_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnTimerEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_child_event(void* self, void* event) {
    KSeparator_ChildEvent((KSeparator*)self, (QChildEvent*)event);
}

void k_separator_qbase_child_event(void* self, void* event) {
    KSeparator_QBaseChildEvent((KSeparator*)self, (QChildEvent*)event);
}

void k_separator_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnChildEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_custom_event(void* self, void* event) {
    KSeparator_CustomEvent((KSeparator*)self, (QEvent*)event);
}

void k_separator_qbase_custom_event(void* self, void* event) {
    KSeparator_QBaseCustomEvent((KSeparator*)self, (QEvent*)event);
}

void k_separator_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnCustomEvent((KSeparator*)self, (intptr_t)callback);
}

void k_separator_connect_notify(void* self, void* signal) {
    KSeparator_ConnectNotify((KSeparator*)self, (QMetaMethod*)signal);
}

void k_separator_qbase_connect_notify(void* self, void* signal) {
    KSeparator_QBaseConnectNotify((KSeparator*)self, (QMetaMethod*)signal);
}

void k_separator_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnConnectNotify((KSeparator*)self, (intptr_t)callback);
}

void k_separator_disconnect_notify(void* self, void* signal) {
    KSeparator_DisconnectNotify((KSeparator*)self, (QMetaMethod*)signal);
}

void k_separator_qbase_disconnect_notify(void* self, void* signal) {
    KSeparator_QBaseDisconnectNotify((KSeparator*)self, (QMetaMethod*)signal);
}

void k_separator_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnDisconnectNotify((KSeparator*)self, (intptr_t)callback);
}

void k_separator_draw_frame(void* self, void* param1) {
    KSeparator_DrawFrame((KSeparator*)self, (QPainter*)param1);
}

void k_separator_qbase_draw_frame(void* self, void* param1) {
    KSeparator_QBaseDrawFrame((KSeparator*)self, (QPainter*)param1);
}

void k_separator_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KSeparator_OnDrawFrame((KSeparator*)self, (intptr_t)callback);
}

void k_separator_update_micro_focus(void* self) {
    KSeparator_UpdateMicroFocus((KSeparator*)self);
}

void k_separator_qbase_update_micro_focus(void* self) {
    KSeparator_QBaseUpdateMicroFocus((KSeparator*)self);
}

void k_separator_on_update_micro_focus(void* self, void (*callback)()) {
    KSeparator_OnUpdateMicroFocus((KSeparator*)self, (intptr_t)callback);
}

void k_separator_create(void* self) {
    KSeparator_Create((KSeparator*)self);
}

void k_separator_qbase_create(void* self) {
    KSeparator_QBaseCreate((KSeparator*)self);
}

void k_separator_on_create(void* self, void (*callback)()) {
    KSeparator_OnCreate((KSeparator*)self, (intptr_t)callback);
}

void k_separator_destroy(void* self) {
    KSeparator_Destroy((KSeparator*)self);
}

void k_separator_qbase_destroy(void* self) {
    KSeparator_QBaseDestroy((KSeparator*)self);
}

void k_separator_on_destroy(void* self, void (*callback)()) {
    KSeparator_OnDestroy((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_focus_next_child(void* self) {
    return KSeparator_FocusNextChild((KSeparator*)self);
}

bool k_separator_qbase_focus_next_child(void* self) {
    return KSeparator_QBaseFocusNextChild((KSeparator*)self);
}

void k_separator_on_focus_next_child(void* self, bool (*callback)()) {
    KSeparator_OnFocusNextChild((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_focus_previous_child(void* self) {
    return KSeparator_FocusPreviousChild((KSeparator*)self);
}

bool k_separator_qbase_focus_previous_child(void* self) {
    return KSeparator_QBaseFocusPreviousChild((KSeparator*)self);
}

void k_separator_on_focus_previous_child(void* self, bool (*callback)()) {
    KSeparator_OnFocusPreviousChild((KSeparator*)self, (intptr_t)callback);
}

QObject* k_separator_sender(void* self) {
    return KSeparator_Sender((KSeparator*)self);
}

QObject* k_separator_qbase_sender(void* self) {
    return KSeparator_QBaseSender((KSeparator*)self);
}

void k_separator_on_sender(void* self, QObject* (*callback)()) {
    KSeparator_OnSender((KSeparator*)self, (intptr_t)callback);
}

int32_t k_separator_sender_signal_index(void* self) {
    return KSeparator_SenderSignalIndex((KSeparator*)self);
}

int32_t k_separator_qbase_sender_signal_index(void* self) {
    return KSeparator_QBaseSenderSignalIndex((KSeparator*)self);
}

void k_separator_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSeparator_OnSenderSignalIndex((KSeparator*)self, (intptr_t)callback);
}

int32_t k_separator_receivers(void* self, const char* signal) {
    return KSeparator_Receivers((KSeparator*)self, signal);
}

int32_t k_separator_qbase_receivers(void* self, const char* signal) {
    return KSeparator_QBaseReceivers((KSeparator*)self, signal);
}

void k_separator_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSeparator_OnReceivers((KSeparator*)self, (intptr_t)callback);
}

bool k_separator_is_signal_connected(void* self, void* signal) {
    return KSeparator_IsSignalConnected((KSeparator*)self, (QMetaMethod*)signal);
}

bool k_separator_qbase_is_signal_connected(void* self, void* signal) {
    return KSeparator_QBaseIsSignalConnected((KSeparator*)self, (QMetaMethod*)signal);
}

void k_separator_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSeparator_OnIsSignalConnected((KSeparator*)self, (intptr_t)callback);
}

double k_separator_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KSeparator_GetDecodedMetricF((KSeparator*)self, metricA, metricB);
}

double k_separator_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KSeparator_QBaseGetDecodedMetricF((KSeparator*)self, metricA, metricB);
}

void k_separator_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KSeparator_OnGetDecodedMetricF((KSeparator*)self, (intptr_t)callback);
}

void k_separator_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_separator_delete(void* self) {
    KSeparator_Delete((KSeparator*)(self));
}
