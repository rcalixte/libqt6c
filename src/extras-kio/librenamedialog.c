#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
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
#include "librenamedialog.hpp"
#include "librenamedialog.h"

KIO__RenameDialog* k_io__renamedialog_new(void* parent, const char* title, void* src, void* dest, int32_t options) {
    return KIO__RenameDialog_new((QWidget*)parent, qstring(title), (QUrl*)src, (QUrl*)dest, options);
}

KIO__RenameDialog* k_io__renamedialog_new2(void* parent, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc) {
    return KIO__RenameDialog_new2((QWidget*)parent, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc);
}

KIO__RenameDialog* k_io__renamedialog_new3(void* parent, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest) {
    return KIO__RenameDialog_new3((QWidget*)parent, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc, sizeDest);
}

KIO__RenameDialog* k_io__renamedialog_new4(void* parent, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc) {
    return KIO__RenameDialog_new4((QWidget*)parent, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc, sizeDest, (QDateTime*)ctimeSrc);
}

KIO__RenameDialog* k_io__renamedialog_new5(void* parent, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest) {
    return KIO__RenameDialog_new5((QWidget*)parent, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc, sizeDest, (QDateTime*)ctimeSrc, (QDateTime*)ctimeDest);
}

KIO__RenameDialog* k_io__renamedialog_new6(void* parent, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest, void* mtimeSrc) {
    return KIO__RenameDialog_new6((QWidget*)parent, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc, sizeDest, (QDateTime*)ctimeSrc, (QDateTime*)ctimeDest, (QDateTime*)mtimeSrc);
}

KIO__RenameDialog* k_io__renamedialog_new7(void* parent, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest, void* mtimeSrc, void* mtimeDest) {
    return KIO__RenameDialog_new7((QWidget*)parent, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc, sizeDest, (QDateTime*)ctimeSrc, (QDateTime*)ctimeDest, (QDateTime*)mtimeSrc, (QDateTime*)mtimeDest);
}

