#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqlineedit.hpp"
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
#include "libkpasswordlineedit.hpp"
#include "libkpasswordlineedit.h"

KPasswordLineEdit* k_passwordlineedit_new(void* parent) {
    return KPasswordLineEdit_new((QWidget*)parent);
}

KPasswordLineEdit* k_passwordlineedit_new2() {
    return KPasswordLineEdit_new2();
}

const QMetaObject* k_passwordlineedit_meta_object(void* self) {
    return KPasswordLineEdit_MetaObject((KPasswordLineEdit*)self);
}

void* k_passwordlineedit_metacast(void* self, const char* param1) {
    return KPasswordLineEdit_Metacast((KPasswordLineEdit*)self, param1);
}

int32_t k_passwordlineedit_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPasswordLineEdit_Metacall((KPasswordLineEdit*)self, param1, param2, param3);
}

void k_passwordlineedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPasswordLineEdit_OnMetacall((KPasswordLineEdit*)self, (intptr_t)callback);
}

int32_t k_passwordlineedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPasswordLineEdit_QBaseMetacall((KPasswordLineEdit*)self, param1, param2, param3);
}

const char* k_passwordlineedit_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_password(void* self, const char* password) {
    KPasswordLineEdit_SetPassword((KPasswordLineEdit*)self, qstring(password));
}

