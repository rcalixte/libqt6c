#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkxyselector.hpp"
#include "libkxyselector.h"

KXYSelector* k_xyselector_new(void* parent) {
    return KXYSelector_new((QWidget*)parent);
}

KXYSelector* k_xyselector_new2() {
    return KXYSelector_new2();
}

const QMetaObject* k_xyselector_meta_object(void* self) {
    return KXYSelector_MetaObject((KXYSelector*)self);
}

void k_xyselector_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KXYSelector_OnMetaObject((KXYSelector*)self, (intptr_t)callback);
}

const QMetaObject* k_xyselector_super_meta_object(void* self) {
    return KXYSelector_SuperMetaObject((KXYSelector*)self);
}

void* k_xyselector_metacast(void* self, const char* param1) {
    return KXYSelector_Metacast((KXYSelector*)self, param1);
}

void k_xyselector_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KXYSelector_OnMetacast((KXYSelector*)self, (intptr_t)callback);
}

void* k_xyselector_super_metacast(void* self, const char* param1) {
    return KXYSelector_SuperMetacast((KXYSelector*)self, param1);
}

int32_t k_xyselector_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXYSelector_Metacall((KXYSelector*)self, param1, param2, param3);
}

void k_xyselector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KXYSelector_OnMetacall((KXYSelector*)self, (intptr_t)callback);
}

int32_t k_xyselector_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KXYSelector_SuperMetacall((KXYSelector*)self, param1, param2, param3);
}

const char* k_xyselector_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_values(void* self, int xPos, int yPos) {
    KXYSelector_SetValues((KXYSelector*)self, xPos, yPos);
}

void k_xyselector_set_x_value(void* self, int xPos) {
    KXYSelector_SetXValue((KXYSelector*)self, xPos);
}

void k_xyselector_set_y_value(void* self, int yPos) {
    KXYSelector_SetYValue((KXYSelector*)self, yPos);
}

void k_xyselector_set_range(void* self, int minX, int minY, int maxX, int maxY) {
    KXYSelector_SetRange((KXYSelector*)self, minX, minY, maxX, maxY);
}

void k_xyselector_set_marker_color(void* self, void* col) {
    KXYSelector_SetMarkerColor((KXYSelector*)self, (QColor*)col);
}

int32_t k_xyselector_x_value(void* self) {
    return KXYSelector_XValue((KXYSelector*)self);
}

int32_t k_xyselector_y_value(void* self) {
    return KXYSelector_YValue((KXYSelector*)self);
}

QRect* k_xyselector_contents_rect(void* self) {
    return KXYSelector_ContentsRect((KXYSelector*)self);
}

QSize* k_xyselector_minimum_size_hint(void* self) {
    return KXYSelector_MinimumSizeHint((KXYSelector*)self);
}

void k_xyselector_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KXYSelector_OnMinimumSizeHint((KXYSelector*)self, (intptr_t)callback);
}

QSize* k_xyselector_super_minimum_size_hint(void* self) {
    return KXYSelector_SuperMinimumSizeHint((KXYSelector*)self);
}

void k_xyselector_value_changed(void* self, int x, int y) {
    KXYSelector_ValueChanged((KXYSelector*)self, x, y);
}