const QMetaObject* k_io__renamedialog_meta_object(void* self) {
    return KIO__RenameDialog_MetaObject((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIO__RenameDialog_OnMetaObject((KIO__RenameDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_io__renamedialog_super_meta_object(void* self) {
    return KIO__RenameDialog_SuperMetaObject((KIO__RenameDialog*)self);
}

void* k_io__renamedialog_metacast(void* self, const char* param1) {
    return KIO__RenameDialog_Metacast((KIO__RenameDialog*)self, param1);
}

void k_io__renamedialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIO__RenameDialog_OnMetacast((KIO__RenameDialog*)self, (intptr_t)callback);
}

void* k_io__renamedialog_super_metacast(void* self, const char* param1) {
    return KIO__RenameDialog_SuperMetacast((KIO__RenameDialog*)self, param1);
}

int32_t k_io__renamedialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__RenameDialog_Metacall((KIO__RenameDialog*)self, param1, param2, param3);
}

void k_io__renamedialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__RenameDialog_OnMetacall((KIO__RenameDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__RenameDialog_SuperMetacall((KIO__RenameDialog*)self, param1, param2, param3);
}

const char* k_io__renamedialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_io__renamedialog_new_dest_url(void* self) {
    return KIO__RenameDialog_NewDestUrl((KIO__RenameDialog*)self);
}

QUrl* k_io__renamedialog_auto_dest_url(void* self) {
    return KIO__RenameDialog_AutoDestUrl((KIO__RenameDialog*)self);
}

void k_io__renamedialog_cancel_pressed(void* self) {
    KIO__RenameDialog_CancelPressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_rename_pressed(void* self) {
    KIO__RenameDialog_RenamePressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_skip_pressed(void* self) {
    KIO__RenameDialog_SkipPressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_overwrite_pressed(void* self) {
    KIO__RenameDialog_OverwritePressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_overwrite_all_pressed(void* self) {
    KIO__RenameDialog_OverwriteAllPressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_overwrite_when_older_pressed(void* self) {
    KIO__RenameDialog_OverwriteWhenOlderPressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_resume_pressed(void* self) {
    KIO__RenameDialog_ResumePressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_resume_all_pressed(void* self) {
    KIO__RenameDialog_ResumeAllPressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_suggest_new_name_pressed(void* self) {
    KIO__RenameDialog_SuggestNewNamePressed((KIO__RenameDialog*)self);
}

void k_io__renamedialog_enable_rename_button(void* self, const char* param1) {
    KIO__RenameDialog_EnableRenameButton((KIO__RenameDialog*)self, qstring(param1));
}

void k_io__renamedialog_on_enable_rename_button(void* self, void (*callback)(void*, const char*)) {
    KIO__RenameDialog_OnEnableRenameButton((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_super_enable_rename_button(void* self, const char* param1) {
    KIO__RenameDialog_SuperEnableRenameButton((KIO__RenameDialog*)self, qstring(param1));
}

const char* k_io__renamedialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__renamedialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_io__renamedialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_io__renamedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_io__renamedialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_io__renamedialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_io__renamedialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_io__renamedialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_io__renamedialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_io__renamedialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_io__renamedialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_io__renamedialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_io__renamedialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_io__renamedialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_io__renamedialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_io__renamedialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_io__renamedialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_io__renamedialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_io__renamedialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_io__renamedialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_io__renamedialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_io__renamedialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_io__renamedialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_io__renamedialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_io__renamedialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_io__renamedialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_io__renamedialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_io__renamedialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_io__renamedialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_io__renamedialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_io__renamedialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_io__renamedialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_io__renamedialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_io__renamedialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_io__renamedialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_io__renamedialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_io__renamedialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_io__renamedialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_io__renamedialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_io__renamedialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_io__renamedialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_io__renamedialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_io__renamedialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_io__renamedialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_io__renamedialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_io__renamedialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_io__renamedialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_io__renamedialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_io__renamedialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_io__renamedialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_io__renamedialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_io__renamedialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_io__renamedialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_io__renamedialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_io__renamedialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_io__renamedialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_io__renamedialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_io__renamedialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_io__renamedialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_io__renamedialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_io__renamedialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_io__renamedialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_io__renamedialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_io__renamedialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_io__renamedialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamedialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamedialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamedialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamedialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamedialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamedialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_io__renamedialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_io__renamedialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_io__renamedialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_io__renamedialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_io__renamedialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_io__renamedialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_io__renamedialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_io__renamedialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_io__renamedialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_io__renamedialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_io__renamedialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_io__renamedialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_io__renamedialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_io__renamedialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_io__renamedialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_io__renamedialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_io__renamedialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_io__renamedialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_io__renamedialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_io__renamedialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_io__renamedialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_io__renamedialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_io__renamedialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_io__renamedialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_io__renamedialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_io__renamedialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_io__renamedialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_io__renamedialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_io__renamedialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_io__renamedialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_io__renamedialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_io__renamedialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_io__renamedialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_io__renamedialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_io__renamedialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_io__renamedialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_io__renamedialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_io__renamedialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_io__renamedialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_io__renamedialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__renamedialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_io__renamedialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_io__renamedialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_io__renamedialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_io__renamedialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_io__renamedialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_io__renamedialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_io__renamedialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_io__renamedialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_io__renamedialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_io__renamedialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_io__renamedialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_io__renamedialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_io__renamedialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__renamedialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_io__renamedialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_io__renamedialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_io__renamedialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_io__renamedialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_io__renamedialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_io__renamedialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_io__renamedialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_io__renamedialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_io__renamedialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_io__renamedialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_io__renamedialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_io__renamedialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_io__renamedialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_io__renamedialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_io__renamedialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_io__renamedialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_io__renamedialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_io__renamedialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_io__renamedialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_io__renamedialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_io__renamedialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_io__renamedialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_io__renamedialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_io__renamedialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_io__renamedialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_io__renamedialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_io__renamedialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_io__renamedialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_io__renamedialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_io__renamedialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_io__renamedialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_io__renamedialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_io__renamedialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_io__renamedialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_io__renamedialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_io__renamedialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_io__renamedialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_io__renamedialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_io__renamedialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_io__renamedialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_io__renamedialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_io__renamedialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_io__renamedialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_io__renamedialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_io__renamedialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_io__renamedialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_io__renamedialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_io__renamedialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_io__renamedialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_io__renamedialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_io__renamedialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_io__renamedialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_io__renamedialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_io__renamedialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_io__renamedialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_io__renamedialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_io__renamedialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_io__renamedialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_io__renamedialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_io__renamedialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_io__renamedialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_io__renamedialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__renamedialog_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_io__renamedialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_io__renamedialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_io__renamedialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_io__renamedialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_io__renamedialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_io__renamedialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_io__renamedialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_io__renamedialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_io__renamedialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_io__renamedialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_io__renamedialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_io__renamedialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_io__renamedialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_io__renamedialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_io__renamedialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_io__renamedialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_io__renamedialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_io__renamedialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_io__renamedialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_io__renamedialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_io__renamedialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_io__renamedialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_io__renamedialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_io__renamedialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_io__renamedialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_io__renamedialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_io__renamedialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_io__renamedialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_io__renamedialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_io__renamedialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_io__renamedialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_io__renamedialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_io__renamedialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_io__renamedialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_io__renamedialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_io__renamedialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_io__renamedialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_io__renamedialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_io__renamedialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_io__renamedialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_io__renamedialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_io__renamedialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_io__renamedialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_io__renamedialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_io__renamedialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_io__renamedialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_io__renamedialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_io__renamedialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_io__renamedialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_io__renamedialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_io__renamedialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_io__renamedialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_io__renamedialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_io__renamedialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_io__renamedialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_io__renamedialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_io__renamedialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_io__renamedialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_io__renamedialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_io__renamedialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_io__renamedialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_io__renamedialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_io__renamedialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_io__renamedialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_io__renamedialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_io__renamedialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_io__renamedialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_io__renamedialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_io__renamedialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_io__renamedialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_io__renamedialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_io__renamedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_io__renamedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_io__renamedialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_io__renamedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_io__renamedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_io__renamedialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_io__renamedialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_io__renamedialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_io__renamedialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_io__renamedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_io__renamedialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_io__renamedialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_io__renamedialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_io__renamedialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_io__renamedialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__renamedialog_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__renamedialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__renamedialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__renamedialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__renamedialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__renamedialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__renamedialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__renamedialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__renamedialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__renamedialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__renamedialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__renamedialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__renamedialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__renamedialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__renamedialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__renamedialog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__renamedialog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__renamedialog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__renamedialog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__renamedialog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__renamedialog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__renamedialog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__renamedialog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__renamedialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__renamedialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__renamedialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__renamedialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__renamedialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__renamedialog_dynamic_property_names\n");
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

QBindingStorage* k_io__renamedialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__renamedialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__renamedialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__renamedialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__renamedialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__renamedialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__renamedialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__renamedialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__renamedialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__renamedialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__renamedialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__renamedialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__renamedialog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__renamedialog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__renamedialog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__renamedialog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__renamedialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__renamedialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__renamedialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_io__renamedialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_io__renamedialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_io__renamedialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_io__renamedialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_io__renamedialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_io__renamedialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_io__renamedialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_io__renamedialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_io__renamedialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_io__renamedialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_io__renamedialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_io__renamedialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_io__renamedialog_set_visible(void* self, bool visible) {
    KIO__RenameDialog_SetVisible((KIO__RenameDialog*)self, visible);
}

void k_io__renamedialog_super_set_visible(void* self, bool visible) {
    KIO__RenameDialog_SuperSetVisible((KIO__RenameDialog*)self, visible);
}

void k_io__renamedialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KIO__RenameDialog_OnSetVisible((KIO__RenameDialog*)self, (intptr_t)callback);
}

QSize* k_io__renamedialog_size_hint(void* self) {
    return KIO__RenameDialog_SizeHint((KIO__RenameDialog*)self);
}

QSize* k_io__renamedialog_super_size_hint(void* self) {
    return KIO__RenameDialog_SuperSizeHint((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_size_hint(void* self, QSize* (*callback)()) {
    KIO__RenameDialog_OnSizeHint((KIO__RenameDialog*)self, (intptr_t)callback);
}

QSize* k_io__renamedialog_minimum_size_hint(void* self) {
    return KIO__RenameDialog_MinimumSizeHint((KIO__RenameDialog*)self);
}

QSize* k_io__renamedialog_super_minimum_size_hint(void* self) {
    return KIO__RenameDialog_SuperMinimumSizeHint((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KIO__RenameDialog_OnMinimumSizeHint((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_open(void* self) {
    KIO__RenameDialog_Open((KIO__RenameDialog*)self);
}

void k_io__renamedialog_super_open(void* self) {
    KIO__RenameDialog_SuperOpen((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_open(void* self, void (*callback)()) {
    KIO__RenameDialog_OnOpen((KIO__RenameDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_exec(void* self) {
    return KIO__RenameDialog_Exec((KIO__RenameDialog*)self);
}

int32_t k_io__renamedialog_super_exec(void* self) {
    return KIO__RenameDialog_SuperExec((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_exec(void* self, int32_t (*callback)()) {
    KIO__RenameDialog_OnExec((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_done(void* self, int param1) {
    KIO__RenameDialog_Done((KIO__RenameDialog*)self, param1);
}

void k_io__renamedialog_super_done(void* self, int param1) {
    KIO__RenameDialog_SuperDone((KIO__RenameDialog*)self, param1);
}

void k_io__renamedialog_on_done(void* self, void (*callback)(void*, int)) {
    KIO__RenameDialog_OnDone((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_accept(void* self) {
    KIO__RenameDialog_Accept((KIO__RenameDialog*)self);
}

void k_io__renamedialog_super_accept(void* self) {
    KIO__RenameDialog_SuperAccept((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_accept(void* self, void (*callback)()) {
    KIO__RenameDialog_OnAccept((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_reject(void* self) {
    KIO__RenameDialog_Reject((KIO__RenameDialog*)self);
}

void k_io__renamedialog_super_reject(void* self) {
    KIO__RenameDialog_SuperReject((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_reject(void* self, void (*callback)()) {
    KIO__RenameDialog_OnReject((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_key_press_event(void* self, void* param1) {
    KIO__RenameDialog_KeyPressEvent((KIO__RenameDialog*)self, (QKeyEvent*)param1);
}

void k_io__renamedialog_super_key_press_event(void* self, void* param1) {
    KIO__RenameDialog_SuperKeyPressEvent((KIO__RenameDialog*)self, (QKeyEvent*)param1);
}

void k_io__renamedialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnKeyPressEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_close_event(void* self, void* param1) {
    KIO__RenameDialog_CloseEvent((KIO__RenameDialog*)self, (QCloseEvent*)param1);
}

void k_io__renamedialog_super_close_event(void* self, void* param1) {
    KIO__RenameDialog_SuperCloseEvent((KIO__RenameDialog*)self, (QCloseEvent*)param1);
}

void k_io__renamedialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnCloseEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_show_event(void* self, void* param1) {
    KIO__RenameDialog_ShowEvent((KIO__RenameDialog*)self, (QShowEvent*)param1);
}

void k_io__renamedialog_super_show_event(void* self, void* param1) {
    KIO__RenameDialog_SuperShowEvent((KIO__RenameDialog*)self, (QShowEvent*)param1);
}

void k_io__renamedialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnShowEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_resize_event(void* self, void* param1) {
    KIO__RenameDialog_ResizeEvent((KIO__RenameDialog*)self, (QResizeEvent*)param1);
}

void k_io__renamedialog_super_resize_event(void* self, void* param1) {
    KIO__RenameDialog_SuperResizeEvent((KIO__RenameDialog*)self, (QResizeEvent*)param1);
}

void k_io__renamedialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnResizeEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_context_menu_event(void* self, void* param1) {
    KIO__RenameDialog_ContextMenuEvent((KIO__RenameDialog*)self, (QContextMenuEvent*)param1);
}

void k_io__renamedialog_super_context_menu_event(void* self, void* param1) {
    KIO__RenameDialog_SuperContextMenuEvent((KIO__RenameDialog*)self, (QContextMenuEvent*)param1);
}

void k_io__renamedialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnContextMenuEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_event_filter(void* self, void* param1, void* param2) {
    return KIO__RenameDialog_EventFilter((KIO__RenameDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_io__renamedialog_super_event_filter(void* self, void* param1, void* param2) {
    return KIO__RenameDialog_SuperEventFilter((KIO__RenameDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_io__renamedialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__RenameDialog_OnEventFilter((KIO__RenameDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_dev_type(void* self) {
    return KIO__RenameDialog_DevType((KIO__RenameDialog*)self);
}

int32_t k_io__renamedialog_super_dev_type(void* self) {
    return KIO__RenameDialog_SuperDevType((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_dev_type(void* self, int32_t (*callback)()) {
    KIO__RenameDialog_OnDevType((KIO__RenameDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_height_for_width(void* self, int param1) {
    return KIO__RenameDialog_HeightForWidth((KIO__RenameDialog*)self, param1);
}

int32_t k_io__renamedialog_super_height_for_width(void* self, int param1) {
    return KIO__RenameDialog_SuperHeightForWidth((KIO__RenameDialog*)self, param1);
}

void k_io__renamedialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KIO__RenameDialog_OnHeightForWidth((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_has_height_for_width(void* self) {
    return KIO__RenameDialog_HasHeightForWidth((KIO__RenameDialog*)self);
}

bool k_io__renamedialog_super_has_height_for_width(void* self) {
    return KIO__RenameDialog_SuperHasHeightForWidth((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KIO__RenameDialog_OnHasHeightForWidth((KIO__RenameDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_io__renamedialog_paint_engine(void* self) {
    return KIO__RenameDialog_PaintEngine((KIO__RenameDialog*)self);
}

QPaintEngine* k_io__renamedialog_super_paint_engine(void* self) {
    return KIO__RenameDialog_SuperPaintEngine((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KIO__RenameDialog_OnPaintEngine((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_event(void* self, void* event) {
    return KIO__RenameDialog_Event((KIO__RenameDialog*)self, (QEvent*)event);
}

bool k_io__renamedialog_super_event(void* self, void* event) {
    return KIO__RenameDialog_SuperEvent((KIO__RenameDialog*)self, (QEvent*)event);
}

void k_io__renamedialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__RenameDialog_OnEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_mouse_press_event(void* self, void* event) {
    KIO__RenameDialog_MousePressEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_super_mouse_press_event(void* self, void* event) {
    KIO__RenameDialog_SuperMousePressEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnMousePressEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_mouse_release_event(void* self, void* event) {
    KIO__RenameDialog_MouseReleaseEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_super_mouse_release_event(void* self, void* event) {
    KIO__RenameDialog_SuperMouseReleaseEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnMouseReleaseEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_mouse_double_click_event(void* self, void* event) {
    KIO__RenameDialog_MouseDoubleClickEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_super_mouse_double_click_event(void* self, void* event) {
    KIO__RenameDialog_SuperMouseDoubleClickEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnMouseDoubleClickEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_mouse_move_event(void* self, void* event) {
    KIO__RenameDialog_MouseMoveEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_super_mouse_move_event(void* self, void* event) {
    KIO__RenameDialog_SuperMouseMoveEvent((KIO__RenameDialog*)self, (QMouseEvent*)event);
}

void k_io__renamedialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnMouseMoveEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_wheel_event(void* self, void* event) {
    KIO__RenameDialog_WheelEvent((KIO__RenameDialog*)self, (QWheelEvent*)event);
}

void k_io__renamedialog_super_wheel_event(void* self, void* event) {
    KIO__RenameDialog_SuperWheelEvent((KIO__RenameDialog*)self, (QWheelEvent*)event);
}

void k_io__renamedialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnWheelEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_key_release_event(void* self, void* event) {
    KIO__RenameDialog_KeyReleaseEvent((KIO__RenameDialog*)self, (QKeyEvent*)event);
}

void k_io__renamedialog_super_key_release_event(void* self, void* event) {
    KIO__RenameDialog_SuperKeyReleaseEvent((KIO__RenameDialog*)self, (QKeyEvent*)event);
}

void k_io__renamedialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnKeyReleaseEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_focus_in_event(void* self, void* event) {
    KIO__RenameDialog_FocusInEvent((KIO__RenameDialog*)self, (QFocusEvent*)event);
}

void k_io__renamedialog_super_focus_in_event(void* self, void* event) {
    KIO__RenameDialog_SuperFocusInEvent((KIO__RenameDialog*)self, (QFocusEvent*)event);
}

void k_io__renamedialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnFocusInEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_focus_out_event(void* self, void* event) {
    KIO__RenameDialog_FocusOutEvent((KIO__RenameDialog*)self, (QFocusEvent*)event);
}

void k_io__renamedialog_super_focus_out_event(void* self, void* event) {
    KIO__RenameDialog_SuperFocusOutEvent((KIO__RenameDialog*)self, (QFocusEvent*)event);
}

void k_io__renamedialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnFocusOutEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_enter_event(void* self, void* event) {
    KIO__RenameDialog_EnterEvent((KIO__RenameDialog*)self, (QEnterEvent*)event);
}

void k_io__renamedialog_super_enter_event(void* self, void* event) {
    KIO__RenameDialog_SuperEnterEvent((KIO__RenameDialog*)self, (QEnterEvent*)event);
}

void k_io__renamedialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnEnterEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_leave_event(void* self, void* event) {
    KIO__RenameDialog_LeaveEvent((KIO__RenameDialog*)self, (QEvent*)event);
}

void k_io__renamedialog_super_leave_event(void* self, void* event) {
    KIO__RenameDialog_SuperLeaveEvent((KIO__RenameDialog*)self, (QEvent*)event);
}

void k_io__renamedialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnLeaveEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_paint_event(void* self, void* event) {
    KIO__RenameDialog_PaintEvent((KIO__RenameDialog*)self, (QPaintEvent*)event);
}

void k_io__renamedialog_super_paint_event(void* self, void* event) {
    KIO__RenameDialog_SuperPaintEvent((KIO__RenameDialog*)self, (QPaintEvent*)event);
}

void k_io__renamedialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnPaintEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_move_event(void* self, void* event) {
    KIO__RenameDialog_MoveEvent((KIO__RenameDialog*)self, (QMoveEvent*)event);
}

void k_io__renamedialog_super_move_event(void* self, void* event) {
    KIO__RenameDialog_SuperMoveEvent((KIO__RenameDialog*)self, (QMoveEvent*)event);
}

void k_io__renamedialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnMoveEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_tablet_event(void* self, void* event) {
    KIO__RenameDialog_TabletEvent((KIO__RenameDialog*)self, (QTabletEvent*)event);
}

void k_io__renamedialog_super_tablet_event(void* self, void* event) {
    KIO__RenameDialog_SuperTabletEvent((KIO__RenameDialog*)self, (QTabletEvent*)event);
}

void k_io__renamedialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnTabletEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_action_event(void* self, void* event) {
    KIO__RenameDialog_ActionEvent((KIO__RenameDialog*)self, (QActionEvent*)event);
}

void k_io__renamedialog_super_action_event(void* self, void* event) {
    KIO__RenameDialog_SuperActionEvent((KIO__RenameDialog*)self, (QActionEvent*)event);
}

void k_io__renamedialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnActionEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_drag_enter_event(void* self, void* event) {
    KIO__RenameDialog_DragEnterEvent((KIO__RenameDialog*)self, (QDragEnterEvent*)event);
}

void k_io__renamedialog_super_drag_enter_event(void* self, void* event) {
    KIO__RenameDialog_SuperDragEnterEvent((KIO__RenameDialog*)self, (QDragEnterEvent*)event);
}

void k_io__renamedialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnDragEnterEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_drag_move_event(void* self, void* event) {
    KIO__RenameDialog_DragMoveEvent((KIO__RenameDialog*)self, (QDragMoveEvent*)event);
}

void k_io__renamedialog_super_drag_move_event(void* self, void* event) {
    KIO__RenameDialog_SuperDragMoveEvent((KIO__RenameDialog*)self, (QDragMoveEvent*)event);
}

void k_io__renamedialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnDragMoveEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_drag_leave_event(void* self, void* event) {
    KIO__RenameDialog_DragLeaveEvent((KIO__RenameDialog*)self, (QDragLeaveEvent*)event);
}

void k_io__renamedialog_super_drag_leave_event(void* self, void* event) {
    KIO__RenameDialog_SuperDragLeaveEvent((KIO__RenameDialog*)self, (QDragLeaveEvent*)event);
}

void k_io__renamedialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnDragLeaveEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_drop_event(void* self, void* event) {
    KIO__RenameDialog_DropEvent((KIO__RenameDialog*)self, (QDropEvent*)event);
}

void k_io__renamedialog_super_drop_event(void* self, void* event) {
    KIO__RenameDialog_SuperDropEvent((KIO__RenameDialog*)self, (QDropEvent*)event);
}

void k_io__renamedialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnDropEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_hide_event(void* self, void* event) {
    KIO__RenameDialog_HideEvent((KIO__RenameDialog*)self, (QHideEvent*)event);
}

void k_io__renamedialog_super_hide_event(void* self, void* event) {
    KIO__RenameDialog_SuperHideEvent((KIO__RenameDialog*)self, (QHideEvent*)event);
}

void k_io__renamedialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnHideEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KIO__RenameDialog_NativeEvent((KIO__RenameDialog*)self, qstring(eventType), message, result);
}

bool k_io__renamedialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KIO__RenameDialog_SuperNativeEvent((KIO__RenameDialog*)self, qstring(eventType), message, result);
}

void k_io__renamedialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KIO__RenameDialog_OnNativeEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_change_event(void* self, void* param1) {
    KIO__RenameDialog_ChangeEvent((KIO__RenameDialog*)self, (QEvent*)param1);
}

void k_io__renamedialog_super_change_event(void* self, void* param1) {
    KIO__RenameDialog_SuperChangeEvent((KIO__RenameDialog*)self, (QEvent*)param1);
}

void k_io__renamedialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnChangeEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_metric(void* self, int32_t param1) {
    return KIO__RenameDialog_Metric((KIO__RenameDialog*)self, param1);
}

int32_t k_io__renamedialog_super_metric(void* self, int32_t param1) {
    return KIO__RenameDialog_SuperMetric((KIO__RenameDialog*)self, param1);
}

void k_io__renamedialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KIO__RenameDialog_OnMetric((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_init_painter(void* self, void* painter) {
    KIO__RenameDialog_InitPainter((KIO__RenameDialog*)self, (QPainter*)painter);
}

void k_io__renamedialog_super_init_painter(void* self, void* painter) {
    KIO__RenameDialog_SuperInitPainter((KIO__RenameDialog*)self, (QPainter*)painter);
}

void k_io__renamedialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnInitPainter((KIO__RenameDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_io__renamedialog_redirected(void* self, void* offset) {
    return KIO__RenameDialog_Redirected((KIO__RenameDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_io__renamedialog_super_redirected(void* self, void* offset) {
    return KIO__RenameDialog_SuperRedirected((KIO__RenameDialog*)self, (QPoint*)offset);
}

void k_io__renamedialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KIO__RenameDialog_OnRedirected((KIO__RenameDialog*)self, (intptr_t)callback);
}

QPainter* k_io__renamedialog_shared_painter(void* self) {
    return KIO__RenameDialog_SharedPainter((KIO__RenameDialog*)self);
}

QPainter* k_io__renamedialog_super_shared_painter(void* self) {
    return KIO__RenameDialog_SuperSharedPainter((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KIO__RenameDialog_OnSharedPainter((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_input_method_event(void* self, void* param1) {
    KIO__RenameDialog_InputMethodEvent((KIO__RenameDialog*)self, (QInputMethodEvent*)param1);
}

void k_io__renamedialog_super_input_method_event(void* self, void* param1) {
    KIO__RenameDialog_SuperInputMethodEvent((KIO__RenameDialog*)self, (QInputMethodEvent*)param1);
}

void k_io__renamedialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnInputMethodEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

QVariant* k_io__renamedialog_input_method_query(void* self, int32_t param1) {
    return KIO__RenameDialog_InputMethodQuery((KIO__RenameDialog*)self, param1);
}

QVariant* k_io__renamedialog_super_input_method_query(void* self, int32_t param1) {
    return KIO__RenameDialog_SuperInputMethodQuery((KIO__RenameDialog*)self, param1);
}

void k_io__renamedialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KIO__RenameDialog_OnInputMethodQuery((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_focus_next_prev_child(void* self, bool next) {
    return KIO__RenameDialog_FocusNextPrevChild((KIO__RenameDialog*)self, next);
}

bool k_io__renamedialog_super_focus_next_prev_child(void* self, bool next) {
    return KIO__RenameDialog_SuperFocusNextPrevChild((KIO__RenameDialog*)self, next);
}

void k_io__renamedialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KIO__RenameDialog_OnFocusNextPrevChild((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_timer_event(void* self, void* event) {
    KIO__RenameDialog_TimerEvent((KIO__RenameDialog*)self, (QTimerEvent*)event);
}

void k_io__renamedialog_super_timer_event(void* self, void* event) {
    KIO__RenameDialog_SuperTimerEvent((KIO__RenameDialog*)self, (QTimerEvent*)event);
}

void k_io__renamedialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnTimerEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_child_event(void* self, void* event) {
    KIO__RenameDialog_ChildEvent((KIO__RenameDialog*)self, (QChildEvent*)event);
}

void k_io__renamedialog_super_child_event(void* self, void* event) {
    KIO__RenameDialog_SuperChildEvent((KIO__RenameDialog*)self, (QChildEvent*)event);
}

void k_io__renamedialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnChildEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_custom_event(void* self, void* event) {
    KIO__RenameDialog_CustomEvent((KIO__RenameDialog*)self, (QEvent*)event);
}

void k_io__renamedialog_super_custom_event(void* self, void* event) {
    KIO__RenameDialog_SuperCustomEvent((KIO__RenameDialog*)self, (QEvent*)event);
}

void k_io__renamedialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnCustomEvent((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_connect_notify(void* self, void* signal) {
    KIO__RenameDialog_ConnectNotify((KIO__RenameDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamedialog_super_connect_notify(void* self, void* signal) {
    KIO__RenameDialog_SuperConnectNotify((KIO__RenameDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamedialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnConnectNotify((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_disconnect_notify(void* self, void* signal) {
    KIO__RenameDialog_DisconnectNotify((KIO__RenameDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamedialog_super_disconnect_notify(void* self, void* signal) {
    KIO__RenameDialog_SuperDisconnectNotify((KIO__RenameDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamedialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnDisconnectNotify((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_adjust_position(void* self, void* param1) {
    KIO__RenameDialog_AdjustPosition((KIO__RenameDialog*)self, (QWidget*)param1);
}

void k_io__renamedialog_super_adjust_position(void* self, void* param1) {
    KIO__RenameDialog_SuperAdjustPosition((KIO__RenameDialog*)self, (QWidget*)param1);
}

void k_io__renamedialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KIO__RenameDialog_OnAdjustPosition((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_update_micro_focus(void* self) {
    KIO__RenameDialog_UpdateMicroFocus((KIO__RenameDialog*)self);
}

void k_io__renamedialog_super_update_micro_focus(void* self) {
    KIO__RenameDialog_SuperUpdateMicroFocus((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_update_micro_focus(void* self, void (*callback)()) {
    KIO__RenameDialog_OnUpdateMicroFocus((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_create(void* self) {
    KIO__RenameDialog_Create((KIO__RenameDialog*)self);
}

void k_io__renamedialog_super_create(void* self) {
    KIO__RenameDialog_SuperCreate((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_create(void* self, void (*callback)()) {
    KIO__RenameDialog_OnCreate((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_destroy(void* self) {
    KIO__RenameDialog_Destroy((KIO__RenameDialog*)self);
}

void k_io__renamedialog_super_destroy(void* self) {
    KIO__RenameDialog_SuperDestroy((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_destroy(void* self, void (*callback)()) {
    KIO__RenameDialog_OnDestroy((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_focus_next_child(void* self) {
    return KIO__RenameDialog_FocusNextChild((KIO__RenameDialog*)self);
}

bool k_io__renamedialog_super_focus_next_child(void* self) {
    return KIO__RenameDialog_SuperFocusNextChild((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_focus_next_child(void* self, bool (*callback)()) {
    KIO__RenameDialog_OnFocusNextChild((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_focus_previous_child(void* self) {
    return KIO__RenameDialog_FocusPreviousChild((KIO__RenameDialog*)self);
}

bool k_io__renamedialog_super_focus_previous_child(void* self) {
    return KIO__RenameDialog_SuperFocusPreviousChild((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KIO__RenameDialog_OnFocusPreviousChild((KIO__RenameDialog*)self, (intptr_t)callback);
}

QObject* k_io__renamedialog_sender(void* self) {
    return KIO__RenameDialog_Sender((KIO__RenameDialog*)self);
}

QObject* k_io__renamedialog_super_sender(void* self) {
    return KIO__RenameDialog_SuperSender((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_sender(void* self, QObject* (*callback)()) {
    KIO__RenameDialog_OnSender((KIO__RenameDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_sender_signal_index(void* self) {
    return KIO__RenameDialog_SenderSignalIndex((KIO__RenameDialog*)self);
}

int32_t k_io__renamedialog_super_sender_signal_index(void* self) {
    return KIO__RenameDialog_SuperSenderSignalIndex((KIO__RenameDialog*)self);
}

void k_io__renamedialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__RenameDialog_OnSenderSignalIndex((KIO__RenameDialog*)self, (intptr_t)callback);
}

int32_t k_io__renamedialog_receivers(void* self, const char* signal) {
    return KIO__RenameDialog_Receivers((KIO__RenameDialog*)self, signal);
}

int32_t k_io__renamedialog_super_receivers(void* self, const char* signal) {
    return KIO__RenameDialog_SuperReceivers((KIO__RenameDialog*)self, signal);
}

void k_io__renamedialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__RenameDialog_OnReceivers((KIO__RenameDialog*)self, (intptr_t)callback);
}

bool k_io__renamedialog_is_signal_connected(void* self, void* signal) {
    return KIO__RenameDialog_IsSignalConnected((KIO__RenameDialog*)self, (QMetaMethod*)signal);
}

bool k_io__renamedialog_super_is_signal_connected(void* self, void* signal) {
    return KIO__RenameDialog_SuperIsSignalConnected((KIO__RenameDialog*)self, (QMetaMethod*)signal);
}

void k_io__renamedialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__RenameDialog_OnIsSignalConnected((KIO__RenameDialog*)self, (intptr_t)callback);
}

double k_io__renamedialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIO__RenameDialog_GetDecodedMetricF((KIO__RenameDialog*)self, metricA, metricB);
}

double k_io__renamedialog_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIO__RenameDialog_SuperGetDecodedMetricF((KIO__RenameDialog*)self, metricA, metricB);
}

void k_io__renamedialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KIO__RenameDialog_OnGetDecodedMetricF((KIO__RenameDialog*)self, (intptr_t)callback);
}

void k_io__renamedialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__renamedialog_delete(void* self) {
    KIO__RenameDialog_Delete((KIO__RenameDialog*)(self));
}
