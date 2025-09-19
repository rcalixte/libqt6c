#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
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
#include "libkbusyindicatorwidget.hpp"
#include "libkbusyindicatorwidget.h"

KBusyIndicatorWidget* k_busyindicatorwidget_new(void* parent) {
    return KBusyIndicatorWidget_new((QWidget*)parent);
}

KBusyIndicatorWidget* k_busyindicatorwidget_new2() {
    return KBusyIndicatorWidget_new2();
}

const QMetaObject* k_busyindicatorwidget_meta_object(void* self) {
    return KBusyIndicatorWidget_MetaObject((KBusyIndicatorWidget*)self);
}

void* k_busyindicatorwidget_metacast(void* self, const char* param1) {
    return KBusyIndicatorWidget_Metacast((KBusyIndicatorWidget*)self, param1);
}

int32_t k_busyindicatorwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBusyIndicatorWidget_Metacall((KBusyIndicatorWidget*)self, param1, param2, param3);
}

void k_busyindicatorwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KBusyIndicatorWidget_OnMetacall((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

int32_t k_busyindicatorwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBusyIndicatorWidget_QBaseMetacall((KBusyIndicatorWidget*)self, param1, param2, param3);
}

const char* k_busyindicatorwidget_tr(const char* s) {
    libqt_string _str = KBusyIndicatorWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_busyindicatorwidget_minimum_size_hint(void* self) {
    return KBusyIndicatorWidget_MinimumSizeHint((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KBusyIndicatorWidget_OnMinimumSizeHint((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

QSize* k_busyindicatorwidget_qbase_minimum_size_hint(void* self) {
    return KBusyIndicatorWidget_QBaseMinimumSizeHint((KBusyIndicatorWidget*)self);
}

bool k_busyindicatorwidget_is_running(void* self) {
    return KBusyIndicatorWidget_IsRunning((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_start(void* self) {
    KBusyIndicatorWidget_Start((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_stop(void* self) {
    KBusyIndicatorWidget_Stop((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_set_running(void* self) {
    KBusyIndicatorWidget_SetRunning((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_show_event(void* self, void* event) {
    KBusyIndicatorWidget_ShowEvent((KBusyIndicatorWidget*)self, (QShowEvent*)event);
}

void k_busyindicatorwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnShowEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_qbase_show_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseShowEvent((KBusyIndicatorWidget*)self, (QShowEvent*)event);
}

void k_busyindicatorwidget_hide_event(void* self, void* event) {
    KBusyIndicatorWidget_HideEvent((KBusyIndicatorWidget*)self, (QHideEvent*)event);
}

void k_busyindicatorwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnHideEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_qbase_hide_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseHideEvent((KBusyIndicatorWidget*)self, (QHideEvent*)event);
}

void k_busyindicatorwidget_resize_event(void* self, void* event) {
    KBusyIndicatorWidget_ResizeEvent((KBusyIndicatorWidget*)self, (QResizeEvent*)event);
}

void k_busyindicatorwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnResizeEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_qbase_resize_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseResizeEvent((KBusyIndicatorWidget*)self, (QResizeEvent*)event);
}

void k_busyindicatorwidget_paint_event(void* self, void* param1) {
    KBusyIndicatorWidget_PaintEvent((KBusyIndicatorWidget*)self, (QPaintEvent*)param1);
}

void k_busyindicatorwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnPaintEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_qbase_paint_event(void* self, void* param1) {
    KBusyIndicatorWidget_QBasePaintEvent((KBusyIndicatorWidget*)self, (QPaintEvent*)param1);
}

bool k_busyindicatorwidget_event(void* self, void* event) {
    return KBusyIndicatorWidget_Event((KBusyIndicatorWidget*)self, (QEvent*)event);
}

void k_busyindicatorwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_qbase_event(void* self, void* event) {
    return KBusyIndicatorWidget_QBaseEvent((KBusyIndicatorWidget*)self, (QEvent*)event);
}

const char* k_busyindicatorwidget_tr2(const char* s, const char* c) {
    libqt_string _str = KBusyIndicatorWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_busyindicatorwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KBusyIndicatorWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_running1(void* self, bool enable) {
    KBusyIndicatorWidget_SetRunning1((KBusyIndicatorWidget*)self, enable);
}

uintptr_t k_busyindicatorwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_busyindicatorwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_busyindicatorwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_busyindicatorwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_busyindicatorwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_busyindicatorwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_busyindicatorwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_busyindicatorwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_busyindicatorwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_busyindicatorwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_busyindicatorwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_busyindicatorwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_busyindicatorwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_busyindicatorwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_busyindicatorwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_busyindicatorwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_busyindicatorwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_busyindicatorwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_busyindicatorwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_busyindicatorwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_busyindicatorwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_busyindicatorwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_busyindicatorwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_busyindicatorwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_busyindicatorwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_busyindicatorwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_busyindicatorwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_busyindicatorwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_busyindicatorwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_busyindicatorwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_busyindicatorwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_busyindicatorwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_busyindicatorwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_busyindicatorwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_busyindicatorwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_busyindicatorwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_busyindicatorwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_busyindicatorwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_busyindicatorwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_busyindicatorwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_busyindicatorwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_busyindicatorwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_busyindicatorwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_busyindicatorwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_busyindicatorwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_busyindicatorwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_busyindicatorwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_busyindicatorwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_busyindicatorwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_busyindicatorwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_busyindicatorwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_busyindicatorwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_busyindicatorwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_busyindicatorwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_busyindicatorwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_busyindicatorwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_busyindicatorwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_busyindicatorwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_busyindicatorwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_busyindicatorwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_busyindicatorwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_busyindicatorwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_busyindicatorwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_busyindicatorwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_busyindicatorwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_busyindicatorwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_busyindicatorwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_busyindicatorwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_busyindicatorwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_busyindicatorwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_busyindicatorwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_busyindicatorwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_busyindicatorwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_busyindicatorwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_busyindicatorwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_busyindicatorwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_busyindicatorwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_busyindicatorwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_busyindicatorwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_busyindicatorwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_busyindicatorwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_busyindicatorwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_busyindicatorwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_busyindicatorwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_busyindicatorwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_busyindicatorwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_busyindicatorwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_busyindicatorwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_busyindicatorwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_busyindicatorwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_busyindicatorwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_busyindicatorwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_busyindicatorwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_busyindicatorwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_busyindicatorwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_busyindicatorwidget_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_busyindicatorwidget_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_busyindicatorwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_busyindicatorwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_busyindicatorwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_busyindicatorwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_busyindicatorwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_busyindicatorwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_busyindicatorwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_busyindicatorwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_busyindicatorwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_busyindicatorwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_busyindicatorwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_busyindicatorwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_busyindicatorwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_busyindicatorwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_busyindicatorwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_busyindicatorwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_busyindicatorwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_busyindicatorwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_busyindicatorwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_busyindicatorwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_busyindicatorwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_busyindicatorwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_busyindicatorwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_busyindicatorwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_busyindicatorwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_busyindicatorwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_busyindicatorwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_busyindicatorwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_busyindicatorwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_busyindicatorwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_busyindicatorwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_busyindicatorwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_busyindicatorwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_busyindicatorwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_busyindicatorwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_busyindicatorwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_busyindicatorwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_busyindicatorwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_busyindicatorwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_busyindicatorwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_busyindicatorwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_busyindicatorwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_busyindicatorwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_busyindicatorwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_busyindicatorwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_busyindicatorwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_busyindicatorwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_busyindicatorwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_busyindicatorwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_busyindicatorwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_busyindicatorwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_busyindicatorwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_busyindicatorwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_busyindicatorwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_busyindicatorwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_busyindicatorwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_busyindicatorwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_busyindicatorwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_busyindicatorwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_busyindicatorwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_busyindicatorwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_busyindicatorwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_busyindicatorwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_busyindicatorwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_busyindicatorwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_busyindicatorwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_busyindicatorwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_busyindicatorwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_busyindicatorwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_busyindicatorwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_busyindicatorwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_busyindicatorwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_busyindicatorwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_busyindicatorwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_busyindicatorwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_busyindicatorwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_busyindicatorwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_busyindicatorwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_busyindicatorwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_busyindicatorwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_busyindicatorwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_busyindicatorwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_busyindicatorwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_busyindicatorwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_busyindicatorwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_busyindicatorwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_busyindicatorwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_busyindicatorwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_busyindicatorwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_busyindicatorwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_busyindicatorwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_busyindicatorwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_busyindicatorwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_busyindicatorwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_busyindicatorwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_busyindicatorwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_busyindicatorwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_busyindicatorwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_busyindicatorwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_busyindicatorwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_busyindicatorwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_busyindicatorwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_busyindicatorwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_busyindicatorwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_busyindicatorwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_busyindicatorwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_busyindicatorwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_busyindicatorwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_busyindicatorwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_busyindicatorwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_busyindicatorwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_busyindicatorwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_busyindicatorwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_busyindicatorwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_busyindicatorwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_busyindicatorwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_busyindicatorwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_busyindicatorwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_busyindicatorwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_busyindicatorwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_busyindicatorwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_busyindicatorwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_busyindicatorwidget_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_busyindicatorwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_busyindicatorwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_busyindicatorwidget_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_busyindicatorwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_busyindicatorwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_busyindicatorwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_busyindicatorwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_busyindicatorwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_busyindicatorwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_busyindicatorwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_busyindicatorwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_busyindicatorwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_busyindicatorwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_busyindicatorwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_busyindicatorwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_busyindicatorwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_busyindicatorwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_busyindicatorwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_busyindicatorwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_busyindicatorwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_busyindicatorwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_busyindicatorwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_busyindicatorwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_busyindicatorwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_busyindicatorwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_busyindicatorwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_busyindicatorwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_busyindicatorwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_busyindicatorwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_busyindicatorwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_busyindicatorwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_busyindicatorwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_busyindicatorwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_busyindicatorwidget_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_busyindicatorwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_busyindicatorwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_busyindicatorwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_busyindicatorwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_busyindicatorwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_busyindicatorwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_busyindicatorwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_busyindicatorwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_busyindicatorwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_busyindicatorwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_busyindicatorwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_busyindicatorwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_busyindicatorwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_busyindicatorwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_busyindicatorwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_busyindicatorwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_busyindicatorwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_busyindicatorwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_busyindicatorwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_busyindicatorwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_busyindicatorwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_busyindicatorwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_busyindicatorwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_busyindicatorwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_busyindicatorwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_busyindicatorwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_busyindicatorwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_busyindicatorwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_busyindicatorwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_busyindicatorwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_busyindicatorwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_busyindicatorwidget_dynamic_property_names");
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

QBindingStorage* k_busyindicatorwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_busyindicatorwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_busyindicatorwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_busyindicatorwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_busyindicatorwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_busyindicatorwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_busyindicatorwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_busyindicatorwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_busyindicatorwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_busyindicatorwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_busyindicatorwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_busyindicatorwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_busyindicatorwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_busyindicatorwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_busyindicatorwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_busyindicatorwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_busyindicatorwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_busyindicatorwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_busyindicatorwidget_dev_type(void* self) {
    return KBusyIndicatorWidget_DevType((KBusyIndicatorWidget*)self);
}

int32_t k_busyindicatorwidget_qbase_dev_type(void* self) {
    return KBusyIndicatorWidget_QBaseDevType((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_dev_type(void* self, int32_t (*callback)()) {
    KBusyIndicatorWidget_OnDevType((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_set_visible(void* self, bool visible) {
    KBusyIndicatorWidget_SetVisible((KBusyIndicatorWidget*)self, visible);
}

void k_busyindicatorwidget_qbase_set_visible(void* self, bool visible) {
    KBusyIndicatorWidget_QBaseSetVisible((KBusyIndicatorWidget*)self, visible);
}

void k_busyindicatorwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KBusyIndicatorWidget_OnSetVisible((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

QSize* k_busyindicatorwidget_size_hint(void* self) {
    return KBusyIndicatorWidget_SizeHint((KBusyIndicatorWidget*)self);
}

QSize* k_busyindicatorwidget_qbase_size_hint(void* self) {
    return KBusyIndicatorWidget_QBaseSizeHint((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_size_hint(void* self, QSize* (*callback)()) {
    KBusyIndicatorWidget_OnSizeHint((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

int32_t k_busyindicatorwidget_height_for_width(void* self, int param1) {
    return KBusyIndicatorWidget_HeightForWidth((KBusyIndicatorWidget*)self, param1);
}

int32_t k_busyindicatorwidget_qbase_height_for_width(void* self, int param1) {
    return KBusyIndicatorWidget_QBaseHeightForWidth((KBusyIndicatorWidget*)self, param1);
}

void k_busyindicatorwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KBusyIndicatorWidget_OnHeightForWidth((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_has_height_for_width(void* self) {
    return KBusyIndicatorWidget_HasHeightForWidth((KBusyIndicatorWidget*)self);
}

bool k_busyindicatorwidget_qbase_has_height_for_width(void* self) {
    return KBusyIndicatorWidget_QBaseHasHeightForWidth((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KBusyIndicatorWidget_OnHasHeightForWidth((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_busyindicatorwidget_paint_engine(void* self) {
    return KBusyIndicatorWidget_PaintEngine((KBusyIndicatorWidget*)self);
}

QPaintEngine* k_busyindicatorwidget_qbase_paint_engine(void* self) {
    return KBusyIndicatorWidget_QBasePaintEngine((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KBusyIndicatorWidget_OnPaintEngine((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_mouse_press_event(void* self, void* event) {
    KBusyIndicatorWidget_MousePressEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_qbase_mouse_press_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseMousePressEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnMousePressEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_mouse_release_event(void* self, void* event) {
    KBusyIndicatorWidget_MouseReleaseEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_qbase_mouse_release_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseMouseReleaseEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnMouseReleaseEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_mouse_double_click_event(void* self, void* event) {
    KBusyIndicatorWidget_MouseDoubleClickEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_qbase_mouse_double_click_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseMouseDoubleClickEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnMouseDoubleClickEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_mouse_move_event(void* self, void* event) {
    KBusyIndicatorWidget_MouseMoveEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_qbase_mouse_move_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseMouseMoveEvent((KBusyIndicatorWidget*)self, (QMouseEvent*)event);
}

void k_busyindicatorwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnMouseMoveEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_wheel_event(void* self, void* event) {
    KBusyIndicatorWidget_WheelEvent((KBusyIndicatorWidget*)self, (QWheelEvent*)event);
}

void k_busyindicatorwidget_qbase_wheel_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseWheelEvent((KBusyIndicatorWidget*)self, (QWheelEvent*)event);
}

void k_busyindicatorwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnWheelEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_key_press_event(void* self, void* event) {
    KBusyIndicatorWidget_KeyPressEvent((KBusyIndicatorWidget*)self, (QKeyEvent*)event);
}

void k_busyindicatorwidget_qbase_key_press_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseKeyPressEvent((KBusyIndicatorWidget*)self, (QKeyEvent*)event);
}

void k_busyindicatorwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnKeyPressEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_key_release_event(void* self, void* event) {
    KBusyIndicatorWidget_KeyReleaseEvent((KBusyIndicatorWidget*)self, (QKeyEvent*)event);
}

void k_busyindicatorwidget_qbase_key_release_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseKeyReleaseEvent((KBusyIndicatorWidget*)self, (QKeyEvent*)event);
}

void k_busyindicatorwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnKeyReleaseEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_focus_in_event(void* self, void* event) {
    KBusyIndicatorWidget_FocusInEvent((KBusyIndicatorWidget*)self, (QFocusEvent*)event);
}

void k_busyindicatorwidget_qbase_focus_in_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseFocusInEvent((KBusyIndicatorWidget*)self, (QFocusEvent*)event);
}

void k_busyindicatorwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnFocusInEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_focus_out_event(void* self, void* event) {
    KBusyIndicatorWidget_FocusOutEvent((KBusyIndicatorWidget*)self, (QFocusEvent*)event);
}

void k_busyindicatorwidget_qbase_focus_out_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseFocusOutEvent((KBusyIndicatorWidget*)self, (QFocusEvent*)event);
}

void k_busyindicatorwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnFocusOutEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_enter_event(void* self, void* event) {
    KBusyIndicatorWidget_EnterEvent((KBusyIndicatorWidget*)self, (QEnterEvent*)event);
}

void k_busyindicatorwidget_qbase_enter_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseEnterEvent((KBusyIndicatorWidget*)self, (QEnterEvent*)event);
}

void k_busyindicatorwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnEnterEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_leave_event(void* self, void* event) {
    KBusyIndicatorWidget_LeaveEvent((KBusyIndicatorWidget*)self, (QEvent*)event);
}

void k_busyindicatorwidget_qbase_leave_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseLeaveEvent((KBusyIndicatorWidget*)self, (QEvent*)event);
}

void k_busyindicatorwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnLeaveEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_move_event(void* self, void* event) {
    KBusyIndicatorWidget_MoveEvent((KBusyIndicatorWidget*)self, (QMoveEvent*)event);
}

void k_busyindicatorwidget_qbase_move_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseMoveEvent((KBusyIndicatorWidget*)self, (QMoveEvent*)event);
}

void k_busyindicatorwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnMoveEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_close_event(void* self, void* event) {
    KBusyIndicatorWidget_CloseEvent((KBusyIndicatorWidget*)self, (QCloseEvent*)event);
}

void k_busyindicatorwidget_qbase_close_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseCloseEvent((KBusyIndicatorWidget*)self, (QCloseEvent*)event);
}

void k_busyindicatorwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnCloseEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_context_menu_event(void* self, void* event) {
    KBusyIndicatorWidget_ContextMenuEvent((KBusyIndicatorWidget*)self, (QContextMenuEvent*)event);
}

void k_busyindicatorwidget_qbase_context_menu_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseContextMenuEvent((KBusyIndicatorWidget*)self, (QContextMenuEvent*)event);
}

void k_busyindicatorwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnContextMenuEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_tablet_event(void* self, void* event) {
    KBusyIndicatorWidget_TabletEvent((KBusyIndicatorWidget*)self, (QTabletEvent*)event);
}

void k_busyindicatorwidget_qbase_tablet_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseTabletEvent((KBusyIndicatorWidget*)self, (QTabletEvent*)event);
}

void k_busyindicatorwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnTabletEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_action_event(void* self, void* event) {
    KBusyIndicatorWidget_ActionEvent((KBusyIndicatorWidget*)self, (QActionEvent*)event);
}

void k_busyindicatorwidget_qbase_action_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseActionEvent((KBusyIndicatorWidget*)self, (QActionEvent*)event);
}

void k_busyindicatorwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnActionEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_drag_enter_event(void* self, void* event) {
    KBusyIndicatorWidget_DragEnterEvent((KBusyIndicatorWidget*)self, (QDragEnterEvent*)event);
}

void k_busyindicatorwidget_qbase_drag_enter_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseDragEnterEvent((KBusyIndicatorWidget*)self, (QDragEnterEvent*)event);
}

void k_busyindicatorwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnDragEnterEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_drag_move_event(void* self, void* event) {
    KBusyIndicatorWidget_DragMoveEvent((KBusyIndicatorWidget*)self, (QDragMoveEvent*)event);
}

void k_busyindicatorwidget_qbase_drag_move_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseDragMoveEvent((KBusyIndicatorWidget*)self, (QDragMoveEvent*)event);
}

void k_busyindicatorwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnDragMoveEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_drag_leave_event(void* self, void* event) {
    KBusyIndicatorWidget_DragLeaveEvent((KBusyIndicatorWidget*)self, (QDragLeaveEvent*)event);
}

void k_busyindicatorwidget_qbase_drag_leave_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseDragLeaveEvent((KBusyIndicatorWidget*)self, (QDragLeaveEvent*)event);
}

void k_busyindicatorwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnDragLeaveEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_drop_event(void* self, void* event) {
    KBusyIndicatorWidget_DropEvent((KBusyIndicatorWidget*)self, (QDropEvent*)event);
}

void k_busyindicatorwidget_qbase_drop_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseDropEvent((KBusyIndicatorWidget*)self, (QDropEvent*)event);
}

void k_busyindicatorwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnDropEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KBusyIndicatorWidget_NativeEvent((KBusyIndicatorWidget*)self, qstring(eventType), message, result);
}

bool k_busyindicatorwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KBusyIndicatorWidget_QBaseNativeEvent((KBusyIndicatorWidget*)self, qstring(eventType), message, result);
}

void k_busyindicatorwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KBusyIndicatorWidget_OnNativeEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_change_event(void* self, void* param1) {
    KBusyIndicatorWidget_ChangeEvent((KBusyIndicatorWidget*)self, (QEvent*)param1);
}

void k_busyindicatorwidget_qbase_change_event(void* self, void* param1) {
    KBusyIndicatorWidget_QBaseChangeEvent((KBusyIndicatorWidget*)self, (QEvent*)param1);
}

void k_busyindicatorwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnChangeEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

int32_t k_busyindicatorwidget_metric(void* self, int32_t param1) {
    return KBusyIndicatorWidget_Metric((KBusyIndicatorWidget*)self, param1);
}

int32_t k_busyindicatorwidget_qbase_metric(void* self, int32_t param1) {
    return KBusyIndicatorWidget_QBaseMetric((KBusyIndicatorWidget*)self, param1);
}

void k_busyindicatorwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KBusyIndicatorWidget_OnMetric((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_init_painter(void* self, void* painter) {
    KBusyIndicatorWidget_InitPainter((KBusyIndicatorWidget*)self, (QPainter*)painter);
}

void k_busyindicatorwidget_qbase_init_painter(void* self, void* painter) {
    KBusyIndicatorWidget_QBaseInitPainter((KBusyIndicatorWidget*)self, (QPainter*)painter);
}

void k_busyindicatorwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnInitPainter((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_busyindicatorwidget_redirected(void* self, void* offset) {
    return KBusyIndicatorWidget_Redirected((KBusyIndicatorWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_busyindicatorwidget_qbase_redirected(void* self, void* offset) {
    return KBusyIndicatorWidget_QBaseRedirected((KBusyIndicatorWidget*)self, (QPoint*)offset);
}

void k_busyindicatorwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnRedirected((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

QPainter* k_busyindicatorwidget_shared_painter(void* self) {
    return KBusyIndicatorWidget_SharedPainter((KBusyIndicatorWidget*)self);
}

QPainter* k_busyindicatorwidget_qbase_shared_painter(void* self) {
    return KBusyIndicatorWidget_QBaseSharedPainter((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KBusyIndicatorWidget_OnSharedPainter((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_input_method_event(void* self, void* param1) {
    KBusyIndicatorWidget_InputMethodEvent((KBusyIndicatorWidget*)self, (QInputMethodEvent*)param1);
}

void k_busyindicatorwidget_qbase_input_method_event(void* self, void* param1) {
    KBusyIndicatorWidget_QBaseInputMethodEvent((KBusyIndicatorWidget*)self, (QInputMethodEvent*)param1);
}

void k_busyindicatorwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnInputMethodEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

QVariant* k_busyindicatorwidget_input_method_query(void* self, int64_t param1) {
    return KBusyIndicatorWidget_InputMethodQuery((KBusyIndicatorWidget*)self, param1);
}

QVariant* k_busyindicatorwidget_qbase_input_method_query(void* self, int64_t param1) {
    return KBusyIndicatorWidget_QBaseInputMethodQuery((KBusyIndicatorWidget*)self, param1);
}

void k_busyindicatorwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KBusyIndicatorWidget_OnInputMethodQuery((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_focus_next_prev_child(void* self, bool next) {
    return KBusyIndicatorWidget_FocusNextPrevChild((KBusyIndicatorWidget*)self, next);
}

bool k_busyindicatorwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KBusyIndicatorWidget_QBaseFocusNextPrevChild((KBusyIndicatorWidget*)self, next);
}

void k_busyindicatorwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KBusyIndicatorWidget_OnFocusNextPrevChild((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_event_filter(void* self, void* watched, void* event) {
    return KBusyIndicatorWidget_EventFilter((KBusyIndicatorWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_busyindicatorwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return KBusyIndicatorWidget_QBaseEventFilter((KBusyIndicatorWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_busyindicatorwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KBusyIndicatorWidget_OnEventFilter((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_timer_event(void* self, void* event) {
    KBusyIndicatorWidget_TimerEvent((KBusyIndicatorWidget*)self, (QTimerEvent*)event);
}

void k_busyindicatorwidget_qbase_timer_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseTimerEvent((KBusyIndicatorWidget*)self, (QTimerEvent*)event);
}

void k_busyindicatorwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnTimerEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_child_event(void* self, void* event) {
    KBusyIndicatorWidget_ChildEvent((KBusyIndicatorWidget*)self, (QChildEvent*)event);
}

void k_busyindicatorwidget_qbase_child_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseChildEvent((KBusyIndicatorWidget*)self, (QChildEvent*)event);
}

void k_busyindicatorwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnChildEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_custom_event(void* self, void* event) {
    KBusyIndicatorWidget_CustomEvent((KBusyIndicatorWidget*)self, (QEvent*)event);
}

void k_busyindicatorwidget_qbase_custom_event(void* self, void* event) {
    KBusyIndicatorWidget_QBaseCustomEvent((KBusyIndicatorWidget*)self, (QEvent*)event);
}

void k_busyindicatorwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnCustomEvent((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_connect_notify(void* self, void* signal) {
    KBusyIndicatorWidget_ConnectNotify((KBusyIndicatorWidget*)self, (QMetaMethod*)signal);
}

void k_busyindicatorwidget_qbase_connect_notify(void* self, void* signal) {
    KBusyIndicatorWidget_QBaseConnectNotify((KBusyIndicatorWidget*)self, (QMetaMethod*)signal);
}

void k_busyindicatorwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnConnectNotify((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_disconnect_notify(void* self, void* signal) {
    KBusyIndicatorWidget_DisconnectNotify((KBusyIndicatorWidget*)self, (QMetaMethod*)signal);
}

void k_busyindicatorwidget_qbase_disconnect_notify(void* self, void* signal) {
    KBusyIndicatorWidget_QBaseDisconnectNotify((KBusyIndicatorWidget*)self, (QMetaMethod*)signal);
}

void k_busyindicatorwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnDisconnectNotify((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_update_micro_focus(void* self) {
    KBusyIndicatorWidget_UpdateMicroFocus((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_qbase_update_micro_focus(void* self) {
    KBusyIndicatorWidget_QBaseUpdateMicroFocus((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_update_micro_focus(void* self, void (*callback)()) {
    KBusyIndicatorWidget_OnUpdateMicroFocus((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_create(void* self) {
    KBusyIndicatorWidget_Create((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_qbase_create(void* self) {
    KBusyIndicatorWidget_QBaseCreate((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_create(void* self, void (*callback)()) {
    KBusyIndicatorWidget_OnCreate((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_destroy(void* self) {
    KBusyIndicatorWidget_Destroy((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_qbase_destroy(void* self) {
    KBusyIndicatorWidget_QBaseDestroy((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_destroy(void* self, void (*callback)()) {
    KBusyIndicatorWidget_OnDestroy((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_focus_next_child(void* self) {
    return KBusyIndicatorWidget_FocusNextChild((KBusyIndicatorWidget*)self);
}

bool k_busyindicatorwidget_qbase_focus_next_child(void* self) {
    return KBusyIndicatorWidget_QBaseFocusNextChild((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_focus_next_child(void* self, bool (*callback)()) {
    KBusyIndicatorWidget_OnFocusNextChild((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_focus_previous_child(void* self) {
    return KBusyIndicatorWidget_FocusPreviousChild((KBusyIndicatorWidget*)self);
}

bool k_busyindicatorwidget_qbase_focus_previous_child(void* self) {
    return KBusyIndicatorWidget_QBaseFocusPreviousChild((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KBusyIndicatorWidget_OnFocusPreviousChild((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

QObject* k_busyindicatorwidget_sender(void* self) {
    return KBusyIndicatorWidget_Sender((KBusyIndicatorWidget*)self);
}

QObject* k_busyindicatorwidget_qbase_sender(void* self) {
    return KBusyIndicatorWidget_QBaseSender((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_sender(void* self, QObject* (*callback)()) {
    KBusyIndicatorWidget_OnSender((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

int32_t k_busyindicatorwidget_sender_signal_index(void* self) {
    return KBusyIndicatorWidget_SenderSignalIndex((KBusyIndicatorWidget*)self);
}

int32_t k_busyindicatorwidget_qbase_sender_signal_index(void* self) {
    return KBusyIndicatorWidget_QBaseSenderSignalIndex((KBusyIndicatorWidget*)self);
}

void k_busyindicatorwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KBusyIndicatorWidget_OnSenderSignalIndex((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

int32_t k_busyindicatorwidget_receivers(void* self, const char* signal) {
    return KBusyIndicatorWidget_Receivers((KBusyIndicatorWidget*)self, signal);
}

int32_t k_busyindicatorwidget_qbase_receivers(void* self, const char* signal) {
    return KBusyIndicatorWidget_QBaseReceivers((KBusyIndicatorWidget*)self, signal);
}

void k_busyindicatorwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KBusyIndicatorWidget_OnReceivers((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

bool k_busyindicatorwidget_is_signal_connected(void* self, void* signal) {
    return KBusyIndicatorWidget_IsSignalConnected((KBusyIndicatorWidget*)self, (QMetaMethod*)signal);
}

bool k_busyindicatorwidget_qbase_is_signal_connected(void* self, void* signal) {
    return KBusyIndicatorWidget_QBaseIsSignalConnected((KBusyIndicatorWidget*)self, (QMetaMethod*)signal);
}

void k_busyindicatorwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KBusyIndicatorWidget_OnIsSignalConnected((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

double k_busyindicatorwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KBusyIndicatorWidget_GetDecodedMetricF((KBusyIndicatorWidget*)self, metricA, metricB);
}

double k_busyindicatorwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KBusyIndicatorWidget_QBaseGetDecodedMetricF((KBusyIndicatorWidget*)self, metricA, metricB);
}

void k_busyindicatorwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KBusyIndicatorWidget_OnGetDecodedMetricF((KBusyIndicatorWidget*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_busyindicatorwidget_delete(void* self) {
    KBusyIndicatorWidget_Delete((KBusyIndicatorWidget*)(self));
}
