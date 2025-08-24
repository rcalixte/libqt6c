#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqdialogbuttonbox.hpp"
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
#include "libkpassworddialog.hpp"
#include "libkpassworddialog.h"

KPasswordDialog* k_passworddialog_new(void* parent) {
    return KPasswordDialog_new((QWidget*)parent);
}

KPasswordDialog* k_passworddialog_new2() {
    return KPasswordDialog_new2();
}

KPasswordDialog* k_passworddialog_new3(void* parent, const int64_t* flags) {
    return KPasswordDialog_new3((QWidget*)parent, flags);
}

const QMetaObject* k_passworddialog_meta_object(void* self) {
    return KPasswordDialog_MetaObject((KPasswordDialog*)self);
}

void* k_passworddialog_metacast(void* self, const char* param1) {
    return KPasswordDialog_Metacast((KPasswordDialog*)self, param1);
}

int32_t k_passworddialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPasswordDialog_Metacall((KPasswordDialog*)self, param1, param2, param3);
}

void k_passworddialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPasswordDialog_OnMetacall((KPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_passworddialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPasswordDialog_QBaseMetacall((KPasswordDialog*)self, param1, param2, param3);
}

const char* k_passworddialog_tr(const char* s) {
    libqt_string _str = KPasswordDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_prompt(void* self, const char* prompt) {
    KPasswordDialog_SetPrompt((KPasswordDialog*)self, qstring(prompt));
}

const char* k_passworddialog_prompt(void* self) {
    libqt_string _str = KPasswordDialog_Prompt((KPasswordDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_icon(void* self, void* icon) {
    KPasswordDialog_SetIcon((KPasswordDialog*)self, (QIcon*)icon);
}

QIcon* k_passworddialog_icon(void* self) {
    return KPasswordDialog_Icon((KPasswordDialog*)self);
}

void k_passworddialog_add_comment_line(void* self, const char* label, const char* comment) {
    KPasswordDialog_AddCommentLine((KPasswordDialog*)self, qstring(label), qstring(comment));
}

void k_passworddialog_show_error_message(void* self, const char* message) {
    KPasswordDialog_ShowErrorMessage((KPasswordDialog*)self, qstring(message));
}

const char* k_passworddialog_password(void* self) {
    libqt_string _str = KPasswordDialog_Password((KPasswordDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_username(void* self, const char* username) {
    KPasswordDialog_SetUsername((KPasswordDialog*)self, qstring(username));
}

const char* k_passworddialog_username(void* self) {
    libqt_string _str = KPasswordDialog_Username((KPasswordDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_domain(void* self, const char* domain) {
    KPasswordDialog_SetDomain((KPasswordDialog*)self, qstring(domain));
}

const char* k_passworddialog_domain(void* self) {
    libqt_string _str = KPasswordDialog_Domain((KPasswordDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_anonymous_mode(void* self, bool anonymous) {
    KPasswordDialog_SetAnonymousMode((KPasswordDialog*)self, anonymous);
}

bool k_passworddialog_anonymous_mode(void* self) {
    return KPasswordDialog_AnonymousMode((KPasswordDialog*)self);
}

bool k_passworddialog_keep_password(void* self) {
    return KPasswordDialog_KeepPassword((KPasswordDialog*)self);
}

void k_passworddialog_set_keep_password(void* self, bool b) {
    KPasswordDialog_SetKeepPassword((KPasswordDialog*)self, b);
}

void k_passworddialog_set_username_read_only(void* self, bool readOnly) {
    KPasswordDialog_SetUsernameReadOnly((KPasswordDialog*)self, readOnly);
}

void k_passworddialog_set_password(void* self, const char* password) {
    KPasswordDialog_SetPassword((KPasswordDialog*)self, qstring(password));
}

void k_passworddialog_set_known_logins(void* self, libqt_map /* of const char* to const char* */ knownLogins) {
    KPasswordDialog_SetKnownLogins((KPasswordDialog*)self, knownLogins);
}

void k_passworddialog_accept(void* self) {
    KPasswordDialog_Accept((KPasswordDialog*)self);
}

void k_passworddialog_on_accept(void* self, void (*callback)()) {
    KPasswordDialog_OnAccept((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_qbase_accept(void* self) {
    KPasswordDialog_QBaseAccept((KPasswordDialog*)self);
}

QDialogButtonBox* k_passworddialog_button_box(void* self) {
    return KPasswordDialog_ButtonBox((KPasswordDialog*)self);
}

void k_passworddialog_set_username_context_help(void* self, const char* help) {
    KPasswordDialog_SetUsernameContextHelp((KPasswordDialog*)self, qstring(help));
}

void k_passworddialog_set_reveal_password_available(void* self, bool reveal) {
    KPasswordDialog_SetRevealPasswordAvailable((KPasswordDialog*)self, reveal);
}

bool k_passworddialog_is_reveal_password_available(void* self) {
    return KPasswordDialog_IsRevealPasswordAvailable((KPasswordDialog*)self);
}

int32_t k_passworddialog_reveal_password_mode(void* self) {
    return KPasswordDialog_RevealPasswordMode((KPasswordDialog*)self);
}

void k_passworddialog_set_reveal_password_mode(void* self, int32_t revealPasswordMode) {
    KPasswordDialog_SetRevealPasswordMode((KPasswordDialog*)self, revealPasswordMode);
}

void k_passworddialog_got_password(void* self, const char* password, bool keep) {
    KPasswordDialog_GotPassword((KPasswordDialog*)self, qstring(password), keep);
}

void k_passworddialog_on_got_password(void* self, void (*callback)(void*, const char*, bool)) {
    KPasswordDialog_Connect_GotPassword((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_got_username_and_password(void* self, const char* username, const char* password, bool keep) {
    KPasswordDialog_GotUsernameAndPassword((KPasswordDialog*)self, qstring(username), qstring(password), keep);
}

void k_passworddialog_on_got_username_and_password(void* self, void (*callback)(void*, const char*, const char*, bool)) {
    KPasswordDialog_Connect_GotUsernameAndPassword((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_check_password(void* self) {
    return KPasswordDialog_CheckPassword((KPasswordDialog*)self);
}

void k_passworddialog_on_check_password(void* self, bool (*callback)()) {
    KPasswordDialog_OnCheckPassword((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_qbase_check_password(void* self) {
    return KPasswordDialog_QBaseCheckPassword((KPasswordDialog*)self);
}

const char* k_passworddialog_tr2(const char* s, const char* c) {
    libqt_string _str = KPasswordDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_passworddialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KPasswordDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_show_error_message2(void* self, const char* message, int32_t typeVal) {
    KPasswordDialog_ShowErrorMessage2((KPasswordDialog*)self, qstring(message), typeVal);
}

int32_t k_passworddialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_passworddialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_passworddialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_passworddialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_passworddialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_passworddialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_passworddialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_passworddialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_passworddialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_passworddialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_passworddialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_passworddialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_passworddialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_passworddialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_passworddialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_passworddialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_passworddialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_passworddialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_passworddialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_passworddialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_passworddialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_passworddialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_passworddialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_passworddialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_passworddialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_passworddialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_passworddialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_passworddialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_passworddialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_passworddialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_passworddialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_passworddialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_passworddialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_passworddialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_passworddialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_passworddialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_passworddialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_passworddialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_passworddialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_passworddialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_passworddialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_passworddialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_passworddialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_passworddialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_passworddialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_passworddialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_passworddialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_passworddialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_passworddialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_passworddialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_passworddialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_passworddialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_passworddialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_passworddialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_passworddialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_passworddialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_passworddialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_passworddialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_passworddialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_passworddialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_passworddialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_passworddialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_passworddialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_passworddialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_passworddialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passworddialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passworddialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passworddialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passworddialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passworddialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passworddialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_passworddialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_passworddialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_passworddialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_passworddialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_passworddialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_passworddialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_passworddialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_passworddialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_passworddialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_passworddialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_passworddialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_passworddialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_passworddialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_passworddialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_passworddialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_passworddialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_passworddialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_passworddialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_passworddialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_passworddialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_passworddialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_passworddialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_passworddialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_passworddialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_passworddialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_passworddialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_passworddialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_passworddialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_passworddialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_passworddialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_passworddialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_passworddialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_passworddialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_passworddialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_passworddialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_passworddialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_passworddialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_passworddialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_passworddialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_passworddialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_passworddialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_passworddialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_passworddialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_passworddialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_passworddialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_passworddialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_passworddialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_passworddialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_passworddialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_passworddialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_passworddialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_passworddialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_passworddialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_passworddialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_passworddialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_passworddialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_passworddialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_passworddialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_passworddialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_passworddialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_passworddialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_passworddialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_passworddialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_passworddialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_passworddialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_passworddialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_passworddialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_passworddialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_passworddialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_passworddialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_passworddialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_passworddialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_passworddialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_passworddialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_passworddialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_passworddialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_passworddialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_passworddialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_passworddialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_passworddialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_passworddialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_passworddialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_passworddialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_passworddialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_passworddialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_passworddialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_passworddialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_passworddialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_passworddialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_passworddialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_passworddialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_passworddialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_passworddialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_passworddialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_passworddialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_passworddialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_passworddialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_passworddialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_passworddialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_passworddialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_passworddialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_passworddialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_passworddialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_passworddialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_passworddialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_passworddialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_passworddialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_passworddialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_passworddialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_passworddialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_passworddialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_passworddialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_passworddialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_passworddialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_passworddialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_passworddialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_passworddialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_passworddialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_passworddialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_passworddialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_passworddialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_passworddialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_passworddialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_passworddialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_passworddialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t k_passworddialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_passworddialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_passworddialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_passworddialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_passworddialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_passworddialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_passworddialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_passworddialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_passworddialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_passworddialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_passworddialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_passworddialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_passworddialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_passworddialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_passworddialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_passworddialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_passworddialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_passworddialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_passworddialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_passworddialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_passworddialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_passworddialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_passworddialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_passworddialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_passworddialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_passworddialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_passworddialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_passworddialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_passworddialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_passworddialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_passworddialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_passworddialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_passworddialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_passworddialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_passworddialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_passworddialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_passworddialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_passworddialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_passworddialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_passworddialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_passworddialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_passworddialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_passworddialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_passworddialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_passworddialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_passworddialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_passworddialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_passworddialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_passworddialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_passworddialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_passworddialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_passworddialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_passworddialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_passworddialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_passworddialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_passworddialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_passworddialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_passworddialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_passworddialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_passworddialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_passworddialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_passworddialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_passworddialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_passworddialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_passworddialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_passworddialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_passworddialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_passworddialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_passworddialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_passworddialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_passworddialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_passworddialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_passworddialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_passworddialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_passworddialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_passworddialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_passworddialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_passworddialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_passworddialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_passworddialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_passworddialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_passworddialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_passworddialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_passworddialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_passworddialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_passworddialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_passworddialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_passworddialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_passworddialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_passworddialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_passworddialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_passworddialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_passworddialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_passworddialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_passworddialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_passworddialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_passworddialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_passworddialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_passworddialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_passworddialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_passworddialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_passworddialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_passworddialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_passworddialog_dynamic_property_names");
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

QBindingStorage* k_passworddialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_passworddialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_passworddialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_passworddialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_passworddialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_passworddialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_passworddialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_passworddialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_passworddialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_passworddialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_passworddialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_passworddialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_passworddialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_passworddialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_passworddialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_passworddialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_passworddialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_passworddialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_passworddialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_passworddialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_passworddialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_passworddialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_passworddialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_passworddialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_passworddialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_passworddialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_passworddialog_set_visible(void* self, bool visible) {
    KPasswordDialog_SetVisible((KPasswordDialog*)self, visible);
}

void k_passworddialog_qbase_set_visible(void* self, bool visible) {
    KPasswordDialog_QBaseSetVisible((KPasswordDialog*)self, visible);
}

void k_passworddialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPasswordDialog_OnSetVisible((KPasswordDialog*)self, (intptr_t)callback);
}

QSize* k_passworddialog_size_hint(void* self) {
    return KPasswordDialog_SizeHint((KPasswordDialog*)self);
}

QSize* k_passworddialog_qbase_size_hint(void* self) {
    return KPasswordDialog_QBaseSizeHint((KPasswordDialog*)self);
}

void k_passworddialog_on_size_hint(void* self, QSize* (*callback)()) {
    KPasswordDialog_OnSizeHint((KPasswordDialog*)self, (intptr_t)callback);
}

QSize* k_passworddialog_minimum_size_hint(void* self) {
    return KPasswordDialog_MinimumSizeHint((KPasswordDialog*)self);
}

QSize* k_passworddialog_qbase_minimum_size_hint(void* self) {
    return KPasswordDialog_QBaseMinimumSizeHint((KPasswordDialog*)self);
}

void k_passworddialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPasswordDialog_OnMinimumSizeHint((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_open(void* self) {
    KPasswordDialog_Open((KPasswordDialog*)self);
}

void k_passworddialog_qbase_open(void* self) {
    KPasswordDialog_QBaseOpen((KPasswordDialog*)self);
}

void k_passworddialog_on_open(void* self, void (*callback)()) {
    KPasswordDialog_OnOpen((KPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_passworddialog_exec(void* self) {
    return KPasswordDialog_Exec((KPasswordDialog*)self);
}

int32_t k_passworddialog_qbase_exec(void* self) {
    return KPasswordDialog_QBaseExec((KPasswordDialog*)self);
}

void k_passworddialog_on_exec(void* self, int32_t (*callback)()) {
    KPasswordDialog_OnExec((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_done(void* self, int param1) {
    KPasswordDialog_Done((KPasswordDialog*)self, param1);
}

void k_passworddialog_qbase_done(void* self, int param1) {
    KPasswordDialog_QBaseDone((KPasswordDialog*)self, param1);
}

void k_passworddialog_on_done(void* self, void (*callback)(void*, int)) {
    KPasswordDialog_OnDone((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_reject(void* self) {
    KPasswordDialog_Reject((KPasswordDialog*)self);
}

void k_passworddialog_qbase_reject(void* self) {
    KPasswordDialog_QBaseReject((KPasswordDialog*)self);
}

void k_passworddialog_on_reject(void* self, void (*callback)()) {
    KPasswordDialog_OnReject((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_key_press_event(void* self, void* param1) {
    KPasswordDialog_KeyPressEvent((KPasswordDialog*)self, (QKeyEvent*)param1);
}

void k_passworddialog_qbase_key_press_event(void* self, void* param1) {
    KPasswordDialog_QBaseKeyPressEvent((KPasswordDialog*)self, (QKeyEvent*)param1);
}

void k_passworddialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnKeyPressEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_close_event(void* self, void* param1) {
    KPasswordDialog_CloseEvent((KPasswordDialog*)self, (QCloseEvent*)param1);
}

void k_passworddialog_qbase_close_event(void* self, void* param1) {
    KPasswordDialog_QBaseCloseEvent((KPasswordDialog*)self, (QCloseEvent*)param1);
}

void k_passworddialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnCloseEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_show_event(void* self, void* param1) {
    KPasswordDialog_ShowEvent((KPasswordDialog*)self, (QShowEvent*)param1);
}

void k_passworddialog_qbase_show_event(void* self, void* param1) {
    KPasswordDialog_QBaseShowEvent((KPasswordDialog*)self, (QShowEvent*)param1);
}

void k_passworddialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnShowEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_resize_event(void* self, void* param1) {
    KPasswordDialog_ResizeEvent((KPasswordDialog*)self, (QResizeEvent*)param1);
}

void k_passworddialog_qbase_resize_event(void* self, void* param1) {
    KPasswordDialog_QBaseResizeEvent((KPasswordDialog*)self, (QResizeEvent*)param1);
}

void k_passworddialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnResizeEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_context_menu_event(void* self, void* param1) {
    KPasswordDialog_ContextMenuEvent((KPasswordDialog*)self, (QContextMenuEvent*)param1);
}

void k_passworddialog_qbase_context_menu_event(void* self, void* param1) {
    KPasswordDialog_QBaseContextMenuEvent((KPasswordDialog*)self, (QContextMenuEvent*)param1);
}

void k_passworddialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnContextMenuEvent((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_event_filter(void* self, void* param1, void* param2) {
    return KPasswordDialog_EventFilter((KPasswordDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_passworddialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KPasswordDialog_QBaseEventFilter((KPasswordDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_passworddialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPasswordDialog_OnEventFilter((KPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_passworddialog_dev_type(void* self) {
    return KPasswordDialog_DevType((KPasswordDialog*)self);
}

int32_t k_passworddialog_qbase_dev_type(void* self) {
    return KPasswordDialog_QBaseDevType((KPasswordDialog*)self);
}

void k_passworddialog_on_dev_type(void* self, int32_t (*callback)()) {
    KPasswordDialog_OnDevType((KPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_passworddialog_height_for_width(void* self, int param1) {
    return KPasswordDialog_HeightForWidth((KPasswordDialog*)self, param1);
}

int32_t k_passworddialog_qbase_height_for_width(void* self, int param1) {
    return KPasswordDialog_QBaseHeightForWidth((KPasswordDialog*)self, param1);
}

void k_passworddialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPasswordDialog_OnHeightForWidth((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_has_height_for_width(void* self) {
    return KPasswordDialog_HasHeightForWidth((KPasswordDialog*)self);
}

bool k_passworddialog_qbase_has_height_for_width(void* self) {
    return KPasswordDialog_QBaseHasHeightForWidth((KPasswordDialog*)self);
}

void k_passworddialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KPasswordDialog_OnHasHeightForWidth((KPasswordDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_passworddialog_paint_engine(void* self) {
    return KPasswordDialog_PaintEngine((KPasswordDialog*)self);
}

QPaintEngine* k_passworddialog_qbase_paint_engine(void* self) {
    return KPasswordDialog_QBasePaintEngine((KPasswordDialog*)self);
}

void k_passworddialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPasswordDialog_OnPaintEngine((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_event(void* self, void* event) {
    return KPasswordDialog_Event((KPasswordDialog*)self, (QEvent*)event);
}

bool k_passworddialog_qbase_event(void* self, void* event) {
    return KPasswordDialog_QBaseEvent((KPasswordDialog*)self, (QEvent*)event);
}

void k_passworddialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KPasswordDialog_OnEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_mouse_press_event(void* self, void* event) {
    KPasswordDialog_MousePressEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_qbase_mouse_press_event(void* self, void* event) {
    KPasswordDialog_QBaseMousePressEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnMousePressEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_mouse_release_event(void* self, void* event) {
    KPasswordDialog_MouseReleaseEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_qbase_mouse_release_event(void* self, void* event) {
    KPasswordDialog_QBaseMouseReleaseEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnMouseReleaseEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_mouse_double_click_event(void* self, void* event) {
    KPasswordDialog_MouseDoubleClickEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_qbase_mouse_double_click_event(void* self, void* event) {
    KPasswordDialog_QBaseMouseDoubleClickEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnMouseDoubleClickEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_mouse_move_event(void* self, void* event) {
    KPasswordDialog_MouseMoveEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_qbase_mouse_move_event(void* self, void* event) {
    KPasswordDialog_QBaseMouseMoveEvent((KPasswordDialog*)self, (QMouseEvent*)event);
}

void k_passworddialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnMouseMoveEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_wheel_event(void* self, void* event) {
    KPasswordDialog_WheelEvent((KPasswordDialog*)self, (QWheelEvent*)event);
}

void k_passworddialog_qbase_wheel_event(void* self, void* event) {
    KPasswordDialog_QBaseWheelEvent((KPasswordDialog*)self, (QWheelEvent*)event);
}

void k_passworddialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnWheelEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_key_release_event(void* self, void* event) {
    KPasswordDialog_KeyReleaseEvent((KPasswordDialog*)self, (QKeyEvent*)event);
}

void k_passworddialog_qbase_key_release_event(void* self, void* event) {
    KPasswordDialog_QBaseKeyReleaseEvent((KPasswordDialog*)self, (QKeyEvent*)event);
}

void k_passworddialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnKeyReleaseEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_focus_in_event(void* self, void* event) {
    KPasswordDialog_FocusInEvent((KPasswordDialog*)self, (QFocusEvent*)event);
}

void k_passworddialog_qbase_focus_in_event(void* self, void* event) {
    KPasswordDialog_QBaseFocusInEvent((KPasswordDialog*)self, (QFocusEvent*)event);
}

void k_passworddialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnFocusInEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_focus_out_event(void* self, void* event) {
    KPasswordDialog_FocusOutEvent((KPasswordDialog*)self, (QFocusEvent*)event);
}

void k_passworddialog_qbase_focus_out_event(void* self, void* event) {
    KPasswordDialog_QBaseFocusOutEvent((KPasswordDialog*)self, (QFocusEvent*)event);
}

void k_passworddialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnFocusOutEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_enter_event(void* self, void* event) {
    KPasswordDialog_EnterEvent((KPasswordDialog*)self, (QEnterEvent*)event);
}

void k_passworddialog_qbase_enter_event(void* self, void* event) {
    KPasswordDialog_QBaseEnterEvent((KPasswordDialog*)self, (QEnterEvent*)event);
}

void k_passworddialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnEnterEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_leave_event(void* self, void* event) {
    KPasswordDialog_LeaveEvent((KPasswordDialog*)self, (QEvent*)event);
}

void k_passworddialog_qbase_leave_event(void* self, void* event) {
    KPasswordDialog_QBaseLeaveEvent((KPasswordDialog*)self, (QEvent*)event);
}

void k_passworddialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnLeaveEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_paint_event(void* self, void* event) {
    KPasswordDialog_PaintEvent((KPasswordDialog*)self, (QPaintEvent*)event);
}

void k_passworddialog_qbase_paint_event(void* self, void* event) {
    KPasswordDialog_QBasePaintEvent((KPasswordDialog*)self, (QPaintEvent*)event);
}

void k_passworddialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnPaintEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_move_event(void* self, void* event) {
    KPasswordDialog_MoveEvent((KPasswordDialog*)self, (QMoveEvent*)event);
}

void k_passworddialog_qbase_move_event(void* self, void* event) {
    KPasswordDialog_QBaseMoveEvent((KPasswordDialog*)self, (QMoveEvent*)event);
}

void k_passworddialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnMoveEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_tablet_event(void* self, void* event) {
    KPasswordDialog_TabletEvent((KPasswordDialog*)self, (QTabletEvent*)event);
}

void k_passworddialog_qbase_tablet_event(void* self, void* event) {
    KPasswordDialog_QBaseTabletEvent((KPasswordDialog*)self, (QTabletEvent*)event);
}

void k_passworddialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnTabletEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_action_event(void* self, void* event) {
    KPasswordDialog_ActionEvent((KPasswordDialog*)self, (QActionEvent*)event);
}

void k_passworddialog_qbase_action_event(void* self, void* event) {
    KPasswordDialog_QBaseActionEvent((KPasswordDialog*)self, (QActionEvent*)event);
}

void k_passworddialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnActionEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_drag_enter_event(void* self, void* event) {
    KPasswordDialog_DragEnterEvent((KPasswordDialog*)self, (QDragEnterEvent*)event);
}

void k_passworddialog_qbase_drag_enter_event(void* self, void* event) {
    KPasswordDialog_QBaseDragEnterEvent((KPasswordDialog*)self, (QDragEnterEvent*)event);
}

void k_passworddialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnDragEnterEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_drag_move_event(void* self, void* event) {
    KPasswordDialog_DragMoveEvent((KPasswordDialog*)self, (QDragMoveEvent*)event);
}

void k_passworddialog_qbase_drag_move_event(void* self, void* event) {
    KPasswordDialog_QBaseDragMoveEvent((KPasswordDialog*)self, (QDragMoveEvent*)event);
}

void k_passworddialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnDragMoveEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_drag_leave_event(void* self, void* event) {
    KPasswordDialog_DragLeaveEvent((KPasswordDialog*)self, (QDragLeaveEvent*)event);
}

void k_passworddialog_qbase_drag_leave_event(void* self, void* event) {
    KPasswordDialog_QBaseDragLeaveEvent((KPasswordDialog*)self, (QDragLeaveEvent*)event);
}

void k_passworddialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnDragLeaveEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_drop_event(void* self, void* event) {
    KPasswordDialog_DropEvent((KPasswordDialog*)self, (QDropEvent*)event);
}

void k_passworddialog_qbase_drop_event(void* self, void* event) {
    KPasswordDialog_QBaseDropEvent((KPasswordDialog*)self, (QDropEvent*)event);
}

void k_passworddialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnDropEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_hide_event(void* self, void* event) {
    KPasswordDialog_HideEvent((KPasswordDialog*)self, (QHideEvent*)event);
}

void k_passworddialog_qbase_hide_event(void* self, void* event) {
    KPasswordDialog_QBaseHideEvent((KPasswordDialog*)self, (QHideEvent*)event);
}

void k_passworddialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnHideEvent((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPasswordDialog_NativeEvent((KPasswordDialog*)self, qstring(eventType), message, result);
}

bool k_passworddialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPasswordDialog_QBaseNativeEvent((KPasswordDialog*)self, qstring(eventType), message, result);
}

void k_passworddialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPasswordDialog_OnNativeEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_change_event(void* self, void* param1) {
    KPasswordDialog_ChangeEvent((KPasswordDialog*)self, (QEvent*)param1);
}

void k_passworddialog_qbase_change_event(void* self, void* param1) {
    KPasswordDialog_QBaseChangeEvent((KPasswordDialog*)self, (QEvent*)param1);
}

void k_passworddialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnChangeEvent((KPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_passworddialog_metric(void* self, int32_t param1) {
    return KPasswordDialog_Metric((KPasswordDialog*)self, param1);
}

int32_t k_passworddialog_qbase_metric(void* self, int32_t param1) {
    return KPasswordDialog_QBaseMetric((KPasswordDialog*)self, param1);
}

void k_passworddialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPasswordDialog_OnMetric((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_init_painter(void* self, void* painter) {
    KPasswordDialog_InitPainter((KPasswordDialog*)self, (QPainter*)painter);
}

void k_passworddialog_qbase_init_painter(void* self, void* painter) {
    KPasswordDialog_QBaseInitPainter((KPasswordDialog*)self, (QPainter*)painter);
}

void k_passworddialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnInitPainter((KPasswordDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_passworddialog_redirected(void* self, void* offset) {
    return KPasswordDialog_Redirected((KPasswordDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_passworddialog_qbase_redirected(void* self, void* offset) {
    return KPasswordDialog_QBaseRedirected((KPasswordDialog*)self, (QPoint*)offset);
}

void k_passworddialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPasswordDialog_OnRedirected((KPasswordDialog*)self, (intptr_t)callback);
}

QPainter* k_passworddialog_shared_painter(void* self) {
    return KPasswordDialog_SharedPainter((KPasswordDialog*)self);
}

QPainter* k_passworddialog_qbase_shared_painter(void* self) {
    return KPasswordDialog_QBaseSharedPainter((KPasswordDialog*)self);
}

void k_passworddialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPasswordDialog_OnSharedPainter((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_input_method_event(void* self, void* param1) {
    KPasswordDialog_InputMethodEvent((KPasswordDialog*)self, (QInputMethodEvent*)param1);
}

void k_passworddialog_qbase_input_method_event(void* self, void* param1) {
    KPasswordDialog_QBaseInputMethodEvent((KPasswordDialog*)self, (QInputMethodEvent*)param1);
}

void k_passworddialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnInputMethodEvent((KPasswordDialog*)self, (intptr_t)callback);
}

QVariant* k_passworddialog_input_method_query(void* self, int64_t param1) {
    return KPasswordDialog_InputMethodQuery((KPasswordDialog*)self, param1);
}

QVariant* k_passworddialog_qbase_input_method_query(void* self, int64_t param1) {
    return KPasswordDialog_QBaseInputMethodQuery((KPasswordDialog*)self, param1);
}

void k_passworddialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPasswordDialog_OnInputMethodQuery((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_focus_next_prev_child(void* self, bool next) {
    return KPasswordDialog_FocusNextPrevChild((KPasswordDialog*)self, next);
}

bool k_passworddialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KPasswordDialog_QBaseFocusNextPrevChild((KPasswordDialog*)self, next);
}

void k_passworddialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPasswordDialog_OnFocusNextPrevChild((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_timer_event(void* self, void* event) {
    KPasswordDialog_TimerEvent((KPasswordDialog*)self, (QTimerEvent*)event);
}

void k_passworddialog_qbase_timer_event(void* self, void* event) {
    KPasswordDialog_QBaseTimerEvent((KPasswordDialog*)self, (QTimerEvent*)event);
}

void k_passworddialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnTimerEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_child_event(void* self, void* event) {
    KPasswordDialog_ChildEvent((KPasswordDialog*)self, (QChildEvent*)event);
}

void k_passworddialog_qbase_child_event(void* self, void* event) {
    KPasswordDialog_QBaseChildEvent((KPasswordDialog*)self, (QChildEvent*)event);
}

void k_passworddialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnChildEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_custom_event(void* self, void* event) {
    KPasswordDialog_CustomEvent((KPasswordDialog*)self, (QEvent*)event);
}

void k_passworddialog_qbase_custom_event(void* self, void* event) {
    KPasswordDialog_QBaseCustomEvent((KPasswordDialog*)self, (QEvent*)event);
}

void k_passworddialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnCustomEvent((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_connect_notify(void* self, void* signal) {
    KPasswordDialog_ConnectNotify((KPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_passworddialog_qbase_connect_notify(void* self, void* signal) {
    KPasswordDialog_QBaseConnectNotify((KPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_passworddialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnConnectNotify((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_disconnect_notify(void* self, void* signal) {
    KPasswordDialog_DisconnectNotify((KPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_passworddialog_qbase_disconnect_notify(void* self, void* signal) {
    KPasswordDialog_QBaseDisconnectNotify((KPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_passworddialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnDisconnectNotify((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_adjust_position(void* self, void* param1) {
    KPasswordDialog_AdjustPosition((KPasswordDialog*)self, (QWidget*)param1);
}

void k_passworddialog_qbase_adjust_position(void* self, void* param1) {
    KPasswordDialog_QBaseAdjustPosition((KPasswordDialog*)self, (QWidget*)param1);
}

void k_passworddialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KPasswordDialog_OnAdjustPosition((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_update_micro_focus(void* self) {
    KPasswordDialog_UpdateMicroFocus((KPasswordDialog*)self);
}

void k_passworddialog_qbase_update_micro_focus(void* self) {
    KPasswordDialog_QBaseUpdateMicroFocus((KPasswordDialog*)self);
}

void k_passworddialog_on_update_micro_focus(void* self, void (*callback)()) {
    KPasswordDialog_OnUpdateMicroFocus((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_create(void* self) {
    KPasswordDialog_Create((KPasswordDialog*)self);
}

void k_passworddialog_qbase_create(void* self) {
    KPasswordDialog_QBaseCreate((KPasswordDialog*)self);
}

void k_passworddialog_on_create(void* self, void (*callback)()) {
    KPasswordDialog_OnCreate((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_destroy(void* self) {
    KPasswordDialog_Destroy((KPasswordDialog*)self);
}

void k_passworddialog_qbase_destroy(void* self) {
    KPasswordDialog_QBaseDestroy((KPasswordDialog*)self);
}

void k_passworddialog_on_destroy(void* self, void (*callback)()) {
    KPasswordDialog_OnDestroy((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_focus_next_child(void* self) {
    return KPasswordDialog_FocusNextChild((KPasswordDialog*)self);
}

bool k_passworddialog_qbase_focus_next_child(void* self) {
    return KPasswordDialog_QBaseFocusNextChild((KPasswordDialog*)self);
}

void k_passworddialog_on_focus_next_child(void* self, bool (*callback)()) {
    KPasswordDialog_OnFocusNextChild((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_focus_previous_child(void* self) {
    return KPasswordDialog_FocusPreviousChild((KPasswordDialog*)self);
}

bool k_passworddialog_qbase_focus_previous_child(void* self) {
    return KPasswordDialog_QBaseFocusPreviousChild((KPasswordDialog*)self);
}

void k_passworddialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KPasswordDialog_OnFocusPreviousChild((KPasswordDialog*)self, (intptr_t)callback);
}

QObject* k_passworddialog_sender(void* self) {
    return KPasswordDialog_Sender((KPasswordDialog*)self);
}

QObject* k_passworddialog_qbase_sender(void* self) {
    return KPasswordDialog_QBaseSender((KPasswordDialog*)self);
}

void k_passworddialog_on_sender(void* self, QObject* (*callback)()) {
    KPasswordDialog_OnSender((KPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_passworddialog_sender_signal_index(void* self) {
    return KPasswordDialog_SenderSignalIndex((KPasswordDialog*)self);
}

int32_t k_passworddialog_qbase_sender_signal_index(void* self) {
    return KPasswordDialog_QBaseSenderSignalIndex((KPasswordDialog*)self);
}

void k_passworddialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPasswordDialog_OnSenderSignalIndex((KPasswordDialog*)self, (intptr_t)callback);
}

int32_t k_passworddialog_receivers(void* self, const char* signal) {
    return KPasswordDialog_Receivers((KPasswordDialog*)self, signal);
}

int32_t k_passworddialog_qbase_receivers(void* self, const char* signal) {
    return KPasswordDialog_QBaseReceivers((KPasswordDialog*)self, signal);
}

void k_passworddialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPasswordDialog_OnReceivers((KPasswordDialog*)self, (intptr_t)callback);
}

bool k_passworddialog_is_signal_connected(void* self, void* signal) {
    return KPasswordDialog_IsSignalConnected((KPasswordDialog*)self, (QMetaMethod*)signal);
}

bool k_passworddialog_qbase_is_signal_connected(void* self, void* signal) {
    return KPasswordDialog_QBaseIsSignalConnected((KPasswordDialog*)self, (QMetaMethod*)signal);
}

void k_passworddialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPasswordDialog_OnIsSignalConnected((KPasswordDialog*)self, (intptr_t)callback);
}

double k_passworddialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPasswordDialog_GetDecodedMetricF((KPasswordDialog*)self, metricA, metricB);
}

double k_passworddialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPasswordDialog_QBaseGetDecodedMetricF((KPasswordDialog*)self, metricA, metricB);
}

void k_passworddialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPasswordDialog_OnGetDecodedMetricF((KPasswordDialog*)self, (intptr_t)callback);
}

void k_passworddialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_passworddialog_delete(void* self) {
    KPasswordDialog_Delete((KPasswordDialog*)(self));
}
