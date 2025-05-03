#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqtoolbar.hpp"
#include "libqtoolbar.h"

QToolBar* q_toolbar_new(void* parent) {
    return QToolBar_new((QWidget*)parent);
}

QToolBar* q_toolbar_new2(const char* title) {
    return QToolBar_new2(qstring(title));
}

QToolBar* q_toolbar_new3() {
    return QToolBar_new3();
}

QToolBar* q_toolbar_new4(const char* title, void* parent) {
    return QToolBar_new4(qstring(title), (QWidget*)parent);
}

QMetaObject* q_toolbar_meta_object(void* self) {
    return QToolBar_MetaObject((QToolBar*)self);
}

void* q_toolbar_metacast(void* self, const char* param1) {
    return QToolBar_Metacast((QToolBar*)self, param1);
}

int32_t q_toolbar_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBar_Metacall((QToolBar*)self, param1, param2, param3);
}

void q_toolbar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QToolBar_OnMetacall((QToolBar*)self, (intptr_t)slot);
}

int32_t q_toolbar_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QToolBar_QBaseMetacall((QToolBar*)self, param1, param2, param3);
}

const char* q_toolbar_tr(const char* s) {
    libqt_string _str = QToolBar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_movable(void* self, bool movable) {
    QToolBar_SetMovable((QToolBar*)self, movable);
}

bool q_toolbar_is_movable(void* self) {
    return QToolBar_IsMovable((QToolBar*)self);
}

void q_toolbar_set_allowed_areas(void* self, int64_t areas) {
    QToolBar_SetAllowedAreas((QToolBar*)self, areas);
}

int64_t q_toolbar_allowed_areas(void* self) {
    return QToolBar_AllowedAreas((QToolBar*)self);
}

bool q_toolbar_is_area_allowed(void* self, int64_t area) {
    return QToolBar_IsAreaAllowed((QToolBar*)self, area);
}

void q_toolbar_set_orientation(void* self, int64_t orientation) {
    QToolBar_SetOrientation((QToolBar*)self, orientation);
}

int64_t q_toolbar_orientation(void* self) {
    return QToolBar_Orientation((QToolBar*)self);
}

void q_toolbar_clear(void* self) {
    QToolBar_Clear((QToolBar*)self);
}

QAction* q_toolbar_add_separator(void* self) {
    return QToolBar_AddSeparator((QToolBar*)self);
}

QAction* q_toolbar_insert_separator(void* self, void* before) {
    return QToolBar_InsertSeparator((QToolBar*)self, (QAction*)before);
}

QAction* q_toolbar_add_widget(void* self, void* widget) {
    return QToolBar_AddWidget((QToolBar*)self, (QWidget*)widget);
}

QAction* q_toolbar_insert_widget(void* self, void* before, void* widget) {
    return QToolBar_InsertWidget((QToolBar*)self, (QAction*)before, (QWidget*)widget);
}

QRect* q_toolbar_action_geometry(void* self, void* action) {
    return QToolBar_ActionGeometry((QToolBar*)self, (QAction*)action);
}

QAction* q_toolbar_action_at(void* self, void* p) {
    return QToolBar_ActionAt((QToolBar*)self, (QPoint*)p);
}

QAction* q_toolbar_action_at2(void* self, int x, int y) {
    return QToolBar_ActionAt2((QToolBar*)self, x, y);
}

QAction* q_toolbar_toggle_view_action(void* self) {
    return QToolBar_ToggleViewAction((QToolBar*)self);
}

QSize* q_toolbar_icon_size(void* self) {
    return QToolBar_IconSize((QToolBar*)self);
}

int64_t q_toolbar_tool_button_style(void* self) {
    return QToolBar_ToolButtonStyle((QToolBar*)self);
}

QWidget* q_toolbar_widget_for_action(void* self, void* action) {
    return QToolBar_WidgetForAction((QToolBar*)self, (QAction*)action);
}

bool q_toolbar_is_floatable(void* self) {
    return QToolBar_IsFloatable((QToolBar*)self);
}

void q_toolbar_set_floatable(void* self, bool floatable) {
    QToolBar_SetFloatable((QToolBar*)self, floatable);
}

bool q_toolbar_is_floating(void* self) {
    return QToolBar_IsFloating((QToolBar*)self);
}

void q_toolbar_set_icon_size(void* self, void* iconSize) {
    QToolBar_SetIconSize((QToolBar*)self, (QSize*)iconSize);
}

void q_toolbar_set_tool_button_style(void* self, int64_t toolButtonStyle) {
    QToolBar_SetToolButtonStyle((QToolBar*)self, toolButtonStyle);
}

void q_toolbar_action_triggered(void* self, void* action) {
    QToolBar_ActionTriggered((QToolBar*)self, (QAction*)action);
}

void q_toolbar_on_action_triggered(void* self, void (*slot)(void*, void*)) {
    QToolBar_Connect_ActionTriggered((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_movable_changed(void* self, bool movable) {
    QToolBar_MovableChanged((QToolBar*)self, movable);
}

void q_toolbar_on_movable_changed(void* self, void (*slot)(void*, bool)) {
    QToolBar_Connect_MovableChanged((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_allowed_areas_changed(void* self, int64_t allowedAreas) {
    QToolBar_AllowedAreasChanged((QToolBar*)self, allowedAreas);
}

void q_toolbar_on_allowed_areas_changed(void* self, void (*slot)(void*, int64_t)) {
    QToolBar_Connect_AllowedAreasChanged((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_orientation_changed(void* self, int64_t orientation) {
    QToolBar_OrientationChanged((QToolBar*)self, orientation);
}

void q_toolbar_on_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QToolBar_Connect_OrientationChanged((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_icon_size_changed(void* self, void* iconSize) {
    QToolBar_IconSizeChanged((QToolBar*)self, (QSize*)iconSize);
}

void q_toolbar_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QToolBar_Connect_IconSizeChanged((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_tool_button_style_changed(void* self, int64_t toolButtonStyle) {
    QToolBar_ToolButtonStyleChanged((QToolBar*)self, toolButtonStyle);
}

void q_toolbar_on_tool_button_style_changed(void* self, void (*slot)(void*, int64_t)) {
    QToolBar_Connect_ToolButtonStyleChanged((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_top_level_changed(void* self, bool topLevel) {
    QToolBar_TopLevelChanged((QToolBar*)self, topLevel);
}

void q_toolbar_on_top_level_changed(void* self, void (*slot)(void*, bool)) {
    QToolBar_Connect_TopLevelChanged((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_visibility_changed(void* self, bool visible) {
    QToolBar_VisibilityChanged((QToolBar*)self, visible);
}

void q_toolbar_on_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QToolBar_Connect_VisibilityChanged((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_action_event(void* self, void* event) {
    QToolBar_ActionEvent((QToolBar*)self, (QActionEvent*)event);
}

void q_toolbar_on_action_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnActionEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_qbase_action_event(void* self, void* event) {
    QToolBar_QBaseActionEvent((QToolBar*)self, (QActionEvent*)event);
}

void q_toolbar_change_event(void* self, void* event) {
    QToolBar_ChangeEvent((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_on_change_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnChangeEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_qbase_change_event(void* self, void* event) {
    QToolBar_QBaseChangeEvent((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_paint_event(void* self, void* event) {
    QToolBar_PaintEvent((QToolBar*)self, (QPaintEvent*)event);
}

void q_toolbar_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnPaintEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_qbase_paint_event(void* self, void* event) {
    QToolBar_QBasePaintEvent((QToolBar*)self, (QPaintEvent*)event);
}

bool q_toolbar_event(void* self, void* event) {
    return QToolBar_Event((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_on_event(void* self, bool (*slot)(void*, void*)) {
    QToolBar_OnEvent((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_qbase_event(void* self, void* event) {
    return QToolBar_QBaseEvent((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_init_style_option(void* self, void* option) {
    QToolBar_InitStyleOption((QToolBar*)self, (QStyleOptionToolBar*)option);
}

void q_toolbar_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnInitStyleOption((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_qbase_init_style_option(void* self, void* option) {
    QToolBar_QBaseInitStyleOption((QToolBar*)self, (QStyleOptionToolBar*)option);
}

const char* q_toolbar_tr2(const char* s, const char* c) {
    libqt_string _str = QToolBar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_toolbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QToolBar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_toolbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_toolbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_toolbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_toolbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_toolbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_toolbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_toolbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_toolbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_toolbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_toolbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_toolbar_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_toolbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_toolbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_toolbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_toolbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_toolbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_toolbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_toolbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_toolbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_toolbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_toolbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_toolbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_toolbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_toolbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_toolbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_toolbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_toolbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_toolbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_toolbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_toolbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_toolbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_toolbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_toolbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_toolbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_toolbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_toolbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_toolbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_toolbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_toolbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_toolbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_toolbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_toolbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_toolbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_toolbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_toolbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_toolbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_toolbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_toolbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_toolbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_toolbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_toolbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_toolbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_toolbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_toolbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbar_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbar_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbar_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_toolbar_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_toolbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_toolbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_toolbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_toolbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_toolbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_toolbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_toolbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_toolbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_toolbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_toolbar_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_toolbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_toolbar_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_toolbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_toolbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_toolbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_toolbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_toolbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_toolbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_toolbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_toolbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_toolbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_toolbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_toolbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_toolbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_toolbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_toolbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_toolbar_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_toolbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_toolbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_toolbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_toolbar_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_toolbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_toolbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_toolbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_toolbar_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_toolbar_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_toolbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_toolbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_toolbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_toolbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_toolbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_toolbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_toolbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_toolbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_toolbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_toolbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_toolbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_toolbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_toolbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_toolbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_toolbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_toolbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_toolbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_toolbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_toolbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_toolbar_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_toolbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_toolbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_toolbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_toolbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_toolbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_toolbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_toolbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_toolbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_toolbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_toolbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_toolbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_toolbar_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_toolbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_toolbar_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_toolbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_toolbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_toolbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_toolbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_toolbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_toolbar_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_toolbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_toolbar_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_toolbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_toolbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_toolbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_toolbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_toolbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_toolbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_toolbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_toolbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_toolbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_toolbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_toolbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_toolbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_toolbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_toolbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_toolbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_toolbar_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_toolbar_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_toolbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_toolbar_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_toolbar_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_toolbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_toolbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_toolbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_toolbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_toolbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_toolbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_toolbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_toolbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_toolbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_toolbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_toolbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_toolbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_toolbar_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_toolbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_toolbar_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_toolbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_toolbar_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_toolbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_toolbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_toolbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_toolbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_toolbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_toolbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_toolbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_toolbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_toolbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_toolbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_toolbar_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_toolbar_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_toolbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_toolbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_toolbar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_toolbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_toolbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_toolbar_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_toolbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_toolbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_toolbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_toolbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_toolbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_toolbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_toolbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_toolbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_toolbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_toolbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_toolbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_toolbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_toolbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_toolbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_toolbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_toolbar_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

void q_toolbar_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

void q_toolbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_toolbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_toolbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_toolbar_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_toolbar_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_toolbar_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_toolbar_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_toolbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_toolbar_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_toolbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_toolbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_toolbar_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_toolbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_toolbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_toolbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_toolbar_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_toolbar_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_toolbar_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_toolbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_toolbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_toolbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_toolbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_toolbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_toolbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_toolbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_toolbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_toolbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_toolbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_toolbar_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_toolbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_toolbar_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_toolbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_toolbar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_toolbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_toolbar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_toolbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_toolbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_toolbar_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_toolbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_toolbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_toolbar_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_toolbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_toolbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_toolbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_toolbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_toolbar_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_toolbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_toolbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_toolbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_toolbar_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_toolbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_toolbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_toolbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_toolbar_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_toolbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_toolbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_toolbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_toolbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_toolbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_toolbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_toolbar_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_toolbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_toolbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_toolbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_toolbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_toolbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_toolbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_toolbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_toolbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_toolbar_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_toolbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_toolbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_toolbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_toolbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_toolbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_toolbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_toolbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_toolbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_toolbar_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_toolbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_toolbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_toolbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_toolbar_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_toolbar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_toolbar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_toolbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_toolbar_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_toolbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_toolbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_toolbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_toolbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_toolbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_toolbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_toolbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_toolbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_toolbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_toolbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_toolbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_toolbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_toolbar_dev_type(void* self) {
    return QToolBar_DevType((QToolBar*)self);
}

int32_t q_toolbar_qbase_dev_type(void* self) {
    return QToolBar_QBaseDevType((QToolBar*)self);
}

void q_toolbar_on_dev_type(void* self, int32_t (*slot)()) {
    QToolBar_OnDevType((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_set_visible(void* self, bool visible) {
    QToolBar_SetVisible((QToolBar*)self, visible);
}

void q_toolbar_qbase_set_visible(void* self, bool visible) {
    QToolBar_QBaseSetVisible((QToolBar*)self, visible);
}

void q_toolbar_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QToolBar_OnSetVisible((QToolBar*)self, (intptr_t)slot);
}

QSize* q_toolbar_size_hint(void* self) {
    return QToolBar_SizeHint((QToolBar*)self);
}

QSize* q_toolbar_qbase_size_hint(void* self) {
    return QToolBar_QBaseSizeHint((QToolBar*)self);
}

void q_toolbar_on_size_hint(void* self, QSize* (*slot)()) {
    QToolBar_OnSizeHint((QToolBar*)self, (intptr_t)slot);
}

QSize* q_toolbar_minimum_size_hint(void* self) {
    return QToolBar_MinimumSizeHint((QToolBar*)self);
}

QSize* q_toolbar_qbase_minimum_size_hint(void* self) {
    return QToolBar_QBaseMinimumSizeHint((QToolBar*)self);
}

void q_toolbar_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QToolBar_OnMinimumSizeHint((QToolBar*)self, (intptr_t)slot);
}

int32_t q_toolbar_height_for_width(void* self, int param1) {
    return QToolBar_HeightForWidth((QToolBar*)self, param1);
}

int32_t q_toolbar_qbase_height_for_width(void* self, int param1) {
    return QToolBar_QBaseHeightForWidth((QToolBar*)self, param1);
}

void q_toolbar_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QToolBar_OnHeightForWidth((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_has_height_for_width(void* self) {
    return QToolBar_HasHeightForWidth((QToolBar*)self);
}

bool q_toolbar_qbase_has_height_for_width(void* self) {
    return QToolBar_QBaseHasHeightForWidth((QToolBar*)self);
}

void q_toolbar_on_has_height_for_width(void* self, bool (*slot)()) {
    QToolBar_OnHasHeightForWidth((QToolBar*)self, (intptr_t)slot);
}

QPaintEngine* q_toolbar_paint_engine(void* self) {
    return QToolBar_PaintEngine((QToolBar*)self);
}

QPaintEngine* q_toolbar_qbase_paint_engine(void* self) {
    return QToolBar_QBasePaintEngine((QToolBar*)self);
}

void q_toolbar_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QToolBar_OnPaintEngine((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_mouse_press_event(void* self, void* event) {
    QToolBar_MousePressEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_qbase_mouse_press_event(void* self, void* event) {
    QToolBar_QBaseMousePressEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMousePressEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_mouse_release_event(void* self, void* event) {
    QToolBar_MouseReleaseEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_qbase_mouse_release_event(void* self, void* event) {
    QToolBar_QBaseMouseReleaseEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMouseReleaseEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_mouse_double_click_event(void* self, void* event) {
    QToolBar_MouseDoubleClickEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_qbase_mouse_double_click_event(void* self, void* event) {
    QToolBar_QBaseMouseDoubleClickEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMouseDoubleClickEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_mouse_move_event(void* self, void* event) {
    QToolBar_MouseMoveEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_qbase_mouse_move_event(void* self, void* event) {
    QToolBar_QBaseMouseMoveEvent((QToolBar*)self, (QMouseEvent*)event);
}

void q_toolbar_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMouseMoveEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_wheel_event(void* self, void* event) {
    QToolBar_WheelEvent((QToolBar*)self, (QWheelEvent*)event);
}

void q_toolbar_qbase_wheel_event(void* self, void* event) {
    QToolBar_QBaseWheelEvent((QToolBar*)self, (QWheelEvent*)event);
}

void q_toolbar_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnWheelEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_key_press_event(void* self, void* event) {
    QToolBar_KeyPressEvent((QToolBar*)self, (QKeyEvent*)event);
}

void q_toolbar_qbase_key_press_event(void* self, void* event) {
    QToolBar_QBaseKeyPressEvent((QToolBar*)self, (QKeyEvent*)event);
}

void q_toolbar_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnKeyPressEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_key_release_event(void* self, void* event) {
    QToolBar_KeyReleaseEvent((QToolBar*)self, (QKeyEvent*)event);
}

void q_toolbar_qbase_key_release_event(void* self, void* event) {
    QToolBar_QBaseKeyReleaseEvent((QToolBar*)self, (QKeyEvent*)event);
}

void q_toolbar_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnKeyReleaseEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_focus_in_event(void* self, void* event) {
    QToolBar_FocusInEvent((QToolBar*)self, (QFocusEvent*)event);
}

void q_toolbar_qbase_focus_in_event(void* self, void* event) {
    QToolBar_QBaseFocusInEvent((QToolBar*)self, (QFocusEvent*)event);
}

void q_toolbar_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnFocusInEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_focus_out_event(void* self, void* event) {
    QToolBar_FocusOutEvent((QToolBar*)self, (QFocusEvent*)event);
}

void q_toolbar_qbase_focus_out_event(void* self, void* event) {
    QToolBar_QBaseFocusOutEvent((QToolBar*)self, (QFocusEvent*)event);
}

void q_toolbar_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnFocusOutEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_enter_event(void* self, void* event) {
    QToolBar_EnterEvent((QToolBar*)self, (QEnterEvent*)event);
}

void q_toolbar_qbase_enter_event(void* self, void* event) {
    QToolBar_QBaseEnterEvent((QToolBar*)self, (QEnterEvent*)event);
}

void q_toolbar_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnEnterEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_leave_event(void* self, void* event) {
    QToolBar_LeaveEvent((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_qbase_leave_event(void* self, void* event) {
    QToolBar_QBaseLeaveEvent((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnLeaveEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_move_event(void* self, void* event) {
    QToolBar_MoveEvent((QToolBar*)self, (QMoveEvent*)event);
}

void q_toolbar_qbase_move_event(void* self, void* event) {
    QToolBar_QBaseMoveEvent((QToolBar*)self, (QMoveEvent*)event);
}

void q_toolbar_on_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnMoveEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_resize_event(void* self, void* event) {
    QToolBar_ResizeEvent((QToolBar*)self, (QResizeEvent*)event);
}

void q_toolbar_qbase_resize_event(void* self, void* event) {
    QToolBar_QBaseResizeEvent((QToolBar*)self, (QResizeEvent*)event);
}

void q_toolbar_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnResizeEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_close_event(void* self, void* event) {
    QToolBar_CloseEvent((QToolBar*)self, (QCloseEvent*)event);
}

void q_toolbar_qbase_close_event(void* self, void* event) {
    QToolBar_QBaseCloseEvent((QToolBar*)self, (QCloseEvent*)event);
}

void q_toolbar_on_close_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnCloseEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_context_menu_event(void* self, void* event) {
    QToolBar_ContextMenuEvent((QToolBar*)self, (QContextMenuEvent*)event);
}

void q_toolbar_qbase_context_menu_event(void* self, void* event) {
    QToolBar_QBaseContextMenuEvent((QToolBar*)self, (QContextMenuEvent*)event);
}

void q_toolbar_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnContextMenuEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_tablet_event(void* self, void* event) {
    QToolBar_TabletEvent((QToolBar*)self, (QTabletEvent*)event);
}

void q_toolbar_qbase_tablet_event(void* self, void* event) {
    QToolBar_QBaseTabletEvent((QToolBar*)self, (QTabletEvent*)event);
}

void q_toolbar_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnTabletEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_drag_enter_event(void* self, void* event) {
    QToolBar_DragEnterEvent((QToolBar*)self, (QDragEnterEvent*)event);
}

void q_toolbar_qbase_drag_enter_event(void* self, void* event) {
    QToolBar_QBaseDragEnterEvent((QToolBar*)self, (QDragEnterEvent*)event);
}

void q_toolbar_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDragEnterEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_drag_move_event(void* self, void* event) {
    QToolBar_DragMoveEvent((QToolBar*)self, (QDragMoveEvent*)event);
}

void q_toolbar_qbase_drag_move_event(void* self, void* event) {
    QToolBar_QBaseDragMoveEvent((QToolBar*)self, (QDragMoveEvent*)event);
}

void q_toolbar_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDragMoveEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_drag_leave_event(void* self, void* event) {
    QToolBar_DragLeaveEvent((QToolBar*)self, (QDragLeaveEvent*)event);
}

void q_toolbar_qbase_drag_leave_event(void* self, void* event) {
    QToolBar_QBaseDragLeaveEvent((QToolBar*)self, (QDragLeaveEvent*)event);
}

void q_toolbar_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDragLeaveEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_drop_event(void* self, void* event) {
    QToolBar_DropEvent((QToolBar*)self, (QDropEvent*)event);
}

void q_toolbar_qbase_drop_event(void* self, void* event) {
    QToolBar_QBaseDropEvent((QToolBar*)self, (QDropEvent*)event);
}

void q_toolbar_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDropEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_show_event(void* self, void* event) {
    QToolBar_ShowEvent((QToolBar*)self, (QShowEvent*)event);
}

void q_toolbar_qbase_show_event(void* self, void* event) {
    QToolBar_QBaseShowEvent((QToolBar*)self, (QShowEvent*)event);
}

void q_toolbar_on_show_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnShowEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_hide_event(void* self, void* event) {
    QToolBar_HideEvent((QToolBar*)self, (QHideEvent*)event);
}

void q_toolbar_qbase_hide_event(void* self, void* event) {
    QToolBar_QBaseHideEvent((QToolBar*)self, (QHideEvent*)event);
}

void q_toolbar_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnHideEvent((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBar_NativeEvent((QToolBar*)self, qstring(eventType), message, result);
}

bool q_toolbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QToolBar_QBaseNativeEvent((QToolBar*)self, qstring(eventType), message, result);
}

void q_toolbar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QToolBar_OnNativeEvent((QToolBar*)self, (intptr_t)slot);
}

int32_t q_toolbar_metric(void* self, int64_t param1) {
    return QToolBar_Metric((QToolBar*)self, param1);
}

int32_t q_toolbar_qbase_metric(void* self, int64_t param1) {
    return QToolBar_QBaseMetric((QToolBar*)self, param1);
}

void q_toolbar_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QToolBar_OnMetric((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_init_painter(void* self, void* painter) {
    QToolBar_InitPainter((QToolBar*)self, (QPainter*)painter);
}

void q_toolbar_qbase_init_painter(void* self, void* painter) {
    QToolBar_QBaseInitPainter((QToolBar*)self, (QPainter*)painter);
}

void q_toolbar_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnInitPainter((QToolBar*)self, (intptr_t)slot);
}

QPaintDevice* q_toolbar_redirected(void* self, void* offset) {
    return QToolBar_Redirected((QToolBar*)self, (QPoint*)offset);
}

QPaintDevice* q_toolbar_qbase_redirected(void* self, void* offset) {
    return QToolBar_QBaseRedirected((QToolBar*)self, (QPoint*)offset);
}

void q_toolbar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QToolBar_OnRedirected((QToolBar*)self, (intptr_t)slot);
}

QPainter* q_toolbar_shared_painter(void* self) {
    return QToolBar_SharedPainter((QToolBar*)self);
}

QPainter* q_toolbar_qbase_shared_painter(void* self) {
    return QToolBar_QBaseSharedPainter((QToolBar*)self);
}

void q_toolbar_on_shared_painter(void* self, QPainter* (*slot)()) {
    QToolBar_OnSharedPainter((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_input_method_event(void* self, void* param1) {
    QToolBar_InputMethodEvent((QToolBar*)self, (QInputMethodEvent*)param1);
}

void q_toolbar_qbase_input_method_event(void* self, void* param1) {
    QToolBar_QBaseInputMethodEvent((QToolBar*)self, (QInputMethodEvent*)param1);
}

void q_toolbar_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnInputMethodEvent((QToolBar*)self, (intptr_t)slot);
}

QVariant* q_toolbar_input_method_query(void* self, int64_t param1) {
    return QToolBar_InputMethodQuery((QToolBar*)self, param1);
}

QVariant* q_toolbar_qbase_input_method_query(void* self, int64_t param1) {
    return QToolBar_QBaseInputMethodQuery((QToolBar*)self, param1);
}

void q_toolbar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QToolBar_OnInputMethodQuery((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_focus_next_prev_child(void* self, bool next) {
    return QToolBar_FocusNextPrevChild((QToolBar*)self, next);
}

bool q_toolbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QToolBar_QBaseFocusNextPrevChild((QToolBar*)self, next);
}

void q_toolbar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QToolBar_OnFocusNextPrevChild((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_event_filter(void* self, void* watched, void* event) {
    return QToolBar_EventFilter((QToolBar*)self, (QObject*)watched, (QEvent*)event);
}

bool q_toolbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QToolBar_QBaseEventFilter((QToolBar*)self, (QObject*)watched, (QEvent*)event);
}

void q_toolbar_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QToolBar_OnEventFilter((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_timer_event(void* self, void* event) {
    QToolBar_TimerEvent((QToolBar*)self, (QTimerEvent*)event);
}

void q_toolbar_qbase_timer_event(void* self, void* event) {
    QToolBar_QBaseTimerEvent((QToolBar*)self, (QTimerEvent*)event);
}

void q_toolbar_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnTimerEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_child_event(void* self, void* event) {
    QToolBar_ChildEvent((QToolBar*)self, (QChildEvent*)event);
}

void q_toolbar_qbase_child_event(void* self, void* event) {
    QToolBar_QBaseChildEvent((QToolBar*)self, (QChildEvent*)event);
}

void q_toolbar_on_child_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnChildEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_custom_event(void* self, void* event) {
    QToolBar_CustomEvent((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_qbase_custom_event(void* self, void* event) {
    QToolBar_QBaseCustomEvent((QToolBar*)self, (QEvent*)event);
}

void q_toolbar_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnCustomEvent((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_connect_notify(void* self, void* signal) {
    QToolBar_ConnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

void q_toolbar_qbase_connect_notify(void* self, void* signal) {
    QToolBar_QBaseConnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

void q_toolbar_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnConnectNotify((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_disconnect_notify(void* self, void* signal) {
    QToolBar_DisconnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

void q_toolbar_qbase_disconnect_notify(void* self, void* signal) {
    QToolBar_QBaseDisconnectNotify((QToolBar*)self, (QMetaMethod*)signal);
}

void q_toolbar_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QToolBar_OnDisconnectNotify((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_update_micro_focus(void* self) {
    QToolBar_UpdateMicroFocus((QToolBar*)self);
}

void q_toolbar_qbase_update_micro_focus(void* self) {
    QToolBar_QBaseUpdateMicroFocus((QToolBar*)self);
}

void q_toolbar_on_update_micro_focus(void* self, void (*slot)()) {
    QToolBar_OnUpdateMicroFocus((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_create(void* self) {
    QToolBar_Create((QToolBar*)self);
}

void q_toolbar_qbase_create(void* self) {
    QToolBar_QBaseCreate((QToolBar*)self);
}

void q_toolbar_on_create(void* self, void (*slot)()) {
    QToolBar_OnCreate((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_destroy(void* self) {
    QToolBar_Destroy((QToolBar*)self);
}

void q_toolbar_qbase_destroy(void* self) {
    QToolBar_QBaseDestroy((QToolBar*)self);
}

void q_toolbar_on_destroy(void* self, void (*slot)()) {
    QToolBar_OnDestroy((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_focus_next_child(void* self) {
    return QToolBar_FocusNextChild((QToolBar*)self);
}

bool q_toolbar_qbase_focus_next_child(void* self) {
    return QToolBar_QBaseFocusNextChild((QToolBar*)self);
}

void q_toolbar_on_focus_next_child(void* self, bool (*slot)()) {
    QToolBar_OnFocusNextChild((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_focus_previous_child(void* self) {
    return QToolBar_FocusPreviousChild((QToolBar*)self);
}

bool q_toolbar_qbase_focus_previous_child(void* self) {
    return QToolBar_QBaseFocusPreviousChild((QToolBar*)self);
}

void q_toolbar_on_focus_previous_child(void* self, bool (*slot)()) {
    QToolBar_OnFocusPreviousChild((QToolBar*)self, (intptr_t)slot);
}

QObject* q_toolbar_sender(void* self) {
    return QToolBar_Sender((QToolBar*)self);
}

QObject* q_toolbar_qbase_sender(void* self) {
    return QToolBar_QBaseSender((QToolBar*)self);
}

void q_toolbar_on_sender(void* self, QObject* (*slot)()) {
    QToolBar_OnSender((QToolBar*)self, (intptr_t)slot);
}

int32_t q_toolbar_sender_signal_index(void* self) {
    return QToolBar_SenderSignalIndex((QToolBar*)self);
}

int32_t q_toolbar_qbase_sender_signal_index(void* self) {
    return QToolBar_QBaseSenderSignalIndex((QToolBar*)self);
}

void q_toolbar_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QToolBar_OnSenderSignalIndex((QToolBar*)self, (intptr_t)slot);
}

int32_t q_toolbar_receivers(void* self, const char* signal) {
    return QToolBar_Receivers((QToolBar*)self, signal);
}

int32_t q_toolbar_qbase_receivers(void* self, const char* signal) {
    return QToolBar_QBaseReceivers((QToolBar*)self, signal);
}

void q_toolbar_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QToolBar_OnReceivers((QToolBar*)self, (intptr_t)slot);
}

bool q_toolbar_is_signal_connected(void* self, void* signal) {
    return QToolBar_IsSignalConnected((QToolBar*)self, (QMetaMethod*)signal);
}

bool q_toolbar_qbase_is_signal_connected(void* self, void* signal) {
    return QToolBar_QBaseIsSignalConnected((QToolBar*)self, (QMetaMethod*)signal);
}

void q_toolbar_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QToolBar_OnIsSignalConnected((QToolBar*)self, (intptr_t)slot);
}

void q_toolbar_delete(void* self) {
    QToolBar_Delete((QToolBar*)(self));
}
