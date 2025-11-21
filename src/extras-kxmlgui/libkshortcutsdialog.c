#include "libkactioncollection.hpp"
#include "../libqaction.hpp"
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
#include "libkshortcutsdialog.hpp"
#include "libkshortcutsdialog.h"

KShortcutsDialog* k_shortcutsdialog_new(void* parent) {
    return KShortcutsDialog_new((QWidget*)parent);
}

KShortcutsDialog* k_shortcutsdialog_new2() {
    return KShortcutsDialog_new2();
}

KShortcutsDialog* k_shortcutsdialog_new3(int64_t actionTypes) {
    return KShortcutsDialog_new3(actionTypes);
}

KShortcutsDialog* k_shortcutsdialog_new4(int64_t actionTypes, int32_t allowLetterShortcuts) {
    return KShortcutsDialog_new4(actionTypes, allowLetterShortcuts);
}

KShortcutsDialog* k_shortcutsdialog_new5(int64_t actionTypes, int32_t allowLetterShortcuts, void* parent) {
    return KShortcutsDialog_new5(actionTypes, allowLetterShortcuts, (QWidget*)parent);
}

const QMetaObject* k_shortcutsdialog_meta_object(void* self) {
    return KShortcutsDialog_MetaObject((KShortcutsDialog*)self);
}

void* k_shortcutsdialog_metacast(void* self, const char* param1) {
    return KShortcutsDialog_Metacast((KShortcutsDialog*)self, param1);
}

int32_t k_shortcutsdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KShortcutsDialog_Metacall((KShortcutsDialog*)self, param1, param2, param3);
}

void k_shortcutsdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KShortcutsDialog_OnMetacall((KShortcutsDialog*)self, (intptr_t)callback);
}

int32_t k_shortcutsdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KShortcutsDialog_QBaseMetacall((KShortcutsDialog*)self, param1, param2, param3);
}

const char* k_shortcutsdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_add_collection(void* self, void* collection) {
    KShortcutsDialog_AddCollection((KShortcutsDialog*)self, (KActionCollection*)collection);
}

libqt_list /* of KActionCollection* */ k_shortcutsdialog_action_collections(void* self) {
    libqt_list _arr = KShortcutsDialog_ActionCollections((KShortcutsDialog*)self);
    return _arr;
}

bool k_shortcutsdialog_configure(void* self) {
    return KShortcutsDialog_Configure((KShortcutsDialog*)self);
}

