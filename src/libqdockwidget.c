#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqdockwidget.hpp"
#include "libqdockwidget.h"

QDockWidget* q_dockwidget_new(void* parent) {
    return QDockWidget_new((QWidget*)parent);
}

QDockWidget* q_dockwidget_new2(const char* title) {
    return QDockWidget_new2(qstring(title));
}

QDockWidget* q_dockwidget_new3() {
    return QDockWidget_new3();
}

QDockWidget* q_dockwidget_new4(const char* title, void* parent) {
    return QDockWidget_new4(qstring(title), (QWidget*)parent);
}

QDockWidget* q_dockwidget_new5(const char* title, void* parent, int32_t flags) {
    return QDockWidget_new5(qstring(title), (QWidget*)parent, flags);
}

QDockWidget* q_dockwidget_new6(void* parent, int32_t flags) {
    return QDockWidget_new6((QWidget*)parent, flags);
}

const QMetaObject* q_dockwidget_meta_object(void* self) {
    return QDockWidget_MetaObject((QDockWidget*)self);
}

void q_dockwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDockWidget_OnMetaObject((QDockWidget*)self, (intptr_t)callback);
}

const QMetaObject* q_dockwidget_qbase_meta_object(void* self) {
    return QDockWidget_QBaseMetaObject((QDockWidget*)self);
}

void* q_dockwidget_metacast(void* self, const char* param1) {
    return QDockWidget_Metacast((QDockWidget*)self, param1);
}

void q_dockwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDockWidget_OnMetacast((QDockWidget*)self, (intptr_t)callback);
}

void* q_dockwidget_qbase_metacast(void* self, const char* param1) {
    return QDockWidget_QBaseMetacast((QDockWidget*)self, param1);
}

int32_t q_dockwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDockWidget_Metacall((QDockWidget*)self, param1, param2, param3);
}

void q_dockwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDockWidget_OnMetacall((QDockWidget*)self, (intptr_t)callback);
}

int32_t q_dockwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDockWidget_QBaseMetacall((QDockWidget*)self, param1, param2, param3);
}

const char* q_dockwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* q_dockwidget_widget(void* self) {
    return QDockWidget_Widget((QDockWidget*)self);
}

void q_dockwidget_set_widget(void* self, void* widget) {
    QDockWidget_SetWidget((QDockWidget*)self, (QWidget*)widget);
}

void q_dockwidget_set_features(void* self, int32_t features) {
    QDockWidget_SetFeatures((QDockWidget*)self, features);
}

int32_t q_dockwidget_features(void* self) {
    return QDockWidget_Features((QDockWidget*)self);
}

void q_dockwidget_set_floating(void* self, bool floating) {
    QDockWidget_SetFloating((QDockWidget*)self, floating);
}

bool q_dockwidget_is_floating(void* self) {
    return QDockWidget_IsFloating((QDockWidget*)self);
}

void q_dockwidget_set_allowed_areas(void* self, int32_t areas) {
    QDockWidget_SetAllowedAreas((QDockWidget*)self, areas);
}

int32_t q_dockwidget_allowed_areas(void* self) {
    return QDockWidget_AllowedAreas((QDockWidget*)self);
}

void q_dockwidget_set_title_bar_widget(void* self, void* widget) {
    QDockWidget_SetTitleBarWidget((QDockWidget*)self, (QWidget*)widget);
}

QWidget* q_dockwidget_title_bar_widget(void* self) {
    return QDockWidget_TitleBarWidget((QDockWidget*)self);
}

bool q_dockwidget_is_area_allowed(void* self, int32_t area) {
    return QDockWidget_IsAreaAllowed((QDockWidget*)self, area);
}

QAction* q_dockwidget_toggle_view_action(void* self) {
    return QDockWidget_ToggleViewAction((QDockWidget*)self);
}

void q_dockwidget_features_changed(void* self, int32_t features) {
    QDockWidget_FeaturesChanged((QDockWidget*)self, features);
}

