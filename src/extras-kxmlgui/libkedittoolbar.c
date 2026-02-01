#include "libkactioncollection.hpp"
#include "libkxmlguifactory.hpp"
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
#include "libkedittoolbar.hpp"
#include "libkedittoolbar.h"

KEditToolBar* k_edittoolbar_new(void* collection) {
    return KEditToolBar_new((KActionCollection*)collection);
}

KEditToolBar* k_edittoolbar_new2(void* factory) {
    return KEditToolBar_new2((KXMLGUIFactory*)factory);
}

KEditToolBar* k_edittoolbar_new3(void* collection, void* parent) {
    return KEditToolBar_new3((KActionCollection*)collection, (QWidget*)parent);
}

KEditToolBar* k_edittoolbar_new4(void* factory, void* parent) {
    return KEditToolBar_new4((KXMLGUIFactory*)factory, (QWidget*)parent);
}

const QMetaObject* k_edittoolbar_meta_object(void* self) {
    return KEditToolBar_MetaObject((KEditToolBar*)self);
}

void k_edittoolbar_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KEditToolBar_OnMetaObject((KEditToolBar*)self, (intptr_t)callback);
}

const QMetaObject* k_edittoolbar_qbase_meta_object(void* self) {
    return KEditToolBar_QBaseMetaObject((KEditToolBar*)self);
}

void* k_edittoolbar_metacast(void* self, const char* param1) {
    return KEditToolBar_Metacast((KEditToolBar*)self, param1);
}

void k_edittoolbar_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KEditToolBar_OnMetacast((KEditToolBar*)self, (intptr_t)callback);
}

void* k_edittoolbar_qbase_metacast(void* self, const char* param1) {
    return KEditToolBar_QBaseMetacast((KEditToolBar*)self, param1);
}

int32_t k_edittoolbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEditToolBar_Metacall((KEditToolBar*)self, param1, param2, param3);
}