QSize* k_shortcutsdialog_size_hint(void* self) {
    return KShortcutsDialog_SizeHint((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_size_hint(void* self, QSize* (*callback)()) {
    KShortcutsDialog_OnSizeHint((KShortcutsDialog*)self, (intptr_t)callback);
}

QSize* k_shortcutsdialog_qbase_size_hint(void* self) {
    return KShortcutsDialog_QBaseSizeHint((KShortcutsDialog*)self);
}

void k_shortcutsdialog_show_dialog(void* collection) {
    KShortcutsDialog_ShowDialog((KActionCollection*)collection);
}

void k_shortcutsdialog_import_configuration(void* self, const char* path) {
    KShortcutsDialog_ImportConfiguration((KShortcutsDialog*)self, qstring(path));
}

void k_shortcutsdialog_export_configuration(void* self, const char* path) {
    KShortcutsDialog_ExportConfiguration((KShortcutsDialog*)self, qstring(path));
}

void k_shortcutsdialog_refresh_schemes(void* self) {
    KShortcutsDialog_RefreshSchemes((KShortcutsDialog*)self);
}

void k_shortcutsdialog_add_action_to_schemes_more_button(void* self, void* action) {
    KShortcutsDialog_AddActionToSchemesMoreButton((KShortcutsDialog*)self, (QAction*)action);
}

void k_shortcutsdialog_accept(void* self) {
    KShortcutsDialog_Accept((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_accept(void* self, void (*callback)()) {
    KShortcutsDialog_OnAccept((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_qbase_accept(void* self) {
    KShortcutsDialog_QBaseAccept((KShortcutsDialog*)self);
}

void k_shortcutsdialog_saved(void* self) {
    KShortcutsDialog_Saved((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_saved(void* self, void (*callback)(void*)) {
    KShortcutsDialog_Connect_Saved((KShortcutsDialog*)self, (intptr_t)callback);
}

const char* k_shortcutsdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shortcutsdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_add_collection2(void* self, void* collection, const char* title) {
    KShortcutsDialog_AddCollection2((KShortcutsDialog*)self, (KActionCollection*)collection, qstring(title));
}

bool k_shortcutsdialog_configure1(void* self, bool saveSettings) {
    return KShortcutsDialog_Configure1((KShortcutsDialog*)self, saveSettings);
}

void k_shortcutsdialog_show_dialog2(void* collection, int32_t allowLetterShortcuts) {
    KShortcutsDialog_ShowDialog2((KActionCollection*)collection, allowLetterShortcuts);
}

void k_shortcutsdialog_show_dialog3(void* collection, int32_t allowLetterShortcuts, void* parent) {
    KShortcutsDialog_ShowDialog3((KActionCollection*)collection, allowLetterShortcuts, (QWidget*)parent);
}

int32_t k_shortcutsdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_shortcutsdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_shortcutsdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_shortcutsdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_shortcutsdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_shortcutsdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_shortcutsdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_shortcutsdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_shortcutsdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_shortcutsdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_shortcutsdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_shortcutsdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_shortcutsdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_shortcutsdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_shortcutsdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_shortcutsdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_shortcutsdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_shortcutsdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_shortcutsdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_shortcutsdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_shortcutsdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_shortcutsdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_shortcutsdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_shortcutsdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_shortcutsdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_shortcutsdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_shortcutsdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_shortcutsdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_shortcutsdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_shortcutsdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_shortcutsdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_shortcutsdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_shortcutsdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_shortcutsdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_shortcutsdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_shortcutsdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_shortcutsdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_shortcutsdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_shortcutsdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_shortcutsdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_shortcutsdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_shortcutsdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_shortcutsdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_shortcutsdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_shortcutsdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_shortcutsdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_shortcutsdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_shortcutsdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_shortcutsdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_shortcutsdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_shortcutsdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_shortcutsdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_shortcutsdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_shortcutsdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_shortcutsdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_shortcutsdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_shortcutsdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_shortcutsdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_shortcutsdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_shortcutsdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_shortcutsdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_shortcutsdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_shortcutsdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_shortcutsdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_shortcutsdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_shortcutsdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_shortcutsdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_shortcutsdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_shortcutsdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_shortcutsdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_shortcutsdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_shortcutsdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_shortcutsdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_shortcutsdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_shortcutsdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_shortcutsdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_shortcutsdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_shortcutsdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_shortcutsdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_shortcutsdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_shortcutsdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_shortcutsdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_shortcutsdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_shortcutsdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_shortcutsdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_shortcutsdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_shortcutsdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_shortcutsdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_shortcutsdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_shortcutsdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_shortcutsdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_shortcutsdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_shortcutsdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_shortcutsdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_shortcutsdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_shortcutsdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_shortcutsdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_shortcutsdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_shortcutsdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_shortcutsdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_shortcutsdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_shortcutsdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_shortcutsdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_shortcutsdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_shortcutsdialog_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_shortcutsdialog_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_shortcutsdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_shortcutsdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_shortcutsdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shortcutsdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_shortcutsdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_shortcutsdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_shortcutsdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_shortcutsdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_shortcutsdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_shortcutsdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_shortcutsdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_shortcutsdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_shortcutsdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_shortcutsdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_shortcutsdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_shortcutsdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_shortcutsdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shortcutsdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_shortcutsdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_shortcutsdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_shortcutsdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_shortcutsdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_shortcutsdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_shortcutsdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_shortcutsdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_shortcutsdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_shortcutsdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_shortcutsdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_shortcutsdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_shortcutsdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_shortcutsdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_shortcutsdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_shortcutsdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_shortcutsdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_shortcutsdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_shortcutsdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_shortcutsdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_shortcutsdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_shortcutsdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_shortcutsdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_shortcutsdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_shortcutsdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_shortcutsdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_shortcutsdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_shortcutsdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_shortcutsdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_shortcutsdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_shortcutsdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_shortcutsdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_shortcutsdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_shortcutsdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_shortcutsdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_shortcutsdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_shortcutsdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_shortcutsdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_shortcutsdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_shortcutsdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_shortcutsdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_shortcutsdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_shortcutsdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_shortcutsdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_shortcutsdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_shortcutsdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_shortcutsdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_shortcutsdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_shortcutsdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_shortcutsdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_shortcutsdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_shortcutsdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_shortcutsdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_shortcutsdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_shortcutsdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_shortcutsdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_shortcutsdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_shortcutsdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_shortcutsdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_shortcutsdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_shortcutsdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_shortcutsdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_shortcutsdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_shortcutsdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_shortcutsdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_shortcutsdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_shortcutsdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_shortcutsdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_shortcutsdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_shortcutsdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_shortcutsdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_shortcutsdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_shortcutsdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_shortcutsdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_shortcutsdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_shortcutsdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_shortcutsdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_shortcutsdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_shortcutsdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_shortcutsdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_shortcutsdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_shortcutsdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_shortcutsdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_shortcutsdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_shortcutsdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_shortcutsdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_shortcutsdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_shortcutsdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_shortcutsdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_shortcutsdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_shortcutsdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_shortcutsdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_shortcutsdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_shortcutsdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_shortcutsdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_shortcutsdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_shortcutsdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_shortcutsdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_shortcutsdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_shortcutsdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_shortcutsdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_shortcutsdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_shortcutsdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_shortcutsdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_shortcutsdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_shortcutsdialog_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_shortcutsdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_shortcutsdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_shortcutsdialog_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_shortcutsdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_shortcutsdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_shortcutsdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_shortcutsdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_shortcutsdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_shortcutsdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_shortcutsdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_shortcutsdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_shortcutsdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_shortcutsdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_shortcutsdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_shortcutsdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_shortcutsdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_shortcutsdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_shortcutsdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_shortcutsdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_shortcutsdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_shortcutsdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_shortcutsdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_shortcutsdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_shortcutsdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_shortcutsdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_shortcutsdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_shortcutsdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_shortcutsdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_shortcutsdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_shortcutsdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_shortcutsdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_shortcutsdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_shortcutsdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_shortcutsdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_shortcutsdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_shortcutsdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_shortcutsdialog_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_shortcutsdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_shortcutsdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_shortcutsdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_shortcutsdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_shortcutsdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_shortcutsdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_shortcutsdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_shortcutsdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shortcutsdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_shortcutsdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_shortcutsdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_shortcutsdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_shortcutsdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_shortcutsdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_shortcutsdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_shortcutsdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_shortcutsdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_shortcutsdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_shortcutsdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_shortcutsdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_shortcutsdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_shortcutsdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_shortcutsdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_shortcutsdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_shortcutsdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_shortcutsdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_shortcutsdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_shortcutsdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_shortcutsdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_shortcutsdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_shortcutsdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_shortcutsdialog_dynamic_property_names");
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

QBindingStorage* k_shortcutsdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_shortcutsdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_shortcutsdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_shortcutsdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_shortcutsdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_shortcutsdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_shortcutsdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_shortcutsdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_shortcutsdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_shortcutsdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_shortcutsdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_shortcutsdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_shortcutsdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_shortcutsdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_shortcutsdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_shortcutsdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_shortcutsdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_shortcutsdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_shortcutsdialog_set_visible(void* self, bool visible) {
    KShortcutsDialog_SetVisible((KShortcutsDialog*)self, visible);
}

void k_shortcutsdialog_qbase_set_visible(void* self, bool visible) {
    KShortcutsDialog_QBaseSetVisible((KShortcutsDialog*)self, visible);
}

void k_shortcutsdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KShortcutsDialog_OnSetVisible((KShortcutsDialog*)self, (intptr_t)callback);
}

QSize* k_shortcutsdialog_minimum_size_hint(void* self) {
    return KShortcutsDialog_MinimumSizeHint((KShortcutsDialog*)self);
}

QSize* k_shortcutsdialog_qbase_minimum_size_hint(void* self) {
    return KShortcutsDialog_QBaseMinimumSizeHint((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KShortcutsDialog_OnMinimumSizeHint((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_open(void* self) {
    KShortcutsDialog_Open((KShortcutsDialog*)self);
}

void k_shortcutsdialog_qbase_open(void* self) {
    KShortcutsDialog_QBaseOpen((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_open(void* self, void (*callback)()) {
    KShortcutsDialog_OnOpen((KShortcutsDialog*)self, (intptr_t)callback);
}

int32_t k_shortcutsdialog_exec(void* self) {
    return KShortcutsDialog_Exec((KShortcutsDialog*)self);
}

int32_t k_shortcutsdialog_qbase_exec(void* self) {
    return KShortcutsDialog_QBaseExec((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_exec(void* self, int32_t (*callback)()) {
    KShortcutsDialog_OnExec((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_done(void* self, int param1) {
    KShortcutsDialog_Done((KShortcutsDialog*)self, param1);
}

void k_shortcutsdialog_qbase_done(void* self, int param1) {
    KShortcutsDialog_QBaseDone((KShortcutsDialog*)self, param1);
}

void k_shortcutsdialog_on_done(void* self, void (*callback)(void*, int)) {
    KShortcutsDialog_OnDone((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_reject(void* self) {
    KShortcutsDialog_Reject((KShortcutsDialog*)self);
}

void k_shortcutsdialog_qbase_reject(void* self) {
    KShortcutsDialog_QBaseReject((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_reject(void* self, void (*callback)()) {
    KShortcutsDialog_OnReject((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_key_press_event(void* self, void* param1) {
    KShortcutsDialog_KeyPressEvent((KShortcutsDialog*)self, (QKeyEvent*)param1);
}

void k_shortcutsdialog_qbase_key_press_event(void* self, void* param1) {
    KShortcutsDialog_QBaseKeyPressEvent((KShortcutsDialog*)self, (QKeyEvent*)param1);
}

void k_shortcutsdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnKeyPressEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_close_event(void* self, void* param1) {
    KShortcutsDialog_CloseEvent((KShortcutsDialog*)self, (QCloseEvent*)param1);
}

void k_shortcutsdialog_qbase_close_event(void* self, void* param1) {
    KShortcutsDialog_QBaseCloseEvent((KShortcutsDialog*)self, (QCloseEvent*)param1);
}

void k_shortcutsdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnCloseEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_show_event(void* self, void* param1) {
    KShortcutsDialog_ShowEvent((KShortcutsDialog*)self, (QShowEvent*)param1);
}

void k_shortcutsdialog_qbase_show_event(void* self, void* param1) {
    KShortcutsDialog_QBaseShowEvent((KShortcutsDialog*)self, (QShowEvent*)param1);
}

void k_shortcutsdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnShowEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_resize_event(void* self, void* param1) {
    KShortcutsDialog_ResizeEvent((KShortcutsDialog*)self, (QResizeEvent*)param1);
}

void k_shortcutsdialog_qbase_resize_event(void* self, void* param1) {
    KShortcutsDialog_QBaseResizeEvent((KShortcutsDialog*)self, (QResizeEvent*)param1);
}

void k_shortcutsdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnResizeEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_context_menu_event(void* self, void* param1) {
    KShortcutsDialog_ContextMenuEvent((KShortcutsDialog*)self, (QContextMenuEvent*)param1);
}

void k_shortcutsdialog_qbase_context_menu_event(void* self, void* param1) {
    KShortcutsDialog_QBaseContextMenuEvent((KShortcutsDialog*)self, (QContextMenuEvent*)param1);
}

void k_shortcutsdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnContextMenuEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_event_filter(void* self, void* param1, void* param2) {
    return KShortcutsDialog_EventFilter((KShortcutsDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_shortcutsdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KShortcutsDialog_QBaseEventFilter((KShortcutsDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_shortcutsdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KShortcutsDialog_OnEventFilter((KShortcutsDialog*)self, (intptr_t)callback);
}

int32_t k_shortcutsdialog_dev_type(void* self) {
    return KShortcutsDialog_DevType((KShortcutsDialog*)self);
}

int32_t k_shortcutsdialog_qbase_dev_type(void* self) {
    return KShortcutsDialog_QBaseDevType((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_dev_type(void* self, int32_t (*callback)()) {
    KShortcutsDialog_OnDevType((KShortcutsDialog*)self, (intptr_t)callback);
}

int32_t k_shortcutsdialog_height_for_width(void* self, int param1) {
    return KShortcutsDialog_HeightForWidth((KShortcutsDialog*)self, param1);
}

int32_t k_shortcutsdialog_qbase_height_for_width(void* self, int param1) {
    return KShortcutsDialog_QBaseHeightForWidth((KShortcutsDialog*)self, param1);
}

void k_shortcutsdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KShortcutsDialog_OnHeightForWidth((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_has_height_for_width(void* self) {
    return KShortcutsDialog_HasHeightForWidth((KShortcutsDialog*)self);
}

bool k_shortcutsdialog_qbase_has_height_for_width(void* self) {
    return KShortcutsDialog_QBaseHasHeightForWidth((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KShortcutsDialog_OnHasHeightForWidth((KShortcutsDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_shortcutsdialog_paint_engine(void* self) {
    return KShortcutsDialog_PaintEngine((KShortcutsDialog*)self);
}

QPaintEngine* k_shortcutsdialog_qbase_paint_engine(void* self) {
    return KShortcutsDialog_QBasePaintEngine((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KShortcutsDialog_OnPaintEngine((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_event(void* self, void* event) {
    return KShortcutsDialog_Event((KShortcutsDialog*)self, (QEvent*)event);
}

bool k_shortcutsdialog_qbase_event(void* self, void* event) {
    return KShortcutsDialog_QBaseEvent((KShortcutsDialog*)self, (QEvent*)event);
}

void k_shortcutsdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KShortcutsDialog_OnEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_mouse_press_event(void* self, void* event) {
    KShortcutsDialog_MousePressEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_qbase_mouse_press_event(void* self, void* event) {
    KShortcutsDialog_QBaseMousePressEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnMousePressEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_mouse_release_event(void* self, void* event) {
    KShortcutsDialog_MouseReleaseEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_qbase_mouse_release_event(void* self, void* event) {
    KShortcutsDialog_QBaseMouseReleaseEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnMouseReleaseEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_mouse_double_click_event(void* self, void* event) {
    KShortcutsDialog_MouseDoubleClickEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_qbase_mouse_double_click_event(void* self, void* event) {
    KShortcutsDialog_QBaseMouseDoubleClickEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnMouseDoubleClickEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_mouse_move_event(void* self, void* event) {
    KShortcutsDialog_MouseMoveEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_qbase_mouse_move_event(void* self, void* event) {
    KShortcutsDialog_QBaseMouseMoveEvent((KShortcutsDialog*)self, (QMouseEvent*)event);
}

void k_shortcutsdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnMouseMoveEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_wheel_event(void* self, void* event) {
    KShortcutsDialog_WheelEvent((KShortcutsDialog*)self, (QWheelEvent*)event);
}

void k_shortcutsdialog_qbase_wheel_event(void* self, void* event) {
    KShortcutsDialog_QBaseWheelEvent((KShortcutsDialog*)self, (QWheelEvent*)event);
}

void k_shortcutsdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnWheelEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_key_release_event(void* self, void* event) {
    KShortcutsDialog_KeyReleaseEvent((KShortcutsDialog*)self, (QKeyEvent*)event);
}

void k_shortcutsdialog_qbase_key_release_event(void* self, void* event) {
    KShortcutsDialog_QBaseKeyReleaseEvent((KShortcutsDialog*)self, (QKeyEvent*)event);
}

void k_shortcutsdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnKeyReleaseEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_focus_in_event(void* self, void* event) {
    KShortcutsDialog_FocusInEvent((KShortcutsDialog*)self, (QFocusEvent*)event);
}

void k_shortcutsdialog_qbase_focus_in_event(void* self, void* event) {
    KShortcutsDialog_QBaseFocusInEvent((KShortcutsDialog*)self, (QFocusEvent*)event);
}

void k_shortcutsdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnFocusInEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_focus_out_event(void* self, void* event) {
    KShortcutsDialog_FocusOutEvent((KShortcutsDialog*)self, (QFocusEvent*)event);
}

void k_shortcutsdialog_qbase_focus_out_event(void* self, void* event) {
    KShortcutsDialog_QBaseFocusOutEvent((KShortcutsDialog*)self, (QFocusEvent*)event);
}

void k_shortcutsdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnFocusOutEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_enter_event(void* self, void* event) {
    KShortcutsDialog_EnterEvent((KShortcutsDialog*)self, (QEnterEvent*)event);
}

void k_shortcutsdialog_qbase_enter_event(void* self, void* event) {
    KShortcutsDialog_QBaseEnterEvent((KShortcutsDialog*)self, (QEnterEvent*)event);
}

void k_shortcutsdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnEnterEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_leave_event(void* self, void* event) {
    KShortcutsDialog_LeaveEvent((KShortcutsDialog*)self, (QEvent*)event);
}

void k_shortcutsdialog_qbase_leave_event(void* self, void* event) {
    KShortcutsDialog_QBaseLeaveEvent((KShortcutsDialog*)self, (QEvent*)event);
}

void k_shortcutsdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnLeaveEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_paint_event(void* self, void* event) {
    KShortcutsDialog_PaintEvent((KShortcutsDialog*)self, (QPaintEvent*)event);
}

void k_shortcutsdialog_qbase_paint_event(void* self, void* event) {
    KShortcutsDialog_QBasePaintEvent((KShortcutsDialog*)self, (QPaintEvent*)event);
}

void k_shortcutsdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnPaintEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_move_event(void* self, void* event) {
    KShortcutsDialog_MoveEvent((KShortcutsDialog*)self, (QMoveEvent*)event);
}

void k_shortcutsdialog_qbase_move_event(void* self, void* event) {
    KShortcutsDialog_QBaseMoveEvent((KShortcutsDialog*)self, (QMoveEvent*)event);
}

void k_shortcutsdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnMoveEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_tablet_event(void* self, void* event) {
    KShortcutsDialog_TabletEvent((KShortcutsDialog*)self, (QTabletEvent*)event);
}

void k_shortcutsdialog_qbase_tablet_event(void* self, void* event) {
    KShortcutsDialog_QBaseTabletEvent((KShortcutsDialog*)self, (QTabletEvent*)event);
}

void k_shortcutsdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnTabletEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_action_event(void* self, void* event) {
    KShortcutsDialog_ActionEvent((KShortcutsDialog*)self, (QActionEvent*)event);
}

void k_shortcutsdialog_qbase_action_event(void* self, void* event) {
    KShortcutsDialog_QBaseActionEvent((KShortcutsDialog*)self, (QActionEvent*)event);
}

void k_shortcutsdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnActionEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_drag_enter_event(void* self, void* event) {
    KShortcutsDialog_DragEnterEvent((KShortcutsDialog*)self, (QDragEnterEvent*)event);
}

void k_shortcutsdialog_qbase_drag_enter_event(void* self, void* event) {
    KShortcutsDialog_QBaseDragEnterEvent((KShortcutsDialog*)self, (QDragEnterEvent*)event);
}

void k_shortcutsdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnDragEnterEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_drag_move_event(void* self, void* event) {
    KShortcutsDialog_DragMoveEvent((KShortcutsDialog*)self, (QDragMoveEvent*)event);
}

void k_shortcutsdialog_qbase_drag_move_event(void* self, void* event) {
    KShortcutsDialog_QBaseDragMoveEvent((KShortcutsDialog*)self, (QDragMoveEvent*)event);
}

void k_shortcutsdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnDragMoveEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_drag_leave_event(void* self, void* event) {
    KShortcutsDialog_DragLeaveEvent((KShortcutsDialog*)self, (QDragLeaveEvent*)event);
}

void k_shortcutsdialog_qbase_drag_leave_event(void* self, void* event) {
    KShortcutsDialog_QBaseDragLeaveEvent((KShortcutsDialog*)self, (QDragLeaveEvent*)event);
}

void k_shortcutsdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnDragLeaveEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_drop_event(void* self, void* event) {
    KShortcutsDialog_DropEvent((KShortcutsDialog*)self, (QDropEvent*)event);
}

void k_shortcutsdialog_qbase_drop_event(void* self, void* event) {
    KShortcutsDialog_QBaseDropEvent((KShortcutsDialog*)self, (QDropEvent*)event);
}

void k_shortcutsdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnDropEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_hide_event(void* self, void* event) {
    KShortcutsDialog_HideEvent((KShortcutsDialog*)self, (QHideEvent*)event);
}

void k_shortcutsdialog_qbase_hide_event(void* self, void* event) {
    KShortcutsDialog_QBaseHideEvent((KShortcutsDialog*)self, (QHideEvent*)event);
}

void k_shortcutsdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnHideEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KShortcutsDialog_NativeEvent((KShortcutsDialog*)self, qstring(eventType), message, result);
}

bool k_shortcutsdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KShortcutsDialog_QBaseNativeEvent((KShortcutsDialog*)self, qstring(eventType), message, result);
}

void k_shortcutsdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KShortcutsDialog_OnNativeEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_change_event(void* self, void* param1) {
    KShortcutsDialog_ChangeEvent((KShortcutsDialog*)self, (QEvent*)param1);
}

void k_shortcutsdialog_qbase_change_event(void* self, void* param1) {
    KShortcutsDialog_QBaseChangeEvent((KShortcutsDialog*)self, (QEvent*)param1);
}

void k_shortcutsdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnChangeEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

int32_t k_shortcutsdialog_metric(void* self, int32_t param1) {
    return KShortcutsDialog_Metric((KShortcutsDialog*)self, param1);
}

int32_t k_shortcutsdialog_qbase_metric(void* self, int32_t param1) {
    return KShortcutsDialog_QBaseMetric((KShortcutsDialog*)self, param1);
}

void k_shortcutsdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KShortcutsDialog_OnMetric((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_init_painter(void* self, void* painter) {
    KShortcutsDialog_InitPainter((KShortcutsDialog*)self, (QPainter*)painter);
}

void k_shortcutsdialog_qbase_init_painter(void* self, void* painter) {
    KShortcutsDialog_QBaseInitPainter((KShortcutsDialog*)self, (QPainter*)painter);
}

void k_shortcutsdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnInitPainter((KShortcutsDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_shortcutsdialog_redirected(void* self, void* offset) {
    return KShortcutsDialog_Redirected((KShortcutsDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_shortcutsdialog_qbase_redirected(void* self, void* offset) {
    return KShortcutsDialog_QBaseRedirected((KShortcutsDialog*)self, (QPoint*)offset);
}

void k_shortcutsdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KShortcutsDialog_OnRedirected((KShortcutsDialog*)self, (intptr_t)callback);
}

QPainter* k_shortcutsdialog_shared_painter(void* self) {
    return KShortcutsDialog_SharedPainter((KShortcutsDialog*)self);
}

QPainter* k_shortcutsdialog_qbase_shared_painter(void* self) {
    return KShortcutsDialog_QBaseSharedPainter((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KShortcutsDialog_OnSharedPainter((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_input_method_event(void* self, void* param1) {
    KShortcutsDialog_InputMethodEvent((KShortcutsDialog*)self, (QInputMethodEvent*)param1);
}

void k_shortcutsdialog_qbase_input_method_event(void* self, void* param1) {
    KShortcutsDialog_QBaseInputMethodEvent((KShortcutsDialog*)self, (QInputMethodEvent*)param1);
}

void k_shortcutsdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnInputMethodEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

QVariant* k_shortcutsdialog_input_method_query(void* self, int64_t param1) {
    return KShortcutsDialog_InputMethodQuery((KShortcutsDialog*)self, param1);
}

QVariant* k_shortcutsdialog_qbase_input_method_query(void* self, int64_t param1) {
    return KShortcutsDialog_QBaseInputMethodQuery((KShortcutsDialog*)self, param1);
}

void k_shortcutsdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KShortcutsDialog_OnInputMethodQuery((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_focus_next_prev_child(void* self, bool next) {
    return KShortcutsDialog_FocusNextPrevChild((KShortcutsDialog*)self, next);
}

bool k_shortcutsdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KShortcutsDialog_QBaseFocusNextPrevChild((KShortcutsDialog*)self, next);
}

void k_shortcutsdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KShortcutsDialog_OnFocusNextPrevChild((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_timer_event(void* self, void* event) {
    KShortcutsDialog_TimerEvent((KShortcutsDialog*)self, (QTimerEvent*)event);
}

void k_shortcutsdialog_qbase_timer_event(void* self, void* event) {
    KShortcutsDialog_QBaseTimerEvent((KShortcutsDialog*)self, (QTimerEvent*)event);
}

void k_shortcutsdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnTimerEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_child_event(void* self, void* event) {
    KShortcutsDialog_ChildEvent((KShortcutsDialog*)self, (QChildEvent*)event);
}

void k_shortcutsdialog_qbase_child_event(void* self, void* event) {
    KShortcutsDialog_QBaseChildEvent((KShortcutsDialog*)self, (QChildEvent*)event);
}

void k_shortcutsdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnChildEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_custom_event(void* self, void* event) {
    KShortcutsDialog_CustomEvent((KShortcutsDialog*)self, (QEvent*)event);
}

void k_shortcutsdialog_qbase_custom_event(void* self, void* event) {
    KShortcutsDialog_QBaseCustomEvent((KShortcutsDialog*)self, (QEvent*)event);
}

void k_shortcutsdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnCustomEvent((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_connect_notify(void* self, void* signal) {
    KShortcutsDialog_ConnectNotify((KShortcutsDialog*)self, (QMetaMethod*)signal);
}

void k_shortcutsdialog_qbase_connect_notify(void* self, void* signal) {
    KShortcutsDialog_QBaseConnectNotify((KShortcutsDialog*)self, (QMetaMethod*)signal);
}

void k_shortcutsdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnConnectNotify((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_disconnect_notify(void* self, void* signal) {
    KShortcutsDialog_DisconnectNotify((KShortcutsDialog*)self, (QMetaMethod*)signal);
}

void k_shortcutsdialog_qbase_disconnect_notify(void* self, void* signal) {
    KShortcutsDialog_QBaseDisconnectNotify((KShortcutsDialog*)self, (QMetaMethod*)signal);
}

void k_shortcutsdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnDisconnectNotify((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_adjust_position(void* self, void* param1) {
    KShortcutsDialog_AdjustPosition((KShortcutsDialog*)self, (QWidget*)param1);
}

void k_shortcutsdialog_qbase_adjust_position(void* self, void* param1) {
    KShortcutsDialog_QBaseAdjustPosition((KShortcutsDialog*)self, (QWidget*)param1);
}

void k_shortcutsdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KShortcutsDialog_OnAdjustPosition((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_update_micro_focus(void* self) {
    KShortcutsDialog_UpdateMicroFocus((KShortcutsDialog*)self);
}

void k_shortcutsdialog_qbase_update_micro_focus(void* self) {
    KShortcutsDialog_QBaseUpdateMicroFocus((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_update_micro_focus(void* self, void (*callback)()) {
    KShortcutsDialog_OnUpdateMicroFocus((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_create(void* self) {
    KShortcutsDialog_Create((KShortcutsDialog*)self);
}

void k_shortcutsdialog_qbase_create(void* self) {
    KShortcutsDialog_QBaseCreate((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_create(void* self, void (*callback)()) {
    KShortcutsDialog_OnCreate((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_destroy(void* self) {
    KShortcutsDialog_Destroy((KShortcutsDialog*)self);
}

void k_shortcutsdialog_qbase_destroy(void* self) {
    KShortcutsDialog_QBaseDestroy((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_destroy(void* self, void (*callback)()) {
    KShortcutsDialog_OnDestroy((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_focus_next_child(void* self) {
    return KShortcutsDialog_FocusNextChild((KShortcutsDialog*)self);
}

bool k_shortcutsdialog_qbase_focus_next_child(void* self) {
    return KShortcutsDialog_QBaseFocusNextChild((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_focus_next_child(void* self, bool (*callback)()) {
    KShortcutsDialog_OnFocusNextChild((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_focus_previous_child(void* self) {
    return KShortcutsDialog_FocusPreviousChild((KShortcutsDialog*)self);
}

bool k_shortcutsdialog_qbase_focus_previous_child(void* self) {
    return KShortcutsDialog_QBaseFocusPreviousChild((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KShortcutsDialog_OnFocusPreviousChild((KShortcutsDialog*)self, (intptr_t)callback);
}

QObject* k_shortcutsdialog_sender(void* self) {
    return KShortcutsDialog_Sender((KShortcutsDialog*)self);
}

QObject* k_shortcutsdialog_qbase_sender(void* self) {
    return KShortcutsDialog_QBaseSender((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_sender(void* self, QObject* (*callback)()) {
    KShortcutsDialog_OnSender((KShortcutsDialog*)self, (intptr_t)callback);
}

int32_t k_shortcutsdialog_sender_signal_index(void* self) {
    return KShortcutsDialog_SenderSignalIndex((KShortcutsDialog*)self);
}

int32_t k_shortcutsdialog_qbase_sender_signal_index(void* self) {
    return KShortcutsDialog_QBaseSenderSignalIndex((KShortcutsDialog*)self);
}

void k_shortcutsdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KShortcutsDialog_OnSenderSignalIndex((KShortcutsDialog*)self, (intptr_t)callback);
}

int32_t k_shortcutsdialog_receivers(void* self, const char* signal) {
    return KShortcutsDialog_Receivers((KShortcutsDialog*)self, signal);
}

int32_t k_shortcutsdialog_qbase_receivers(void* self, const char* signal) {
    return KShortcutsDialog_QBaseReceivers((KShortcutsDialog*)self, signal);
}

void k_shortcutsdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KShortcutsDialog_OnReceivers((KShortcutsDialog*)self, (intptr_t)callback);
}

bool k_shortcutsdialog_is_signal_connected(void* self, void* signal) {
    return KShortcutsDialog_IsSignalConnected((KShortcutsDialog*)self, (QMetaMethod*)signal);
}

bool k_shortcutsdialog_qbase_is_signal_connected(void* self, void* signal) {
    return KShortcutsDialog_QBaseIsSignalConnected((KShortcutsDialog*)self, (QMetaMethod*)signal);
}

void k_shortcutsdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KShortcutsDialog_OnIsSignalConnected((KShortcutsDialog*)self, (intptr_t)callback);
}

double k_shortcutsdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KShortcutsDialog_GetDecodedMetricF((KShortcutsDialog*)self, metricA, metricB);
}

double k_shortcutsdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KShortcutsDialog_QBaseGetDecodedMetricF((KShortcutsDialog*)self, metricA, metricB);
}

void k_shortcutsdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KShortcutsDialog_OnGetDecodedMetricF((KShortcutsDialog*)self, (intptr_t)callback);
}

void k_shortcutsdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_shortcutsdialog_delete(void* self) {
    KShortcutsDialog_Delete((KShortcutsDialog*)(self));
}
