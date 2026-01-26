#include "libkbookmark.hpp"
#include "libkbookmarkmanager.hpp"
#include "libkbookmarkowner.hpp"
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
#include "libkbookmarkdialog.hpp"
#include "libkbookmarkdialog.h"

KBookmarkDialog* k_bookmarkdialog_new(void* manager) {
    return KBookmarkDialog_new((KBookmarkManager*)manager);
}

KBookmarkDialog* k_bookmarkdialog_new2(void* manager, void* parent) {
    return KBookmarkDialog_new2((KBookmarkManager*)manager, (QWidget*)parent);
}

const QMetaObject* k_bookmarkdialog_meta_object(void* self) {
    return KBookmarkDialog_MetaObject((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KBookmarkDialog_OnMetaObject((KBookmarkDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_bookmarkdialog_qbase_meta_object(void* self) {
    return KBookmarkDialog_QBaseMetaObject((KBookmarkDialog*)self);
}

void* k_bookmarkdialog_metacast(void* self, const char* param1) {
    return KBookmarkDialog_Metacast((KBookmarkDialog*)self, param1);
}

void k_bookmarkdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KBookmarkDialog_OnMetacast((KBookmarkDialog*)self, (intptr_t)callback);
}

void* k_bookmarkdialog_qbase_metacast(void* self, const char* param1) {
    return KBookmarkDialog_QBaseMetacast((KBookmarkDialog*)self, param1);
}

int32_t k_bookmarkdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkDialog_Metacall((KBookmarkDialog*)self, param1, param2, param3);
}

void k_bookmarkdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBookmarkDialog_OnMetacall((KBookmarkDialog*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBookmarkDialog_QBaseMetacall((KBookmarkDialog*)self, param1, param2, param3);
}

const char* k_bookmarkdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KBookmark* k_bookmarkdialog_edit_bookmark(void* self, void* bm) {
    return KBookmarkDialog_EditBookmark((KBookmarkDialog*)self, (KBookmark*)bm);
}

KBookmark* k_bookmarkdialog_add_bookmark(void* self, const char* title, void* url, const char* icon) {
    return KBookmarkDialog_AddBookmark((KBookmarkDialog*)self, qstring(title), (QUrl*)url, qstring(icon));
}

KBookmarkGroup* k_bookmarkdialog_add_bookmarks(void* self, libqt_list /* of KBookmarkOwner__FutureBookmark* */ list) {
    return KBookmarkDialog_AddBookmarks((KBookmarkDialog*)self, list);
}

KBookmarkGroup* k_bookmarkdialog_create_new_folder(void* self, const char* name) {
    return KBookmarkDialog_CreateNewFolder((KBookmarkDialog*)self, qstring(name));
}

KBookmarkGroup* k_bookmarkdialog_select_folder(void* self) {
    return KBookmarkDialog_SelectFolder((KBookmarkDialog*)self);
}

void k_bookmarkdialog_accept(void* self) {
    KBookmarkDialog_Accept((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_accept(void* self, void (*callback)()) {
    KBookmarkDialog_OnAccept((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_qbase_accept(void* self) {
    KBookmarkDialog_QBaseAccept((KBookmarkDialog*)self);
}

void k_bookmarkdialog_new_folder_button(void* self) {
    KBookmarkDialog_NewFolderButton((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_new_folder_button(void* self, void (*callback)()) {
    KBookmarkDialog_OnNewFolderButton((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_qbase_new_folder_button(void* self) {
    KBookmarkDialog_QBaseNewFolderButton((KBookmarkDialog*)self);
}

const char* k_bookmarkdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KBookmark* k_bookmarkdialog_add_bookmark4(void* self, const char* title, void* url, const char* icon, void* parent) {
    return KBookmarkDialog_AddBookmark4((KBookmarkDialog*)self, qstring(title), (QUrl*)url, qstring(icon), (KBookmark*)parent);
}

KBookmarkGroup* k_bookmarkdialog_add_bookmarks2(void* self, libqt_list /* of KBookmarkOwner__FutureBookmark* */ list, const char* name) {
    return KBookmarkDialog_AddBookmarks2((KBookmarkDialog*)self, list, qstring(name));
}

KBookmarkGroup* k_bookmarkdialog_add_bookmarks3(void* self, libqt_list /* of KBookmarkOwner__FutureBookmark* */ list, const char* name, void* parent) {
    return KBookmarkDialog_AddBookmarks3((KBookmarkDialog*)self, list, qstring(name), (KBookmarkGroup*)parent);
}

KBookmarkGroup* k_bookmarkdialog_create_new_folder2(void* self, const char* name, void* parent) {
    return KBookmarkDialog_CreateNewFolder2((KBookmarkDialog*)self, qstring(name), (KBookmark*)parent);
}

KBookmarkGroup* k_bookmarkdialog_select_folder1(void* self, void* start) {
    return KBookmarkDialog_SelectFolder1((KBookmarkDialog*)self, (KBookmark*)start);
}

int32_t k_bookmarkdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_bookmarkdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_bookmarkdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_bookmarkdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_bookmarkdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_bookmarkdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_bookmarkdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_bookmarkdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_bookmarkdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_bookmarkdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_bookmarkdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_bookmarkdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_bookmarkdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_bookmarkdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_bookmarkdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_bookmarkdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_bookmarkdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_bookmarkdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_bookmarkdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_bookmarkdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_bookmarkdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_bookmarkdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_bookmarkdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_bookmarkdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_bookmarkdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_bookmarkdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_bookmarkdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_bookmarkdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_bookmarkdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_bookmarkdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_bookmarkdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_bookmarkdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_bookmarkdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_bookmarkdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_bookmarkdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_bookmarkdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_bookmarkdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_bookmarkdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_bookmarkdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_bookmarkdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_bookmarkdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_bookmarkdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_bookmarkdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_bookmarkdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_bookmarkdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_bookmarkdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_bookmarkdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_bookmarkdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_bookmarkdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_bookmarkdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_bookmarkdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_bookmarkdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_bookmarkdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_bookmarkdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_bookmarkdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_bookmarkdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_bookmarkdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_bookmarkdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_bookmarkdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_bookmarkdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_bookmarkdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_bookmarkdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_bookmarkdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bookmarkdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bookmarkdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bookmarkdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bookmarkdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bookmarkdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bookmarkdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_bookmarkdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_bookmarkdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_bookmarkdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_bookmarkdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_bookmarkdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_bookmarkdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_bookmarkdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_bookmarkdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_bookmarkdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_bookmarkdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_bookmarkdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_bookmarkdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_bookmarkdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_bookmarkdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_bookmarkdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_bookmarkdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_bookmarkdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_bookmarkdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_bookmarkdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_bookmarkdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_bookmarkdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_bookmarkdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_bookmarkdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_bookmarkdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_bookmarkdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_bookmarkdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_bookmarkdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_bookmarkdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_bookmarkdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_bookmarkdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_bookmarkdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_bookmarkdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_bookmarkdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_bookmarkdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_bookmarkdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_bookmarkdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_bookmarkdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_bookmarkdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_bookmarkdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_bookmarkdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_bookmarkdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_bookmarkdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_bookmarkdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_bookmarkdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_bookmarkdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_bookmarkdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_bookmarkdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_bookmarkdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_bookmarkdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_bookmarkdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_bookmarkdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_bookmarkdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_bookmarkdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_bookmarkdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_bookmarkdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_bookmarkdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_bookmarkdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_bookmarkdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_bookmarkdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_bookmarkdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_bookmarkdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_bookmarkdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_bookmarkdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_bookmarkdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_bookmarkdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_bookmarkdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_bookmarkdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_bookmarkdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_bookmarkdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_bookmarkdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_bookmarkdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_bookmarkdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_bookmarkdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_bookmarkdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_bookmarkdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_bookmarkdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_bookmarkdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_bookmarkdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_bookmarkdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_bookmarkdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_bookmarkdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_bookmarkdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_bookmarkdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_bookmarkdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_bookmarkdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_bookmarkdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_bookmarkdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_bookmarkdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_bookmarkdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_bookmarkdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_bookmarkdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_bookmarkdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_bookmarkdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_bookmarkdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_bookmarkdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_bookmarkdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_bookmarkdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_bookmarkdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_bookmarkdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_bookmarkdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_bookmarkdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_bookmarkdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_bookmarkdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_bookmarkdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_bookmarkdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_bookmarkdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_bookmarkdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_bookmarkdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_bookmarkdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_bookmarkdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_bookmarkdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_bookmarkdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_bookmarkdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_bookmarkdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_bookmarkdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_bookmarkdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_bookmarkdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_bookmarkdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_bookmarkdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_bookmarkdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_bookmarkdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_bookmarkdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_bookmarkdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_bookmarkdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_bookmarkdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_bookmarkdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_bookmarkdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_bookmarkdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_bookmarkdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_bookmarkdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_bookmarkdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_bookmarkdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_bookmarkdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_bookmarkdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_bookmarkdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_bookmarkdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_bookmarkdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_bookmarkdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_bookmarkdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_bookmarkdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_bookmarkdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_bookmarkdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_bookmarkdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_bookmarkdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_bookmarkdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_bookmarkdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_bookmarkdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_bookmarkdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_bookmarkdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_bookmarkdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_bookmarkdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_bookmarkdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_bookmarkdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_bookmarkdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_bookmarkdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_bookmarkdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_bookmarkdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_bookmarkdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_bookmarkdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_bookmarkdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_bookmarkdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_bookmarkdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_bookmarkdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_bookmarkdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_bookmarkdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_bookmarkdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_bookmarkdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_bookmarkdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_bookmarkdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_bookmarkdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_bookmarkdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_bookmarkdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_bookmarkdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_bookmarkdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_bookmarkdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_bookmarkdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_bookmarkdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_bookmarkdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_bookmarkdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_bookmarkdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_bookmarkdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_bookmarkdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_bookmarkdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_bookmarkdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_bookmarkdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_bookmarkdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_bookmarkdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_bookmarkdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_bookmarkdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_bookmarkdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_bookmarkdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_bookmarkdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_bookmarkdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_bookmarkdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_bookmarkdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_bookmarkdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_bookmarkdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_bookmarkdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_bookmarkdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_bookmarkdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_bookmarkdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_bookmarkdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_bookmarkdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_bookmarkdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_bookmarkdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_bookmarkdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_bookmarkdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_bookmarkdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_bookmarkdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_bookmarkdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_bookmarkdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_bookmarkdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_bookmarkdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_bookmarkdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_bookmarkdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_bookmarkdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_bookmarkdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_bookmarkdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_bookmarkdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_bookmarkdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_bookmarkdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_bookmarkdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_bookmarkdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_bookmarkdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_bookmarkdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_bookmarkdialog_dynamic_property_names\n");
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

QBindingStorage* k_bookmarkdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_bookmarkdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_bookmarkdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_bookmarkdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_bookmarkdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_bookmarkdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_bookmarkdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_bookmarkdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_bookmarkdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_bookmarkdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_bookmarkdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_bookmarkdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_bookmarkdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_bookmarkdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_bookmarkdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_bookmarkdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_bookmarkdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_bookmarkdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_bookmarkdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_bookmarkdialog_set_visible(void* self, bool visible) {
    KBookmarkDialog_SetVisible((KBookmarkDialog*)self, visible);
}

void k_bookmarkdialog_qbase_set_visible(void* self, bool visible) {
    KBookmarkDialog_QBaseSetVisible((KBookmarkDialog*)self, visible);
}

void k_bookmarkdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KBookmarkDialog_OnSetVisible((KBookmarkDialog*)self, (intptr_t)callback);
}

QSize* k_bookmarkdialog_size_hint(void* self) {
    return KBookmarkDialog_SizeHint((KBookmarkDialog*)self);
}

QSize* k_bookmarkdialog_qbase_size_hint(void* self) {
    return KBookmarkDialog_QBaseSizeHint((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_size_hint(void* self, QSize* (*callback)()) {
    KBookmarkDialog_OnSizeHint((KBookmarkDialog*)self, (intptr_t)callback);
}

QSize* k_bookmarkdialog_minimum_size_hint(void* self) {
    return KBookmarkDialog_MinimumSizeHint((KBookmarkDialog*)self);
}

QSize* k_bookmarkdialog_qbase_minimum_size_hint(void* self) {
    return KBookmarkDialog_QBaseMinimumSizeHint((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KBookmarkDialog_OnMinimumSizeHint((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_open(void* self) {
    KBookmarkDialog_Open((KBookmarkDialog*)self);
}

void k_bookmarkdialog_qbase_open(void* self) {
    KBookmarkDialog_QBaseOpen((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_open(void* self, void (*callback)()) {
    KBookmarkDialog_OnOpen((KBookmarkDialog*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_exec(void* self) {
    return KBookmarkDialog_Exec((KBookmarkDialog*)self);
}

int32_t k_bookmarkdialog_qbase_exec(void* self) {
    return KBookmarkDialog_QBaseExec((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_exec(void* self, int32_t (*callback)()) {
    KBookmarkDialog_OnExec((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_done(void* self, int param1) {
    KBookmarkDialog_Done((KBookmarkDialog*)self, param1);
}

void k_bookmarkdialog_qbase_done(void* self, int param1) {
    KBookmarkDialog_QBaseDone((KBookmarkDialog*)self, param1);
}

void k_bookmarkdialog_on_done(void* self, void (*callback)(void*, int)) {
    KBookmarkDialog_OnDone((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_reject(void* self) {
    KBookmarkDialog_Reject((KBookmarkDialog*)self);
}

void k_bookmarkdialog_qbase_reject(void* self) {
    KBookmarkDialog_QBaseReject((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_reject(void* self, void (*callback)()) {
    KBookmarkDialog_OnReject((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_key_press_event(void* self, void* param1) {
    KBookmarkDialog_KeyPressEvent((KBookmarkDialog*)self, (QKeyEvent*)param1);
}

void k_bookmarkdialog_qbase_key_press_event(void* self, void* param1) {
    KBookmarkDialog_QBaseKeyPressEvent((KBookmarkDialog*)self, (QKeyEvent*)param1);
}

void k_bookmarkdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnKeyPressEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_close_event(void* self, void* param1) {
    KBookmarkDialog_CloseEvent((KBookmarkDialog*)self, (QCloseEvent*)param1);
}

void k_bookmarkdialog_qbase_close_event(void* self, void* param1) {
    KBookmarkDialog_QBaseCloseEvent((KBookmarkDialog*)self, (QCloseEvent*)param1);
}

void k_bookmarkdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnCloseEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_show_event(void* self, void* param1) {
    KBookmarkDialog_ShowEvent((KBookmarkDialog*)self, (QShowEvent*)param1);
}

void k_bookmarkdialog_qbase_show_event(void* self, void* param1) {
    KBookmarkDialog_QBaseShowEvent((KBookmarkDialog*)self, (QShowEvent*)param1);
}

void k_bookmarkdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnShowEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_resize_event(void* self, void* param1) {
    KBookmarkDialog_ResizeEvent((KBookmarkDialog*)self, (QResizeEvent*)param1);
}

void k_bookmarkdialog_qbase_resize_event(void* self, void* param1) {
    KBookmarkDialog_QBaseResizeEvent((KBookmarkDialog*)self, (QResizeEvent*)param1);
}

void k_bookmarkdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnResizeEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_context_menu_event(void* self, void* param1) {
    KBookmarkDialog_ContextMenuEvent((KBookmarkDialog*)self, (QContextMenuEvent*)param1);
}

void k_bookmarkdialog_qbase_context_menu_event(void* self, void* param1) {
    KBookmarkDialog_QBaseContextMenuEvent((KBookmarkDialog*)self, (QContextMenuEvent*)param1);
}

void k_bookmarkdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnContextMenuEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_event_filter(void* self, void* param1, void* param2) {
    return KBookmarkDialog_EventFilter((KBookmarkDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_bookmarkdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KBookmarkDialog_QBaseEventFilter((KBookmarkDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_bookmarkdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBookmarkDialog_OnEventFilter((KBookmarkDialog*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_dev_type(void* self) {
    return KBookmarkDialog_DevType((KBookmarkDialog*)self);
}

int32_t k_bookmarkdialog_qbase_dev_type(void* self) {
    return KBookmarkDialog_QBaseDevType((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_dev_type(void* self, int32_t (*callback)()) {
    KBookmarkDialog_OnDevType((KBookmarkDialog*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_height_for_width(void* self, int param1) {
    return KBookmarkDialog_HeightForWidth((KBookmarkDialog*)self, param1);
}

int32_t k_bookmarkdialog_qbase_height_for_width(void* self, int param1) {
    return KBookmarkDialog_QBaseHeightForWidth((KBookmarkDialog*)self, param1);
}

void k_bookmarkdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KBookmarkDialog_OnHeightForWidth((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_has_height_for_width(void* self) {
    return KBookmarkDialog_HasHeightForWidth((KBookmarkDialog*)self);
}

bool k_bookmarkdialog_qbase_has_height_for_width(void* self) {
    return KBookmarkDialog_QBaseHasHeightForWidth((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KBookmarkDialog_OnHasHeightForWidth((KBookmarkDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_bookmarkdialog_paint_engine(void* self) {
    return KBookmarkDialog_PaintEngine((KBookmarkDialog*)self);
}

QPaintEngine* k_bookmarkdialog_qbase_paint_engine(void* self) {
    return KBookmarkDialog_QBasePaintEngine((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KBookmarkDialog_OnPaintEngine((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_event(void* self, void* event) {
    return KBookmarkDialog_Event((KBookmarkDialog*)self, (QEvent*)event);
}

bool k_bookmarkdialog_qbase_event(void* self, void* event) {
    return KBookmarkDialog_QBaseEvent((KBookmarkDialog*)self, (QEvent*)event);
}

void k_bookmarkdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KBookmarkDialog_OnEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_mouse_press_event(void* self, void* event) {
    KBookmarkDialog_MousePressEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_qbase_mouse_press_event(void* self, void* event) {
    KBookmarkDialog_QBaseMousePressEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnMousePressEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_mouse_release_event(void* self, void* event) {
    KBookmarkDialog_MouseReleaseEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_qbase_mouse_release_event(void* self, void* event) {
    KBookmarkDialog_QBaseMouseReleaseEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnMouseReleaseEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_mouse_double_click_event(void* self, void* event) {
    KBookmarkDialog_MouseDoubleClickEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_qbase_mouse_double_click_event(void* self, void* event) {
    KBookmarkDialog_QBaseMouseDoubleClickEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnMouseDoubleClickEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_mouse_move_event(void* self, void* event) {
    KBookmarkDialog_MouseMoveEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_qbase_mouse_move_event(void* self, void* event) {
    KBookmarkDialog_QBaseMouseMoveEvent((KBookmarkDialog*)self, (QMouseEvent*)event);
}

void k_bookmarkdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnMouseMoveEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_wheel_event(void* self, void* event) {
    KBookmarkDialog_WheelEvent((KBookmarkDialog*)self, (QWheelEvent*)event);
}

void k_bookmarkdialog_qbase_wheel_event(void* self, void* event) {
    KBookmarkDialog_QBaseWheelEvent((KBookmarkDialog*)self, (QWheelEvent*)event);
}

void k_bookmarkdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnWheelEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_key_release_event(void* self, void* event) {
    KBookmarkDialog_KeyReleaseEvent((KBookmarkDialog*)self, (QKeyEvent*)event);
}

void k_bookmarkdialog_qbase_key_release_event(void* self, void* event) {
    KBookmarkDialog_QBaseKeyReleaseEvent((KBookmarkDialog*)self, (QKeyEvent*)event);
}

void k_bookmarkdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnKeyReleaseEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_focus_in_event(void* self, void* event) {
    KBookmarkDialog_FocusInEvent((KBookmarkDialog*)self, (QFocusEvent*)event);
}

void k_bookmarkdialog_qbase_focus_in_event(void* self, void* event) {
    KBookmarkDialog_QBaseFocusInEvent((KBookmarkDialog*)self, (QFocusEvent*)event);
}

void k_bookmarkdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnFocusInEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_focus_out_event(void* self, void* event) {
    KBookmarkDialog_FocusOutEvent((KBookmarkDialog*)self, (QFocusEvent*)event);
}

void k_bookmarkdialog_qbase_focus_out_event(void* self, void* event) {
    KBookmarkDialog_QBaseFocusOutEvent((KBookmarkDialog*)self, (QFocusEvent*)event);
}

void k_bookmarkdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnFocusOutEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_enter_event(void* self, void* event) {
    KBookmarkDialog_EnterEvent((KBookmarkDialog*)self, (QEnterEvent*)event);
}

void k_bookmarkdialog_qbase_enter_event(void* self, void* event) {
    KBookmarkDialog_QBaseEnterEvent((KBookmarkDialog*)self, (QEnterEvent*)event);
}

void k_bookmarkdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnEnterEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_leave_event(void* self, void* event) {
    KBookmarkDialog_LeaveEvent((KBookmarkDialog*)self, (QEvent*)event);
}

void k_bookmarkdialog_qbase_leave_event(void* self, void* event) {
    KBookmarkDialog_QBaseLeaveEvent((KBookmarkDialog*)self, (QEvent*)event);
}

void k_bookmarkdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnLeaveEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_paint_event(void* self, void* event) {
    KBookmarkDialog_PaintEvent((KBookmarkDialog*)self, (QPaintEvent*)event);
}

void k_bookmarkdialog_qbase_paint_event(void* self, void* event) {
    KBookmarkDialog_QBasePaintEvent((KBookmarkDialog*)self, (QPaintEvent*)event);
}

void k_bookmarkdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnPaintEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_move_event(void* self, void* event) {
    KBookmarkDialog_MoveEvent((KBookmarkDialog*)self, (QMoveEvent*)event);
}

void k_bookmarkdialog_qbase_move_event(void* self, void* event) {
    KBookmarkDialog_QBaseMoveEvent((KBookmarkDialog*)self, (QMoveEvent*)event);
}

void k_bookmarkdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnMoveEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_tablet_event(void* self, void* event) {
    KBookmarkDialog_TabletEvent((KBookmarkDialog*)self, (QTabletEvent*)event);
}

void k_bookmarkdialog_qbase_tablet_event(void* self, void* event) {
    KBookmarkDialog_QBaseTabletEvent((KBookmarkDialog*)self, (QTabletEvent*)event);
}

void k_bookmarkdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnTabletEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_action_event(void* self, void* event) {
    KBookmarkDialog_ActionEvent((KBookmarkDialog*)self, (QActionEvent*)event);
}

void k_bookmarkdialog_qbase_action_event(void* self, void* event) {
    KBookmarkDialog_QBaseActionEvent((KBookmarkDialog*)self, (QActionEvent*)event);
}

void k_bookmarkdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnActionEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_drag_enter_event(void* self, void* event) {
    KBookmarkDialog_DragEnterEvent((KBookmarkDialog*)self, (QDragEnterEvent*)event);
}

void k_bookmarkdialog_qbase_drag_enter_event(void* self, void* event) {
    KBookmarkDialog_QBaseDragEnterEvent((KBookmarkDialog*)self, (QDragEnterEvent*)event);
}

void k_bookmarkdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnDragEnterEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_drag_move_event(void* self, void* event) {
    KBookmarkDialog_DragMoveEvent((KBookmarkDialog*)self, (QDragMoveEvent*)event);
}

void k_bookmarkdialog_qbase_drag_move_event(void* self, void* event) {
    KBookmarkDialog_QBaseDragMoveEvent((KBookmarkDialog*)self, (QDragMoveEvent*)event);
}

void k_bookmarkdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnDragMoveEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_drag_leave_event(void* self, void* event) {
    KBookmarkDialog_DragLeaveEvent((KBookmarkDialog*)self, (QDragLeaveEvent*)event);
}

void k_bookmarkdialog_qbase_drag_leave_event(void* self, void* event) {
    KBookmarkDialog_QBaseDragLeaveEvent((KBookmarkDialog*)self, (QDragLeaveEvent*)event);
}

void k_bookmarkdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnDragLeaveEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_drop_event(void* self, void* event) {
    KBookmarkDialog_DropEvent((KBookmarkDialog*)self, (QDropEvent*)event);
}

void k_bookmarkdialog_qbase_drop_event(void* self, void* event) {
    KBookmarkDialog_QBaseDropEvent((KBookmarkDialog*)self, (QDropEvent*)event);
}

void k_bookmarkdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnDropEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_hide_event(void* self, void* event) {
    KBookmarkDialog_HideEvent((KBookmarkDialog*)self, (QHideEvent*)event);
}

void k_bookmarkdialog_qbase_hide_event(void* self, void* event) {
    KBookmarkDialog_QBaseHideEvent((KBookmarkDialog*)self, (QHideEvent*)event);
}

void k_bookmarkdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnHideEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KBookmarkDialog_NativeEvent((KBookmarkDialog*)self, qstring(eventType), message, result);
}

bool k_bookmarkdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KBookmarkDialog_QBaseNativeEvent((KBookmarkDialog*)self, qstring(eventType), message, result);
}

void k_bookmarkdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KBookmarkDialog_OnNativeEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_change_event(void* self, void* param1) {
    KBookmarkDialog_ChangeEvent((KBookmarkDialog*)self, (QEvent*)param1);
}

void k_bookmarkdialog_qbase_change_event(void* self, void* param1) {
    KBookmarkDialog_QBaseChangeEvent((KBookmarkDialog*)self, (QEvent*)param1);
}

void k_bookmarkdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnChangeEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_metric(void* self, int32_t param1) {
    return KBookmarkDialog_Metric((KBookmarkDialog*)self, param1);
}

int32_t k_bookmarkdialog_qbase_metric(void* self, int32_t param1) {
    return KBookmarkDialog_QBaseMetric((KBookmarkDialog*)self, param1);
}

void k_bookmarkdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KBookmarkDialog_OnMetric((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_init_painter(void* self, void* painter) {
    KBookmarkDialog_InitPainter((KBookmarkDialog*)self, (QPainter*)painter);
}

void k_bookmarkdialog_qbase_init_painter(void* self, void* painter) {
    KBookmarkDialog_QBaseInitPainter((KBookmarkDialog*)self, (QPainter*)painter);
}

void k_bookmarkdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnInitPainter((KBookmarkDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_bookmarkdialog_redirected(void* self, void* offset) {
    return KBookmarkDialog_Redirected((KBookmarkDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_bookmarkdialog_qbase_redirected(void* self, void* offset) {
    return KBookmarkDialog_QBaseRedirected((KBookmarkDialog*)self, (QPoint*)offset);
}

void k_bookmarkdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KBookmarkDialog_OnRedirected((KBookmarkDialog*)self, (intptr_t)callback);
}

QPainter* k_bookmarkdialog_shared_painter(void* self) {
    return KBookmarkDialog_SharedPainter((KBookmarkDialog*)self);
}

QPainter* k_bookmarkdialog_qbase_shared_painter(void* self) {
    return KBookmarkDialog_QBaseSharedPainter((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KBookmarkDialog_OnSharedPainter((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_input_method_event(void* self, void* param1) {
    KBookmarkDialog_InputMethodEvent((KBookmarkDialog*)self, (QInputMethodEvent*)param1);
}

void k_bookmarkdialog_qbase_input_method_event(void* self, void* param1) {
    KBookmarkDialog_QBaseInputMethodEvent((KBookmarkDialog*)self, (QInputMethodEvent*)param1);
}

void k_bookmarkdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnInputMethodEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

QVariant* k_bookmarkdialog_input_method_query(void* self, int32_t param1) {
    return KBookmarkDialog_InputMethodQuery((KBookmarkDialog*)self, param1);
}

QVariant* k_bookmarkdialog_qbase_input_method_query(void* self, int32_t param1) {
    return KBookmarkDialog_QBaseInputMethodQuery((KBookmarkDialog*)self, param1);
}

void k_bookmarkdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KBookmarkDialog_OnInputMethodQuery((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_focus_next_prev_child(void* self, bool next) {
    return KBookmarkDialog_FocusNextPrevChild((KBookmarkDialog*)self, next);
}

bool k_bookmarkdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KBookmarkDialog_QBaseFocusNextPrevChild((KBookmarkDialog*)self, next);
}

void k_bookmarkdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KBookmarkDialog_OnFocusNextPrevChild((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_timer_event(void* self, void* event) {
    KBookmarkDialog_TimerEvent((KBookmarkDialog*)self, (QTimerEvent*)event);
}

void k_bookmarkdialog_qbase_timer_event(void* self, void* event) {
    KBookmarkDialog_QBaseTimerEvent((KBookmarkDialog*)self, (QTimerEvent*)event);
}

void k_bookmarkdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnTimerEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_child_event(void* self, void* event) {
    KBookmarkDialog_ChildEvent((KBookmarkDialog*)self, (QChildEvent*)event);
}

void k_bookmarkdialog_qbase_child_event(void* self, void* event) {
    KBookmarkDialog_QBaseChildEvent((KBookmarkDialog*)self, (QChildEvent*)event);
}

void k_bookmarkdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnChildEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_custom_event(void* self, void* event) {
    KBookmarkDialog_CustomEvent((KBookmarkDialog*)self, (QEvent*)event);
}

void k_bookmarkdialog_qbase_custom_event(void* self, void* event) {
    KBookmarkDialog_QBaseCustomEvent((KBookmarkDialog*)self, (QEvent*)event);
}

void k_bookmarkdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnCustomEvent((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_connect_notify(void* self, void* signal) {
    KBookmarkDialog_ConnectNotify((KBookmarkDialog*)self, (QMetaMethod*)signal);
}

void k_bookmarkdialog_qbase_connect_notify(void* self, void* signal) {
    KBookmarkDialog_QBaseConnectNotify((KBookmarkDialog*)self, (QMetaMethod*)signal);
}

void k_bookmarkdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnConnectNotify((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_disconnect_notify(void* self, void* signal) {
    KBookmarkDialog_DisconnectNotify((KBookmarkDialog*)self, (QMetaMethod*)signal);
}

void k_bookmarkdialog_qbase_disconnect_notify(void* self, void* signal) {
    KBookmarkDialog_QBaseDisconnectNotify((KBookmarkDialog*)self, (QMetaMethod*)signal);
}

void k_bookmarkdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnDisconnectNotify((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_adjust_position(void* self, void* param1) {
    KBookmarkDialog_AdjustPosition((KBookmarkDialog*)self, (QWidget*)param1);
}

void k_bookmarkdialog_qbase_adjust_position(void* self, void* param1) {
    KBookmarkDialog_QBaseAdjustPosition((KBookmarkDialog*)self, (QWidget*)param1);
}

void k_bookmarkdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KBookmarkDialog_OnAdjustPosition((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_update_micro_focus(void* self) {
    KBookmarkDialog_UpdateMicroFocus((KBookmarkDialog*)self);
}

void k_bookmarkdialog_qbase_update_micro_focus(void* self) {
    KBookmarkDialog_QBaseUpdateMicroFocus((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_update_micro_focus(void* self, void (*callback)()) {
    KBookmarkDialog_OnUpdateMicroFocus((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_create(void* self) {
    KBookmarkDialog_Create((KBookmarkDialog*)self);
}

void k_bookmarkdialog_qbase_create(void* self) {
    KBookmarkDialog_QBaseCreate((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_create(void* self, void (*callback)()) {
    KBookmarkDialog_OnCreate((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_destroy(void* self) {
    KBookmarkDialog_Destroy((KBookmarkDialog*)self);
}

void k_bookmarkdialog_qbase_destroy(void* self) {
    KBookmarkDialog_QBaseDestroy((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_destroy(void* self, void (*callback)()) {
    KBookmarkDialog_OnDestroy((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_focus_next_child(void* self) {
    return KBookmarkDialog_FocusNextChild((KBookmarkDialog*)self);
}

bool k_bookmarkdialog_qbase_focus_next_child(void* self) {
    return KBookmarkDialog_QBaseFocusNextChild((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_focus_next_child(void* self, bool (*callback)()) {
    KBookmarkDialog_OnFocusNextChild((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_focus_previous_child(void* self) {
    return KBookmarkDialog_FocusPreviousChild((KBookmarkDialog*)self);
}

bool k_bookmarkdialog_qbase_focus_previous_child(void* self) {
    return KBookmarkDialog_QBaseFocusPreviousChild((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KBookmarkDialog_OnFocusPreviousChild((KBookmarkDialog*)self, (intptr_t)callback);
}

QObject* k_bookmarkdialog_sender(void* self) {
    return KBookmarkDialog_Sender((KBookmarkDialog*)self);
}

QObject* k_bookmarkdialog_qbase_sender(void* self) {
    return KBookmarkDialog_QBaseSender((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_sender(void* self, QObject* (*callback)()) {
    KBookmarkDialog_OnSender((KBookmarkDialog*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_sender_signal_index(void* self) {
    return KBookmarkDialog_SenderSignalIndex((KBookmarkDialog*)self);
}

int32_t k_bookmarkdialog_qbase_sender_signal_index(void* self) {
    return KBookmarkDialog_QBaseSenderSignalIndex((KBookmarkDialog*)self);
}

void k_bookmarkdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBookmarkDialog_OnSenderSignalIndex((KBookmarkDialog*)self, (intptr_t)callback);
}

int32_t k_bookmarkdialog_receivers(void* self, const char* signal) {
    return KBookmarkDialog_Receivers((KBookmarkDialog*)self, signal);
}

int32_t k_bookmarkdialog_qbase_receivers(void* self, const char* signal) {
    return KBookmarkDialog_QBaseReceivers((KBookmarkDialog*)self, signal);
}

void k_bookmarkdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBookmarkDialog_OnReceivers((KBookmarkDialog*)self, (intptr_t)callback);
}

bool k_bookmarkdialog_is_signal_connected(void* self, void* signal) {
    return KBookmarkDialog_IsSignalConnected((KBookmarkDialog*)self, (QMetaMethod*)signal);
}

bool k_bookmarkdialog_qbase_is_signal_connected(void* self, void* signal) {
    return KBookmarkDialog_QBaseIsSignalConnected((KBookmarkDialog*)self, (QMetaMethod*)signal);
}

void k_bookmarkdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBookmarkDialog_OnIsSignalConnected((KBookmarkDialog*)self, (intptr_t)callback);
}

double k_bookmarkdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KBookmarkDialog_GetDecodedMetricF((KBookmarkDialog*)self, metricA, metricB);
}

double k_bookmarkdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KBookmarkDialog_QBaseGetDecodedMetricF((KBookmarkDialog*)self, metricA, metricB);
}

void k_bookmarkdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KBookmarkDialog_OnGetDecodedMetricF((KBookmarkDialog*)self, (intptr_t)callback);
}

void k_bookmarkdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_bookmarkdialog_delete(void* self) {
    KBookmarkDialog_Delete((KBookmarkDialog*)(self));
}