void q_dockwidget_on_features_changed(void* self, void (*callback)(void*, int32_t)) {
    QDockWidget_Connect_FeaturesChanged((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_top_level_changed(void* self, bool topLevel) {
    QDockWidget_TopLevelChanged((QDockWidget*)self, topLevel);
}

void q_dockwidget_on_top_level_changed(void* self, void (*callback)(void*, bool)) {
    QDockWidget_Connect_TopLevelChanged((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_allowed_areas_changed(void* self, int32_t allowedAreas) {
    QDockWidget_AllowedAreasChanged((QDockWidget*)self, allowedAreas);
}

void q_dockwidget_on_allowed_areas_changed(void* self, void (*callback)(void*, int32_t)) {
    QDockWidget_Connect_AllowedAreasChanged((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_visibility_changed(void* self, bool visible) {
    QDockWidget_VisibilityChanged((QDockWidget*)self, visible);
}

void q_dockwidget_on_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QDockWidget_Connect_VisibilityChanged((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_dock_location_changed(void* self, int32_t area) {
    QDockWidget_DockLocationChanged((QDockWidget*)self, area);
}

void q_dockwidget_on_dock_location_changed(void* self, void (*callback)(void*, int32_t)) {
    QDockWidget_Connect_DockLocationChanged((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_change_event(void* self, void* event) {
    QDockWidget_ChangeEvent((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnChangeEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_qbase_change_event(void* self, void* event) {
    QDockWidget_QBaseChangeEvent((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_close_event(void* self, void* event) {
    QDockWidget_CloseEvent((QDockWidget*)self, (QCloseEvent*)event);
}

void q_dockwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnCloseEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_qbase_close_event(void* self, void* event) {
    QDockWidget_QBaseCloseEvent((QDockWidget*)self, (QCloseEvent*)event);
}

void q_dockwidget_paint_event(void* self, void* event) {
    QDockWidget_PaintEvent((QDockWidget*)self, (QPaintEvent*)event);
}

void q_dockwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnPaintEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_qbase_paint_event(void* self, void* event) {
    QDockWidget_QBasePaintEvent((QDockWidget*)self, (QPaintEvent*)event);
}

bool q_dockwidget_event(void* self, void* event) {
    return QDockWidget_Event((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QDockWidget_OnEvent((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_qbase_event(void* self, void* event) {
    return QDockWidget_QBaseEvent((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_init_style_option(void* self, void* option) {
    QDockWidget_InitStyleOption((QDockWidget*)self, (QStyleOptionDockWidget*)option);
}

void q_dockwidget_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnInitStyleOption((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_qbase_init_style_option(void* self, void* option) {
    QDockWidget_QBaseInitStyleOption((QDockWidget*)self, (QStyleOptionDockWidget*)option);
}

const char* q_dockwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dockwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_dockwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_dockwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_dockwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_dockwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_dockwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_dockwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_dockwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_dockwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_dockwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_dockwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_dockwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_dockwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_dockwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_dockwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_dockwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_dockwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_dockwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_dockwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_dockwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_dockwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_dockwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_dockwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_dockwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_dockwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_dockwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_dockwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_dockwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_dockwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_dockwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_dockwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_dockwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_dockwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_dockwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_dockwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_dockwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_dockwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_dockwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_dockwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_dockwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_dockwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_dockwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_dockwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_dockwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_dockwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_dockwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_dockwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_dockwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_dockwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_dockwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_dockwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_dockwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_dockwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_dockwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_dockwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dockwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dockwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dockwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dockwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dockwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dockwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dockwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dockwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dockwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_dockwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dockwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_dockwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_dockwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_dockwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_dockwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_dockwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_dockwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_dockwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_dockwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_dockwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_dockwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_dockwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_dockwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_dockwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_dockwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_dockwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_dockwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_dockwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_dockwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_dockwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_dockwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_dockwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_dockwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_dockwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_dockwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_dockwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_dockwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_dockwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_dockwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_dockwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_dockwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_dockwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_dockwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_dockwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_dockwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_dockwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dockwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_dockwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_dockwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_dockwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_dockwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_dockwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_dockwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_dockwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_dockwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_dockwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_dockwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_dockwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_dockwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_dockwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dockwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_dockwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_dockwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_dockwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_dockwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_dockwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_dockwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_dockwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_dockwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_dockwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_dockwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_dockwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_dockwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_dockwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_dockwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_dockwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_dockwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_dockwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_dockwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_dockwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_dockwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_dockwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_dockwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_dockwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_dockwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_dockwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_dockwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_dockwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_dockwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_dockwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_dockwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_dockwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_dockwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_dockwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_dockwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_dockwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_dockwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_dockwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_dockwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_dockwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_dockwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_dockwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_dockwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_dockwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_dockwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_dockwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_dockwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_dockwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_dockwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_dockwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_dockwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_dockwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_dockwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_dockwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_dockwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_dockwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_dockwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_dockwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_dockwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_dockwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_dockwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_dockwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_dockwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dockwidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_dockwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_dockwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_dockwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_dockwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_dockwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_dockwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_dockwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_dockwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_dockwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_dockwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_dockwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_dockwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_dockwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_dockwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_dockwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_dockwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_dockwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_dockwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_dockwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_dockwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_dockwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_dockwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_dockwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_dockwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_dockwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_dockwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_dockwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_dockwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_dockwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_dockwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_dockwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_dockwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_dockwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_dockwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_dockwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_dockwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_dockwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_dockwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_dockwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_dockwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_dockwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_dockwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_dockwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_dockwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_dockwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_dockwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_dockwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_dockwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_dockwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_dockwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_dockwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_dockwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_dockwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_dockwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_dockwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_dockwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_dockwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_dockwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_dockwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_dockwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_dockwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_dockwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_dockwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_dockwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_dockwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_dockwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_dockwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_dockwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_dockwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_dockwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_dockwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_dockwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_dockwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dockwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_dockwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_dockwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dockwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_dockwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_dockwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_dockwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_dockwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_dockwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_dockwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_dockwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_dockwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_dockwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_dockwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dockwidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dockwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dockwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dockwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dockwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dockwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dockwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dockwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dockwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dockwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dockwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dockwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dockwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dockwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dockwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dockwidget_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_dockwidget_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dockwidget_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dockwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_dockwidget_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dockwidget_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_dockwidget_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_dockwidget_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_dockwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dockwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dockwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dockwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dockwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dockwidget_dynamic_property_names\n");
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

QBindingStorage* q_dockwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dockwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dockwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dockwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dockwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dockwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dockwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_dockwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dockwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dockwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_dockwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dockwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_dockwidget_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_dockwidget_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_dockwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_dockwidget_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_dockwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dockwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dockwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_dockwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_dockwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_dockwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_dockwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_dockwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_dockwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_dockwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_dockwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_dockwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_dockwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_dockwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_dockwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_dockwidget_dev_type(void* self) {
    return QDockWidget_DevType((QDockWidget*)self);
}

int32_t q_dockwidget_qbase_dev_type(void* self) {
    return QDockWidget_QBaseDevType((QDockWidget*)self);
}

void q_dockwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QDockWidget_OnDevType((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_set_visible(void* self, bool visible) {
    QDockWidget_SetVisible((QDockWidget*)self, visible);
}

void q_dockwidget_qbase_set_visible(void* self, bool visible) {
    QDockWidget_QBaseSetVisible((QDockWidget*)self, visible);
}

void q_dockwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QDockWidget_OnSetVisible((QDockWidget*)self, (intptr_t)callback);
}

QSize* q_dockwidget_size_hint(void* self) {
    return QDockWidget_SizeHint((QDockWidget*)self);
}

QSize* q_dockwidget_qbase_size_hint(void* self) {
    return QDockWidget_QBaseSizeHint((QDockWidget*)self);
}

void q_dockwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QDockWidget_OnSizeHint((QDockWidget*)self, (intptr_t)callback);
}

QSize* q_dockwidget_minimum_size_hint(void* self) {
    return QDockWidget_MinimumSizeHint((QDockWidget*)self);
}

QSize* q_dockwidget_qbase_minimum_size_hint(void* self) {
    return QDockWidget_QBaseMinimumSizeHint((QDockWidget*)self);
}

void q_dockwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QDockWidget_OnMinimumSizeHint((QDockWidget*)self, (intptr_t)callback);
}

int32_t q_dockwidget_height_for_width(void* self, int param1) {
    return QDockWidget_HeightForWidth((QDockWidget*)self, param1);
}

int32_t q_dockwidget_qbase_height_for_width(void* self, int param1) {
    return QDockWidget_QBaseHeightForWidth((QDockWidget*)self, param1);
}

void q_dockwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QDockWidget_OnHeightForWidth((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_has_height_for_width(void* self) {
    return QDockWidget_HasHeightForWidth((QDockWidget*)self);
}

bool q_dockwidget_qbase_has_height_for_width(void* self) {
    return QDockWidget_QBaseHasHeightForWidth((QDockWidget*)self);
}

void q_dockwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QDockWidget_OnHasHeightForWidth((QDockWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_dockwidget_paint_engine(void* self) {
    return QDockWidget_PaintEngine((QDockWidget*)self);
}

QPaintEngine* q_dockwidget_qbase_paint_engine(void* self) {
    return QDockWidget_QBasePaintEngine((QDockWidget*)self);
}

void q_dockwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QDockWidget_OnPaintEngine((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_mouse_press_event(void* self, void* event) {
    QDockWidget_MousePressEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_qbase_mouse_press_event(void* self, void* event) {
    QDockWidget_QBaseMousePressEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnMousePressEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_mouse_release_event(void* self, void* event) {
    QDockWidget_MouseReleaseEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_qbase_mouse_release_event(void* self, void* event) {
    QDockWidget_QBaseMouseReleaseEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnMouseReleaseEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_mouse_double_click_event(void* self, void* event) {
    QDockWidget_MouseDoubleClickEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QDockWidget_QBaseMouseDoubleClickEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnMouseDoubleClickEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_mouse_move_event(void* self, void* event) {
    QDockWidget_MouseMoveEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_qbase_mouse_move_event(void* self, void* event) {
    QDockWidget_QBaseMouseMoveEvent((QDockWidget*)self, (QMouseEvent*)event);
}

void q_dockwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnMouseMoveEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_wheel_event(void* self, void* event) {
    QDockWidget_WheelEvent((QDockWidget*)self, (QWheelEvent*)event);
}

void q_dockwidget_qbase_wheel_event(void* self, void* event) {
    QDockWidget_QBaseWheelEvent((QDockWidget*)self, (QWheelEvent*)event);
}

void q_dockwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnWheelEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_key_press_event(void* self, void* event) {
    QDockWidget_KeyPressEvent((QDockWidget*)self, (QKeyEvent*)event);
}

void q_dockwidget_qbase_key_press_event(void* self, void* event) {
    QDockWidget_QBaseKeyPressEvent((QDockWidget*)self, (QKeyEvent*)event);
}

void q_dockwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnKeyPressEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_key_release_event(void* self, void* event) {
    QDockWidget_KeyReleaseEvent((QDockWidget*)self, (QKeyEvent*)event);
}

void q_dockwidget_qbase_key_release_event(void* self, void* event) {
    QDockWidget_QBaseKeyReleaseEvent((QDockWidget*)self, (QKeyEvent*)event);
}

void q_dockwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnKeyReleaseEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_focus_in_event(void* self, void* event) {
    QDockWidget_FocusInEvent((QDockWidget*)self, (QFocusEvent*)event);
}

void q_dockwidget_qbase_focus_in_event(void* self, void* event) {
    QDockWidget_QBaseFocusInEvent((QDockWidget*)self, (QFocusEvent*)event);
}

void q_dockwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnFocusInEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_focus_out_event(void* self, void* event) {
    QDockWidget_FocusOutEvent((QDockWidget*)self, (QFocusEvent*)event);
}

void q_dockwidget_qbase_focus_out_event(void* self, void* event) {
    QDockWidget_QBaseFocusOutEvent((QDockWidget*)self, (QFocusEvent*)event);
}

void q_dockwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnFocusOutEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_enter_event(void* self, void* event) {
    QDockWidget_EnterEvent((QDockWidget*)self, (QEnterEvent*)event);
}

void q_dockwidget_qbase_enter_event(void* self, void* event) {
    QDockWidget_QBaseEnterEvent((QDockWidget*)self, (QEnterEvent*)event);
}

void q_dockwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnEnterEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_leave_event(void* self, void* event) {
    QDockWidget_LeaveEvent((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_qbase_leave_event(void* self, void* event) {
    QDockWidget_QBaseLeaveEvent((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnLeaveEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_move_event(void* self, void* event) {
    QDockWidget_MoveEvent((QDockWidget*)self, (QMoveEvent*)event);
}

void q_dockwidget_qbase_move_event(void* self, void* event) {
    QDockWidget_QBaseMoveEvent((QDockWidget*)self, (QMoveEvent*)event);
}

void q_dockwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnMoveEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_resize_event(void* self, void* event) {
    QDockWidget_ResizeEvent((QDockWidget*)self, (QResizeEvent*)event);
}

void q_dockwidget_qbase_resize_event(void* self, void* event) {
    QDockWidget_QBaseResizeEvent((QDockWidget*)self, (QResizeEvent*)event);
}

void q_dockwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnResizeEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_context_menu_event(void* self, void* event) {
    QDockWidget_ContextMenuEvent((QDockWidget*)self, (QContextMenuEvent*)event);
}

void q_dockwidget_qbase_context_menu_event(void* self, void* event) {
    QDockWidget_QBaseContextMenuEvent((QDockWidget*)self, (QContextMenuEvent*)event);
}

void q_dockwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnContextMenuEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_tablet_event(void* self, void* event) {
    QDockWidget_TabletEvent((QDockWidget*)self, (QTabletEvent*)event);
}

void q_dockwidget_qbase_tablet_event(void* self, void* event) {
    QDockWidget_QBaseTabletEvent((QDockWidget*)self, (QTabletEvent*)event);
}

void q_dockwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnTabletEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_action_event(void* self, void* event) {
    QDockWidget_ActionEvent((QDockWidget*)self, (QActionEvent*)event);
}

void q_dockwidget_qbase_action_event(void* self, void* event) {
    QDockWidget_QBaseActionEvent((QDockWidget*)self, (QActionEvent*)event);
}

void q_dockwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnActionEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_drag_enter_event(void* self, void* event) {
    QDockWidget_DragEnterEvent((QDockWidget*)self, (QDragEnterEvent*)event);
}

void q_dockwidget_qbase_drag_enter_event(void* self, void* event) {
    QDockWidget_QBaseDragEnterEvent((QDockWidget*)self, (QDragEnterEvent*)event);
}

void q_dockwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnDragEnterEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_drag_move_event(void* self, void* event) {
    QDockWidget_DragMoveEvent((QDockWidget*)self, (QDragMoveEvent*)event);
}

void q_dockwidget_qbase_drag_move_event(void* self, void* event) {
    QDockWidget_QBaseDragMoveEvent((QDockWidget*)self, (QDragMoveEvent*)event);
}

void q_dockwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnDragMoveEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_drag_leave_event(void* self, void* event) {
    QDockWidget_DragLeaveEvent((QDockWidget*)self, (QDragLeaveEvent*)event);
}

void q_dockwidget_qbase_drag_leave_event(void* self, void* event) {
    QDockWidget_QBaseDragLeaveEvent((QDockWidget*)self, (QDragLeaveEvent*)event);
}

void q_dockwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnDragLeaveEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_drop_event(void* self, void* event) {
    QDockWidget_DropEvent((QDockWidget*)self, (QDropEvent*)event);
}

void q_dockwidget_qbase_drop_event(void* self, void* event) {
    QDockWidget_QBaseDropEvent((QDockWidget*)self, (QDropEvent*)event);
}

void q_dockwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnDropEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_show_event(void* self, void* event) {
    QDockWidget_ShowEvent((QDockWidget*)self, (QShowEvent*)event);
}

void q_dockwidget_qbase_show_event(void* self, void* event) {
    QDockWidget_QBaseShowEvent((QDockWidget*)self, (QShowEvent*)event);
}

void q_dockwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnShowEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_hide_event(void* self, void* event) {
    QDockWidget_HideEvent((QDockWidget*)self, (QHideEvent*)event);
}

void q_dockwidget_qbase_hide_event(void* self, void* event) {
    QDockWidget_QBaseHideEvent((QDockWidget*)self, (QHideEvent*)event);
}

void q_dockwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnHideEvent((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QDockWidget_NativeEvent((QDockWidget*)self, qstring(eventType), message, result);
}

bool q_dockwidget_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QDockWidget_QBaseNativeEvent((QDockWidget*)self, qstring(eventType), message, result);
}

void q_dockwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QDockWidget_OnNativeEvent((QDockWidget*)self, (intptr_t)callback);
}

int32_t q_dockwidget_metric(void* self, int32_t param1) {
    return QDockWidget_Metric((QDockWidget*)self, param1);
}

int32_t q_dockwidget_qbase_metric(void* self, int32_t param1) {
    return QDockWidget_QBaseMetric((QDockWidget*)self, param1);
}

void q_dockwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QDockWidget_OnMetric((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_init_painter(void* self, void* painter) {
    QDockWidget_InitPainter((QDockWidget*)self, (QPainter*)painter);
}

void q_dockwidget_qbase_init_painter(void* self, void* painter) {
    QDockWidget_QBaseInitPainter((QDockWidget*)self, (QPainter*)painter);
}

void q_dockwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnInitPainter((QDockWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_dockwidget_redirected(void* self, void* offset) {
    return QDockWidget_Redirected((QDockWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_dockwidget_qbase_redirected(void* self, void* offset) {
    return QDockWidget_QBaseRedirected((QDockWidget*)self, (QPoint*)offset);
}

void q_dockwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QDockWidget_OnRedirected((QDockWidget*)self, (intptr_t)callback);
}

QPainter* q_dockwidget_shared_painter(void* self) {
    return QDockWidget_SharedPainter((QDockWidget*)self);
}

QPainter* q_dockwidget_qbase_shared_painter(void* self) {
    return QDockWidget_QBaseSharedPainter((QDockWidget*)self);
}

void q_dockwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QDockWidget_OnSharedPainter((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_input_method_event(void* self, void* param1) {
    QDockWidget_InputMethodEvent((QDockWidget*)self, (QInputMethodEvent*)param1);
}

void q_dockwidget_qbase_input_method_event(void* self, void* param1) {
    QDockWidget_QBaseInputMethodEvent((QDockWidget*)self, (QInputMethodEvent*)param1);
}

void q_dockwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnInputMethodEvent((QDockWidget*)self, (intptr_t)callback);
}

QVariant* q_dockwidget_input_method_query(void* self, int32_t param1) {
    return QDockWidget_InputMethodQuery((QDockWidget*)self, param1);
}

QVariant* q_dockwidget_qbase_input_method_query(void* self, int32_t param1) {
    return QDockWidget_QBaseInputMethodQuery((QDockWidget*)self, param1);
}

void q_dockwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QDockWidget_OnInputMethodQuery((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_focus_next_prev_child(void* self, bool next) {
    return QDockWidget_FocusNextPrevChild((QDockWidget*)self, next);
}

bool q_dockwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QDockWidget_QBaseFocusNextPrevChild((QDockWidget*)self, next);
}

void q_dockwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QDockWidget_OnFocusNextPrevChild((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_event_filter(void* self, void* watched, void* event) {
    return QDockWidget_EventFilter((QDockWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dockwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QDockWidget_QBaseEventFilter((QDockWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_dockwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDockWidget_OnEventFilter((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_timer_event(void* self, void* event) {
    QDockWidget_TimerEvent((QDockWidget*)self, (QTimerEvent*)event);
}

void q_dockwidget_qbase_timer_event(void* self, void* event) {
    QDockWidget_QBaseTimerEvent((QDockWidget*)self, (QTimerEvent*)event);
}

void q_dockwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnTimerEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_child_event(void* self, void* event) {
    QDockWidget_ChildEvent((QDockWidget*)self, (QChildEvent*)event);
}

void q_dockwidget_qbase_child_event(void* self, void* event) {
    QDockWidget_QBaseChildEvent((QDockWidget*)self, (QChildEvent*)event);
}

void q_dockwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnChildEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_custom_event(void* self, void* event) {
    QDockWidget_CustomEvent((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_qbase_custom_event(void* self, void* event) {
    QDockWidget_QBaseCustomEvent((QDockWidget*)self, (QEvent*)event);
}

void q_dockwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnCustomEvent((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_connect_notify(void* self, void* signal) {
    QDockWidget_ConnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

void q_dockwidget_qbase_connect_notify(void* self, void* signal) {
    QDockWidget_QBaseConnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

void q_dockwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnConnectNotify((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_disconnect_notify(void* self, void* signal) {
    QDockWidget_DisconnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

void q_dockwidget_qbase_disconnect_notify(void* self, void* signal) {
    QDockWidget_QBaseDisconnectNotify((QDockWidget*)self, (QMetaMethod*)signal);
}

void q_dockwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDockWidget_OnDisconnectNotify((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_update_micro_focus(void* self) {
    QDockWidget_UpdateMicroFocus((QDockWidget*)self);
}

void q_dockwidget_qbase_update_micro_focus(void* self) {
    QDockWidget_QBaseUpdateMicroFocus((QDockWidget*)self);
}

void q_dockwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QDockWidget_OnUpdateMicroFocus((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_create(void* self) {
    QDockWidget_Create((QDockWidget*)self);
}

void q_dockwidget_qbase_create(void* self) {
    QDockWidget_QBaseCreate((QDockWidget*)self);
}

void q_dockwidget_on_create(void* self, void (*callback)()) {
    QDockWidget_OnCreate((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_destroy(void* self) {
    QDockWidget_Destroy((QDockWidget*)self);
}

void q_dockwidget_qbase_destroy(void* self) {
    QDockWidget_QBaseDestroy((QDockWidget*)self);
}

void q_dockwidget_on_destroy(void* self, void (*callback)()) {
    QDockWidget_OnDestroy((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_focus_next_child(void* self) {
    return QDockWidget_FocusNextChild((QDockWidget*)self);
}

bool q_dockwidget_qbase_focus_next_child(void* self) {
    return QDockWidget_QBaseFocusNextChild((QDockWidget*)self);
}

void q_dockwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QDockWidget_OnFocusNextChild((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_focus_previous_child(void* self) {
    return QDockWidget_FocusPreviousChild((QDockWidget*)self);
}

bool q_dockwidget_qbase_focus_previous_child(void* self) {
    return QDockWidget_QBaseFocusPreviousChild((QDockWidget*)self);
}

void q_dockwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QDockWidget_OnFocusPreviousChild((QDockWidget*)self, (intptr_t)callback);
}

QObject* q_dockwidget_sender(void* self) {
    return QDockWidget_Sender((QDockWidget*)self);
}

QObject* q_dockwidget_qbase_sender(void* self) {
    return QDockWidget_QBaseSender((QDockWidget*)self);
}

void q_dockwidget_on_sender(void* self, QObject* (*callback)()) {
    QDockWidget_OnSender((QDockWidget*)self, (intptr_t)callback);
}

int32_t q_dockwidget_sender_signal_index(void* self) {
    return QDockWidget_SenderSignalIndex((QDockWidget*)self);
}

int32_t q_dockwidget_qbase_sender_signal_index(void* self) {
    return QDockWidget_QBaseSenderSignalIndex((QDockWidget*)self);
}

void q_dockwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDockWidget_OnSenderSignalIndex((QDockWidget*)self, (intptr_t)callback);
}

int32_t q_dockwidget_receivers(void* self, const char* signal) {
    return QDockWidget_Receivers((QDockWidget*)self, signal);
}

int32_t q_dockwidget_qbase_receivers(void* self, const char* signal) {
    return QDockWidget_QBaseReceivers((QDockWidget*)self, signal);
}

void q_dockwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDockWidget_OnReceivers((QDockWidget*)self, (intptr_t)callback);
}

bool q_dockwidget_is_signal_connected(void* self, void* signal) {
    return QDockWidget_IsSignalConnected((QDockWidget*)self, (QMetaMethod*)signal);
}

bool q_dockwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QDockWidget_QBaseIsSignalConnected((QDockWidget*)self, (QMetaMethod*)signal);
}

void q_dockwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDockWidget_OnIsSignalConnected((QDockWidget*)self, (intptr_t)callback);
}

double q_dockwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDockWidget_GetDecodedMetricF((QDockWidget*)self, metricA, metricB);
}

double q_dockwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDockWidget_QBaseGetDecodedMetricF((QDockWidget*)self, metricA, metricB);
}

void q_dockwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QDockWidget_OnGetDecodedMetricF((QDockWidget*)self, (intptr_t)callback);
}

void q_dockwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dockwidget_delete(void* self) {
    QDockWidget_Delete((QDockWidget*)(self));
}