const char* k_passwordlineedit_password(void* self) {
    libqt_string _str = KPasswordLineEdit_Password((KPasswordLineEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_clear(void* self) {
    KPasswordLineEdit_Clear((KPasswordLineEdit*)self);
}

void k_passwordlineedit_set_clear_button_enabled(void* self, bool clear) {
    KPasswordLineEdit_SetClearButtonEnabled((KPasswordLineEdit*)self, clear);
}

bool k_passwordlineedit_is_clear_button_enabled(void* self) {
    return KPasswordLineEdit_IsClearButtonEnabled((KPasswordLineEdit*)self);
}

void k_passwordlineedit_set_echo_mode(void* self, int32_t mode) {
    KPasswordLineEdit_SetEchoMode((KPasswordLineEdit*)self, mode);
}

int32_t k_passwordlineedit_echo_mode(void* self) {
    return KPasswordLineEdit_EchoMode((KPasswordLineEdit*)self);
}

void k_passwordlineedit_set_read_only(void* self, bool readOnly) {
    KPasswordLineEdit_SetReadOnly((KPasswordLineEdit*)self, readOnly);
}

bool k_passwordlineedit_is_read_only(void* self) {
    return KPasswordLineEdit_IsReadOnly((KPasswordLineEdit*)self);
}

int32_t k_passwordlineedit_reveal_password_mode(void* self) {
    return KPasswordLineEdit_RevealPasswordMode((KPasswordLineEdit*)self);
}

void k_passwordlineedit_set_reveal_password_mode(void* self, int32_t revealPasswordMode) {
    KPasswordLineEdit_SetRevealPasswordMode((KPasswordLineEdit*)self, revealPasswordMode);
}

void k_passwordlineedit_set_reveal_password_available(void* self, bool reveal) {
    KPasswordLineEdit_SetRevealPasswordAvailable((KPasswordLineEdit*)self, reveal);
}

bool k_passwordlineedit_is_reveal_password_available(void* self) {
    return KPasswordLineEdit_IsRevealPasswordAvailable((KPasswordLineEdit*)self);
}

QAction* k_passwordlineedit_toggle_echo_mode_action(void* self) {
    return KPasswordLineEdit_ToggleEchoModeAction((KPasswordLineEdit*)self);
}

QLineEdit* k_passwordlineedit_line_edit(void* self) {
    return KPasswordLineEdit_LineEdit((KPasswordLineEdit*)self);
}

void k_passwordlineedit_echo_mode_changed(void* self, int32_t echoMode) {
    KPasswordLineEdit_EchoModeChanged((KPasswordLineEdit*)self, echoMode);
}

void k_passwordlineedit_on_echo_mode_changed(void* self, void (*callback)(void*, int32_t)) {
    KPasswordLineEdit_Connect_EchoModeChanged((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_password_changed(void* self, const char* password) {
    KPasswordLineEdit_PasswordChanged((KPasswordLineEdit*)self, qstring(password));
}

void k_passwordlineedit_on_password_changed(void* self, void (*callback)(void*, const char*)) {
    KPasswordLineEdit_Connect_PasswordChanged((KPasswordLineEdit*)self, (intptr_t)callback);
}

const char* k_passwordlineedit_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_passwordlineedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_passwordlineedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_passwordlineedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_passwordlineedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_passwordlineedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_passwordlineedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_passwordlineedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_passwordlineedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_passwordlineedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_passwordlineedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_passwordlineedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_passwordlineedit_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_passwordlineedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_passwordlineedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_passwordlineedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_passwordlineedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_passwordlineedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_passwordlineedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_passwordlineedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_passwordlineedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_passwordlineedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_passwordlineedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_passwordlineedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_passwordlineedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_passwordlineedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_passwordlineedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_passwordlineedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_passwordlineedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_passwordlineedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_passwordlineedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_passwordlineedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_passwordlineedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_passwordlineedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_passwordlineedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_passwordlineedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_passwordlineedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_passwordlineedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_passwordlineedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_passwordlineedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_passwordlineedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_passwordlineedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_passwordlineedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_passwordlineedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_passwordlineedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_passwordlineedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_passwordlineedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_passwordlineedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_passwordlineedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_passwordlineedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_passwordlineedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_passwordlineedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_passwordlineedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_passwordlineedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_passwordlineedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_passwordlineedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passwordlineedit_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passwordlineedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passwordlineedit_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passwordlineedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passwordlineedit_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passwordlineedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passwordlineedit_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passwordlineedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_passwordlineedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_passwordlineedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_passwordlineedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_passwordlineedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_passwordlineedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_passwordlineedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_passwordlineedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_passwordlineedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_passwordlineedit_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_passwordlineedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_passwordlineedit_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_passwordlineedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_passwordlineedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_passwordlineedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_passwordlineedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_passwordlineedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_passwordlineedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_passwordlineedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_passwordlineedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_passwordlineedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_passwordlineedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_passwordlineedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_passwordlineedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_passwordlineedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_passwordlineedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_passwordlineedit_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_passwordlineedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_passwordlineedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_passwordlineedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_passwordlineedit_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_passwordlineedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_passwordlineedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_passwordlineedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_passwordlineedit_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_passwordlineedit_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_passwordlineedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_passwordlineedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_passwordlineedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_passwordlineedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_passwordlineedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_passwordlineedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_passwordlineedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_passwordlineedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_passwordlineedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_passwordlineedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_passwordlineedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_passwordlineedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_passwordlineedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_passwordlineedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_passwordlineedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_passwordlineedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_passwordlineedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_passwordlineedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_passwordlineedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_passwordlineedit_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_passwordlineedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_passwordlineedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_passwordlineedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_passwordlineedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_passwordlineedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_passwordlineedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_passwordlineedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_passwordlineedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_passwordlineedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_passwordlineedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_passwordlineedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_passwordlineedit_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_passwordlineedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_passwordlineedit_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_passwordlineedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_passwordlineedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_passwordlineedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_passwordlineedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_passwordlineedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_passwordlineedit_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_passwordlineedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_passwordlineedit_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_passwordlineedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_passwordlineedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_passwordlineedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_passwordlineedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_passwordlineedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_passwordlineedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_passwordlineedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_passwordlineedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_passwordlineedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_passwordlineedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_passwordlineedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_passwordlineedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_passwordlineedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_passwordlineedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_passwordlineedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_passwordlineedit_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_passwordlineedit_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_passwordlineedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_passwordlineedit_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_passwordlineedit_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_passwordlineedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_passwordlineedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_passwordlineedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_passwordlineedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_passwordlineedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_passwordlineedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_passwordlineedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_passwordlineedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_passwordlineedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_passwordlineedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_passwordlineedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_passwordlineedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_passwordlineedit_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_passwordlineedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_passwordlineedit_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_passwordlineedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_passwordlineedit_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_passwordlineedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_passwordlineedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_passwordlineedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_passwordlineedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_passwordlineedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_passwordlineedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_passwordlineedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_passwordlineedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_passwordlineedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_passwordlineedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_passwordlineedit_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_passwordlineedit_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_passwordlineedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_passwordlineedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_passwordlineedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_passwordlineedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_passwordlineedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_passwordlineedit_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_passwordlineedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_passwordlineedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_passwordlineedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_passwordlineedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_passwordlineedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_passwordlineedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_passwordlineedit_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_passwordlineedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_passwordlineedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_passwordlineedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_passwordlineedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_passwordlineedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_passwordlineedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_passwordlineedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_passwordlineedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_passwordlineedit_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_passwordlineedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_passwordlineedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_passwordlineedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_passwordlineedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_passwordlineedit_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_passwordlineedit_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_passwordlineedit_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_passwordlineedit_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_passwordlineedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_passwordlineedit_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_passwordlineedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_passwordlineedit_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_passwordlineedit_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_passwordlineedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_passwordlineedit_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_passwordlineedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_passwordlineedit_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_passwordlineedit_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_passwordlineedit_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_passwordlineedit_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_passwordlineedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_passwordlineedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_passwordlineedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_passwordlineedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_passwordlineedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_passwordlineedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_passwordlineedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_passwordlineedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_passwordlineedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_passwordlineedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_passwordlineedit_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_passwordlineedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_passwordlineedit_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_passwordlineedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_passwordlineedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_passwordlineedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_passwordlineedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_passwordlineedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_passwordlineedit_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_passwordlineedit_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_passwordlineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_passwordlineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_passwordlineedit_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_passwordlineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_passwordlineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_passwordlineedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_passwordlineedit_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_passwordlineedit_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_passwordlineedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_passwordlineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_passwordlineedit_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_passwordlineedit_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_passwordlineedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_passwordlineedit_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_passwordlineedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passwordlineedit_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_passwordlineedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_passwordlineedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_passwordlineedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_passwordlineedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_passwordlineedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_passwordlineedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_passwordlineedit_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_passwordlineedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_passwordlineedit_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_passwordlineedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_passwordlineedit_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_passwordlineedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_passwordlineedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_passwordlineedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_passwordlineedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_passwordlineedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_passwordlineedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_passwordlineedit_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_passwordlineedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_passwordlineedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_passwordlineedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_passwordlineedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_passwordlineedit_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_passwordlineedit_dynamic_property_names\n");
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

QBindingStorage* k_passwordlineedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_passwordlineedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_passwordlineedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_passwordlineedit_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_passwordlineedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_passwordlineedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_passwordlineedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_passwordlineedit_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_passwordlineedit_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_passwordlineedit_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_passwordlineedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_passwordlineedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_passwordlineedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_passwordlineedit_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_passwordlineedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_passwordlineedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_passwordlineedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_passwordlineedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_passwordlineedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_passwordlineedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_passwordlineedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_passwordlineedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_passwordlineedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_passwordlineedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_passwordlineedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_passwordlineedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_passwordlineedit_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_passwordlineedit_dev_type(void* self) {
    return KPasswordLineEdit_DevType((KPasswordLineEdit*)self);
}

int32_t k_passwordlineedit_qbase_dev_type(void* self) {
    return KPasswordLineEdit_QBaseDevType((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_dev_type(void* self, int32_t (*callback)()) {
    KPasswordLineEdit_OnDevType((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_set_visible(void* self, bool visible) {
    KPasswordLineEdit_SetVisible((KPasswordLineEdit*)self, visible);
}

void k_passwordlineedit_qbase_set_visible(void* self, bool visible) {
    KPasswordLineEdit_QBaseSetVisible((KPasswordLineEdit*)self, visible);
}

void k_passwordlineedit_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPasswordLineEdit_OnSetVisible((KPasswordLineEdit*)self, (intptr_t)callback);
}

QSize* k_passwordlineedit_size_hint(void* self) {
    return KPasswordLineEdit_SizeHint((KPasswordLineEdit*)self);
}

QSize* k_passwordlineedit_qbase_size_hint(void* self) {
    return KPasswordLineEdit_QBaseSizeHint((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_size_hint(void* self, QSize* (*callback)()) {
    KPasswordLineEdit_OnSizeHint((KPasswordLineEdit*)self, (intptr_t)callback);
}

QSize* k_passwordlineedit_minimum_size_hint(void* self) {
    return KPasswordLineEdit_MinimumSizeHint((KPasswordLineEdit*)self);
}

QSize* k_passwordlineedit_qbase_minimum_size_hint(void* self) {
    return KPasswordLineEdit_QBaseMinimumSizeHint((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPasswordLineEdit_OnMinimumSizeHint((KPasswordLineEdit*)self, (intptr_t)callback);
}

int32_t k_passwordlineedit_height_for_width(void* self, int param1) {
    return KPasswordLineEdit_HeightForWidth((KPasswordLineEdit*)self, param1);
}

int32_t k_passwordlineedit_qbase_height_for_width(void* self, int param1) {
    return KPasswordLineEdit_QBaseHeightForWidth((KPasswordLineEdit*)self, param1);
}

void k_passwordlineedit_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPasswordLineEdit_OnHeightForWidth((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_has_height_for_width(void* self) {
    return KPasswordLineEdit_HasHeightForWidth((KPasswordLineEdit*)self);
}

bool k_passwordlineedit_qbase_has_height_for_width(void* self) {
    return KPasswordLineEdit_QBaseHasHeightForWidth((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_has_height_for_width(void* self, bool (*callback)()) {
    KPasswordLineEdit_OnHasHeightForWidth((KPasswordLineEdit*)self, (intptr_t)callback);
}

QPaintEngine* k_passwordlineedit_paint_engine(void* self) {
    return KPasswordLineEdit_PaintEngine((KPasswordLineEdit*)self);
}

QPaintEngine* k_passwordlineedit_qbase_paint_engine(void* self) {
    return KPasswordLineEdit_QBasePaintEngine((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPasswordLineEdit_OnPaintEngine((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_event(void* self, void* event) {
    return KPasswordLineEdit_Event((KPasswordLineEdit*)self, (QEvent*)event);
}

bool k_passwordlineedit_qbase_event(void* self, void* event) {
    return KPasswordLineEdit_QBaseEvent((KPasswordLineEdit*)self, (QEvent*)event);
}

void k_passwordlineedit_on_event(void* self, bool (*callback)(void*, void*)) {
    KPasswordLineEdit_OnEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_mouse_press_event(void* self, void* event) {
    KPasswordLineEdit_MousePressEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_qbase_mouse_press_event(void* self, void* event) {
    KPasswordLineEdit_QBaseMousePressEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnMousePressEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_mouse_release_event(void* self, void* event) {
    KPasswordLineEdit_MouseReleaseEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_qbase_mouse_release_event(void* self, void* event) {
    KPasswordLineEdit_QBaseMouseReleaseEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnMouseReleaseEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_mouse_double_click_event(void* self, void* event) {
    KPasswordLineEdit_MouseDoubleClickEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_qbase_mouse_double_click_event(void* self, void* event) {
    KPasswordLineEdit_QBaseMouseDoubleClickEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnMouseDoubleClickEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_mouse_move_event(void* self, void* event) {
    KPasswordLineEdit_MouseMoveEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_qbase_mouse_move_event(void* self, void* event) {
    KPasswordLineEdit_QBaseMouseMoveEvent((KPasswordLineEdit*)self, (QMouseEvent*)event);
}

void k_passwordlineedit_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnMouseMoveEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_wheel_event(void* self, void* event) {
    KPasswordLineEdit_WheelEvent((KPasswordLineEdit*)self, (QWheelEvent*)event);
}

void k_passwordlineedit_qbase_wheel_event(void* self, void* event) {
    KPasswordLineEdit_QBaseWheelEvent((KPasswordLineEdit*)self, (QWheelEvent*)event);
}

void k_passwordlineedit_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnWheelEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_key_press_event(void* self, void* event) {
    KPasswordLineEdit_KeyPressEvent((KPasswordLineEdit*)self, (QKeyEvent*)event);
}

void k_passwordlineedit_qbase_key_press_event(void* self, void* event) {
    KPasswordLineEdit_QBaseKeyPressEvent((KPasswordLineEdit*)self, (QKeyEvent*)event);
}

void k_passwordlineedit_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnKeyPressEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_key_release_event(void* self, void* event) {
    KPasswordLineEdit_KeyReleaseEvent((KPasswordLineEdit*)self, (QKeyEvent*)event);
}

void k_passwordlineedit_qbase_key_release_event(void* self, void* event) {
    KPasswordLineEdit_QBaseKeyReleaseEvent((KPasswordLineEdit*)self, (QKeyEvent*)event);
}

void k_passwordlineedit_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnKeyReleaseEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_focus_in_event(void* self, void* event) {
    KPasswordLineEdit_FocusInEvent((KPasswordLineEdit*)self, (QFocusEvent*)event);
}

void k_passwordlineedit_qbase_focus_in_event(void* self, void* event) {
    KPasswordLineEdit_QBaseFocusInEvent((KPasswordLineEdit*)self, (QFocusEvent*)event);
}

void k_passwordlineedit_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnFocusInEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_focus_out_event(void* self, void* event) {
    KPasswordLineEdit_FocusOutEvent((KPasswordLineEdit*)self, (QFocusEvent*)event);
}

void k_passwordlineedit_qbase_focus_out_event(void* self, void* event) {
    KPasswordLineEdit_QBaseFocusOutEvent((KPasswordLineEdit*)self, (QFocusEvent*)event);
}

void k_passwordlineedit_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnFocusOutEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_enter_event(void* self, void* event) {
    KPasswordLineEdit_EnterEvent((KPasswordLineEdit*)self, (QEnterEvent*)event);
}

void k_passwordlineedit_qbase_enter_event(void* self, void* event) {
    KPasswordLineEdit_QBaseEnterEvent((KPasswordLineEdit*)self, (QEnterEvent*)event);
}

void k_passwordlineedit_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnEnterEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_leave_event(void* self, void* event) {
    KPasswordLineEdit_LeaveEvent((KPasswordLineEdit*)self, (QEvent*)event);
}

void k_passwordlineedit_qbase_leave_event(void* self, void* event) {
    KPasswordLineEdit_QBaseLeaveEvent((KPasswordLineEdit*)self, (QEvent*)event);
}

void k_passwordlineedit_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnLeaveEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_paint_event(void* self, void* event) {
    KPasswordLineEdit_PaintEvent((KPasswordLineEdit*)self, (QPaintEvent*)event);
}

void k_passwordlineedit_qbase_paint_event(void* self, void* event) {
    KPasswordLineEdit_QBasePaintEvent((KPasswordLineEdit*)self, (QPaintEvent*)event);
}

void k_passwordlineedit_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnPaintEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_move_event(void* self, void* event) {
    KPasswordLineEdit_MoveEvent((KPasswordLineEdit*)self, (QMoveEvent*)event);
}

void k_passwordlineedit_qbase_move_event(void* self, void* event) {
    KPasswordLineEdit_QBaseMoveEvent((KPasswordLineEdit*)self, (QMoveEvent*)event);
}

void k_passwordlineedit_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnMoveEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_resize_event(void* self, void* event) {
    KPasswordLineEdit_ResizeEvent((KPasswordLineEdit*)self, (QResizeEvent*)event);
}

void k_passwordlineedit_qbase_resize_event(void* self, void* event) {
    KPasswordLineEdit_QBaseResizeEvent((KPasswordLineEdit*)self, (QResizeEvent*)event);
}

void k_passwordlineedit_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnResizeEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_close_event(void* self, void* event) {
    KPasswordLineEdit_CloseEvent((KPasswordLineEdit*)self, (QCloseEvent*)event);
}

void k_passwordlineedit_qbase_close_event(void* self, void* event) {
    KPasswordLineEdit_QBaseCloseEvent((KPasswordLineEdit*)self, (QCloseEvent*)event);
}

void k_passwordlineedit_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnCloseEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_context_menu_event(void* self, void* event) {
    KPasswordLineEdit_ContextMenuEvent((KPasswordLineEdit*)self, (QContextMenuEvent*)event);
}

void k_passwordlineedit_qbase_context_menu_event(void* self, void* event) {
    KPasswordLineEdit_QBaseContextMenuEvent((KPasswordLineEdit*)self, (QContextMenuEvent*)event);
}

void k_passwordlineedit_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnContextMenuEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_tablet_event(void* self, void* event) {
    KPasswordLineEdit_TabletEvent((KPasswordLineEdit*)self, (QTabletEvent*)event);
}

void k_passwordlineedit_qbase_tablet_event(void* self, void* event) {
    KPasswordLineEdit_QBaseTabletEvent((KPasswordLineEdit*)self, (QTabletEvent*)event);
}

void k_passwordlineedit_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnTabletEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_action_event(void* self, void* event) {
    KPasswordLineEdit_ActionEvent((KPasswordLineEdit*)self, (QActionEvent*)event);
}

void k_passwordlineedit_qbase_action_event(void* self, void* event) {
    KPasswordLineEdit_QBaseActionEvent((KPasswordLineEdit*)self, (QActionEvent*)event);
}

void k_passwordlineedit_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnActionEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_drag_enter_event(void* self, void* event) {
    KPasswordLineEdit_DragEnterEvent((KPasswordLineEdit*)self, (QDragEnterEvent*)event);
}

void k_passwordlineedit_qbase_drag_enter_event(void* self, void* event) {
    KPasswordLineEdit_QBaseDragEnterEvent((KPasswordLineEdit*)self, (QDragEnterEvent*)event);
}

void k_passwordlineedit_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnDragEnterEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_drag_move_event(void* self, void* event) {
    KPasswordLineEdit_DragMoveEvent((KPasswordLineEdit*)self, (QDragMoveEvent*)event);
}

void k_passwordlineedit_qbase_drag_move_event(void* self, void* event) {
    KPasswordLineEdit_QBaseDragMoveEvent((KPasswordLineEdit*)self, (QDragMoveEvent*)event);
}

void k_passwordlineedit_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnDragMoveEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_drag_leave_event(void* self, void* event) {
    KPasswordLineEdit_DragLeaveEvent((KPasswordLineEdit*)self, (QDragLeaveEvent*)event);
}

void k_passwordlineedit_qbase_drag_leave_event(void* self, void* event) {
    KPasswordLineEdit_QBaseDragLeaveEvent((KPasswordLineEdit*)self, (QDragLeaveEvent*)event);
}

void k_passwordlineedit_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnDragLeaveEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_drop_event(void* self, void* event) {
    KPasswordLineEdit_DropEvent((KPasswordLineEdit*)self, (QDropEvent*)event);
}

void k_passwordlineedit_qbase_drop_event(void* self, void* event) {
    KPasswordLineEdit_QBaseDropEvent((KPasswordLineEdit*)self, (QDropEvent*)event);
}

void k_passwordlineedit_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnDropEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_show_event(void* self, void* event) {
    KPasswordLineEdit_ShowEvent((KPasswordLineEdit*)self, (QShowEvent*)event);
}

void k_passwordlineedit_qbase_show_event(void* self, void* event) {
    KPasswordLineEdit_QBaseShowEvent((KPasswordLineEdit*)self, (QShowEvent*)event);
}

void k_passwordlineedit_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnShowEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_hide_event(void* self, void* event) {
    KPasswordLineEdit_HideEvent((KPasswordLineEdit*)self, (QHideEvent*)event);
}

void k_passwordlineedit_qbase_hide_event(void* self, void* event) {
    KPasswordLineEdit_QBaseHideEvent((KPasswordLineEdit*)self, (QHideEvent*)event);
}

void k_passwordlineedit_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnHideEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPasswordLineEdit_NativeEvent((KPasswordLineEdit*)self, qstring(eventType), message, result);
}

bool k_passwordlineedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPasswordLineEdit_QBaseNativeEvent((KPasswordLineEdit*)self, qstring(eventType), message, result);
}

void k_passwordlineedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPasswordLineEdit_OnNativeEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_change_event(void* self, void* param1) {
    KPasswordLineEdit_ChangeEvent((KPasswordLineEdit*)self, (QEvent*)param1);
}

void k_passwordlineedit_qbase_change_event(void* self, void* param1) {
    KPasswordLineEdit_QBaseChangeEvent((KPasswordLineEdit*)self, (QEvent*)param1);
}

void k_passwordlineedit_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnChangeEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

int32_t k_passwordlineedit_metric(void* self, int32_t param1) {
    return KPasswordLineEdit_Metric((KPasswordLineEdit*)self, param1);
}

int32_t k_passwordlineedit_qbase_metric(void* self, int32_t param1) {
    return KPasswordLineEdit_QBaseMetric((KPasswordLineEdit*)self, param1);
}

void k_passwordlineedit_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPasswordLineEdit_OnMetric((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_init_painter(void* self, void* painter) {
    KPasswordLineEdit_InitPainter((KPasswordLineEdit*)self, (QPainter*)painter);
}

void k_passwordlineedit_qbase_init_painter(void* self, void* painter) {
    KPasswordLineEdit_QBaseInitPainter((KPasswordLineEdit*)self, (QPainter*)painter);
}

void k_passwordlineedit_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnInitPainter((KPasswordLineEdit*)self, (intptr_t)callback);
}

QPaintDevice* k_passwordlineedit_redirected(void* self, void* offset) {
    return KPasswordLineEdit_Redirected((KPasswordLineEdit*)self, (QPoint*)offset);
}

QPaintDevice* k_passwordlineedit_qbase_redirected(void* self, void* offset) {
    return KPasswordLineEdit_QBaseRedirected((KPasswordLineEdit*)self, (QPoint*)offset);
}

void k_passwordlineedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPasswordLineEdit_OnRedirected((KPasswordLineEdit*)self, (intptr_t)callback);
}

QPainter* k_passwordlineedit_shared_painter(void* self) {
    return KPasswordLineEdit_SharedPainter((KPasswordLineEdit*)self);
}

QPainter* k_passwordlineedit_qbase_shared_painter(void* self) {
    return KPasswordLineEdit_QBaseSharedPainter((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPasswordLineEdit_OnSharedPainter((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_input_method_event(void* self, void* param1) {
    KPasswordLineEdit_InputMethodEvent((KPasswordLineEdit*)self, (QInputMethodEvent*)param1);
}

void k_passwordlineedit_qbase_input_method_event(void* self, void* param1) {
    KPasswordLineEdit_QBaseInputMethodEvent((KPasswordLineEdit*)self, (QInputMethodEvent*)param1);
}

void k_passwordlineedit_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnInputMethodEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

QVariant* k_passwordlineedit_input_method_query(void* self, int32_t param1) {
    return KPasswordLineEdit_InputMethodQuery((KPasswordLineEdit*)self, param1);
}

QVariant* k_passwordlineedit_qbase_input_method_query(void* self, int32_t param1) {
    return KPasswordLineEdit_QBaseInputMethodQuery((KPasswordLineEdit*)self, param1);
}

void k_passwordlineedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KPasswordLineEdit_OnInputMethodQuery((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_focus_next_prev_child(void* self, bool next) {
    return KPasswordLineEdit_FocusNextPrevChild((KPasswordLineEdit*)self, next);
}

bool k_passwordlineedit_qbase_focus_next_prev_child(void* self, bool next) {
    return KPasswordLineEdit_QBaseFocusNextPrevChild((KPasswordLineEdit*)self, next);
}

void k_passwordlineedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPasswordLineEdit_OnFocusNextPrevChild((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_event_filter(void* self, void* watched, void* event) {
    return KPasswordLineEdit_EventFilter((KPasswordLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

bool k_passwordlineedit_qbase_event_filter(void* self, void* watched, void* event) {
    return KPasswordLineEdit_QBaseEventFilter((KPasswordLineEdit*)self, (QObject*)watched, (QEvent*)event);
}

void k_passwordlineedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPasswordLineEdit_OnEventFilter((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_timer_event(void* self, void* event) {
    KPasswordLineEdit_TimerEvent((KPasswordLineEdit*)self, (QTimerEvent*)event);
}

void k_passwordlineedit_qbase_timer_event(void* self, void* event) {
    KPasswordLineEdit_QBaseTimerEvent((KPasswordLineEdit*)self, (QTimerEvent*)event);
}

void k_passwordlineedit_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnTimerEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_child_event(void* self, void* event) {
    KPasswordLineEdit_ChildEvent((KPasswordLineEdit*)self, (QChildEvent*)event);
}

void k_passwordlineedit_qbase_child_event(void* self, void* event) {
    KPasswordLineEdit_QBaseChildEvent((KPasswordLineEdit*)self, (QChildEvent*)event);
}

void k_passwordlineedit_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnChildEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_custom_event(void* self, void* event) {
    KPasswordLineEdit_CustomEvent((KPasswordLineEdit*)self, (QEvent*)event);
}

void k_passwordlineedit_qbase_custom_event(void* self, void* event) {
    KPasswordLineEdit_QBaseCustomEvent((KPasswordLineEdit*)self, (QEvent*)event);
}

void k_passwordlineedit_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnCustomEvent((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_connect_notify(void* self, void* signal) {
    KPasswordLineEdit_ConnectNotify((KPasswordLineEdit*)self, (QMetaMethod*)signal);
}

void k_passwordlineedit_qbase_connect_notify(void* self, void* signal) {
    KPasswordLineEdit_QBaseConnectNotify((KPasswordLineEdit*)self, (QMetaMethod*)signal);
}

void k_passwordlineedit_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnConnectNotify((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_disconnect_notify(void* self, void* signal) {
    KPasswordLineEdit_DisconnectNotify((KPasswordLineEdit*)self, (QMetaMethod*)signal);
}

void k_passwordlineedit_qbase_disconnect_notify(void* self, void* signal) {
    KPasswordLineEdit_QBaseDisconnectNotify((KPasswordLineEdit*)self, (QMetaMethod*)signal);
}

void k_passwordlineedit_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPasswordLineEdit_OnDisconnectNotify((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_update_micro_focus(void* self) {
    KPasswordLineEdit_UpdateMicroFocus((KPasswordLineEdit*)self);
}

void k_passwordlineedit_qbase_update_micro_focus(void* self) {
    KPasswordLineEdit_QBaseUpdateMicroFocus((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_update_micro_focus(void* self, void (*callback)()) {
    KPasswordLineEdit_OnUpdateMicroFocus((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_create(void* self) {
    KPasswordLineEdit_Create((KPasswordLineEdit*)self);
}

void k_passwordlineedit_qbase_create(void* self) {
    KPasswordLineEdit_QBaseCreate((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_create(void* self, void (*callback)()) {
    KPasswordLineEdit_OnCreate((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_destroy(void* self) {
    KPasswordLineEdit_Destroy((KPasswordLineEdit*)self);
}

void k_passwordlineedit_qbase_destroy(void* self) {
    KPasswordLineEdit_QBaseDestroy((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_destroy(void* self, void (*callback)()) {
    KPasswordLineEdit_OnDestroy((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_focus_next_child(void* self) {
    return KPasswordLineEdit_FocusNextChild((KPasswordLineEdit*)self);
}

bool k_passwordlineedit_qbase_focus_next_child(void* self) {
    return KPasswordLineEdit_QBaseFocusNextChild((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_focus_next_child(void* self, bool (*callback)()) {
    KPasswordLineEdit_OnFocusNextChild((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_focus_previous_child(void* self) {
    return KPasswordLineEdit_FocusPreviousChild((KPasswordLineEdit*)self);
}

bool k_passwordlineedit_qbase_focus_previous_child(void* self) {
    return KPasswordLineEdit_QBaseFocusPreviousChild((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_focus_previous_child(void* self, bool (*callback)()) {
    KPasswordLineEdit_OnFocusPreviousChild((KPasswordLineEdit*)self, (intptr_t)callback);
}

QObject* k_passwordlineedit_sender(void* self) {
    return KPasswordLineEdit_Sender((KPasswordLineEdit*)self);
}

QObject* k_passwordlineedit_qbase_sender(void* self) {
    return KPasswordLineEdit_QBaseSender((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_sender(void* self, QObject* (*callback)()) {
    KPasswordLineEdit_OnSender((KPasswordLineEdit*)self, (intptr_t)callback);
}

int32_t k_passwordlineedit_sender_signal_index(void* self) {
    return KPasswordLineEdit_SenderSignalIndex((KPasswordLineEdit*)self);
}

int32_t k_passwordlineedit_qbase_sender_signal_index(void* self) {
    return KPasswordLineEdit_QBaseSenderSignalIndex((KPasswordLineEdit*)self);
}

void k_passwordlineedit_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPasswordLineEdit_OnSenderSignalIndex((KPasswordLineEdit*)self, (intptr_t)callback);
}

int32_t k_passwordlineedit_receivers(void* self, const char* signal) {
    return KPasswordLineEdit_Receivers((KPasswordLineEdit*)self, signal);
}

int32_t k_passwordlineedit_qbase_receivers(void* self, const char* signal) {
    return KPasswordLineEdit_QBaseReceivers((KPasswordLineEdit*)self, signal);
}

void k_passwordlineedit_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPasswordLineEdit_OnReceivers((KPasswordLineEdit*)self, (intptr_t)callback);
}

bool k_passwordlineedit_is_signal_connected(void* self, void* signal) {
    return KPasswordLineEdit_IsSignalConnected((KPasswordLineEdit*)self, (QMetaMethod*)signal);
}

bool k_passwordlineedit_qbase_is_signal_connected(void* self, void* signal) {
    return KPasswordLineEdit_QBaseIsSignalConnected((KPasswordLineEdit*)self, (QMetaMethod*)signal);
}

void k_passwordlineedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPasswordLineEdit_OnIsSignalConnected((KPasswordLineEdit*)self, (intptr_t)callback);
}

double k_passwordlineedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPasswordLineEdit_GetDecodedMetricF((KPasswordLineEdit*)self, metricA, metricB);
}

double k_passwordlineedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPasswordLineEdit_QBaseGetDecodedMetricF((KPasswordLineEdit*)self, metricA, metricB);
}

void k_passwordlineedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPasswordLineEdit_OnGetDecodedMetricF((KPasswordLineEdit*)self, (intptr_t)callback);
}

void k_passwordlineedit_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_passwordlineedit_delete(void* self) {
    KPasswordLineEdit_Delete((KPasswordLineEdit*)(self));
}
