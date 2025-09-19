#include "../extras-kcoreaddons/libkaboutdata.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkbugreport.hpp"
#include "libkbugreport.h"

KBugReport* k_bugreport_new(void* aboutData) {
    return KBugReport_new((KAboutData*)aboutData);
}

KBugReport* k_bugreport_new2(void* aboutData, void* parent) {
    return KBugReport_new2((KAboutData*)aboutData, (QWidget*)parent);
}

const QMetaObject* k_bugreport_meta_object(void* self) {
    return KBugReport_MetaObject((KBugReport*)self);
}

void* k_bugreport_metacast(void* self, const char* param1) {
    return KBugReport_Metacast((KBugReport*)self, param1);
}

int32_t k_bugreport_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBugReport_Metacall((KBugReport*)self, param1, param2, param3);
}

void k_bugreport_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBugReport_OnMetacall((KBugReport*)self, (intptr_t)callback);
}

int32_t k_bugreport_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBugReport_QBaseMetacall((KBugReport*)self, param1, param2, param3);
}

const char* k_bugreport_tr(const char* s) {
    libqt_string _str = KBugReport_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_accept(void* self) {
    KBugReport_Accept((KBugReport*)self);
}

void k_bugreport_on_accept(void* self, void (*callback)()) {
    KBugReport_OnAccept((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_qbase_accept(void* self) {
    KBugReport_QBaseAccept((KBugReport*)self);
}

bool k_bugreport_send_bug_report(void* self) {
    return KBugReport_SendBugReport((KBugReport*)self);
}

void k_bugreport_on_send_bug_report(void* self, bool (*callback)()) {
    KBugReport_OnSendBugReport((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_qbase_send_bug_report(void* self) {
    return KBugReport_QBaseSendBugReport((KBugReport*)self);
}

const char* k_bugreport_tr2(const char* s, const char* c) {
    libqt_string _str = KBugReport_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bugreport_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KBugReport_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_bugreport_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_bugreport_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_bugreport_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_bugreport_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_bugreport_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_bugreport_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_bugreport_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_bugreport_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_bugreport_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_bugreport_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_bugreport_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_bugreport_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_bugreport_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_bugreport_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_bugreport_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_bugreport_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_bugreport_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_bugreport_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_bugreport_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_bugreport_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_bugreport_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_bugreport_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_bugreport_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_bugreport_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_bugreport_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_bugreport_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_bugreport_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_bugreport_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_bugreport_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_bugreport_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_bugreport_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_bugreport_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_bugreport_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_bugreport_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_bugreport_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_bugreport_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_bugreport_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_bugreport_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_bugreport_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_bugreport_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_bugreport_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_bugreport_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_bugreport_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_bugreport_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_bugreport_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_bugreport_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_bugreport_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_bugreport_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_bugreport_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_bugreport_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_bugreport_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_bugreport_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_bugreport_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_bugreport_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_bugreport_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_bugreport_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_bugreport_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_bugreport_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_bugreport_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_bugreport_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_bugreport_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_bugreport_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_bugreport_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_bugreport_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_bugreport_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bugreport_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bugreport_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bugreport_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bugreport_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bugreport_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bugreport_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bugreport_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bugreport_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_bugreport_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_bugreport_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_bugreport_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_bugreport_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_bugreport_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_bugreport_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_bugreport_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_bugreport_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_bugreport_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_bugreport_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_bugreport_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_bugreport_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_bugreport_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_bugreport_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_bugreport_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_bugreport_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_bugreport_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_bugreport_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_bugreport_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_bugreport_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_bugreport_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_bugreport_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_bugreport_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_bugreport_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_bugreport_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_bugreport_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_bugreport_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_bugreport_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_bugreport_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_bugreport_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_bugreport_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_bugreport_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_bugreport_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_bugreport_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_bugreport_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_bugreport_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_bugreport_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_bugreport_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bugreport_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_bugreport_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_bugreport_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_bugreport_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_bugreport_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_bugreport_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_bugreport_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_bugreport_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_bugreport_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_bugreport_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_bugreport_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_bugreport_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_bugreport_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_bugreport_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bugreport_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_bugreport_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_bugreport_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_bugreport_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_bugreport_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_bugreport_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_bugreport_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_bugreport_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_bugreport_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_bugreport_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_bugreport_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_bugreport_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_bugreport_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_bugreport_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_bugreport_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_bugreport_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_bugreport_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_bugreport_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_bugreport_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_bugreport_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_bugreport_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_bugreport_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_bugreport_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_bugreport_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_bugreport_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_bugreport_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_bugreport_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_bugreport_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_bugreport_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_bugreport_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_bugreport_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_bugreport_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_bugreport_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_bugreport_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_bugreport_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_bugreport_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_bugreport_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_bugreport_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_bugreport_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_bugreport_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_bugreport_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_bugreport_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_bugreport_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_bugreport_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_bugreport_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_bugreport_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_bugreport_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_bugreport_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_bugreport_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_bugreport_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_bugreport_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_bugreport_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_bugreport_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_bugreport_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_bugreport_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_bugreport_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_bugreport_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_bugreport_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_bugreport_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_bugreport_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_bugreport_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_bugreport_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_bugreport_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_bugreport_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_bugreport_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_bugreport_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_bugreport_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_bugreport_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_bugreport_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_bugreport_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_bugreport_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_bugreport_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_bugreport_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_bugreport_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_bugreport_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_bugreport_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_bugreport_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_bugreport_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_bugreport_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_bugreport_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_bugreport_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_bugreport_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_bugreport_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_bugreport_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_bugreport_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_bugreport_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_bugreport_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_bugreport_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_bugreport_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_bugreport_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_bugreport_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_bugreport_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_bugreport_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_bugreport_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_bugreport_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_bugreport_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_bugreport_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_bugreport_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_bugreport_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_bugreport_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_bugreport_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_bugreport_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_bugreport_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_bugreport_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_bugreport_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_bugreport_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_bugreport_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_bugreport_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_bugreport_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_bugreport_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_bugreport_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_bugreport_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_bugreport_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_bugreport_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_bugreport_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_bugreport_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_bugreport_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_bugreport_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_bugreport_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_bugreport_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_bugreport_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_bugreport_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_bugreport_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_bugreport_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_bugreport_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_bugreport_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_bugreport_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_bugreport_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_bugreport_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_bugreport_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_bugreport_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_bugreport_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_bugreport_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_bugreport_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_bugreport_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_bugreport_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_bugreport_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_bugreport_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_bugreport_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_bugreport_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_bugreport_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_bugreport_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_bugreport_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_bugreport_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_bugreport_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_bugreport_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_bugreport_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_bugreport_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_bugreport_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_bugreport_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_bugreport_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bugreport_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_bugreport_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_bugreport_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_bugreport_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_bugreport_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_bugreport_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_bugreport_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_bugreport_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_bugreport_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_bugreport_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_bugreport_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_bugreport_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_bugreport_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_bugreport_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_bugreport_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_bugreport_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_bugreport_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_bugreport_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_bugreport_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_bugreport_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_bugreport_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_bugreport_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_bugreport_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_bugreport_dynamic_property_names");
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

QBindingStorage* k_bugreport_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_bugreport_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_bugreport_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_bugreport_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_bugreport_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_bugreport_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_bugreport_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_bugreport_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_bugreport_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_bugreport_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_bugreport_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_bugreport_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_bugreport_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_bugreport_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_bugreport_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_bugreport_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_bugreport_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_bugreport_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_bugreport_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_bugreport_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_bugreport_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_bugreport_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_bugreport_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_bugreport_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_bugreport_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_bugreport_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_bugreport_set_visible(void* self, bool visible) {
    KBugReport_SetVisible((KBugReport*)self, visible);
}

void k_bugreport_qbase_set_visible(void* self, bool visible) {
    KBugReport_QBaseSetVisible((KBugReport*)self, visible);
}

void k_bugreport_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KBugReport_OnSetVisible((KBugReport*)self, (intptr_t)callback);
}

QSize* k_bugreport_size_hint(void* self) {
    return KBugReport_SizeHint((KBugReport*)self);
}

QSize* k_bugreport_qbase_size_hint(void* self) {
    return KBugReport_QBaseSizeHint((KBugReport*)self);
}

void k_bugreport_on_size_hint(void* self, QSize* (*callback)()) {
    KBugReport_OnSizeHint((KBugReport*)self, (intptr_t)callback);
}

QSize* k_bugreport_minimum_size_hint(void* self) {
    return KBugReport_MinimumSizeHint((KBugReport*)self);
}

QSize* k_bugreport_qbase_minimum_size_hint(void* self) {
    return KBugReport_QBaseMinimumSizeHint((KBugReport*)self);
}

void k_bugreport_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KBugReport_OnMinimumSizeHint((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_open(void* self) {
    KBugReport_Open((KBugReport*)self);
}

void k_bugreport_qbase_open(void* self) {
    KBugReport_QBaseOpen((KBugReport*)self);
}

void k_bugreport_on_open(void* self, void (*callback)()) {
    KBugReport_OnOpen((KBugReport*)self, (intptr_t)callback);
}

int32_t k_bugreport_exec(void* self) {
    return KBugReport_Exec((KBugReport*)self);
}

int32_t k_bugreport_qbase_exec(void* self) {
    return KBugReport_QBaseExec((KBugReport*)self);
}

void k_bugreport_on_exec(void* self, int32_t (*callback)()) {
    KBugReport_OnExec((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_done(void* self, int param1) {
    KBugReport_Done((KBugReport*)self, param1);
}

void k_bugreport_qbase_done(void* self, int param1) {
    KBugReport_QBaseDone((KBugReport*)self, param1);
}

void k_bugreport_on_done(void* self, void (*callback)(void*, int)) {
    KBugReport_OnDone((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_reject(void* self) {
    KBugReport_Reject((KBugReport*)self);
}

void k_bugreport_qbase_reject(void* self) {
    KBugReport_QBaseReject((KBugReport*)self);
}

void k_bugreport_on_reject(void* self, void (*callback)()) {
    KBugReport_OnReject((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_key_press_event(void* self, void* param1) {
    KBugReport_KeyPressEvent((KBugReport*)self, (QKeyEvent*)param1);
}

void k_bugreport_qbase_key_press_event(void* self, void* param1) {
    KBugReport_QBaseKeyPressEvent((KBugReport*)self, (QKeyEvent*)param1);
}

void k_bugreport_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnKeyPressEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_close_event(void* self, void* param1) {
    KBugReport_CloseEvent((KBugReport*)self, (QCloseEvent*)param1);
}

void k_bugreport_qbase_close_event(void* self, void* param1) {
    KBugReport_QBaseCloseEvent((KBugReport*)self, (QCloseEvent*)param1);
}

void k_bugreport_on_close_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnCloseEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_show_event(void* self, void* param1) {
    KBugReport_ShowEvent((KBugReport*)self, (QShowEvent*)param1);
}

void k_bugreport_qbase_show_event(void* self, void* param1) {
    KBugReport_QBaseShowEvent((KBugReport*)self, (QShowEvent*)param1);
}

void k_bugreport_on_show_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnShowEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_resize_event(void* self, void* param1) {
    KBugReport_ResizeEvent((KBugReport*)self, (QResizeEvent*)param1);
}

void k_bugreport_qbase_resize_event(void* self, void* param1) {
    KBugReport_QBaseResizeEvent((KBugReport*)self, (QResizeEvent*)param1);
}

void k_bugreport_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnResizeEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_context_menu_event(void* self, void* param1) {
    KBugReport_ContextMenuEvent((KBugReport*)self, (QContextMenuEvent*)param1);
}

void k_bugreport_qbase_context_menu_event(void* self, void* param1) {
    KBugReport_QBaseContextMenuEvent((KBugReport*)self, (QContextMenuEvent*)param1);
}

void k_bugreport_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnContextMenuEvent((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_event_filter(void* self, void* param1, void* param2) {
    return KBugReport_EventFilter((KBugReport*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_bugreport_qbase_event_filter(void* self, void* param1, void* param2) {
    return KBugReport_QBaseEventFilter((KBugReport*)self, (QObject*)param1, (QEvent*)param2);
}

void k_bugreport_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBugReport_OnEventFilter((KBugReport*)self, (intptr_t)callback);
}

int32_t k_bugreport_dev_type(void* self) {
    return KBugReport_DevType((KBugReport*)self);
}

int32_t k_bugreport_qbase_dev_type(void* self) {
    return KBugReport_QBaseDevType((KBugReport*)self);
}

void k_bugreport_on_dev_type(void* self, int32_t (*callback)()) {
    KBugReport_OnDevType((KBugReport*)self, (intptr_t)callback);
}

int32_t k_bugreport_height_for_width(void* self, int param1) {
    return KBugReport_HeightForWidth((KBugReport*)self, param1);
}

int32_t k_bugreport_qbase_height_for_width(void* self, int param1) {
    return KBugReport_QBaseHeightForWidth((KBugReport*)self, param1);
}

void k_bugreport_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KBugReport_OnHeightForWidth((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_has_height_for_width(void* self) {
    return KBugReport_HasHeightForWidth((KBugReport*)self);
}

bool k_bugreport_qbase_has_height_for_width(void* self) {
    return KBugReport_QBaseHasHeightForWidth((KBugReport*)self);
}

void k_bugreport_on_has_height_for_width(void* self, bool (*callback)()) {
    KBugReport_OnHasHeightForWidth((KBugReport*)self, (intptr_t)callback);
}

QPaintEngine* k_bugreport_paint_engine(void* self) {
    return KBugReport_PaintEngine((KBugReport*)self);
}

QPaintEngine* k_bugreport_qbase_paint_engine(void* self) {
    return KBugReport_QBasePaintEngine((KBugReport*)self);
}

void k_bugreport_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KBugReport_OnPaintEngine((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_event(void* self, void* event) {
    return KBugReport_Event((KBugReport*)self, (QEvent*)event);
}

bool k_bugreport_qbase_event(void* self, void* event) {
    return KBugReport_QBaseEvent((KBugReport*)self, (QEvent*)event);
}

void k_bugreport_on_event(void* self, bool (*callback)(void*, void*)) {
    KBugReport_OnEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_mouse_press_event(void* self, void* event) {
    KBugReport_MousePressEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_qbase_mouse_press_event(void* self, void* event) {
    KBugReport_QBaseMousePressEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnMousePressEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_mouse_release_event(void* self, void* event) {
    KBugReport_MouseReleaseEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_qbase_mouse_release_event(void* self, void* event) {
    KBugReport_QBaseMouseReleaseEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnMouseReleaseEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_mouse_double_click_event(void* self, void* event) {
    KBugReport_MouseDoubleClickEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_qbase_mouse_double_click_event(void* self, void* event) {
    KBugReport_QBaseMouseDoubleClickEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnMouseDoubleClickEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_mouse_move_event(void* self, void* event) {
    KBugReport_MouseMoveEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_qbase_mouse_move_event(void* self, void* event) {
    KBugReport_QBaseMouseMoveEvent((KBugReport*)self, (QMouseEvent*)event);
}

void k_bugreport_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnMouseMoveEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_wheel_event(void* self, void* event) {
    KBugReport_WheelEvent((KBugReport*)self, (QWheelEvent*)event);
}

void k_bugreport_qbase_wheel_event(void* self, void* event) {
    KBugReport_QBaseWheelEvent((KBugReport*)self, (QWheelEvent*)event);
}

void k_bugreport_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnWheelEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_key_release_event(void* self, void* event) {
    KBugReport_KeyReleaseEvent((KBugReport*)self, (QKeyEvent*)event);
}

void k_bugreport_qbase_key_release_event(void* self, void* event) {
    KBugReport_QBaseKeyReleaseEvent((KBugReport*)self, (QKeyEvent*)event);
}

void k_bugreport_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnKeyReleaseEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_focus_in_event(void* self, void* event) {
    KBugReport_FocusInEvent((KBugReport*)self, (QFocusEvent*)event);
}

void k_bugreport_qbase_focus_in_event(void* self, void* event) {
    KBugReport_QBaseFocusInEvent((KBugReport*)self, (QFocusEvent*)event);
}

void k_bugreport_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnFocusInEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_focus_out_event(void* self, void* event) {
    KBugReport_FocusOutEvent((KBugReport*)self, (QFocusEvent*)event);
}

void k_bugreport_qbase_focus_out_event(void* self, void* event) {
    KBugReport_QBaseFocusOutEvent((KBugReport*)self, (QFocusEvent*)event);
}

void k_bugreport_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnFocusOutEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_enter_event(void* self, void* event) {
    KBugReport_EnterEvent((KBugReport*)self, (QEnterEvent*)event);
}

void k_bugreport_qbase_enter_event(void* self, void* event) {
    KBugReport_QBaseEnterEvent((KBugReport*)self, (QEnterEvent*)event);
}

void k_bugreport_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnEnterEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_leave_event(void* self, void* event) {
    KBugReport_LeaveEvent((KBugReport*)self, (QEvent*)event);
}

void k_bugreport_qbase_leave_event(void* self, void* event) {
    KBugReport_QBaseLeaveEvent((KBugReport*)self, (QEvent*)event);
}

void k_bugreport_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnLeaveEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_paint_event(void* self, void* event) {
    KBugReport_PaintEvent((KBugReport*)self, (QPaintEvent*)event);
}

void k_bugreport_qbase_paint_event(void* self, void* event) {
    KBugReport_QBasePaintEvent((KBugReport*)self, (QPaintEvent*)event);
}

void k_bugreport_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnPaintEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_move_event(void* self, void* event) {
    KBugReport_MoveEvent((KBugReport*)self, (QMoveEvent*)event);
}

void k_bugreport_qbase_move_event(void* self, void* event) {
    KBugReport_QBaseMoveEvent((KBugReport*)self, (QMoveEvent*)event);
}

void k_bugreport_on_move_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnMoveEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_tablet_event(void* self, void* event) {
    KBugReport_TabletEvent((KBugReport*)self, (QTabletEvent*)event);
}

void k_bugreport_qbase_tablet_event(void* self, void* event) {
    KBugReport_QBaseTabletEvent((KBugReport*)self, (QTabletEvent*)event);
}

void k_bugreport_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnTabletEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_action_event(void* self, void* event) {
    KBugReport_ActionEvent((KBugReport*)self, (QActionEvent*)event);
}

void k_bugreport_qbase_action_event(void* self, void* event) {
    KBugReport_QBaseActionEvent((KBugReport*)self, (QActionEvent*)event);
}

void k_bugreport_on_action_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnActionEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_drag_enter_event(void* self, void* event) {
    KBugReport_DragEnterEvent((KBugReport*)self, (QDragEnterEvent*)event);
}

void k_bugreport_qbase_drag_enter_event(void* self, void* event) {
    KBugReport_QBaseDragEnterEvent((KBugReport*)self, (QDragEnterEvent*)event);
}

void k_bugreport_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnDragEnterEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_drag_move_event(void* self, void* event) {
    KBugReport_DragMoveEvent((KBugReport*)self, (QDragMoveEvent*)event);
}

void k_bugreport_qbase_drag_move_event(void* self, void* event) {
    KBugReport_QBaseDragMoveEvent((KBugReport*)self, (QDragMoveEvent*)event);
}

void k_bugreport_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnDragMoveEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_drag_leave_event(void* self, void* event) {
    KBugReport_DragLeaveEvent((KBugReport*)self, (QDragLeaveEvent*)event);
}

void k_bugreport_qbase_drag_leave_event(void* self, void* event) {
    KBugReport_QBaseDragLeaveEvent((KBugReport*)self, (QDragLeaveEvent*)event);
}

void k_bugreport_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnDragLeaveEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_drop_event(void* self, void* event) {
    KBugReport_DropEvent((KBugReport*)self, (QDropEvent*)event);
}

void k_bugreport_qbase_drop_event(void* self, void* event) {
    KBugReport_QBaseDropEvent((KBugReport*)self, (QDropEvent*)event);
}

void k_bugreport_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnDropEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_hide_event(void* self, void* event) {
    KBugReport_HideEvent((KBugReport*)self, (QHideEvent*)event);
}

void k_bugreport_qbase_hide_event(void* self, void* event) {
    KBugReport_QBaseHideEvent((KBugReport*)self, (QHideEvent*)event);
}

void k_bugreport_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnHideEvent((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KBugReport_NativeEvent((KBugReport*)self, qstring(eventType), message, result);
}

bool k_bugreport_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KBugReport_QBaseNativeEvent((KBugReport*)self, qstring(eventType), message, result);
}

void k_bugreport_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KBugReport_OnNativeEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_change_event(void* self, void* param1) {
    KBugReport_ChangeEvent((KBugReport*)self, (QEvent*)param1);
}

void k_bugreport_qbase_change_event(void* self, void* param1) {
    KBugReport_QBaseChangeEvent((KBugReport*)self, (QEvent*)param1);
}

void k_bugreport_on_change_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnChangeEvent((KBugReport*)self, (intptr_t)callback);
}

int32_t k_bugreport_metric(void* self, int32_t param1) {
    return KBugReport_Metric((KBugReport*)self, param1);
}

int32_t k_bugreport_qbase_metric(void* self, int32_t param1) {
    return KBugReport_QBaseMetric((KBugReport*)self, param1);
}

void k_bugreport_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KBugReport_OnMetric((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_init_painter(void* self, void* painter) {
    KBugReport_InitPainter((KBugReport*)self, (QPainter*)painter);
}

void k_bugreport_qbase_init_painter(void* self, void* painter) {
    KBugReport_QBaseInitPainter((KBugReport*)self, (QPainter*)painter);
}

void k_bugreport_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnInitPainter((KBugReport*)self, (intptr_t)callback);
}

QPaintDevice* k_bugreport_redirected(void* self, void* offset) {
    return KBugReport_Redirected((KBugReport*)self, (QPoint*)offset);
}

QPaintDevice* k_bugreport_qbase_redirected(void* self, void* offset) {
    return KBugReport_QBaseRedirected((KBugReport*)self, (QPoint*)offset);
}

void k_bugreport_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KBugReport_OnRedirected((KBugReport*)self, (intptr_t)callback);
}

QPainter* k_bugreport_shared_painter(void* self) {
    return KBugReport_SharedPainter((KBugReport*)self);
}

QPainter* k_bugreport_qbase_shared_painter(void* self) {
    return KBugReport_QBaseSharedPainter((KBugReport*)self);
}

void k_bugreport_on_shared_painter(void* self, QPainter* (*callback)()) {
    KBugReport_OnSharedPainter((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_input_method_event(void* self, void* param1) {
    KBugReport_InputMethodEvent((KBugReport*)self, (QInputMethodEvent*)param1);
}

void k_bugreport_qbase_input_method_event(void* self, void* param1) {
    KBugReport_QBaseInputMethodEvent((KBugReport*)self, (QInputMethodEvent*)param1);
}

void k_bugreport_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnInputMethodEvent((KBugReport*)self, (intptr_t)callback);
}

QVariant* k_bugreport_input_method_query(void* self, int64_t param1) {
    return KBugReport_InputMethodQuery((KBugReport*)self, param1);
}

QVariant* k_bugreport_qbase_input_method_query(void* self, int64_t param1) {
    return KBugReport_QBaseInputMethodQuery((KBugReport*)self, param1);
}

void k_bugreport_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KBugReport_OnInputMethodQuery((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_focus_next_prev_child(void* self, bool next) {
    return KBugReport_FocusNextPrevChild((KBugReport*)self, next);
}

bool k_bugreport_qbase_focus_next_prev_child(void* self, bool next) {
    return KBugReport_QBaseFocusNextPrevChild((KBugReport*)self, next);
}

void k_bugreport_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KBugReport_OnFocusNextPrevChild((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_timer_event(void* self, void* event) {
    KBugReport_TimerEvent((KBugReport*)self, (QTimerEvent*)event);
}

void k_bugreport_qbase_timer_event(void* self, void* event) {
    KBugReport_QBaseTimerEvent((KBugReport*)self, (QTimerEvent*)event);
}

void k_bugreport_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnTimerEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_child_event(void* self, void* event) {
    KBugReport_ChildEvent((KBugReport*)self, (QChildEvent*)event);
}

void k_bugreport_qbase_child_event(void* self, void* event) {
    KBugReport_QBaseChildEvent((KBugReport*)self, (QChildEvent*)event);
}

void k_bugreport_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnChildEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_custom_event(void* self, void* event) {
    KBugReport_CustomEvent((KBugReport*)self, (QEvent*)event);
}

void k_bugreport_qbase_custom_event(void* self, void* event) {
    KBugReport_QBaseCustomEvent((KBugReport*)self, (QEvent*)event);
}

void k_bugreport_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnCustomEvent((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_connect_notify(void* self, void* signal) {
    KBugReport_ConnectNotify((KBugReport*)self, (QMetaMethod*)signal);
}

void k_bugreport_qbase_connect_notify(void* self, void* signal) {
    KBugReport_QBaseConnectNotify((KBugReport*)self, (QMetaMethod*)signal);
}

void k_bugreport_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnConnectNotify((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_disconnect_notify(void* self, void* signal) {
    KBugReport_DisconnectNotify((KBugReport*)self, (QMetaMethod*)signal);
}

void k_bugreport_qbase_disconnect_notify(void* self, void* signal) {
    KBugReport_QBaseDisconnectNotify((KBugReport*)self, (QMetaMethod*)signal);
}

void k_bugreport_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnDisconnectNotify((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_adjust_position(void* self, void* param1) {
    KBugReport_AdjustPosition((KBugReport*)self, (QWidget*)param1);
}

void k_bugreport_qbase_adjust_position(void* self, void* param1) {
    KBugReport_QBaseAdjustPosition((KBugReport*)self, (QWidget*)param1);
}

void k_bugreport_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KBugReport_OnAdjustPosition((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_update_micro_focus(void* self) {
    KBugReport_UpdateMicroFocus((KBugReport*)self);
}

void k_bugreport_qbase_update_micro_focus(void* self) {
    KBugReport_QBaseUpdateMicroFocus((KBugReport*)self);
}

void k_bugreport_on_update_micro_focus(void* self, void (*callback)()) {
    KBugReport_OnUpdateMicroFocus((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_create(void* self) {
    KBugReport_Create((KBugReport*)self);
}

void k_bugreport_qbase_create(void* self) {
    KBugReport_QBaseCreate((KBugReport*)self);
}

void k_bugreport_on_create(void* self, void (*callback)()) {
    KBugReport_OnCreate((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_destroy(void* self) {
    KBugReport_Destroy((KBugReport*)self);
}

void k_bugreport_qbase_destroy(void* self) {
    KBugReport_QBaseDestroy((KBugReport*)self);
}

void k_bugreport_on_destroy(void* self, void (*callback)()) {
    KBugReport_OnDestroy((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_focus_next_child(void* self) {
    return KBugReport_FocusNextChild((KBugReport*)self);
}

bool k_bugreport_qbase_focus_next_child(void* self) {
    return KBugReport_QBaseFocusNextChild((KBugReport*)self);
}

void k_bugreport_on_focus_next_child(void* self, bool (*callback)()) {
    KBugReport_OnFocusNextChild((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_focus_previous_child(void* self) {
    return KBugReport_FocusPreviousChild((KBugReport*)self);
}

bool k_bugreport_qbase_focus_previous_child(void* self) {
    return KBugReport_QBaseFocusPreviousChild((KBugReport*)self);
}

void k_bugreport_on_focus_previous_child(void* self, bool (*callback)()) {
    KBugReport_OnFocusPreviousChild((KBugReport*)self, (intptr_t)callback);
}

QObject* k_bugreport_sender(void* self) {
    return KBugReport_Sender((KBugReport*)self);
}

QObject* k_bugreport_qbase_sender(void* self) {
    return KBugReport_QBaseSender((KBugReport*)self);
}

void k_bugreport_on_sender(void* self, QObject* (*callback)()) {
    KBugReport_OnSender((KBugReport*)self, (intptr_t)callback);
}

int32_t k_bugreport_sender_signal_index(void* self) {
    return KBugReport_SenderSignalIndex((KBugReport*)self);
}

int32_t k_bugreport_qbase_sender_signal_index(void* self) {
    return KBugReport_QBaseSenderSignalIndex((KBugReport*)self);
}

void k_bugreport_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBugReport_OnSenderSignalIndex((KBugReport*)self, (intptr_t)callback);
}

int32_t k_bugreport_receivers(void* self, const char* signal) {
    return KBugReport_Receivers((KBugReport*)self, signal);
}

int32_t k_bugreport_qbase_receivers(void* self, const char* signal) {
    return KBugReport_QBaseReceivers((KBugReport*)self, signal);
}

void k_bugreport_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBugReport_OnReceivers((KBugReport*)self, (intptr_t)callback);
}

bool k_bugreport_is_signal_connected(void* self, void* signal) {
    return KBugReport_IsSignalConnected((KBugReport*)self, (QMetaMethod*)signal);
}

bool k_bugreport_qbase_is_signal_connected(void* self, void* signal) {
    return KBugReport_QBaseIsSignalConnected((KBugReport*)self, (QMetaMethod*)signal);
}

void k_bugreport_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBugReport_OnIsSignalConnected((KBugReport*)self, (intptr_t)callback);
}

double k_bugreport_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KBugReport_GetDecodedMetricF((KBugReport*)self, metricA, metricB);
}

double k_bugreport_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KBugReport_QBaseGetDecodedMetricF((KBugReport*)self, metricA, metricB);
}

void k_bugreport_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KBugReport_OnGetDecodedMetricF((KBugReport*)self, (intptr_t)callback);
}

void k_bugreport_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_bugreport_delete(void* self) {
    KBugReport_Delete((KBugReport*)(self));
}