void k_xyselector_on_value_changed(void* self, void (*callback)(void*, int, int)) {
    KXYSelector_Connect_ValueChanged((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_draw_contents(void* self, void* param1) {
    KXYSelector_DrawContents((KXYSelector*)self, (QPainter*)param1);
}

void k_xyselector_on_draw_contents(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnDrawContents((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_super_draw_contents(void* self, void* param1) {
    KXYSelector_SuperDrawContents((KXYSelector*)self, (QPainter*)param1);
}

void k_xyselector_draw_marker(void* self, void* p, int xp, int yp) {
    KXYSelector_DrawMarker((KXYSelector*)self, (QPainter*)p, xp, yp);
}

void k_xyselector_on_draw_marker(void* self, void (*callback)(void*, void*, int, int)) {
    KXYSelector_OnDrawMarker((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_super_draw_marker(void* self, void* p, int xp, int yp) {
    KXYSelector_SuperDrawMarker((KXYSelector*)self, (QPainter*)p, xp, yp);
}

void k_xyselector_paint_event(void* self, void* e) {
    KXYSelector_PaintEvent((KXYSelector*)self, (QPaintEvent*)e);
}

void k_xyselector_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnPaintEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_super_paint_event(void* self, void* e) {
    KXYSelector_SuperPaintEvent((KXYSelector*)self, (QPaintEvent*)e);
}

void k_xyselector_mouse_press_event(void* self, void* e) {
    KXYSelector_MousePressEvent((KXYSelector*)self, (QMouseEvent*)e);
}

void k_xyselector_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnMousePressEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_super_mouse_press_event(void* self, void* e) {
    KXYSelector_SuperMousePressEvent((KXYSelector*)self, (QMouseEvent*)e);
}

void k_xyselector_mouse_move_event(void* self, void* e) {
    KXYSelector_MouseMoveEvent((KXYSelector*)self, (QMouseEvent*)e);
}

void k_xyselector_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnMouseMoveEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_super_mouse_move_event(void* self, void* e) {
    KXYSelector_SuperMouseMoveEvent((KXYSelector*)self, (QMouseEvent*)e);
}

void k_xyselector_wheel_event(void* self, void* param1) {
    KXYSelector_WheelEvent((KXYSelector*)self, (QWheelEvent*)param1);
}

void k_xyselector_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnWheelEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_super_wheel_event(void* self, void* param1) {
    KXYSelector_SuperWheelEvent((KXYSelector*)self, (QWheelEvent*)param1);
}

void k_xyselector_values_from_position(void* self, int x, int y, int* xVal, int* yVal) {
    KXYSelector_ValuesFromPosition((KXYSelector*)self, x, y, xVal, yVal);
}

void k_xyselector_on_values_from_position(void* self, void (*callback)(void*, int, int, int*, int*)) {
    KXYSelector_OnValuesFromPosition((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_super_values_from_position(void* self, int x, int y, int* xVal, int* yVal) {
    KXYSelector_SuperValuesFromPosition((KXYSelector*)self, x, y, xVal, yVal);
}

const char* k_xyselector_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xyselector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_xyselector_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_xyselector_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_xyselector_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_xyselector_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_xyselector_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_xyselector_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_xyselector_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_xyselector_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_xyselector_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_xyselector_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_xyselector_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_xyselector_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_xyselector_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_xyselector_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_xyselector_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_xyselector_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_xyselector_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_xyselector_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_xyselector_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_xyselector_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_xyselector_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_xyselector_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_xyselector_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_xyselector_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_xyselector_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_xyselector_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_xyselector_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_xyselector_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_xyselector_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_xyselector_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_xyselector_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_xyselector_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_xyselector_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_xyselector_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_xyselector_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_xyselector_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_xyselector_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_xyselector_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_xyselector_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_xyselector_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_xyselector_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_xyselector_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_xyselector_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_xyselector_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_xyselector_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_xyselector_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_xyselector_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_xyselector_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_xyselector_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_xyselector_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_xyselector_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_xyselector_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_xyselector_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_xyselector_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xyselector_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xyselector_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xyselector_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xyselector_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xyselector_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xyselector_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_xyselector_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_xyselector_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_xyselector_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_xyselector_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_xyselector_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_xyselector_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_xyselector_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_xyselector_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_xyselector_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_xyselector_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_xyselector_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_xyselector_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_xyselector_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_xyselector_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_xyselector_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_xyselector_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_xyselector_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_xyselector_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_xyselector_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_xyselector_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_xyselector_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_xyselector_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_xyselector_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_xyselector_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_xyselector_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_xyselector_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_xyselector_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_xyselector_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_xyselector_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_xyselector_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_xyselector_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_xyselector_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_xyselector_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_xyselector_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_xyselector_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_xyselector_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_xyselector_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_xyselector_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_xyselector_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_xyselector_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xyselector_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_xyselector_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_xyselector_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_xyselector_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_xyselector_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_xyselector_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_xyselector_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_xyselector_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_xyselector_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_xyselector_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_xyselector_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_xyselector_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_xyselector_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_xyselector_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_xyselector_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_xyselector_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_xyselector_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_xyselector_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_xyselector_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_xyselector_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_xyselector_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_xyselector_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_xyselector_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_xyselector_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_xyselector_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_xyselector_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_xyselector_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_xyselector_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_xyselector_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_xyselector_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_xyselector_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_xyselector_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_xyselector_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_xyselector_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_xyselector_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_xyselector_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_xyselector_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_xyselector_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_xyselector_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_xyselector_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_xyselector_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_xyselector_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_xyselector_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_xyselector_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_xyselector_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_xyselector_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_xyselector_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_xyselector_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_xyselector_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_xyselector_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_xyselector_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_xyselector_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_xyselector_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_xyselector_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_xyselector_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_xyselector_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_xyselector_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_xyselector_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_xyselector_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_xyselector_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_xyselector_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_xyselector_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_xyselector_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_xyselector_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_xyselector_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_xyselector_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_xyselector_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_xyselector_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_xyselector_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_xyselector_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_xyselector_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_xyselector_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_xyselector_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_xyselector_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_xyselector_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_xyselector_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_xyselector_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_xyselector_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_xyselector_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_xyselector_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_xyselector_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_xyselector_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_xyselector_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_xyselector_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_xyselector_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_xyselector_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_xyselector_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_xyselector_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_xyselector_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_xyselector_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_xyselector_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_xyselector_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_xyselector_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_xyselector_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_xyselector_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QLayout* k_xyselector_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_xyselector_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_xyselector_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_xyselector_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_xyselector_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_xyselector_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_xyselector_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_xyselector_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_xyselector_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_xyselector_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_xyselector_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_xyselector_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_xyselector_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_xyselector_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_xyselector_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_xyselector_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_xyselector_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_xyselector_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_xyselector_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_xyselector_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_xyselector_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_xyselector_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_xyselector_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_xyselector_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_xyselector_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_xyselector_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_xyselector_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_xyselector_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_xyselector_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_xyselector_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_xyselector_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_xyselector_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_xyselector_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_xyselector_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_xyselector_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_xyselector_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_xyselector_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_xyselector_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_xyselector_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_xyselector_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_xyselector_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_xyselector_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_xyselector_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_xyselector_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_xyselector_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_xyselector_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_xyselector_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_xyselector_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_xyselector_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_xyselector_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_xyselector_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_xyselector_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_xyselector_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_xyselector_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_xyselector_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_xyselector_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_xyselector_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_xyselector_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_xyselector_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_xyselector_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_xyselector_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_xyselector_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_xyselector_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_xyselector_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_xyselector_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_xyselector_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_xyselector_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_xyselector_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_xyselector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_xyselector_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_xyselector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_xyselector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_xyselector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_xyselector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_xyselector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_xyselector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_xyselector_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_xyselector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_xyselector_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_xyselector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_xyselector_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_xyselector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_xyselector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_xyselector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_xyselector_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_xyselector_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_xyselector_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_xyselector_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_xyselector_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_xyselector_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_xyselector_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_xyselector_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_xyselector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_xyselector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_xyselector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_xyselector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_xyselector_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xyselector_dynamic_property_names\n");
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

QBindingStorage* k_xyselector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_xyselector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_xyselector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_xyselector_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_xyselector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_xyselector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_xyselector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_xyselector_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_xyselector_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_xyselector_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_xyselector_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_xyselector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_xyselector_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_xyselector_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_xyselector_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_xyselector_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_xyselector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_xyselector_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_xyselector_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_xyselector_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_xyselector_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_xyselector_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_xyselector_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_xyselector_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_xyselector_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_xyselector_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_xyselector_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_xyselector_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_xyselector_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_xyselector_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_xyselector_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_xyselector_dev_type(void* self) {
    return KXYSelector_DevType((KXYSelector*)self);
}

int32_t k_xyselector_super_dev_type(void* self) {
    return KXYSelector_SuperDevType((KXYSelector*)self);
}

void k_xyselector_on_dev_type(void* self, int32_t (*callback)()) {
    KXYSelector_OnDevType((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_set_visible(void* self, bool visible) {
    KXYSelector_SetVisible((KXYSelector*)self, visible);
}

void k_xyselector_super_set_visible(void* self, bool visible) {
    KXYSelector_SuperSetVisible((KXYSelector*)self, visible);
}

void k_xyselector_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KXYSelector_OnSetVisible((KXYSelector*)self, (intptr_t)callback);
}

QSize* k_xyselector_size_hint(void* self) {
    return KXYSelector_SizeHint((KXYSelector*)self);
}

QSize* k_xyselector_super_size_hint(void* self) {
    return KXYSelector_SuperSizeHint((KXYSelector*)self);
}

void k_xyselector_on_size_hint(void* self, QSize* (*callback)()) {
    KXYSelector_OnSizeHint((KXYSelector*)self, (intptr_t)callback);
}

int32_t k_xyselector_height_for_width(void* self, int param1) {
    return KXYSelector_HeightForWidth((KXYSelector*)self, param1);
}

int32_t k_xyselector_super_height_for_width(void* self, int param1) {
    return KXYSelector_SuperHeightForWidth((KXYSelector*)self, param1);
}

void k_xyselector_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KXYSelector_OnHeightForWidth((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_has_height_for_width(void* self) {
    return KXYSelector_HasHeightForWidth((KXYSelector*)self);
}

bool k_xyselector_super_has_height_for_width(void* self) {
    return KXYSelector_SuperHasHeightForWidth((KXYSelector*)self);
}

void k_xyselector_on_has_height_for_width(void* self, bool (*callback)()) {
    KXYSelector_OnHasHeightForWidth((KXYSelector*)self, (intptr_t)callback);
}

QPaintEngine* k_xyselector_paint_engine(void* self) {
    return KXYSelector_PaintEngine((KXYSelector*)self);
}

QPaintEngine* k_xyselector_super_paint_engine(void* self) {
    return KXYSelector_SuperPaintEngine((KXYSelector*)self);
}

void k_xyselector_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KXYSelector_OnPaintEngine((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_event(void* self, void* event) {
    return KXYSelector_Event((KXYSelector*)self, (QEvent*)event);
}

bool k_xyselector_super_event(void* self, void* event) {
    return KXYSelector_SuperEvent((KXYSelector*)self, (QEvent*)event);
}

void k_xyselector_on_event(void* self, bool (*callback)(void*, void*)) {
    KXYSelector_OnEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_mouse_release_event(void* self, void* event) {
    KXYSelector_MouseReleaseEvent((KXYSelector*)self, (QMouseEvent*)event);
}

void k_xyselector_super_mouse_release_event(void* self, void* event) {
    KXYSelector_SuperMouseReleaseEvent((KXYSelector*)self, (QMouseEvent*)event);
}

void k_xyselector_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnMouseReleaseEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_mouse_double_click_event(void* self, void* event) {
    KXYSelector_MouseDoubleClickEvent((KXYSelector*)self, (QMouseEvent*)event);
}

void k_xyselector_super_mouse_double_click_event(void* self, void* event) {
    KXYSelector_SuperMouseDoubleClickEvent((KXYSelector*)self, (QMouseEvent*)event);
}

void k_xyselector_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnMouseDoubleClickEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_key_press_event(void* self, void* event) {
    KXYSelector_KeyPressEvent((KXYSelector*)self, (QKeyEvent*)event);
}

void k_xyselector_super_key_press_event(void* self, void* event) {
    KXYSelector_SuperKeyPressEvent((KXYSelector*)self, (QKeyEvent*)event);
}

void k_xyselector_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnKeyPressEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_key_release_event(void* self, void* event) {
    KXYSelector_KeyReleaseEvent((KXYSelector*)self, (QKeyEvent*)event);
}

void k_xyselector_super_key_release_event(void* self, void* event) {
    KXYSelector_SuperKeyReleaseEvent((KXYSelector*)self, (QKeyEvent*)event);
}

void k_xyselector_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnKeyReleaseEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_focus_in_event(void* self, void* event) {
    KXYSelector_FocusInEvent((KXYSelector*)self, (QFocusEvent*)event);
}

void k_xyselector_super_focus_in_event(void* self, void* event) {
    KXYSelector_SuperFocusInEvent((KXYSelector*)self, (QFocusEvent*)event);
}

void k_xyselector_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnFocusInEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_focus_out_event(void* self, void* event) {
    KXYSelector_FocusOutEvent((KXYSelector*)self, (QFocusEvent*)event);
}

void k_xyselector_super_focus_out_event(void* self, void* event) {
    KXYSelector_SuperFocusOutEvent((KXYSelector*)self, (QFocusEvent*)event);
}

void k_xyselector_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnFocusOutEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_enter_event(void* self, void* event) {
    KXYSelector_EnterEvent((KXYSelector*)self, (QEnterEvent*)event);
}

void k_xyselector_super_enter_event(void* self, void* event) {
    KXYSelector_SuperEnterEvent((KXYSelector*)self, (QEnterEvent*)event);
}

void k_xyselector_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnEnterEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_leave_event(void* self, void* event) {
    KXYSelector_LeaveEvent((KXYSelector*)self, (QEvent*)event);
}

void k_xyselector_super_leave_event(void* self, void* event) {
    KXYSelector_SuperLeaveEvent((KXYSelector*)self, (QEvent*)event);
}

void k_xyselector_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnLeaveEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_move_event(void* self, void* event) {
    KXYSelector_MoveEvent((KXYSelector*)self, (QMoveEvent*)event);
}

void k_xyselector_super_move_event(void* self, void* event) {
    KXYSelector_SuperMoveEvent((KXYSelector*)self, (QMoveEvent*)event);
}

void k_xyselector_on_move_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnMoveEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_resize_event(void* self, void* event) {
    KXYSelector_ResizeEvent((KXYSelector*)self, (QResizeEvent*)event);
}

void k_xyselector_super_resize_event(void* self, void* event) {
    KXYSelector_SuperResizeEvent((KXYSelector*)self, (QResizeEvent*)event);
}

void k_xyselector_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnResizeEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_close_event(void* self, void* event) {
    KXYSelector_CloseEvent((KXYSelector*)self, (QCloseEvent*)event);
}

void k_xyselector_super_close_event(void* self, void* event) {
    KXYSelector_SuperCloseEvent((KXYSelector*)self, (QCloseEvent*)event);
}

void k_xyselector_on_close_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnCloseEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_context_menu_event(void* self, void* event) {
    KXYSelector_ContextMenuEvent((KXYSelector*)self, (QContextMenuEvent*)event);
}

void k_xyselector_super_context_menu_event(void* self, void* event) {
    KXYSelector_SuperContextMenuEvent((KXYSelector*)self, (QContextMenuEvent*)event);
}

void k_xyselector_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnContextMenuEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_tablet_event(void* self, void* event) {
    KXYSelector_TabletEvent((KXYSelector*)self, (QTabletEvent*)event);
}

void k_xyselector_super_tablet_event(void* self, void* event) {
    KXYSelector_SuperTabletEvent((KXYSelector*)self, (QTabletEvent*)event);
}

void k_xyselector_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnTabletEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_action_event(void* self, void* event) {
    KXYSelector_ActionEvent((KXYSelector*)self, (QActionEvent*)event);
}

void k_xyselector_super_action_event(void* self, void* event) {
    KXYSelector_SuperActionEvent((KXYSelector*)self, (QActionEvent*)event);
}

void k_xyselector_on_action_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnActionEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_drag_enter_event(void* self, void* event) {
    KXYSelector_DragEnterEvent((KXYSelector*)self, (QDragEnterEvent*)event);
}

void k_xyselector_super_drag_enter_event(void* self, void* event) {
    KXYSelector_SuperDragEnterEvent((KXYSelector*)self, (QDragEnterEvent*)event);
}

void k_xyselector_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnDragEnterEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_drag_move_event(void* self, void* event) {
    KXYSelector_DragMoveEvent((KXYSelector*)self, (QDragMoveEvent*)event);
}

void k_xyselector_super_drag_move_event(void* self, void* event) {
    KXYSelector_SuperDragMoveEvent((KXYSelector*)self, (QDragMoveEvent*)event);
}

void k_xyselector_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnDragMoveEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_drag_leave_event(void* self, void* event) {
    KXYSelector_DragLeaveEvent((KXYSelector*)self, (QDragLeaveEvent*)event);
}

void k_xyselector_super_drag_leave_event(void* self, void* event) {
    KXYSelector_SuperDragLeaveEvent((KXYSelector*)self, (QDragLeaveEvent*)event);
}

void k_xyselector_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnDragLeaveEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_drop_event(void* self, void* event) {
    KXYSelector_DropEvent((KXYSelector*)self, (QDropEvent*)event);
}

void k_xyselector_super_drop_event(void* self, void* event) {
    KXYSelector_SuperDropEvent((KXYSelector*)self, (QDropEvent*)event);
}

void k_xyselector_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnDropEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_show_event(void* self, void* event) {
    KXYSelector_ShowEvent((KXYSelector*)self, (QShowEvent*)event);
}

void k_xyselector_super_show_event(void* self, void* event) {
    KXYSelector_SuperShowEvent((KXYSelector*)self, (QShowEvent*)event);
}

void k_xyselector_on_show_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnShowEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_hide_event(void* self, void* event) {
    KXYSelector_HideEvent((KXYSelector*)self, (QHideEvent*)event);
}

void k_xyselector_super_hide_event(void* self, void* event) {
    KXYSelector_SuperHideEvent((KXYSelector*)self, (QHideEvent*)event);
}

void k_xyselector_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnHideEvent((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KXYSelector_NativeEvent((KXYSelector*)self, qstring(eventType), message, result);
}

bool k_xyselector_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KXYSelector_SuperNativeEvent((KXYSelector*)self, qstring(eventType), message, result);
}

void k_xyselector_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KXYSelector_OnNativeEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_change_event(void* self, void* param1) {
    KXYSelector_ChangeEvent((KXYSelector*)self, (QEvent*)param1);
}

void k_xyselector_super_change_event(void* self, void* param1) {
    KXYSelector_SuperChangeEvent((KXYSelector*)self, (QEvent*)param1);
}

void k_xyselector_on_change_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnChangeEvent((KXYSelector*)self, (intptr_t)callback);
}

int32_t k_xyselector_metric(void* self, int32_t param1) {
    return KXYSelector_Metric((KXYSelector*)self, param1);
}

int32_t k_xyselector_super_metric(void* self, int32_t param1) {
    return KXYSelector_SuperMetric((KXYSelector*)self, param1);
}

void k_xyselector_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KXYSelector_OnMetric((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_init_painter(void* self, void* painter) {
    KXYSelector_InitPainter((KXYSelector*)self, (QPainter*)painter);
}

void k_xyselector_super_init_painter(void* self, void* painter) {
    KXYSelector_SuperInitPainter((KXYSelector*)self, (QPainter*)painter);
}

void k_xyselector_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnInitPainter((KXYSelector*)self, (intptr_t)callback);
}

QPaintDevice* k_xyselector_redirected(void* self, void* offset) {
    return KXYSelector_Redirected((KXYSelector*)self, (QPoint*)offset);
}

QPaintDevice* k_xyselector_super_redirected(void* self, void* offset) {
    return KXYSelector_SuperRedirected((KXYSelector*)self, (QPoint*)offset);
}

void k_xyselector_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KXYSelector_OnRedirected((KXYSelector*)self, (intptr_t)callback);
}

QPainter* k_xyselector_shared_painter(void* self) {
    return KXYSelector_SharedPainter((KXYSelector*)self);
}

QPainter* k_xyselector_super_shared_painter(void* self) {
    return KXYSelector_SuperSharedPainter((KXYSelector*)self);
}

void k_xyselector_on_shared_painter(void* self, QPainter* (*callback)()) {
    KXYSelector_OnSharedPainter((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_input_method_event(void* self, void* param1) {
    KXYSelector_InputMethodEvent((KXYSelector*)self, (QInputMethodEvent*)param1);
}

void k_xyselector_super_input_method_event(void* self, void* param1) {
    KXYSelector_SuperInputMethodEvent((KXYSelector*)self, (QInputMethodEvent*)param1);
}

void k_xyselector_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnInputMethodEvent((KXYSelector*)self, (intptr_t)callback);
}

QVariant* k_xyselector_input_method_query(void* self, int32_t param1) {
    return KXYSelector_InputMethodQuery((KXYSelector*)self, param1);
}

QVariant* k_xyselector_super_input_method_query(void* self, int32_t param1) {
    return KXYSelector_SuperInputMethodQuery((KXYSelector*)self, param1);
}

void k_xyselector_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KXYSelector_OnInputMethodQuery((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_focus_next_prev_child(void* self, bool next) {
    return KXYSelector_FocusNextPrevChild((KXYSelector*)self, next);
}

bool k_xyselector_super_focus_next_prev_child(void* self, bool next) {
    return KXYSelector_SuperFocusNextPrevChild((KXYSelector*)self, next);
}

void k_xyselector_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KXYSelector_OnFocusNextPrevChild((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_event_filter(void* self, void* watched, void* event) {
    return KXYSelector_EventFilter((KXYSelector*)self, (QObject*)watched, (QEvent*)event);
}

bool k_xyselector_super_event_filter(void* self, void* watched, void* event) {
    return KXYSelector_SuperEventFilter((KXYSelector*)self, (QObject*)watched, (QEvent*)event);
}

void k_xyselector_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KXYSelector_OnEventFilter((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_timer_event(void* self, void* event) {
    KXYSelector_TimerEvent((KXYSelector*)self, (QTimerEvent*)event);
}

void k_xyselector_super_timer_event(void* self, void* event) {
    KXYSelector_SuperTimerEvent((KXYSelector*)self, (QTimerEvent*)event);
}

void k_xyselector_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnTimerEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_child_event(void* self, void* event) {
    KXYSelector_ChildEvent((KXYSelector*)self, (QChildEvent*)event);
}

void k_xyselector_super_child_event(void* self, void* event) {
    KXYSelector_SuperChildEvent((KXYSelector*)self, (QChildEvent*)event);
}

void k_xyselector_on_child_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnChildEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_custom_event(void* self, void* event) {
    KXYSelector_CustomEvent((KXYSelector*)self, (QEvent*)event);
}

void k_xyselector_super_custom_event(void* self, void* event) {
    KXYSelector_SuperCustomEvent((KXYSelector*)self, (QEvent*)event);
}

void k_xyselector_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnCustomEvent((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_connect_notify(void* self, void* signal) {
    KXYSelector_ConnectNotify((KXYSelector*)self, (QMetaMethod*)signal);
}

void k_xyselector_super_connect_notify(void* self, void* signal) {
    KXYSelector_SuperConnectNotify((KXYSelector*)self, (QMetaMethod*)signal);
}

void k_xyselector_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnConnectNotify((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_disconnect_notify(void* self, void* signal) {
    KXYSelector_DisconnectNotify((KXYSelector*)self, (QMetaMethod*)signal);
}

void k_xyselector_super_disconnect_notify(void* self, void* signal) {
    KXYSelector_SuperDisconnectNotify((KXYSelector*)self, (QMetaMethod*)signal);
}

void k_xyselector_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KXYSelector_OnDisconnectNotify((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_update_micro_focus(void* self) {
    KXYSelector_UpdateMicroFocus((KXYSelector*)self);
}

void k_xyselector_super_update_micro_focus(void* self) {
    KXYSelector_SuperUpdateMicroFocus((KXYSelector*)self);
}

void k_xyselector_on_update_micro_focus(void* self, void (*callback)()) {
    KXYSelector_OnUpdateMicroFocus((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_create(void* self) {
    KXYSelector_Create((KXYSelector*)self);
}

void k_xyselector_super_create(void* self) {
    KXYSelector_SuperCreate((KXYSelector*)self);
}

void k_xyselector_on_create(void* self, void (*callback)()) {
    KXYSelector_OnCreate((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_destroy(void* self) {
    KXYSelector_Destroy((KXYSelector*)self);
}

void k_xyselector_super_destroy(void* self) {
    KXYSelector_SuperDestroy((KXYSelector*)self);
}

void k_xyselector_on_destroy(void* self, void (*callback)()) {
    KXYSelector_OnDestroy((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_focus_next_child(void* self) {
    return KXYSelector_FocusNextChild((KXYSelector*)self);
}

bool k_xyselector_super_focus_next_child(void* self) {
    return KXYSelector_SuperFocusNextChild((KXYSelector*)self);
}

void k_xyselector_on_focus_next_child(void* self, bool (*callback)()) {
    KXYSelector_OnFocusNextChild((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_focus_previous_child(void* self) {
    return KXYSelector_FocusPreviousChild((KXYSelector*)self);
}

bool k_xyselector_super_focus_previous_child(void* self) {
    return KXYSelector_SuperFocusPreviousChild((KXYSelector*)self);
}

void k_xyselector_on_focus_previous_child(void* self, bool (*callback)()) {
    KXYSelector_OnFocusPreviousChild((KXYSelector*)self, (intptr_t)callback);
}

QObject* k_xyselector_sender(void* self) {
    return KXYSelector_Sender((KXYSelector*)self);
}

QObject* k_xyselector_super_sender(void* self) {
    return KXYSelector_SuperSender((KXYSelector*)self);
}

void k_xyselector_on_sender(void* self, QObject* (*callback)()) {
    KXYSelector_OnSender((KXYSelector*)self, (intptr_t)callback);
}

int32_t k_xyselector_sender_signal_index(void* self) {
    return KXYSelector_SenderSignalIndex((KXYSelector*)self);
}

int32_t k_xyselector_super_sender_signal_index(void* self) {
    return KXYSelector_SuperSenderSignalIndex((KXYSelector*)self);
}

void k_xyselector_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KXYSelector_OnSenderSignalIndex((KXYSelector*)self, (intptr_t)callback);
}

int32_t k_xyselector_receivers(void* self, const char* signal) {
    return KXYSelector_Receivers((KXYSelector*)self, signal);
}

int32_t k_xyselector_super_receivers(void* self, const char* signal) {
    return KXYSelector_SuperReceivers((KXYSelector*)self, signal);
}

void k_xyselector_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KXYSelector_OnReceivers((KXYSelector*)self, (intptr_t)callback);
}

bool k_xyselector_is_signal_connected(void* self, void* signal) {
    return KXYSelector_IsSignalConnected((KXYSelector*)self, (QMetaMethod*)signal);
}

bool k_xyselector_super_is_signal_connected(void* self, void* signal) {
    return KXYSelector_SuperIsSignalConnected((KXYSelector*)self, (QMetaMethod*)signal);
}

void k_xyselector_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KXYSelector_OnIsSignalConnected((KXYSelector*)self, (intptr_t)callback);
}

double k_xyselector_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KXYSelector_GetDecodedMetricF((KXYSelector*)self, metricA, metricB);
}

double k_xyselector_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KXYSelector_SuperGetDecodedMetricF((KXYSelector*)self, metricA, metricB);
}

void k_xyselector_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KXYSelector_OnGetDecodedMetricF((KXYSelector*)self, (intptr_t)callback);
}

void k_xyselector_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_xyselector_delete(void* self) {
    KXYSelector_Delete((KXYSelector*)(self));
}
