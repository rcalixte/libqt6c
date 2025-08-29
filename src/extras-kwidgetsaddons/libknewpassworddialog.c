#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqdialog.hpp"
#include "../libqicon.hpp"
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
#include "libknewpassworddialog.hpp"
#include "libknewpassworddialog.h"

KNewPasswordDialog* k_newpassworddialog_new(void* parent) {
    return KNewPasswordDialog_new((QWidget*)parent);
}

KNewPasswordDialog* k_newpassworddialog_new2() {
    return KNewPasswordDialog_new2();
}

const QMetaObject* k_newpassworddialog_meta_object(void* self) {
    return KNewPasswordDialog_MetaObject((KNewPasswordDialog*)self);
}

void* k_newpassworddialog_metacast(void* self, const char* param1) {
    return KNewPasswordDialog_Metacast((KNewPasswordDialog*)self, param1);
}

int32_t k_newpassworddialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNewPasswordDialog_Metacall((KNewPasswordDialog*)self, param1, param2, param3);
}

void k_newpassworddialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNewPasswordDialog_OnMetacall((KNewPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_newpassworddialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNewPasswordDialog_QBaseMetacall((KNewPasswordDialog*)self, param1, param2, param3);
}

const char* k_newpassworddialog_tr(const char* s) {
    libqt_string _str = KNewPasswordDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_prompt(void* self, const char* prompt) {
    KNewPasswordDialog_SetPrompt((KNewPasswordDialog*)self, qstring(prompt));
}

const char* k_newpassworddialog_prompt(void* self) {
    libqt_string _str = KNewPasswordDialog_Prompt((KNewPasswordDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_icon(void* self, void* icon) {
    KNewPasswordDialog_SetIcon((KNewPasswordDialog*)self, (QIcon*)icon);
}

QIcon* k_newpassworddialog_icon(void* self) {
    return KNewPasswordDialog_Icon((KNewPasswordDialog*)self);
}

void k_newpassworddialog_set_allow_empty_passwords(void* self, bool allowed) {
    KNewPasswordDialog_SetAllowEmptyPasswords((KNewPasswordDialog*)self, allowed);
}

bool k_newpassworddialog_allow_empty_passwords(void* self) {
    return KNewPasswordDialog_AllowEmptyPasswords((KNewPasswordDialog*)self);
}

void k_newpassworddialog_set_minimum_password_length(void* self, int minLength) {
    KNewPasswordDialog_SetMinimumPasswordLength((KNewPasswordDialog*)self, minLength);
}

int32_t k_newpassworddialog_minimum_password_length(void* self) {
    return KNewPasswordDialog_MinimumPasswordLength((KNewPasswordDialog*)self);
}

void k_newpassworddialog_set_maximum_password_length(void* self, int maxLength) {
    KNewPasswordDialog_SetMaximumPasswordLength((KNewPasswordDialog*)self, maxLength);
}

int32_t k_newpassworddialog_maximum_password_length(void* self) {
    return KNewPasswordDialog_MaximumPasswordLength((KNewPasswordDialog*)self);
}

void k_newpassworddialog_set_reasonable_password_length(void* self, int reasonableLength) {
    KNewPasswordDialog_SetReasonablePasswordLength((KNewPasswordDialog*)self, reasonableLength);
}

int32_t k_newpassworddialog_reasonable_password_length(void* self) {
    return KNewPasswordDialog_ReasonablePasswordLength((KNewPasswordDialog*)self);
}

void k_newpassworddialog_set_password_strength_warning_level(void* self, int warningLevel) {
    KNewPasswordDialog_SetPasswordStrengthWarningLevel((KNewPasswordDialog*)self, warningLevel);
}

int32_t k_newpassworddialog_password_strength_warning_level(void* self) {
    return KNewPasswordDialog_PasswordStrengthWarningLevel((KNewPasswordDialog*)self);
}

void k_newpassworddialog_set_background_warning_color(void* self, void* color) {
    KNewPasswordDialog_SetBackgroundWarningColor((KNewPasswordDialog*)self, (QColor*)color);
}

QColor* k_newpassworddialog_background_warning_color(void* self) {
    return KNewPasswordDialog_BackgroundWarningColor((KNewPasswordDialog*)self);
}

const char* k_newpassworddialog_password(void* self) {
    libqt_string _str = KNewPasswordDialog_Password((KNewPasswordDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_reveal_password_available(void* self, bool reveal) {
    KNewPasswordDialog_SetRevealPasswordAvailable((KNewPasswordDialog*)self, reveal);
}

bool k_newpassworddialog_is_reveal_password_available(void* self) {
    return KNewPasswordDialog_IsRevealPasswordAvailable((KNewPasswordDialog*)self);
}

int32_t k_newpassworddialog_reveal_password_mode(void* self) {
    return KNewPasswordDialog_RevealPasswordMode((KNewPasswordDialog*)self);
}

void k_newpassworddialog_set_reveal_password_mode(void* self, int32_t revealPasswordMode) {
    KNewPasswordDialog_SetRevealPasswordMode((KNewPasswordDialog*)self, revealPasswordMode);
}

void k_newpassworddialog_accept(void* self) {
    KNewPasswordDialog_Accept((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_accept(void* self, void (*callback)()) {
    KNewPasswordDialog_OnAccept((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_qbase_accept(void* self) {
    KNewPasswordDialog_QBaseAccept((KNewPasswordDialog*)self);
}

bool k_newpassworddialog_check_password(void* self, const char* param1) {
    return KNewPasswordDialog_CheckPassword((KNewPasswordDialog*)self, qstring(param1));
}

void k_newpassworddialog_on_check_password(void* self, bool (*callback)(void*, const char*)) {
    KNewPasswordDialog_OnCheckPassword((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_qbase_check_password(void* self, const char* param1) {
    return KNewPasswordDialog_QBaseCheckPassword((KNewPasswordDialog*)self, qstring(param1));
}

void k_newpassworddialog_new_password(void* self, const char* password) {
    KNewPasswordDialog_NewPassword((KNewPasswordDialog*)self, qstring(password));
}

void k_newpassworddialog_on_new_password(void* self, void (*callback)(void*, const char*)) {
    KNewPasswordDialog_Connect_NewPassword((KNewPasswordDialog*)self, (intptr_t)callback);
}

const char* k_newpassworddialog_tr2(const char* s, const char* c) {
    libqt_string _str = KNewPasswordDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_newpassworddialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KNewPasswordDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_newpassworddialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_newpassworddialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_newpassworddialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_newpassworddialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_newpassworddialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_newpassworddialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_newpassworddialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_newpassworddialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_newpassworddialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_newpassworddialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_newpassworddialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_newpassworddialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_newpassworddialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_newpassworddialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_newpassworddialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_newpassworddialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_newpassworddialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_newpassworddialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_newpassworddialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_newpassworddialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_newpassworddialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_newpassworddialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_newpassworddialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_newpassworddialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_newpassworddialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_newpassworddialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_newpassworddialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_newpassworddialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_newpassworddialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_newpassworddialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_newpassworddialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_newpassworddialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_newpassworddialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_newpassworddialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_newpassworddialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_newpassworddialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_newpassworddialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_newpassworddialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_newpassworddialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_newpassworddialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_newpassworddialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_newpassworddialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_newpassworddialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_newpassworddialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_newpassworddialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_newpassworddialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_newpassworddialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_newpassworddialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_newpassworddialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_newpassworddialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_newpassworddialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_newpassworddialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_newpassworddialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_newpassworddialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_newpassworddialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_newpassworddialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_newpassworddialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_newpassworddialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_newpassworddialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_newpassworddialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_newpassworddialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_newpassworddialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_newpassworddialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_newpassworddialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_newpassworddialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_newpassworddialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_newpassworddialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_newpassworddialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_newpassworddialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_newpassworddialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_newpassworddialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_newpassworddialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_newpassworddialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_newpassworddialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_newpassworddialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_newpassworddialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_newpassworddialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_newpassworddialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_newpassworddialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_newpassworddialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_newpassworddialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_newpassworddialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_newpassworddialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_newpassworddialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_newpassworddialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_newpassworddialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_newpassworddialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_newpassworddialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_newpassworddialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_newpassworddialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_newpassworddialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_newpassworddialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_newpassworddialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_newpassworddialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_newpassworddialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_newpassworddialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_newpassworddialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_newpassworddialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_newpassworddialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_newpassworddialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_newpassworddialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_newpassworddialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_newpassworddialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_newpassworddialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_newpassworddialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_newpassworddialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_newpassworddialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_newpassworddialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_newpassworddialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_newpassworddialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_newpassworddialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_newpassworddialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_newpassworddialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_newpassworddialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_newpassworddialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_newpassworddialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_newpassworddialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_newpassworddialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_newpassworddialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_newpassworddialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_newpassworddialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_newpassworddialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_newpassworddialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_newpassworddialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_newpassworddialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_newpassworddialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_newpassworddialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_newpassworddialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_newpassworddialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_newpassworddialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_newpassworddialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_newpassworddialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_newpassworddialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_newpassworddialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_newpassworddialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_newpassworddialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_newpassworddialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_newpassworddialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_newpassworddialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_newpassworddialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_newpassworddialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_newpassworddialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_newpassworddialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_newpassworddialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_newpassworddialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_newpassworddialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_newpassworddialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_newpassworddialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_newpassworddialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_newpassworddialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_newpassworddialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_newpassworddialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_newpassworddialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_newpassworddialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_newpassworddialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_newpassworddialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_newpassworddialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_newpassworddialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_newpassworddialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_newpassworddialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_newpassworddialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_newpassworddialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_newpassworddialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_newpassworddialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_newpassworddialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_newpassworddialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_newpassworddialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_newpassworddialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_newpassworddialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_newpassworddialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_newpassworddialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_newpassworddialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_newpassworddialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_newpassworddialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_newpassworddialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_newpassworddialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_newpassworddialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_newpassworddialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_newpassworddialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_newpassworddialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_newpassworddialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_newpassworddialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_newpassworddialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_newpassworddialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_newpassworddialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_newpassworddialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_newpassworddialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_newpassworddialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_newpassworddialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_newpassworddialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_newpassworddialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_newpassworddialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_newpassworddialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_newpassworddialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_newpassworddialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_newpassworddialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_newpassworddialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_newpassworddialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_newpassworddialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_newpassworddialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_newpassworddialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_newpassworddialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_newpassworddialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_newpassworddialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_newpassworddialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_newpassworddialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_newpassworddialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_newpassworddialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_newpassworddialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_newpassworddialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_newpassworddialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_newpassworddialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_newpassworddialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_newpassworddialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_newpassworddialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_newpassworddialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_newpassworddialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_newpassworddialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_newpassworddialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_newpassworddialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_newpassworddialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_newpassworddialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_newpassworddialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_newpassworddialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_newpassworddialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_newpassworddialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_newpassworddialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_newpassworddialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_newpassworddialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_newpassworddialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_newpassworddialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_newpassworddialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_newpassworddialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_newpassworddialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_newpassworddialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_newpassworddialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_newpassworddialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_newpassworddialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_newpassworddialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_newpassworddialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_newpassworddialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_newpassworddialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_newpassworddialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_newpassworddialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_newpassworddialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_newpassworddialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_newpassworddialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_newpassworddialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_newpassworddialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_newpassworddialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_newpassworddialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_newpassworddialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_newpassworddialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_newpassworddialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_newpassworddialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_newpassworddialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_newpassworddialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_newpassworddialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_newpassworddialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_newpassworddialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_newpassworddialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_newpassworddialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_newpassworddialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_newpassworddialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_newpassworddialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_newpassworddialog_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_newpassworddialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_newpassworddialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_newpassworddialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_newpassworddialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_newpassworddialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_newpassworddialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_newpassworddialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_newpassworddialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_newpassworddialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_newpassworddialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_newpassworddialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_newpassworddialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_newpassworddialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_newpassworddialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_newpassworddialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_newpassworddialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_newpassworddialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_newpassworddialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_newpassworddialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_newpassworddialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_newpassworddialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_newpassworddialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_newpassworddialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_newpassworddialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_newpassworddialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_newpassworddialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_newpassworddialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_newpassworddialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_newpassworddialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_newpassworddialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_newpassworddialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_newpassworddialog_dynamic_property_names");
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

QBindingStorage* k_newpassworddialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_newpassworddialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_newpassworddialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_newpassworddialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_newpassworddialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_newpassworddialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_newpassworddialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_newpassworddialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_newpassworddialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_newpassworddialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_newpassworddialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_newpassworddialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_newpassworddialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_newpassworddialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_newpassworddialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_newpassworddialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_newpassworddialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_newpassworddialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_newpassworddialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_newpassworddialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_newpassworddialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_newpassworddialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_newpassworddialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_newpassworddialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_newpassworddialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_newpassworddialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_newpassworddialog_set_visible(void* self, bool visible) {
    KNewPasswordDialog_SetVisible((KNewPasswordDialog*)self, visible);
}

void k_newpassworddialog_qbase_set_visible(void* self, bool visible) {
    KNewPasswordDialog_QBaseSetVisible((KNewPasswordDialog*)self, visible);
}

void k_newpassworddialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KNewPasswordDialog_OnSetVisible((KNewPasswordDialog*)self, (intptr_t)callback);
}

QSize* k_newpassworddialog_size_hint(void* self) {
    return KNewPasswordDialog_SizeHint((KNewPasswordDialog*)self);
}

QSize* k_newpassworddialog_qbase_size_hint(void* self) {
    return KNewPasswordDialog_QBaseSizeHint((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_size_hint(void* self, QSize* (*callback)()) {
    KNewPasswordDialog_OnSizeHint((KNewPasswordDialog*)self, (intptr_t)callback);
}

QSize* k_newpassworddialog_minimum_size_hint(void* self) {
    return KNewPasswordDialog_MinimumSizeHint((KNewPasswordDialog*)self);
}

QSize* k_newpassworddialog_qbase_minimum_size_hint(void* self) {
    return KNewPasswordDialog_QBaseMinimumSizeHint((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KNewPasswordDialog_OnMinimumSizeHint((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_open(void* self) {
    KNewPasswordDialog_Open((KNewPasswordDialog*)self);
}

void k_newpassworddialog_qbase_open(void* self) {
    KNewPasswordDialog_QBaseOpen((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_open(void* self, void (*callback)()) {
    KNewPasswordDialog_OnOpen((KNewPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_newpassworddialog_exec(void* self) {
    return KNewPasswordDialog_Exec((KNewPasswordDialog*)self);
}

int32_t k_newpassworddialog_qbase_exec(void* self) {
    return KNewPasswordDialog_QBaseExec((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_exec(void* self, int32_t (*callback)()) {
    KNewPasswordDialog_OnExec((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_done(void* self, int param1) {
    KNewPasswordDialog_Done((KNewPasswordDialog*)self, param1);
}

void k_newpassworddialog_qbase_done(void* self, int param1) {
    KNewPasswordDialog_QBaseDone((KNewPasswordDialog*)self, param1);
}

void k_newpassworddialog_on_done(void* self, void (*callback)(void*, int)) {
    KNewPasswordDialog_OnDone((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_reject(void* self) {
    KNewPasswordDialog_Reject((KNewPasswordDialog*)self);
}

void k_newpassworddialog_qbase_reject(void* self) {
    KNewPasswordDialog_QBaseReject((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_reject(void* self, void (*callback)()) {
    KNewPasswordDialog_OnReject((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_key_press_event(void* self, void* param1) {
    KNewPasswordDialog_KeyPressEvent((KNewPasswordDialog*)self, (QKeyEvent*)param1);
}

void k_newpassworddialog_qbase_key_press_event(void* self, void* param1) {
    KNewPasswordDialog_QBaseKeyPressEvent((KNewPasswordDialog*)self, (QKeyEvent*)param1);
}

void k_newpassworddialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnKeyPressEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_close_event(void* self, void* param1) {
    KNewPasswordDialog_CloseEvent((KNewPasswordDialog*)self, (QCloseEvent*)param1);
}

void k_newpassworddialog_qbase_close_event(void* self, void* param1) {
    KNewPasswordDialog_QBaseCloseEvent((KNewPasswordDialog*)self, (QCloseEvent*)param1);
}

void k_newpassworddialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnCloseEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_show_event(void* self, void* param1) {
    KNewPasswordDialog_ShowEvent((KNewPasswordDialog*)self, (QShowEvent*)param1);
}

void k_newpassworddialog_qbase_show_event(void* self, void* param1) {
    KNewPasswordDialog_QBaseShowEvent((KNewPasswordDialog*)self, (QShowEvent*)param1);
}

void k_newpassworddialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnShowEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_resize_event(void* self, void* param1) {
    KNewPasswordDialog_ResizeEvent((KNewPasswordDialog*)self, (QResizeEvent*)param1);
}

void k_newpassworddialog_qbase_resize_event(void* self, void* param1) {
    KNewPasswordDialog_QBaseResizeEvent((KNewPasswordDialog*)self, (QResizeEvent*)param1);
}

void k_newpassworddialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnResizeEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_context_menu_event(void* self, void* param1) {
    KNewPasswordDialog_ContextMenuEvent((KNewPasswordDialog*)self, (QContextMenuEvent*)param1);
}

void k_newpassworddialog_qbase_context_menu_event(void* self, void* param1) {
    KNewPasswordDialog_QBaseContextMenuEvent((KNewPasswordDialog*)self, (QContextMenuEvent*)param1);
}

void k_newpassworddialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnContextMenuEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_event_filter(void* self, void* param1, void* param2) {
    return KNewPasswordDialog_EventFilter((KNewPasswordDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_newpassworddialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KNewPasswordDialog_QBaseEventFilter((KNewPasswordDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_newpassworddialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNewPasswordDialog_OnEventFilter((KNewPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_newpassworddialog_dev_type(void* self) {
    return KNewPasswordDialog_DevType((KNewPasswordDialog*)self);
}

int32_t k_newpassworddialog_qbase_dev_type(void* self) {
    return KNewPasswordDialog_QBaseDevType((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_dev_type(void* self, int32_t (*callback)()) {
    KNewPasswordDialog_OnDevType((KNewPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_newpassworddialog_height_for_width(void* self, int param1) {
    return KNewPasswordDialog_HeightForWidth((KNewPasswordDialog*)self, param1);
}

int32_t k_newpassworddialog_qbase_height_for_width(void* self, int param1) {
    return KNewPasswordDialog_QBaseHeightForWidth((KNewPasswordDialog*)self, param1);
}

void k_newpassworddialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KNewPasswordDialog_OnHeightForWidth((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_has_height_for_width(void* self) {
    return KNewPasswordDialog_HasHeightForWidth((KNewPasswordDialog*)self);
}

bool k_newpassworddialog_qbase_has_height_for_width(void* self) {
    return KNewPasswordDialog_QBaseHasHeightForWidth((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KNewPasswordDialog_OnHasHeightForWidth((KNewPasswordDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_newpassworddialog_paint_engine(void* self) {
    return KNewPasswordDialog_PaintEngine((KNewPasswordDialog*)self);
}

QPaintEngine* k_newpassworddialog_qbase_paint_engine(void* self) {
    return KNewPasswordDialog_QBasePaintEngine((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KNewPasswordDialog_OnPaintEngine((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_event(void* self, void* event) {
    return KNewPasswordDialog_Event((KNewPasswordDialog*)self, (QEvent*)event);
}

bool k_newpassworddialog_qbase_event(void* self, void* event) {
    return KNewPasswordDialog_QBaseEvent((KNewPasswordDialog*)self, (QEvent*)event);
}

void k_newpassworddialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KNewPasswordDialog_OnEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_mouse_press_event(void* self, void* event) {
    KNewPasswordDialog_MousePressEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_qbase_mouse_press_event(void* self, void* event) {
    KNewPasswordDialog_QBaseMousePressEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnMousePressEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_mouse_release_event(void* self, void* event) {
    KNewPasswordDialog_MouseReleaseEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_qbase_mouse_release_event(void* self, void* event) {
    KNewPasswordDialog_QBaseMouseReleaseEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnMouseReleaseEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_mouse_double_click_event(void* self, void* event) {
    KNewPasswordDialog_MouseDoubleClickEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_qbase_mouse_double_click_event(void* self, void* event) {
    KNewPasswordDialog_QBaseMouseDoubleClickEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnMouseDoubleClickEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_mouse_move_event(void* self, void* event) {
    KNewPasswordDialog_MouseMoveEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_qbase_mouse_move_event(void* self, void* event) {
    KNewPasswordDialog_QBaseMouseMoveEvent((KNewPasswordDialog*)self, (QMouseEvent*)event);
}

void k_newpassworddialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnMouseMoveEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_wheel_event(void* self, void* event) {
    KNewPasswordDialog_WheelEvent((KNewPasswordDialog*)self, (QWheelEvent*)event);
}

void k_newpassworddialog_qbase_wheel_event(void* self, void* event) {
    KNewPasswordDialog_QBaseWheelEvent((KNewPasswordDialog*)self, (QWheelEvent*)event);
}

void k_newpassworddialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnWheelEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_key_release_event(void* self, void* event) {
    KNewPasswordDialog_KeyReleaseEvent((KNewPasswordDialog*)self, (QKeyEvent*)event);
}

void k_newpassworddialog_qbase_key_release_event(void* self, void* event) {
    KNewPasswordDialog_QBaseKeyReleaseEvent((KNewPasswordDialog*)self, (QKeyEvent*)event);
}

void k_newpassworddialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnKeyReleaseEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_focus_in_event(void* self, void* event) {
    KNewPasswordDialog_FocusInEvent((KNewPasswordDialog*)self, (QFocusEvent*)event);
}

void k_newpassworddialog_qbase_focus_in_event(void* self, void* event) {
    KNewPasswordDialog_QBaseFocusInEvent((KNewPasswordDialog*)self, (QFocusEvent*)event);
}

void k_newpassworddialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnFocusInEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_focus_out_event(void* self, void* event) {
    KNewPasswordDialog_FocusOutEvent((KNewPasswordDialog*)self, (QFocusEvent*)event);
}

void k_newpassworddialog_qbase_focus_out_event(void* self, void* event) {
    KNewPasswordDialog_QBaseFocusOutEvent((KNewPasswordDialog*)self, (QFocusEvent*)event);
}

void k_newpassworddialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnFocusOutEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_enter_event(void* self, void* event) {
    KNewPasswordDialog_EnterEvent((KNewPasswordDialog*)self, (QEnterEvent*)event);
}

void k_newpassworddialog_qbase_enter_event(void* self, void* event) {
    KNewPasswordDialog_QBaseEnterEvent((KNewPasswordDialog*)self, (QEnterEvent*)event);
}

void k_newpassworddialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnEnterEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_leave_event(void* self, void* event) {
    KNewPasswordDialog_LeaveEvent((KNewPasswordDialog*)self, (QEvent*)event);
}

void k_newpassworddialog_qbase_leave_event(void* self, void* event) {
    KNewPasswordDialog_QBaseLeaveEvent((KNewPasswordDialog*)self, (QEvent*)event);
}

void k_newpassworddialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnLeaveEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_paint_event(void* self, void* event) {
    KNewPasswordDialog_PaintEvent((KNewPasswordDialog*)self, (QPaintEvent*)event);
}

void k_newpassworddialog_qbase_paint_event(void* self, void* event) {
    KNewPasswordDialog_QBasePaintEvent((KNewPasswordDialog*)self, (QPaintEvent*)event);
}

void k_newpassworddialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnPaintEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_move_event(void* self, void* event) {
    KNewPasswordDialog_MoveEvent((KNewPasswordDialog*)self, (QMoveEvent*)event);
}

void k_newpassworddialog_qbase_move_event(void* self, void* event) {
    KNewPasswordDialog_QBaseMoveEvent((KNewPasswordDialog*)self, (QMoveEvent*)event);
}

void k_newpassworddialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnMoveEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_tablet_event(void* self, void* event) {
    KNewPasswordDialog_TabletEvent((KNewPasswordDialog*)self, (QTabletEvent*)event);
}

void k_newpassworddialog_qbase_tablet_event(void* self, void* event) {
    KNewPasswordDialog_QBaseTabletEvent((KNewPasswordDialog*)self, (QTabletEvent*)event);
}

void k_newpassworddialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnTabletEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_action_event(void* self, void* event) {
    KNewPasswordDialog_ActionEvent((KNewPasswordDialog*)self, (QActionEvent*)event);
}

void k_newpassworddialog_qbase_action_event(void* self, void* event) {
    KNewPasswordDialog_QBaseActionEvent((KNewPasswordDialog*)self, (QActionEvent*)event);
}

void k_newpassworddialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnActionEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_drag_enter_event(void* self, void* event) {
    KNewPasswordDialog_DragEnterEvent((KNewPasswordDialog*)self, (QDragEnterEvent*)event);
}

void k_newpassworddialog_qbase_drag_enter_event(void* self, void* event) {
    KNewPasswordDialog_QBaseDragEnterEvent((KNewPasswordDialog*)self, (QDragEnterEvent*)event);
}

void k_newpassworddialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnDragEnterEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_drag_move_event(void* self, void* event) {
    KNewPasswordDialog_DragMoveEvent((KNewPasswordDialog*)self, (QDragMoveEvent*)event);
}

void k_newpassworddialog_qbase_drag_move_event(void* self, void* event) {
    KNewPasswordDialog_QBaseDragMoveEvent((KNewPasswordDialog*)self, (QDragMoveEvent*)event);
}

void k_newpassworddialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnDragMoveEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_drag_leave_event(void* self, void* event) {
    KNewPasswordDialog_DragLeaveEvent((KNewPasswordDialog*)self, (QDragLeaveEvent*)event);
}

void k_newpassworddialog_qbase_drag_leave_event(void* self, void* event) {
    KNewPasswordDialog_QBaseDragLeaveEvent((KNewPasswordDialog*)self, (QDragLeaveEvent*)event);
}

void k_newpassworddialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnDragLeaveEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_drop_event(void* self, void* event) {
    KNewPasswordDialog_DropEvent((KNewPasswordDialog*)self, (QDropEvent*)event);
}

void k_newpassworddialog_qbase_drop_event(void* self, void* event) {
    KNewPasswordDialog_QBaseDropEvent((KNewPasswordDialog*)self, (QDropEvent*)event);
}

void k_newpassworddialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnDropEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_hide_event(void* self, void* event) {
    KNewPasswordDialog_HideEvent((KNewPasswordDialog*)self, (QHideEvent*)event);
}

void k_newpassworddialog_qbase_hide_event(void* self, void* event) {
    KNewPasswordDialog_QBaseHideEvent((KNewPasswordDialog*)self, (QHideEvent*)event);
}

void k_newpassworddialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnHideEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KNewPasswordDialog_NativeEvent((KNewPasswordDialog*)self, qstring(eventType), message, result);
}

bool k_newpassworddialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KNewPasswordDialog_QBaseNativeEvent((KNewPasswordDialog*)self, qstring(eventType), message, result);
}

void k_newpassworddialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KNewPasswordDialog_OnNativeEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_change_event(void* self, void* param1) {
    KNewPasswordDialog_ChangeEvent((KNewPasswordDialog*)self, (QEvent*)param1);
}

void k_newpassworddialog_qbase_change_event(void* self, void* param1) {
    KNewPasswordDialog_QBaseChangeEvent((KNewPasswordDialog*)self, (QEvent*)param1);
}

void k_newpassworddialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnChangeEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_newpassworddialog_metric(void* self, int32_t param1) {
    return KNewPasswordDialog_Metric((KNewPasswordDialog*)self, param1);
}

int32_t k_newpassworddialog_qbase_metric(void* self, int32_t param1) {
    return KNewPasswordDialog_QBaseMetric((KNewPasswordDialog*)self, param1);
}

void k_newpassworddialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KNewPasswordDialog_OnMetric((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_init_painter(void* self, void* painter) {
    KNewPasswordDialog_InitPainter((KNewPasswordDialog*)self, (QPainter*)painter);
}

void k_newpassworddialog_qbase_init_painter(void* self, void* painter) {
    KNewPasswordDialog_QBaseInitPainter((KNewPasswordDialog*)self, (QPainter*)painter);
}

void k_newpassworddialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnInitPainter((KNewPasswordDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_newpassworddialog_redirected(void* self, void* offset) {
    return KNewPasswordDialog_Redirected((KNewPasswordDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_newpassworddialog_qbase_redirected(void* self, void* offset) {
    return KNewPasswordDialog_QBaseRedirected((KNewPasswordDialog*)self, (QPoint*)offset);
}

void k_newpassworddialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KNewPasswordDialog_OnRedirected((KNewPasswordDialog*)self, (intptr_t)callback);
}

QPainter* k_newpassworddialog_shared_painter(void* self) {
    return KNewPasswordDialog_SharedPainter((KNewPasswordDialog*)self);
}

QPainter* k_newpassworddialog_qbase_shared_painter(void* self) {
    return KNewPasswordDialog_QBaseSharedPainter((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KNewPasswordDialog_OnSharedPainter((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_input_method_event(void* self, void* param1) {
    KNewPasswordDialog_InputMethodEvent((KNewPasswordDialog*)self, (QInputMethodEvent*)param1);
}

void k_newpassworddialog_qbase_input_method_event(void* self, void* param1) {
    KNewPasswordDialog_QBaseInputMethodEvent((KNewPasswordDialog*)self, (QInputMethodEvent*)param1);
}

void k_newpassworddialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnInputMethodEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

QVariant* k_newpassworddialog_input_method_query(void* self, int64_t param1) {
    return KNewPasswordDialog_InputMethodQuery((KNewPasswordDialog*)self, param1);
}

QVariant* k_newpassworddialog_qbase_input_method_query(void* self, int64_t param1) {
    return KNewPasswordDialog_QBaseInputMethodQuery((KNewPasswordDialog*)self, param1);
}

void k_newpassworddialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KNewPasswordDialog_OnInputMethodQuery((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_focus_next_prev_child(void* self, bool next) {
    return KNewPasswordDialog_FocusNextPrevChild((KNewPasswordDialog*)self, next);
}

bool k_newpassworddialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KNewPasswordDialog_QBaseFocusNextPrevChild((KNewPasswordDialog*)self, next);
}

void k_newpassworddialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KNewPasswordDialog_OnFocusNextPrevChild((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_timer_event(void* self, void* event) {
    KNewPasswordDialog_TimerEvent((KNewPasswordDialog*)self, (QTimerEvent*)event);
}

void k_newpassworddialog_qbase_timer_event(void* self, void* event) {
    KNewPasswordDialog_QBaseTimerEvent((KNewPasswordDialog*)self, (QTimerEvent*)event);
}

void k_newpassworddialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnTimerEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_child_event(void* self, void* event) {
    KNewPasswordDialog_ChildEvent((KNewPasswordDialog*)self, (QChildEvent*)event);
}

void k_newpassworddialog_qbase_child_event(void* self, void* event) {
    KNewPasswordDialog_QBaseChildEvent((KNewPasswordDialog*)self, (QChildEvent*)event);
}

void k_newpassworddialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnChildEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_custom_event(void* self, void* event) {
    KNewPasswordDialog_CustomEvent((KNewPasswordDialog*)self, (QEvent*)event);
}

void k_newpassworddialog_qbase_custom_event(void* self, void* event) {
    KNewPasswordDialog_QBaseCustomEvent((KNewPasswordDialog*)self, (QEvent*)event);
}

void k_newpassworddialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnCustomEvent((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_connect_notify(void* self, void* signal) {
    KNewPasswordDialog_ConnectNotify((KNewPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_newpassworddialog_qbase_connect_notify(void* self, void* signal) {
    KNewPasswordDialog_QBaseConnectNotify((KNewPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_newpassworddialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnConnectNotify((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_disconnect_notify(void* self, void* signal) {
    KNewPasswordDialog_DisconnectNotify((KNewPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_newpassworddialog_qbase_disconnect_notify(void* self, void* signal) {
    KNewPasswordDialog_QBaseDisconnectNotify((KNewPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_newpassworddialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnDisconnectNotify((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_adjust_position(void* self, void* param1) {
    KNewPasswordDialog_AdjustPosition((KNewPasswordDialog*)self, (QWidget*)param1);
}

void k_newpassworddialog_qbase_adjust_position(void* self, void* param1) {
    KNewPasswordDialog_QBaseAdjustPosition((KNewPasswordDialog*)self, (QWidget*)param1);
}

void k_newpassworddialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KNewPasswordDialog_OnAdjustPosition((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_update_micro_focus(void* self) {
    KNewPasswordDialog_UpdateMicroFocus((KNewPasswordDialog*)self);
}

void k_newpassworddialog_qbase_update_micro_focus(void* self) {
    KNewPasswordDialog_QBaseUpdateMicroFocus((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_update_micro_focus(void* self, void (*callback)()) {
    KNewPasswordDialog_OnUpdateMicroFocus((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_create(void* self) {
    KNewPasswordDialog_Create((KNewPasswordDialog*)self);
}

void k_newpassworddialog_qbase_create(void* self) {
    KNewPasswordDialog_QBaseCreate((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_create(void* self, void (*callback)()) {
    KNewPasswordDialog_OnCreate((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_destroy(void* self) {
    KNewPasswordDialog_Destroy((KNewPasswordDialog*)self);
}

void k_newpassworddialog_qbase_destroy(void* self) {
    KNewPasswordDialog_QBaseDestroy((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_destroy(void* self, void (*callback)()) {
    KNewPasswordDialog_OnDestroy((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_focus_next_child(void* self) {
    return KNewPasswordDialog_FocusNextChild((KNewPasswordDialog*)self);
}

bool k_newpassworddialog_qbase_focus_next_child(void* self) {
    return KNewPasswordDialog_QBaseFocusNextChild((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_focus_next_child(void* self, bool (*callback)()) {
    KNewPasswordDialog_OnFocusNextChild((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_focus_previous_child(void* self) {
    return KNewPasswordDialog_FocusPreviousChild((KNewPasswordDialog*)self);
}

bool k_newpassworddialog_qbase_focus_previous_child(void* self) {
    return KNewPasswordDialog_QBaseFocusPreviousChild((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KNewPasswordDialog_OnFocusPreviousChild((KNewPasswordDialog*)self, (intptr_t)callback);
}

QObject* k_newpassworddialog_sender(void* self) {
    return KNewPasswordDialog_Sender((KNewPasswordDialog*)self);
}

QObject* k_newpassworddialog_qbase_sender(void* self) {
    return KNewPasswordDialog_QBaseSender((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_sender(void* self, QObject* (*callback)()) {
    KNewPasswordDialog_OnSender((KNewPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_newpassworddialog_sender_signal_index(void* self) {
    return KNewPasswordDialog_SenderSignalIndex((KNewPasswordDialog*)self);
}

int32_t k_newpassworddialog_qbase_sender_signal_index(void* self) {
    return KNewPasswordDialog_QBaseSenderSignalIndex((KNewPasswordDialog*)self);
}

void k_newpassworddialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNewPasswordDialog_OnSenderSignalIndex((KNewPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_newpassworddialog_receivers(void* self, const char* signal) {
    return KNewPasswordDialog_Receivers((KNewPasswordDialog*)self, signal);
}

int32_t k_newpassworddialog_qbase_receivers(void* self, const char* signal) {
    return KNewPasswordDialog_QBaseReceivers((KNewPasswordDialog*)self, signal);
}

void k_newpassworddialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNewPasswordDialog_OnReceivers((KNewPasswordDialog*)self, (intptr_t)callback);
}

bool k_newpassworddialog_is_signal_connected(void* self, void* signal) {
    return KNewPasswordDialog_IsSignalConnected((KNewPasswordDialog*)self, (QMetaMethod*)signal);
}

bool k_newpassworddialog_qbase_is_signal_connected(void* self, void* signal) {
    return KNewPasswordDialog_QBaseIsSignalConnected((KNewPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_newpassworddialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNewPasswordDialog_OnIsSignalConnected((KNewPasswordDialog*)self, (intptr_t)callback);
}

double k_newpassworddialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KNewPasswordDialog_GetDecodedMetricF((KNewPasswordDialog*)self, metricA, metricB);
}

double k_newpassworddialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KNewPasswordDialog_QBaseGetDecodedMetricF((KNewPasswordDialog*)self, metricA, metricB);
}

void k_newpassworddialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KNewPasswordDialog_OnGetDecodedMetricF((KNewPasswordDialog*)self, (intptr_t)callback);
}

void k_newpassworddialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_newpassworddialog_delete(void* self) {
    KNewPasswordDialog_Delete((KNewPasswordDialog*)(self));
}