void k_edittoolbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KEditToolBar_OnMetacall((KEditToolBar*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KEditToolBar_QBaseMetacall((KEditToolBar*)self, param1, param2, param3);
}

const char* k_edittoolbar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_default_tool_bar(void* self, const char* toolBarName) {
    KEditToolBar_SetDefaultToolBar((KEditToolBar*)self, qstring(toolBarName));
}

void k_edittoolbar_set_resource_file(void* self, const char* file) {
    KEditToolBar_SetResourceFile((KEditToolBar*)self, qstring(file));
}

void k_edittoolbar_set_global_default_tool_bar(const char* toolBarName) {
    KEditToolBar_SetGlobalDefaultToolBar(qstring(toolBarName));
}

void k_edittoolbar_new_tool_bar_config(void* self) {
    KEditToolBar_NewToolBarConfig((KEditToolBar*)self);
}

void k_edittoolbar_on_new_tool_bar_config(void* self, void (*callback)(void*)) {
    KEditToolBar_Connect_NewToolBarConfig((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_show_event(void* self, void* event) {
    KEditToolBar_ShowEvent((KEditToolBar*)self, (QShowEvent*)event);
}

void k_edittoolbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnShowEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_qbase_show_event(void* self, void* event) {
    KEditToolBar_QBaseShowEvent((KEditToolBar*)self, (QShowEvent*)event);
}

void k_edittoolbar_hide_event(void* self, void* event) {
    KEditToolBar_HideEvent((KEditToolBar*)self, (QHideEvent*)event);
}

void k_edittoolbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnHideEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_qbase_hide_event(void* self, void* event) {
    KEditToolBar_QBaseHideEvent((KEditToolBar*)self, (QHideEvent*)event);
}

const char* k_edittoolbar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_edittoolbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_resource_file2(void* self, const char* file, bool global) {
    KEditToolBar_SetResourceFile2((KEditToolBar*)self, qstring(file), global);
}

int32_t k_edittoolbar_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_edittoolbar_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_edittoolbar_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_edittoolbar_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_edittoolbar_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_edittoolbar_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_edittoolbar_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_edittoolbar_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_edittoolbar_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_edittoolbar_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_edittoolbar_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_edittoolbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_edittoolbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_edittoolbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_edittoolbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_edittoolbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_edittoolbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_edittoolbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_edittoolbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_edittoolbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_edittoolbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_edittoolbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_edittoolbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_edittoolbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_edittoolbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_edittoolbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_edittoolbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_edittoolbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_edittoolbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_edittoolbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_edittoolbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_edittoolbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_edittoolbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_edittoolbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_edittoolbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_edittoolbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_edittoolbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_edittoolbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_edittoolbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_edittoolbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_edittoolbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_edittoolbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_edittoolbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_edittoolbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_edittoolbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_edittoolbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_edittoolbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_edittoolbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_edittoolbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_edittoolbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_edittoolbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_edittoolbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_edittoolbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_edittoolbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_edittoolbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_edittoolbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_edittoolbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_edittoolbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_edittoolbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_edittoolbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_edittoolbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_edittoolbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_edittoolbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_edittoolbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_edittoolbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_edittoolbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_edittoolbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_edittoolbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_edittoolbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_edittoolbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_edittoolbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_edittoolbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_edittoolbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_edittoolbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_edittoolbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_edittoolbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_edittoolbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_edittoolbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_edittoolbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_edittoolbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_edittoolbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_edittoolbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_edittoolbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_edittoolbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_edittoolbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_edittoolbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_edittoolbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_edittoolbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_edittoolbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_edittoolbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_edittoolbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_edittoolbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_edittoolbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_edittoolbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_edittoolbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_edittoolbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_edittoolbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_edittoolbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_edittoolbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_edittoolbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_edittoolbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_edittoolbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_edittoolbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_edittoolbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_edittoolbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_edittoolbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_edittoolbar_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_edittoolbar_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_edittoolbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_edittoolbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_edittoolbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_edittoolbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_edittoolbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_edittoolbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_edittoolbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_edittoolbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_edittoolbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_edittoolbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_edittoolbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_edittoolbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_edittoolbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_edittoolbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_edittoolbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_edittoolbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_edittoolbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_edittoolbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_edittoolbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_edittoolbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_edittoolbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_edittoolbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_edittoolbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_edittoolbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_edittoolbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_edittoolbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_edittoolbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_edittoolbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_edittoolbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_edittoolbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_edittoolbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_edittoolbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_edittoolbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_edittoolbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_edittoolbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_edittoolbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_edittoolbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_edittoolbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_edittoolbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_edittoolbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_edittoolbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_edittoolbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_edittoolbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_edittoolbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_edittoolbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_edittoolbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_edittoolbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_edittoolbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_edittoolbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_edittoolbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_edittoolbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_edittoolbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_edittoolbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_edittoolbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_edittoolbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_edittoolbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_edittoolbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_edittoolbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_edittoolbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_edittoolbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_edittoolbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_edittoolbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_edittoolbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_edittoolbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_edittoolbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_edittoolbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_edittoolbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_edittoolbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_edittoolbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_edittoolbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_edittoolbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_edittoolbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_edittoolbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_edittoolbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_edittoolbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_edittoolbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_edittoolbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_edittoolbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_edittoolbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_edittoolbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_edittoolbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_edittoolbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_edittoolbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_edittoolbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_edittoolbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_edittoolbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_edittoolbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_edittoolbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_edittoolbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_edittoolbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_edittoolbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_edittoolbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_edittoolbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_edittoolbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_edittoolbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_edittoolbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_edittoolbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_edittoolbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_edittoolbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_edittoolbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_edittoolbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_edittoolbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_edittoolbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_edittoolbar_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_edittoolbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_edittoolbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_edittoolbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_edittoolbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_edittoolbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_edittoolbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_edittoolbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_edittoolbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_edittoolbar_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_edittoolbar_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_edittoolbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_edittoolbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_edittoolbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_edittoolbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_edittoolbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_edittoolbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_edittoolbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_edittoolbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_edittoolbar_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_edittoolbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_edittoolbar_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_edittoolbar_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_edittoolbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_edittoolbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_edittoolbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_edittoolbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_edittoolbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_edittoolbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_edittoolbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_edittoolbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_edittoolbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_edittoolbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_edittoolbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_edittoolbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_edittoolbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_edittoolbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_edittoolbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_edittoolbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_edittoolbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_edittoolbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_edittoolbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_edittoolbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_edittoolbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_edittoolbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_edittoolbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_edittoolbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_edittoolbar_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_edittoolbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_edittoolbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_edittoolbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_edittoolbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_edittoolbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_edittoolbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_edittoolbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_edittoolbar_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_edittoolbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_edittoolbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_edittoolbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_edittoolbar_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_edittoolbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_edittoolbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_edittoolbar_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_edittoolbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_edittoolbar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_edittoolbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_edittoolbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_edittoolbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_edittoolbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_edittoolbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_edittoolbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_edittoolbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_edittoolbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_edittoolbar_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_edittoolbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_edittoolbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_edittoolbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_edittoolbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_edittoolbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_edittoolbar_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_edittoolbar_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_edittoolbar_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_edittoolbar_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_edittoolbar_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_edittoolbar_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_edittoolbar_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_edittoolbar_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_edittoolbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_edittoolbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_edittoolbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_edittoolbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_edittoolbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_edittoolbar_dynamic_property_names\n");
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

QBindingStorage* k_edittoolbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_edittoolbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_edittoolbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_edittoolbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_edittoolbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_edittoolbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_edittoolbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_edittoolbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_edittoolbar_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_edittoolbar_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_edittoolbar_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_edittoolbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_edittoolbar_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_edittoolbar_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_edittoolbar_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_edittoolbar_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_edittoolbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_edittoolbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_edittoolbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_edittoolbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_edittoolbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_edittoolbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_edittoolbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_edittoolbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_edittoolbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_edittoolbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_edittoolbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_edittoolbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_edittoolbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_edittoolbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_edittoolbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_edittoolbar_set_visible(void* self, bool visible) {
    KEditToolBar_SetVisible((KEditToolBar*)self, visible);
}

void k_edittoolbar_qbase_set_visible(void* self, bool visible) {
    KEditToolBar_QBaseSetVisible((KEditToolBar*)self, visible);
}

void k_edittoolbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KEditToolBar_OnSetVisible((KEditToolBar*)self, (intptr_t)callback);
}

QSize* k_edittoolbar_size_hint(void* self) {
    return KEditToolBar_SizeHint((KEditToolBar*)self);
}

QSize* k_edittoolbar_qbase_size_hint(void* self) {
    return KEditToolBar_QBaseSizeHint((KEditToolBar*)self);
}

void k_edittoolbar_on_size_hint(void* self, QSize* (*callback)()) {
    KEditToolBar_OnSizeHint((KEditToolBar*)self, (intptr_t)callback);
}

QSize* k_edittoolbar_minimum_size_hint(void* self) {
    return KEditToolBar_MinimumSizeHint((KEditToolBar*)self);
}

QSize* k_edittoolbar_qbase_minimum_size_hint(void* self) {
    return KEditToolBar_QBaseMinimumSizeHint((KEditToolBar*)self);
}

void k_edittoolbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KEditToolBar_OnMinimumSizeHint((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_open(void* self) {
    KEditToolBar_Open((KEditToolBar*)self);
}

void k_edittoolbar_qbase_open(void* self) {
    KEditToolBar_QBaseOpen((KEditToolBar*)self);
}

void k_edittoolbar_on_open(void* self, void (*callback)()) {
    KEditToolBar_OnOpen((KEditToolBar*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_exec(void* self) {
    return KEditToolBar_Exec((KEditToolBar*)self);
}

int32_t k_edittoolbar_qbase_exec(void* self) {
    return KEditToolBar_QBaseExec((KEditToolBar*)self);
}

void k_edittoolbar_on_exec(void* self, int32_t (*callback)()) {
    KEditToolBar_OnExec((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_done(void* self, int param1) {
    KEditToolBar_Done((KEditToolBar*)self, param1);
}

void k_edittoolbar_qbase_done(void* self, int param1) {
    KEditToolBar_QBaseDone((KEditToolBar*)self, param1);
}

void k_edittoolbar_on_done(void* self, void (*callback)(void*, int)) {
    KEditToolBar_OnDone((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_accept(void* self) {
    KEditToolBar_Accept((KEditToolBar*)self);
}

void k_edittoolbar_qbase_accept(void* self) {
    KEditToolBar_QBaseAccept((KEditToolBar*)self);
}

void k_edittoolbar_on_accept(void* self, void (*callback)()) {
    KEditToolBar_OnAccept((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_reject(void* self) {
    KEditToolBar_Reject((KEditToolBar*)self);
}

void k_edittoolbar_qbase_reject(void* self) {
    KEditToolBar_QBaseReject((KEditToolBar*)self);
}

void k_edittoolbar_on_reject(void* self, void (*callback)()) {
    KEditToolBar_OnReject((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_key_press_event(void* self, void* param1) {
    KEditToolBar_KeyPressEvent((KEditToolBar*)self, (QKeyEvent*)param1);
}

void k_edittoolbar_qbase_key_press_event(void* self, void* param1) {
    KEditToolBar_QBaseKeyPressEvent((KEditToolBar*)self, (QKeyEvent*)param1);
}

void k_edittoolbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnKeyPressEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_close_event(void* self, void* param1) {
    KEditToolBar_CloseEvent((KEditToolBar*)self, (QCloseEvent*)param1);
}

void k_edittoolbar_qbase_close_event(void* self, void* param1) {
    KEditToolBar_QBaseCloseEvent((KEditToolBar*)self, (QCloseEvent*)param1);
}

void k_edittoolbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnCloseEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_resize_event(void* self, void* param1) {
    KEditToolBar_ResizeEvent((KEditToolBar*)self, (QResizeEvent*)param1);
}

void k_edittoolbar_qbase_resize_event(void* self, void* param1) {
    KEditToolBar_QBaseResizeEvent((KEditToolBar*)self, (QResizeEvent*)param1);
}

void k_edittoolbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnResizeEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_context_menu_event(void* self, void* param1) {
    KEditToolBar_ContextMenuEvent((KEditToolBar*)self, (QContextMenuEvent*)param1);
}

void k_edittoolbar_qbase_context_menu_event(void* self, void* param1) {
    KEditToolBar_QBaseContextMenuEvent((KEditToolBar*)self, (QContextMenuEvent*)param1);
}

void k_edittoolbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnContextMenuEvent((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_event_filter(void* self, void* param1, void* param2) {
    return KEditToolBar_EventFilter((KEditToolBar*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_edittoolbar_qbase_event_filter(void* self, void* param1, void* param2) {
    return KEditToolBar_QBaseEventFilter((KEditToolBar*)self, (QObject*)param1, (QEvent*)param2);
}

void k_edittoolbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KEditToolBar_OnEventFilter((KEditToolBar*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_dev_type(void* self) {
    return KEditToolBar_DevType((KEditToolBar*)self);
}

int32_t k_edittoolbar_qbase_dev_type(void* self) {
    return KEditToolBar_QBaseDevType((KEditToolBar*)self);
}

void k_edittoolbar_on_dev_type(void* self, int32_t (*callback)()) {
    KEditToolBar_OnDevType((KEditToolBar*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_height_for_width(void* self, int param1) {
    return KEditToolBar_HeightForWidth((KEditToolBar*)self, param1);
}

int32_t k_edittoolbar_qbase_height_for_width(void* self, int param1) {
    return KEditToolBar_QBaseHeightForWidth((KEditToolBar*)self, param1);
}

void k_edittoolbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KEditToolBar_OnHeightForWidth((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_has_height_for_width(void* self) {
    return KEditToolBar_HasHeightForWidth((KEditToolBar*)self);
}

bool k_edittoolbar_qbase_has_height_for_width(void* self) {
    return KEditToolBar_QBaseHasHeightForWidth((KEditToolBar*)self);
}

void k_edittoolbar_on_has_height_for_width(void* self, bool (*callback)()) {
    KEditToolBar_OnHasHeightForWidth((KEditToolBar*)self, (intptr_t)callback);
}

QPaintEngine* k_edittoolbar_paint_engine(void* self) {
    return KEditToolBar_PaintEngine((KEditToolBar*)self);
}

QPaintEngine* k_edittoolbar_qbase_paint_engine(void* self) {
    return KEditToolBar_QBasePaintEngine((KEditToolBar*)self);
}

void k_edittoolbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KEditToolBar_OnPaintEngine((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_event(void* self, void* event) {
    return KEditToolBar_Event((KEditToolBar*)self, (QEvent*)event);
}

bool k_edittoolbar_qbase_event(void* self, void* event) {
    return KEditToolBar_QBaseEvent((KEditToolBar*)self, (QEvent*)event);
}

void k_edittoolbar_on_event(void* self, bool (*callback)(void*, void*)) {
    KEditToolBar_OnEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_mouse_press_event(void* self, void* event) {
    KEditToolBar_MousePressEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_qbase_mouse_press_event(void* self, void* event) {
    KEditToolBar_QBaseMousePressEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnMousePressEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_mouse_release_event(void* self, void* event) {
    KEditToolBar_MouseReleaseEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_qbase_mouse_release_event(void* self, void* event) {
    KEditToolBar_QBaseMouseReleaseEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnMouseReleaseEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_mouse_double_click_event(void* self, void* event) {
    KEditToolBar_MouseDoubleClickEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_qbase_mouse_double_click_event(void* self, void* event) {
    KEditToolBar_QBaseMouseDoubleClickEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnMouseDoubleClickEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_mouse_move_event(void* self, void* event) {
    KEditToolBar_MouseMoveEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_qbase_mouse_move_event(void* self, void* event) {
    KEditToolBar_QBaseMouseMoveEvent((KEditToolBar*)self, (QMouseEvent*)event);
}

void k_edittoolbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnMouseMoveEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_wheel_event(void* self, void* event) {
    KEditToolBar_WheelEvent((KEditToolBar*)self, (QWheelEvent*)event);
}

void k_edittoolbar_qbase_wheel_event(void* self, void* event) {
    KEditToolBar_QBaseWheelEvent((KEditToolBar*)self, (QWheelEvent*)event);
}

void k_edittoolbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnWheelEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_key_release_event(void* self, void* event) {
    KEditToolBar_KeyReleaseEvent((KEditToolBar*)self, (QKeyEvent*)event);
}

void k_edittoolbar_qbase_key_release_event(void* self, void* event) {
    KEditToolBar_QBaseKeyReleaseEvent((KEditToolBar*)self, (QKeyEvent*)event);
}

void k_edittoolbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnKeyReleaseEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_focus_in_event(void* self, void* event) {
    KEditToolBar_FocusInEvent((KEditToolBar*)self, (QFocusEvent*)event);
}

void k_edittoolbar_qbase_focus_in_event(void* self, void* event) {
    KEditToolBar_QBaseFocusInEvent((KEditToolBar*)self, (QFocusEvent*)event);
}

void k_edittoolbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnFocusInEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_focus_out_event(void* self, void* event) {
    KEditToolBar_FocusOutEvent((KEditToolBar*)self, (QFocusEvent*)event);
}

void k_edittoolbar_qbase_focus_out_event(void* self, void* event) {
    KEditToolBar_QBaseFocusOutEvent((KEditToolBar*)self, (QFocusEvent*)event);
}

void k_edittoolbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnFocusOutEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_enter_event(void* self, void* event) {
    KEditToolBar_EnterEvent((KEditToolBar*)self, (QEnterEvent*)event);
}

void k_edittoolbar_qbase_enter_event(void* self, void* event) {
    KEditToolBar_QBaseEnterEvent((KEditToolBar*)self, (QEnterEvent*)event);
}

void k_edittoolbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnEnterEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_leave_event(void* self, void* event) {
    KEditToolBar_LeaveEvent((KEditToolBar*)self, (QEvent*)event);
}

void k_edittoolbar_qbase_leave_event(void* self, void* event) {
    KEditToolBar_QBaseLeaveEvent((KEditToolBar*)self, (QEvent*)event);
}

void k_edittoolbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnLeaveEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_paint_event(void* self, void* event) {
    KEditToolBar_PaintEvent((KEditToolBar*)self, (QPaintEvent*)event);
}

void k_edittoolbar_qbase_paint_event(void* self, void* event) {
    KEditToolBar_QBasePaintEvent((KEditToolBar*)self, (QPaintEvent*)event);
}

void k_edittoolbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnPaintEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_move_event(void* self, void* event) {
    KEditToolBar_MoveEvent((KEditToolBar*)self, (QMoveEvent*)event);
}

void k_edittoolbar_qbase_move_event(void* self, void* event) {
    KEditToolBar_QBaseMoveEvent((KEditToolBar*)self, (QMoveEvent*)event);
}

void k_edittoolbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnMoveEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_tablet_event(void* self, void* event) {
    KEditToolBar_TabletEvent((KEditToolBar*)self, (QTabletEvent*)event);
}

void k_edittoolbar_qbase_tablet_event(void* self, void* event) {
    KEditToolBar_QBaseTabletEvent((KEditToolBar*)self, (QTabletEvent*)event);
}

void k_edittoolbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnTabletEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_action_event(void* self, void* event) {
    KEditToolBar_ActionEvent((KEditToolBar*)self, (QActionEvent*)event);
}

void k_edittoolbar_qbase_action_event(void* self, void* event) {
    KEditToolBar_QBaseActionEvent((KEditToolBar*)self, (QActionEvent*)event);
}

void k_edittoolbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnActionEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_drag_enter_event(void* self, void* event) {
    KEditToolBar_DragEnterEvent((KEditToolBar*)self, (QDragEnterEvent*)event);
}

void k_edittoolbar_qbase_drag_enter_event(void* self, void* event) {
    KEditToolBar_QBaseDragEnterEvent((KEditToolBar*)self, (QDragEnterEvent*)event);
}

void k_edittoolbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnDragEnterEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_drag_move_event(void* self, void* event) {
    KEditToolBar_DragMoveEvent((KEditToolBar*)self, (QDragMoveEvent*)event);
}

void k_edittoolbar_qbase_drag_move_event(void* self, void* event) {
    KEditToolBar_QBaseDragMoveEvent((KEditToolBar*)self, (QDragMoveEvent*)event);
}

void k_edittoolbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnDragMoveEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_drag_leave_event(void* self, void* event) {
    KEditToolBar_DragLeaveEvent((KEditToolBar*)self, (QDragLeaveEvent*)event);
}

void k_edittoolbar_qbase_drag_leave_event(void* self, void* event) {
    KEditToolBar_QBaseDragLeaveEvent((KEditToolBar*)self, (QDragLeaveEvent*)event);
}

void k_edittoolbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnDragLeaveEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_drop_event(void* self, void* event) {
    KEditToolBar_DropEvent((KEditToolBar*)self, (QDropEvent*)event);
}

void k_edittoolbar_qbase_drop_event(void* self, void* event) {
    KEditToolBar_QBaseDropEvent((KEditToolBar*)self, (QDropEvent*)event);
}

void k_edittoolbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnDropEvent((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KEditToolBar_NativeEvent((KEditToolBar*)self, qstring(eventType), message, result);
}

bool k_edittoolbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KEditToolBar_QBaseNativeEvent((KEditToolBar*)self, qstring(eventType), message, result);
}

void k_edittoolbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KEditToolBar_OnNativeEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_change_event(void* self, void* param1) {
    KEditToolBar_ChangeEvent((KEditToolBar*)self, (QEvent*)param1);
}

void k_edittoolbar_qbase_change_event(void* self, void* param1) {
    KEditToolBar_QBaseChangeEvent((KEditToolBar*)self, (QEvent*)param1);
}

void k_edittoolbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnChangeEvent((KEditToolBar*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_metric(void* self, int32_t param1) {
    return KEditToolBar_Metric((KEditToolBar*)self, param1);
}

int32_t k_edittoolbar_qbase_metric(void* self, int32_t param1) {
    return KEditToolBar_QBaseMetric((KEditToolBar*)self, param1);
}

void k_edittoolbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KEditToolBar_OnMetric((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_init_painter(void* self, void* painter) {
    KEditToolBar_InitPainter((KEditToolBar*)self, (QPainter*)painter);
}

void k_edittoolbar_qbase_init_painter(void* self, void* painter) {
    KEditToolBar_QBaseInitPainter((KEditToolBar*)self, (QPainter*)painter);
}

void k_edittoolbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnInitPainter((KEditToolBar*)self, (intptr_t)callback);
}

QPaintDevice* k_edittoolbar_redirected(void* self, void* offset) {
    return KEditToolBar_Redirected((KEditToolBar*)self, (QPoint*)offset);
}

QPaintDevice* k_edittoolbar_qbase_redirected(void* self, void* offset) {
    return KEditToolBar_QBaseRedirected((KEditToolBar*)self, (QPoint*)offset);
}

void k_edittoolbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KEditToolBar_OnRedirected((KEditToolBar*)self, (intptr_t)callback);
}

QPainter* k_edittoolbar_shared_painter(void* self) {
    return KEditToolBar_SharedPainter((KEditToolBar*)self);
}

QPainter* k_edittoolbar_qbase_shared_painter(void* self) {
    return KEditToolBar_QBaseSharedPainter((KEditToolBar*)self);
}

void k_edittoolbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    KEditToolBar_OnSharedPainter((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_input_method_event(void* self, void* param1) {
    KEditToolBar_InputMethodEvent((KEditToolBar*)self, (QInputMethodEvent*)param1);
}

void k_edittoolbar_qbase_input_method_event(void* self, void* param1) {
    KEditToolBar_QBaseInputMethodEvent((KEditToolBar*)self, (QInputMethodEvent*)param1);
}

void k_edittoolbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnInputMethodEvent((KEditToolBar*)self, (intptr_t)callback);
}

QVariant* k_edittoolbar_input_method_query(void* self, int32_t param1) {
    return KEditToolBar_InputMethodQuery((KEditToolBar*)self, param1);
}

QVariant* k_edittoolbar_qbase_input_method_query(void* self, int32_t param1) {
    return KEditToolBar_QBaseInputMethodQuery((KEditToolBar*)self, param1);
}

void k_edittoolbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KEditToolBar_OnInputMethodQuery((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_focus_next_prev_child(void* self, bool next) {
    return KEditToolBar_FocusNextPrevChild((KEditToolBar*)self, next);
}

bool k_edittoolbar_qbase_focus_next_prev_child(void* self, bool next) {
    return KEditToolBar_QBaseFocusNextPrevChild((KEditToolBar*)self, next);
}

void k_edittoolbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KEditToolBar_OnFocusNextPrevChild((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_timer_event(void* self, void* event) {
    KEditToolBar_TimerEvent((KEditToolBar*)self, (QTimerEvent*)event);
}

void k_edittoolbar_qbase_timer_event(void* self, void* event) {
    KEditToolBar_QBaseTimerEvent((KEditToolBar*)self, (QTimerEvent*)event);
}

void k_edittoolbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnTimerEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_child_event(void* self, void* event) {
    KEditToolBar_ChildEvent((KEditToolBar*)self, (QChildEvent*)event);
}

void k_edittoolbar_qbase_child_event(void* self, void* event) {
    KEditToolBar_QBaseChildEvent((KEditToolBar*)self, (QChildEvent*)event);
}

void k_edittoolbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnChildEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_custom_event(void* self, void* event) {
    KEditToolBar_CustomEvent((KEditToolBar*)self, (QEvent*)event);
}

void k_edittoolbar_qbase_custom_event(void* self, void* event) {
    KEditToolBar_QBaseCustomEvent((KEditToolBar*)self, (QEvent*)event);
}

void k_edittoolbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnCustomEvent((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_connect_notify(void* self, void* signal) {
    KEditToolBar_ConnectNotify((KEditToolBar*)self, (QMetaMethod*)signal);
}

void k_edittoolbar_qbase_connect_notify(void* self, void* signal) {
    KEditToolBar_QBaseConnectNotify((KEditToolBar*)self, (QMetaMethod*)signal);
}

void k_edittoolbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnConnectNotify((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_disconnect_notify(void* self, void* signal) {
    KEditToolBar_DisconnectNotify((KEditToolBar*)self, (QMetaMethod*)signal);
}

void k_edittoolbar_qbase_disconnect_notify(void* self, void* signal) {
    KEditToolBar_QBaseDisconnectNotify((KEditToolBar*)self, (QMetaMethod*)signal);
}

void k_edittoolbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnDisconnectNotify((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_adjust_position(void* self, void* param1) {
    KEditToolBar_AdjustPosition((KEditToolBar*)self, (QWidget*)param1);
}

void k_edittoolbar_qbase_adjust_position(void* self, void* param1) {
    KEditToolBar_QBaseAdjustPosition((KEditToolBar*)self, (QWidget*)param1);
}

void k_edittoolbar_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KEditToolBar_OnAdjustPosition((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_update_micro_focus(void* self) {
    KEditToolBar_UpdateMicroFocus((KEditToolBar*)self);
}

void k_edittoolbar_qbase_update_micro_focus(void* self) {
    KEditToolBar_QBaseUpdateMicroFocus((KEditToolBar*)self);
}

void k_edittoolbar_on_update_micro_focus(void* self, void (*callback)()) {
    KEditToolBar_OnUpdateMicroFocus((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_create(void* self) {
    KEditToolBar_Create((KEditToolBar*)self);
}

void k_edittoolbar_qbase_create(void* self) {
    KEditToolBar_QBaseCreate((KEditToolBar*)self);
}

void k_edittoolbar_on_create(void* self, void (*callback)()) {
    KEditToolBar_OnCreate((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_destroy(void* self) {
    KEditToolBar_Destroy((KEditToolBar*)self);
}

void k_edittoolbar_qbase_destroy(void* self) {
    KEditToolBar_QBaseDestroy((KEditToolBar*)self);
}

void k_edittoolbar_on_destroy(void* self, void (*callback)()) {
    KEditToolBar_OnDestroy((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_focus_next_child(void* self) {
    return KEditToolBar_FocusNextChild((KEditToolBar*)self);
}

bool k_edittoolbar_qbase_focus_next_child(void* self) {
    return KEditToolBar_QBaseFocusNextChild((KEditToolBar*)self);
}

void k_edittoolbar_on_focus_next_child(void* self, bool (*callback)()) {
    KEditToolBar_OnFocusNextChild((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_focus_previous_child(void* self) {
    return KEditToolBar_FocusPreviousChild((KEditToolBar*)self);
}

bool k_edittoolbar_qbase_focus_previous_child(void* self) {
    return KEditToolBar_QBaseFocusPreviousChild((KEditToolBar*)self);
}

void k_edittoolbar_on_focus_previous_child(void* self, bool (*callback)()) {
    KEditToolBar_OnFocusPreviousChild((KEditToolBar*)self, (intptr_t)callback);
}

QObject* k_edittoolbar_sender(void* self) {
    return KEditToolBar_Sender((KEditToolBar*)self);
}

QObject* k_edittoolbar_qbase_sender(void* self) {
    return KEditToolBar_QBaseSender((KEditToolBar*)self);
}

void k_edittoolbar_on_sender(void* self, QObject* (*callback)()) {
    KEditToolBar_OnSender((KEditToolBar*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_sender_signal_index(void* self) {
    return KEditToolBar_SenderSignalIndex((KEditToolBar*)self);
}

int32_t k_edittoolbar_qbase_sender_signal_index(void* self) {
    return KEditToolBar_QBaseSenderSignalIndex((KEditToolBar*)self);
}

void k_edittoolbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KEditToolBar_OnSenderSignalIndex((KEditToolBar*)self, (intptr_t)callback);
}

int32_t k_edittoolbar_receivers(void* self, const char* signal) {
    return KEditToolBar_Receivers((KEditToolBar*)self, signal);
}

int32_t k_edittoolbar_qbase_receivers(void* self, const char* signal) {
    return KEditToolBar_QBaseReceivers((KEditToolBar*)self, signal);
}

void k_edittoolbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KEditToolBar_OnReceivers((KEditToolBar*)self, (intptr_t)callback);
}

bool k_edittoolbar_is_signal_connected(void* self, void* signal) {
    return KEditToolBar_IsSignalConnected((KEditToolBar*)self, (QMetaMethod*)signal);
}

bool k_edittoolbar_qbase_is_signal_connected(void* self, void* signal) {
    return KEditToolBar_QBaseIsSignalConnected((KEditToolBar*)self, (QMetaMethod*)signal);
}

void k_edittoolbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KEditToolBar_OnIsSignalConnected((KEditToolBar*)self, (intptr_t)callback);
}

double k_edittoolbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KEditToolBar_GetDecodedMetricF((KEditToolBar*)self, metricA, metricB);
}

double k_edittoolbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KEditToolBar_QBaseGetDecodedMetricF((KEditToolBar*)self, metricA, metricB);
}

void k_edittoolbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KEditToolBar_OnGetDecodedMetricF((KEditToolBar*)self, (intptr_t)callback);
}

void k_edittoolbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_edittoolbar_delete(void* self) {
    KEditToolBar_Delete((KEditToolBar*)(self));
}
