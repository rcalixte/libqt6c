#include "../extras-kcoreaddons/libkjob.hpp"
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
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "librenamefiledialog.hpp"
#include "librenamefiledialog.h"

KIO__RenameFileDialog* k_io__renamefiledialog_new(void* items, void* parent) {
    return KIO__RenameFileDialog_new((KFileItemList*)items, (QWidget*)parent);
}

const QMetaObject* k_io__renamefiledialog_meta_object(void* self) {
    return KIO__RenameFileDialog_MetaObject((KIO__RenameFileDialog*)self);
}

void* k_io__renamefiledialog_metacast(void* self, const char* param1) {
    return KIO__RenameFileDialog_Metacast((KIO__RenameFileDialog*)self, param1);
}

int32_t k_io__renamefiledialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__RenameFileDialog_Metacall((KIO__RenameFileDialog*)self, param1, param2, param3);
}

void k_io__renamefiledialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__RenameFileDialog_OnMetacall((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamefiledialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__RenameFileDialog_QBaseMetacall((KIO__RenameFileDialog*)self, param1, param2, param3);
}

const char* k_io__renamefiledialog_tr(const char* s) {
    libqt_string _str = KIO__RenameFileDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_renaming_finished(void* self, libqt_list urls) {
    KIO__RenameFileDialog_RenamingFinished((KIO__RenameFileDialog*)self, urls);
}

void k_io__renamefiledialog_on_renaming_finished(void* self, void (*callback)(void*, QUrl**)) {
    KIO__RenameFileDialog_Connect_RenamingFinished((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_error(void* self, void* error) {
    KIO__RenameFileDialog_Error((KIO__RenameFileDialog*)self, (KJob*)error);
}

void k_io__renamefiledialog_on_error(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_Connect_Error((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

const char* k_io__renamefiledialog_tr2(const char* s, const char* c) {
    libqt_string _str = KIO__RenameFileDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__renamefiledialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KIO__RenameFileDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_io__renamefiledialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_io__renamefiledialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_io__renamefiledialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_io__renamefiledialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_io__renamefiledialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_io__renamefiledialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_io__renamefiledialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_io__renamefiledialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_io__renamefiledialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_io__renamefiledialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_io__renamefiledialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_io__renamefiledialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_io__renamefiledialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_io__renamefiledialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_io__renamefiledialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_io__renamefiledialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_io__renamefiledialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_io__renamefiledialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_io__renamefiledialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_io__renamefiledialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_io__renamefiledialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_io__renamefiledialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_io__renamefiledialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_io__renamefiledialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_io__renamefiledialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_io__renamefiledialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_io__renamefiledialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_io__renamefiledialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_io__renamefiledialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_io__renamefiledialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_io__renamefiledialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_io__renamefiledialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_io__renamefiledialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_io__renamefiledialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_io__renamefiledialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_io__renamefiledialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_io__renamefiledialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_io__renamefiledialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_io__renamefiledialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_io__renamefiledialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_io__renamefiledialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_io__renamefiledialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_io__renamefiledialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_io__renamefiledialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_io__renamefiledialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_io__renamefiledialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_io__renamefiledialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_io__renamefiledialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_io__renamefiledialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_io__renamefiledialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_io__renamefiledialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_io__renamefiledialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_io__renamefiledialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_io__renamefiledialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_io__renamefiledialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_io__renamefiledialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_io__renamefiledialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_io__renamefiledialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_io__renamefiledialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_io__renamefiledialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_io__renamefiledialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_io__renamefiledialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_io__renamefiledialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamefiledialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamefiledialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamefiledialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamefiledialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamefiledialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamefiledialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamefiledialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamefiledialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_io__renamefiledialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_io__renamefiledialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_io__renamefiledialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_io__renamefiledialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_io__renamefiledialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_io__renamefiledialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_io__renamefiledialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_io__renamefiledialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_io__renamefiledialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_io__renamefiledialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_io__renamefiledialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_io__renamefiledialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_io__renamefiledialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_io__renamefiledialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_io__renamefiledialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_io__renamefiledialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_io__renamefiledialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_io__renamefiledialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_io__renamefiledialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_io__renamefiledialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_io__renamefiledialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_io__renamefiledialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_io__renamefiledialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_io__renamefiledialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_io__renamefiledialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_io__renamefiledialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_io__renamefiledialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_io__renamefiledialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_io__renamefiledialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_io__renamefiledialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_io__renamefiledialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_io__renamefiledialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_io__renamefiledialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_io__renamefiledialog_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_io__renamefiledialog_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_io__renamefiledialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_io__renamefiledialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_io__renamefiledialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__renamefiledialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_io__renamefiledialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_io__renamefiledialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_io__renamefiledialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_io__renamefiledialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_io__renamefiledialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_io__renamefiledialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_io__renamefiledialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_io__renamefiledialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_io__renamefiledialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_io__renamefiledialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_io__renamefiledialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_io__renamefiledialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_io__renamefiledialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__renamefiledialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_io__renamefiledialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_io__renamefiledialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_io__renamefiledialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_io__renamefiledialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_io__renamefiledialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_io__renamefiledialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_io__renamefiledialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_io__renamefiledialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_io__renamefiledialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_io__renamefiledialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_io__renamefiledialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_io__renamefiledialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_io__renamefiledialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_io__renamefiledialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_io__renamefiledialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_io__renamefiledialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_io__renamefiledialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_io__renamefiledialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_io__renamefiledialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_io__renamefiledialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_io__renamefiledialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_io__renamefiledialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_io__renamefiledialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_io__renamefiledialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_io__renamefiledialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_io__renamefiledialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_io__renamefiledialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_io__renamefiledialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_io__renamefiledialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_io__renamefiledialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_io__renamefiledialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_io__renamefiledialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_io__renamefiledialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_io__renamefiledialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_io__renamefiledialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_io__renamefiledialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_io__renamefiledialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_io__renamefiledialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_io__renamefiledialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_io__renamefiledialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_io__renamefiledialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_io__renamefiledialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_io__renamefiledialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_io__renamefiledialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_io__renamefiledialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_io__renamefiledialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_io__renamefiledialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_io__renamefiledialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_io__renamefiledialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_io__renamefiledialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_io__renamefiledialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_io__renamefiledialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_io__renamefiledialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_io__renamefiledialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_io__renamefiledialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_io__renamefiledialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_io__renamefiledialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_io__renamefiledialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_io__renamefiledialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_io__renamefiledialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_io__renamefiledialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_io__renamefiledialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__renamefiledialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_io__renamefiledialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_io__renamefiledialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_io__renamefiledialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_io__renamefiledialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_io__renamefiledialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_io__renamefiledialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_io__renamefiledialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_io__renamefiledialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_io__renamefiledialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_io__renamefiledialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_io__renamefiledialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_io__renamefiledialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_io__renamefiledialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_io__renamefiledialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_io__renamefiledialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_io__renamefiledialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_io__renamefiledialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_io__renamefiledialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_io__renamefiledialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_io__renamefiledialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_io__renamefiledialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_io__renamefiledialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_io__renamefiledialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_io__renamefiledialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_io__renamefiledialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_io__renamefiledialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_io__renamefiledialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_io__renamefiledialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_io__renamefiledialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_io__renamefiledialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_io__renamefiledialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_io__renamefiledialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_io__renamefiledialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_io__renamefiledialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_io__renamefiledialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_io__renamefiledialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_io__renamefiledialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_io__renamefiledialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_io__renamefiledialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_io__renamefiledialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_io__renamefiledialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_io__renamefiledialog_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_io__renamefiledialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_io__renamefiledialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_io__renamefiledialog_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_io__renamefiledialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_io__renamefiledialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_io__renamefiledialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_io__renamefiledialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_io__renamefiledialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_io__renamefiledialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_io__renamefiledialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_io__renamefiledialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_io__renamefiledialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_io__renamefiledialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_io__renamefiledialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_io__renamefiledialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_io__renamefiledialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_io__renamefiledialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_io__renamefiledialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_io__renamefiledialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_io__renamefiledialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_io__renamefiledialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_io__renamefiledialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_io__renamefiledialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_io__renamefiledialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_io__renamefiledialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_io__renamefiledialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_io__renamefiledialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_io__renamefiledialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_io__renamefiledialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_io__renamefiledialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_io__renamefiledialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_io__renamefiledialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_io__renamefiledialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_io__renamefiledialog_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_io__renamefiledialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_io__renamefiledialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_io__renamefiledialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_io__renamefiledialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_io__renamefiledialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_io__renamefiledialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_io__renamefiledialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_io__renamefiledialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamefiledialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__renamefiledialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__renamefiledialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__renamefiledialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__renamefiledialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__renamefiledialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__renamefiledialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__renamefiledialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__renamefiledialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__renamefiledialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__renamefiledialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__renamefiledialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__renamefiledialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__renamefiledialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__renamefiledialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__renamefiledialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__renamefiledialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__renamefiledialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__renamefiledialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__renamefiledialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__renamefiledialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__renamefiledialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__renamefiledialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__renamefiledialog_dynamic_property_names");
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

QBindingStorage* k_io__renamefiledialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__renamefiledialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__renamefiledialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__renamefiledialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__renamefiledialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__renamefiledialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__renamefiledialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__renamefiledialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__renamefiledialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__renamefiledialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__renamefiledialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__renamefiledialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__renamefiledialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_io__renamefiledialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_io__renamefiledialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_io__renamefiledialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_io__renamefiledialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_io__renamefiledialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_io__renamefiledialog_set_visible(void* self, bool visible) {
    KIO__RenameFileDialog_SetVisible((KIO__RenameFileDialog*)self, visible);
}

void k_io__renamefiledialog_qbase_set_visible(void* self, bool visible) {
    KIO__RenameFileDialog_QBaseSetVisible((KIO__RenameFileDialog*)self, visible);
}

void k_io__renamefiledialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KIO__RenameFileDialog_OnSetVisible((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

QSize* k_io__renamefiledialog_size_hint(void* self) {
    return KIO__RenameFileDialog_SizeHint((KIO__RenameFileDialog*)self);
}

QSize* k_io__renamefiledialog_qbase_size_hint(void* self) {
    return KIO__RenameFileDialog_QBaseSizeHint((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_size_hint(void* self, QSize* (*callback)()) {
    KIO__RenameFileDialog_OnSizeHint((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

QSize* k_io__renamefiledialog_minimum_size_hint(void* self) {
    return KIO__RenameFileDialog_MinimumSizeHint((KIO__RenameFileDialog*)self);
}

QSize* k_io__renamefiledialog_qbase_minimum_size_hint(void* self) {
    return KIO__RenameFileDialog_QBaseMinimumSizeHint((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KIO__RenameFileDialog_OnMinimumSizeHint((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_open(void* self) {
    KIO__RenameFileDialog_Open((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_qbase_open(void* self) {
    KIO__RenameFileDialog_QBaseOpen((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_open(void* self, void (*callback)()) {
    KIO__RenameFileDialog_OnOpen((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamefiledialog_exec(void* self) {
    return KIO__RenameFileDialog_Exec((KIO__RenameFileDialog*)self);
}

int32_t k_io__renamefiledialog_qbase_exec(void* self) {
    return KIO__RenameFileDialog_QBaseExec((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_exec(void* self, int32_t (*callback)()) {
    KIO__RenameFileDialog_OnExec((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_done(void* self, int param1) {
    KIO__RenameFileDialog_Done((KIO__RenameFileDialog*)self, param1);
}

void k_io__renamefiledialog_qbase_done(void* self, int param1) {
    KIO__RenameFileDialog_QBaseDone((KIO__RenameFileDialog*)self, param1);
}

void k_io__renamefiledialog_on_done(void* self, void (*callback)(void*, int)) {
    KIO__RenameFileDialog_OnDone((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_accept(void* self) {
    KIO__RenameFileDialog_Accept((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_qbase_accept(void* self) {
    KIO__RenameFileDialog_QBaseAccept((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_accept(void* self, void (*callback)()) {
    KIO__RenameFileDialog_OnAccept((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_reject(void* self) {
    KIO__RenameFileDialog_Reject((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_qbase_reject(void* self) {
    KIO__RenameFileDialog_QBaseReject((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_reject(void* self, void (*callback)()) {
    KIO__RenameFileDialog_OnReject((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_key_press_event(void* self, void* param1) {
    KIO__RenameFileDialog_KeyPressEvent((KIO__RenameFileDialog*)self, (QKeyEvent*)param1);
}

void k_io__renamefiledialog_qbase_key_press_event(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseKeyPressEvent((KIO__RenameFileDialog*)self, (QKeyEvent*)param1);
}

void k_io__renamefiledialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnKeyPressEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_close_event(void* self, void* param1) {
    KIO__RenameFileDialog_CloseEvent((KIO__RenameFileDialog*)self, (QCloseEvent*)param1);
}

void k_io__renamefiledialog_qbase_close_event(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseCloseEvent((KIO__RenameFileDialog*)self, (QCloseEvent*)param1);
}

void k_io__renamefiledialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnCloseEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_show_event(void* self, void* param1) {
    KIO__RenameFileDialog_ShowEvent((KIO__RenameFileDialog*)self, (QShowEvent*)param1);
}

void k_io__renamefiledialog_qbase_show_event(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseShowEvent((KIO__RenameFileDialog*)self, (QShowEvent*)param1);
}

void k_io__renamefiledialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnShowEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_resize_event(void* self, void* param1) {
    KIO__RenameFileDialog_ResizeEvent((KIO__RenameFileDialog*)self, (QResizeEvent*)param1);
}

void k_io__renamefiledialog_qbase_resize_event(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseResizeEvent((KIO__RenameFileDialog*)self, (QResizeEvent*)param1);
}

void k_io__renamefiledialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnResizeEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_context_menu_event(void* self, void* param1) {
    KIO__RenameFileDialog_ContextMenuEvent((KIO__RenameFileDialog*)self, (QContextMenuEvent*)param1);
}

void k_io__renamefiledialog_qbase_context_menu_event(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseContextMenuEvent((KIO__RenameFileDialog*)self, (QContextMenuEvent*)param1);
}

void k_io__renamefiledialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnContextMenuEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_event_filter(void* self, void* param1, void* param2) {
    return KIO__RenameFileDialog_EventFilter((KIO__RenameFileDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_io__renamefiledialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KIO__RenameFileDialog_QBaseEventFilter((KIO__RenameFileDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_io__renamefiledialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__RenameFileDialog_OnEventFilter((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamefiledialog_dev_type(void* self) {
    return KIO__RenameFileDialog_DevType((KIO__RenameFileDialog*)self);
}

int32_t k_io__renamefiledialog_qbase_dev_type(void* self) {
    return KIO__RenameFileDialog_QBaseDevType((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_dev_type(void* self, int32_t (*callback)()) {
    KIO__RenameFileDialog_OnDevType((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamefiledialog_height_for_width(void* self, int param1) {
    return KIO__RenameFileDialog_HeightForWidth((KIO__RenameFileDialog*)self, param1);
}

int32_t k_io__renamefiledialog_qbase_height_for_width(void* self, int param1) {
    return KIO__RenameFileDialog_QBaseHeightForWidth((KIO__RenameFileDialog*)self, param1);
}

void k_io__renamefiledialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KIO__RenameFileDialog_OnHeightForWidth((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_has_height_for_width(void* self) {
    return KIO__RenameFileDialog_HasHeightForWidth((KIO__RenameFileDialog*)self);
}

bool k_io__renamefiledialog_qbase_has_height_for_width(void* self) {
    return KIO__RenameFileDialog_QBaseHasHeightForWidth((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KIO__RenameFileDialog_OnHasHeightForWidth((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_io__renamefiledialog_paint_engine(void* self) {
    return KIO__RenameFileDialog_PaintEngine((KIO__RenameFileDialog*)self);
}

QPaintEngine* k_io__renamefiledialog_qbase_paint_engine(void* self) {
    return KIO__RenameFileDialog_QBasePaintEngine((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KIO__RenameFileDialog_OnPaintEngine((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_event(void* self, void* event) {
    return KIO__RenameFileDialog_Event((KIO__RenameFileDialog*)self, (QEvent*)event);
}

bool k_io__renamefiledialog_qbase_event(void* self, void* event) {
    return KIO__RenameFileDialog_QBaseEvent((KIO__RenameFileDialog*)self, (QEvent*)event);
}

void k_io__renamefiledialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_mouse_press_event(void* self, void* event) {
    KIO__RenameFileDialog_MousePressEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_qbase_mouse_press_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseMousePressEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnMousePressEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_mouse_release_event(void* self, void* event) {
    KIO__RenameFileDialog_MouseReleaseEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_qbase_mouse_release_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseMouseReleaseEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnMouseReleaseEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_mouse_double_click_event(void* self, void* event) {
    KIO__RenameFileDialog_MouseDoubleClickEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_qbase_mouse_double_click_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseMouseDoubleClickEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnMouseDoubleClickEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_mouse_move_event(void* self, void* event) {
    KIO__RenameFileDialog_MouseMoveEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_qbase_mouse_move_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseMouseMoveEvent((KIO__RenameFileDialog*)self, (QMouseEvent*)event);
}

void k_io__renamefiledialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnMouseMoveEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_wheel_event(void* self, void* event) {
    KIO__RenameFileDialog_WheelEvent((KIO__RenameFileDialog*)self, (QWheelEvent*)event);
}

void k_io__renamefiledialog_qbase_wheel_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseWheelEvent((KIO__RenameFileDialog*)self, (QWheelEvent*)event);
}

void k_io__renamefiledialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnWheelEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_key_release_event(void* self, void* event) {
    KIO__RenameFileDialog_KeyReleaseEvent((KIO__RenameFileDialog*)self, (QKeyEvent*)event);
}

void k_io__renamefiledialog_qbase_key_release_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseKeyReleaseEvent((KIO__RenameFileDialog*)self, (QKeyEvent*)event);
}

void k_io__renamefiledialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnKeyReleaseEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_focus_in_event(void* self, void* event) {
    KIO__RenameFileDialog_FocusInEvent((KIO__RenameFileDialog*)self, (QFocusEvent*)event);
}

void k_io__renamefiledialog_qbase_focus_in_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseFocusInEvent((KIO__RenameFileDialog*)self, (QFocusEvent*)event);
}

void k_io__renamefiledialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnFocusInEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_focus_out_event(void* self, void* event) {
    KIO__RenameFileDialog_FocusOutEvent((KIO__RenameFileDialog*)self, (QFocusEvent*)event);
}

void k_io__renamefiledialog_qbase_focus_out_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseFocusOutEvent((KIO__RenameFileDialog*)self, (QFocusEvent*)event);
}

void k_io__renamefiledialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnFocusOutEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_enter_event(void* self, void* event) {
    KIO__RenameFileDialog_EnterEvent((KIO__RenameFileDialog*)self, (QEnterEvent*)event);
}

void k_io__renamefiledialog_qbase_enter_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseEnterEvent((KIO__RenameFileDialog*)self, (QEnterEvent*)event);
}

void k_io__renamefiledialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnEnterEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_leave_event(void* self, void* event) {
    KIO__RenameFileDialog_LeaveEvent((KIO__RenameFileDialog*)self, (QEvent*)event);
}

void k_io__renamefiledialog_qbase_leave_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseLeaveEvent((KIO__RenameFileDialog*)self, (QEvent*)event);
}

void k_io__renamefiledialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnLeaveEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_paint_event(void* self, void* event) {
    KIO__RenameFileDialog_PaintEvent((KIO__RenameFileDialog*)self, (QPaintEvent*)event);
}

void k_io__renamefiledialog_qbase_paint_event(void* self, void* event) {
    KIO__RenameFileDialog_QBasePaintEvent((KIO__RenameFileDialog*)self, (QPaintEvent*)event);
}

void k_io__renamefiledialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnPaintEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_move_event(void* self, void* event) {
    KIO__RenameFileDialog_MoveEvent((KIO__RenameFileDialog*)self, (QMoveEvent*)event);
}

void k_io__renamefiledialog_qbase_move_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseMoveEvent((KIO__RenameFileDialog*)self, (QMoveEvent*)event);
}

void k_io__renamefiledialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnMoveEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_tablet_event(void* self, void* event) {
    KIO__RenameFileDialog_TabletEvent((KIO__RenameFileDialog*)self, (QTabletEvent*)event);
}

void k_io__renamefiledialog_qbase_tablet_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseTabletEvent((KIO__RenameFileDialog*)self, (QTabletEvent*)event);
}

void k_io__renamefiledialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnTabletEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_action_event(void* self, void* event) {
    KIO__RenameFileDialog_ActionEvent((KIO__RenameFileDialog*)self, (QActionEvent*)event);
}

void k_io__renamefiledialog_qbase_action_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseActionEvent((KIO__RenameFileDialog*)self, (QActionEvent*)event);
}

void k_io__renamefiledialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnActionEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_drag_enter_event(void* self, void* event) {
    KIO__RenameFileDialog_DragEnterEvent((KIO__RenameFileDialog*)self, (QDragEnterEvent*)event);
}

void k_io__renamefiledialog_qbase_drag_enter_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseDragEnterEvent((KIO__RenameFileDialog*)self, (QDragEnterEvent*)event);
}

void k_io__renamefiledialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnDragEnterEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_drag_move_event(void* self, void* event) {
    KIO__RenameFileDialog_DragMoveEvent((KIO__RenameFileDialog*)self, (QDragMoveEvent*)event);
}

void k_io__renamefiledialog_qbase_drag_move_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseDragMoveEvent((KIO__RenameFileDialog*)self, (QDragMoveEvent*)event);
}

void k_io__renamefiledialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnDragMoveEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_drag_leave_event(void* self, void* event) {
    KIO__RenameFileDialog_DragLeaveEvent((KIO__RenameFileDialog*)self, (QDragLeaveEvent*)event);
}

void k_io__renamefiledialog_qbase_drag_leave_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseDragLeaveEvent((KIO__RenameFileDialog*)self, (QDragLeaveEvent*)event);
}

void k_io__renamefiledialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnDragLeaveEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_drop_event(void* self, void* event) {
    KIO__RenameFileDialog_DropEvent((KIO__RenameFileDialog*)self, (QDropEvent*)event);
}

void k_io__renamefiledialog_qbase_drop_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseDropEvent((KIO__RenameFileDialog*)self, (QDropEvent*)event);
}

void k_io__renamefiledialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnDropEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_hide_event(void* self, void* event) {
    KIO__RenameFileDialog_HideEvent((KIO__RenameFileDialog*)self, (QHideEvent*)event);
}

void k_io__renamefiledialog_qbase_hide_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseHideEvent((KIO__RenameFileDialog*)self, (QHideEvent*)event);
}

void k_io__renamefiledialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnHideEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KIO__RenameFileDialog_NativeEvent((KIO__RenameFileDialog*)self, qstring(eventType), message, result);
}

bool k_io__renamefiledialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KIO__RenameFileDialog_QBaseNativeEvent((KIO__RenameFileDialog*)self, qstring(eventType), message, result);
}

void k_io__renamefiledialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KIO__RenameFileDialog_OnNativeEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_change_event(void* self, void* param1) {
    KIO__RenameFileDialog_ChangeEvent((KIO__RenameFileDialog*)self, (QEvent*)param1);
}

void k_io__renamefiledialog_qbase_change_event(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseChangeEvent((KIO__RenameFileDialog*)self, (QEvent*)param1);
}

void k_io__renamefiledialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnChangeEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamefiledialog_metric(void* self, int32_t param1) {
    return KIO__RenameFileDialog_Metric((KIO__RenameFileDialog*)self, param1);
}

int32_t k_io__renamefiledialog_qbase_metric(void* self, int32_t param1) {
    return KIO__RenameFileDialog_QBaseMetric((KIO__RenameFileDialog*)self, param1);
}

void k_io__renamefiledialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KIO__RenameFileDialog_OnMetric((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_init_painter(void* self, void* painter) {
    KIO__RenameFileDialog_InitPainter((KIO__RenameFileDialog*)self, (QPainter*)painter);
}

void k_io__renamefiledialog_qbase_init_painter(void* self, void* painter) {
    KIO__RenameFileDialog_QBaseInitPainter((KIO__RenameFileDialog*)self, (QPainter*)painter);
}

void k_io__renamefiledialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnInitPainter((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_io__renamefiledialog_redirected(void* self, void* offset) {
    return KIO__RenameFileDialog_Redirected((KIO__RenameFileDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_io__renamefiledialog_qbase_redirected(void* self, void* offset) {
    return KIO__RenameFileDialog_QBaseRedirected((KIO__RenameFileDialog*)self, (QPoint*)offset);
}

void k_io__renamefiledialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnRedirected((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

QPainter* k_io__renamefiledialog_shared_painter(void* self) {
    return KIO__RenameFileDialog_SharedPainter((KIO__RenameFileDialog*)self);
}

QPainter* k_io__renamefiledialog_qbase_shared_painter(void* self) {
    return KIO__RenameFileDialog_QBaseSharedPainter((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KIO__RenameFileDialog_OnSharedPainter((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_input_method_event(void* self, void* param1) {
    KIO__RenameFileDialog_InputMethodEvent((KIO__RenameFileDialog*)self, (QInputMethodEvent*)param1);
}

void k_io__renamefiledialog_qbase_input_method_event(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseInputMethodEvent((KIO__RenameFileDialog*)self, (QInputMethodEvent*)param1);
}

void k_io__renamefiledialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnInputMethodEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

QVariant* k_io__renamefiledialog_input_method_query(void* self, int64_t param1) {
    return KIO__RenameFileDialog_InputMethodQuery((KIO__RenameFileDialog*)self, param1);
}

QVariant* k_io__renamefiledialog_qbase_input_method_query(void* self, int64_t param1) {
    return KIO__RenameFileDialog_QBaseInputMethodQuery((KIO__RenameFileDialog*)self, param1);
}

void k_io__renamefiledialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KIO__RenameFileDialog_OnInputMethodQuery((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_focus_next_prev_child(void* self, bool next) {
    return KIO__RenameFileDialog_FocusNextPrevChild((KIO__RenameFileDialog*)self, next);
}

bool k_io__renamefiledialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KIO__RenameFileDialog_QBaseFocusNextPrevChild((KIO__RenameFileDialog*)self, next);
}

void k_io__renamefiledialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KIO__RenameFileDialog_OnFocusNextPrevChild((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_timer_event(void* self, void* event) {
    KIO__RenameFileDialog_TimerEvent((KIO__RenameFileDialog*)self, (QTimerEvent*)event);
}

void k_io__renamefiledialog_qbase_timer_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseTimerEvent((KIO__RenameFileDialog*)self, (QTimerEvent*)event);
}

void k_io__renamefiledialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnTimerEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_child_event(void* self, void* event) {
    KIO__RenameFileDialog_ChildEvent((KIO__RenameFileDialog*)self, (QChildEvent*)event);
}

void k_io__renamefiledialog_qbase_child_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseChildEvent((KIO__RenameFileDialog*)self, (QChildEvent*)event);
}

void k_io__renamefiledialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnChildEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_custom_event(void* self, void* event) {
    KIO__RenameFileDialog_CustomEvent((KIO__RenameFileDialog*)self, (QEvent*)event);
}

void k_io__renamefiledialog_qbase_custom_event(void* self, void* event) {
    KIO__RenameFileDialog_QBaseCustomEvent((KIO__RenameFileDialog*)self, (QEvent*)event);
}

void k_io__renamefiledialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnCustomEvent((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_connect_notify(void* self, void* signal) {
    KIO__RenameFileDialog_ConnectNotify((KIO__RenameFileDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamefiledialog_qbase_connect_notify(void* self, void* signal) {
    KIO__RenameFileDialog_QBaseConnectNotify((KIO__RenameFileDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamefiledialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnConnectNotify((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_disconnect_notify(void* self, void* signal) {
    KIO__RenameFileDialog_DisconnectNotify((KIO__RenameFileDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamefiledialog_qbase_disconnect_notify(void* self, void* signal) {
    KIO__RenameFileDialog_QBaseDisconnectNotify((KIO__RenameFileDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamefiledialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnDisconnectNotify((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_adjust_position(void* self, void* param1) {
    KIO__RenameFileDialog_AdjustPosition((KIO__RenameFileDialog*)self, (QWidget*)param1);
}

void k_io__renamefiledialog_qbase_adjust_position(void* self, void* param1) {
    KIO__RenameFileDialog_QBaseAdjustPosition((KIO__RenameFileDialog*)self, (QWidget*)param1);
}

void k_io__renamefiledialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnAdjustPosition((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_update_micro_focus(void* self) {
    KIO__RenameFileDialog_UpdateMicroFocus((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_qbase_update_micro_focus(void* self) {
    KIO__RenameFileDialog_QBaseUpdateMicroFocus((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_update_micro_focus(void* self, void (*callback)()) {
    KIO__RenameFileDialog_OnUpdateMicroFocus((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_create(void* self) {
    KIO__RenameFileDialog_Create((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_qbase_create(void* self) {
    KIO__RenameFileDialog_QBaseCreate((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_create(void* self, void (*callback)()) {
    KIO__RenameFileDialog_OnCreate((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_destroy(void* self) {
    KIO__RenameFileDialog_Destroy((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_qbase_destroy(void* self) {
    KIO__RenameFileDialog_QBaseDestroy((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_destroy(void* self, void (*callback)()) {
    KIO__RenameFileDialog_OnDestroy((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_focus_next_child(void* self) {
    return KIO__RenameFileDialog_FocusNextChild((KIO__RenameFileDialog*)self);
}

bool k_io__renamefiledialog_qbase_focus_next_child(void* self) {
    return KIO__RenameFileDialog_QBaseFocusNextChild((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_focus_next_child(void* self, bool (*callback)()) {
    KIO__RenameFileDialog_OnFocusNextChild((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_focus_previous_child(void* self) {
    return KIO__RenameFileDialog_FocusPreviousChild((KIO__RenameFileDialog*)self);
}

bool k_io__renamefiledialog_qbase_focus_previous_child(void* self) {
    return KIO__RenameFileDialog_QBaseFocusPreviousChild((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KIO__RenameFileDialog_OnFocusPreviousChild((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

QObject* k_io__renamefiledialog_sender(void* self) {
    return KIO__RenameFileDialog_Sender((KIO__RenameFileDialog*)self);
}

QObject* k_io__renamefiledialog_qbase_sender(void* self) {
    return KIO__RenameFileDialog_QBaseSender((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_sender(void* self, QObject* (*callback)()) {
    KIO__RenameFileDialog_OnSender((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamefiledialog_sender_signal_index(void* self) {
    return KIO__RenameFileDialog_SenderSignalIndex((KIO__RenameFileDialog*)self);
}

int32_t k_io__renamefiledialog_qbase_sender_signal_index(void* self) {
    return KIO__RenameFileDialog_QBaseSenderSignalIndex((KIO__RenameFileDialog*)self);
}

void k_io__renamefiledialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__RenameFileDialog_OnSenderSignalIndex((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamefiledialog_receivers(void* self, const char* signal) {
    return KIO__RenameFileDialog_Receivers((KIO__RenameFileDialog*)self, signal);
}

int32_t k_io__renamefiledialog_qbase_receivers(void* self, const char* signal) {
    return KIO__RenameFileDialog_QBaseReceivers((KIO__RenameFileDialog*)self, signal);
}

void k_io__renamefiledialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__RenameFileDialog_OnReceivers((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

bool k_io__renamefiledialog_is_signal_connected(void* self, void* signal) {
    return KIO__RenameFileDialog_IsSignalConnected((KIO__RenameFileDialog*)self, (QMetaMethod*)signal);
}

bool k_io__renamefiledialog_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__RenameFileDialog_QBaseIsSignalConnected((KIO__RenameFileDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamefiledialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__RenameFileDialog_OnIsSignalConnected((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

double k_io__renamefiledialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIO__RenameFileDialog_GetDecodedMetricF((KIO__RenameFileDialog*)self, metricA, metricB);
}

double k_io__renamefiledialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIO__RenameFileDialog_QBaseGetDecodedMetricF((KIO__RenameFileDialog*)self, metricA, metricB);
}

void k_io__renamefiledialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KIO__RenameFileDialog_OnGetDecodedMetricF((KIO__RenameFileDialog*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__renamefiledialog_delete(void* self) {
    KIO__RenameFileDialog_Delete((KIO__RenameFileDialog*)(self));
}
