#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
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
#include "libkcapacitybar.hpp"
#include "libkcapacitybar.h"

KCapacityBar* k_capacitybar_new(void* parent) {
    return KCapacityBar_new((QWidget*)parent);
}

KCapacityBar* k_capacitybar_new2() {
    return KCapacityBar_new2();
}

KCapacityBar* k_capacitybar_new3(int32_t drawTextMode) {
    return KCapacityBar_new3(drawTextMode);
}

KCapacityBar* k_capacitybar_new4(int32_t drawTextMode, void* parent) {
    return KCapacityBar_new4(drawTextMode, (QWidget*)parent);
}

const QMetaObject* k_capacitybar_meta_object(void* self) {
    return KCapacityBar_MetaObject((KCapacityBar*)self);
}

void* k_capacitybar_metacast(void* self, const char* param1) {
    return KCapacityBar_Metacast((KCapacityBar*)self, param1);
}

int32_t k_capacitybar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCapacityBar_Metacall((KCapacityBar*)self, param1, param2, param3);
}

void k_capacitybar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCapacityBar_OnMetacall((KCapacityBar*)self, (intptr_t)callback);
}

int32_t k_capacitybar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCapacityBar_QBaseMetacall((KCapacityBar*)self, param1, param2, param3);
}

const char* k_capacitybar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_value(void* self, int value) {
    KCapacityBar_SetValue((KCapacityBar*)self, value);
}

int32_t k_capacitybar_value(void* self) {
    return KCapacityBar_Value((KCapacityBar*)self);
}

void k_capacitybar_set_text(void* self, const char* text) {
    KCapacityBar_SetText((KCapacityBar*)self, qstring(text));
}

const char* k_capacitybar_text(void* self) {
    libqt_string _str = KCapacityBar_Text((KCapacityBar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_fill_full_blocks(void* self, bool fillFullBlocks) {
    KCapacityBar_SetFillFullBlocks((KCapacityBar*)self, fillFullBlocks);
}

bool k_capacitybar_fill_full_blocks(void* self) {
    return KCapacityBar_FillFullBlocks((KCapacityBar*)self);
}

void k_capacitybar_set_continuous(void* self, bool continuous) {
    KCapacityBar_SetContinuous((KCapacityBar*)self, continuous);
}

bool k_capacitybar_continuous(void* self) {
    return KCapacityBar_Continuous((KCapacityBar*)self);
}

void k_capacitybar_set_bar_height(void* self, int barHeight) {
    KCapacityBar_SetBarHeight((KCapacityBar*)self, barHeight);
}

int32_t k_capacitybar_bar_height(void* self) {
    return KCapacityBar_BarHeight((KCapacityBar*)self);
}

void k_capacitybar_set_horizontal_text_alignment(void* self, int32_t textAlignment) {
    KCapacityBar_SetHorizontalTextAlignment((KCapacityBar*)self, textAlignment);
}

int32_t k_capacitybar_horizontal_text_alignment(void* self) {
    return KCapacityBar_HorizontalTextAlignment((KCapacityBar*)self);
}

void k_capacitybar_set_draw_text_mode(void* self, int32_t mode) {
    KCapacityBar_SetDrawTextMode((KCapacityBar*)self, mode);
}

int32_t k_capacitybar_draw_text_mode(void* self) {
    return KCapacityBar_DrawTextMode((KCapacityBar*)self);
}

void k_capacitybar_draw_capacity_bar(void* self, void* p, void* rect) {
    KCapacityBar_DrawCapacityBar((KCapacityBar*)self, (QPainter*)p, (QRect*)rect);
}

void k_capacitybar_draw_capacity_bar2(void* self, void* p, void* rect, int32_t state) {
    KCapacityBar_DrawCapacityBar2((KCapacityBar*)self, (QPainter*)p, (QRect*)rect, state);
}

QSize* k_capacitybar_minimum_size_hint(void* self) {
    return KCapacityBar_MinimumSizeHint((KCapacityBar*)self);
}

void k_capacitybar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KCapacityBar_OnMinimumSizeHint((KCapacityBar*)self, (intptr_t)callback);
}

QSize* k_capacitybar_qbase_minimum_size_hint(void* self) {
    return KCapacityBar_QBaseMinimumSizeHint((KCapacityBar*)self);
}

void k_capacitybar_paint_event(void* self, void* event) {
    KCapacityBar_PaintEvent((KCapacityBar*)self, (QPaintEvent*)event);
}

void k_capacitybar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnPaintEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_qbase_paint_event(void* self, void* event) {
    KCapacityBar_QBasePaintEvent((KCapacityBar*)self, (QPaintEvent*)event);
}

void k_capacitybar_change_event(void* self, void* event) {
    KCapacityBar_ChangeEvent((KCapacityBar*)self, (QEvent*)event);
}

void k_capacitybar_on_change_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnChangeEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_qbase_change_event(void* self, void* event) {
    KCapacityBar_QBaseChangeEvent((KCapacityBar*)self, (QEvent*)event);
}

const char* k_capacitybar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_capacitybar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_capacitybar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_capacitybar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_capacitybar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_capacitybar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_capacitybar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_capacitybar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_capacitybar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_capacitybar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_capacitybar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_capacitybar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_capacitybar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_capacitybar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_capacitybar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_capacitybar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_capacitybar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_capacitybar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_capacitybar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_capacitybar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_capacitybar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_capacitybar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_capacitybar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_capacitybar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_capacitybar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_capacitybar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_capacitybar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_capacitybar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_capacitybar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_capacitybar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_capacitybar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_capacitybar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_capacitybar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_capacitybar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_capacitybar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_capacitybar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_capacitybar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_capacitybar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_capacitybar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_capacitybar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_capacitybar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_capacitybar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_capacitybar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_capacitybar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_capacitybar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_capacitybar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_capacitybar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_capacitybar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_capacitybar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_capacitybar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_capacitybar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_capacitybar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_capacitybar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_capacitybar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_capacitybar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_capacitybar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_capacitybar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_capacitybar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_capacitybar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_capacitybar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_capacitybar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_capacitybar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_capacitybar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_capacitybar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_capacitybar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_capacitybar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_capacitybar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_capacitybar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_capacitybar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_capacitybar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_capacitybar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_capacitybar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_capacitybar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_capacitybar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_capacitybar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_capacitybar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_capacitybar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_capacitybar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_capacitybar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_capacitybar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_capacitybar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_capacitybar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_capacitybar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_capacitybar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_capacitybar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_capacitybar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_capacitybar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_capacitybar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_capacitybar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_capacitybar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_capacitybar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_capacitybar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_capacitybar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_capacitybar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_capacitybar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_capacitybar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_capacitybar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_capacitybar_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_capacitybar_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_capacitybar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_capacitybar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_capacitybar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_capacitybar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_capacitybar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_capacitybar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_capacitybar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_capacitybar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_capacitybar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_capacitybar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_capacitybar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_capacitybar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_capacitybar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_capacitybar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_capacitybar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_capacitybar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_capacitybar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_capacitybar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_capacitybar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_capacitybar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_capacitybar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_capacitybar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_capacitybar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_capacitybar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_capacitybar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_capacitybar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_capacitybar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_capacitybar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_capacitybar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_capacitybar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_capacitybar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_capacitybar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_capacitybar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_capacitybar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_capacitybar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_capacitybar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_capacitybar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_capacitybar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_capacitybar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_capacitybar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_capacitybar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_capacitybar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_capacitybar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_capacitybar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_capacitybar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_capacitybar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_capacitybar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_capacitybar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_capacitybar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_capacitybar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_capacitybar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_capacitybar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_capacitybar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_capacitybar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_capacitybar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_capacitybar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_capacitybar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_capacitybar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_capacitybar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_capacitybar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_capacitybar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_capacitybar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_capacitybar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_capacitybar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_capacitybar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_capacitybar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_capacitybar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_capacitybar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_capacitybar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_capacitybar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_capacitybar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_capacitybar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_capacitybar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_capacitybar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_capacitybar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_capacitybar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_capacitybar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_capacitybar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_capacitybar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_capacitybar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_capacitybar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_capacitybar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_capacitybar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_capacitybar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_capacitybar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_capacitybar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_capacitybar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_capacitybar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_capacitybar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_capacitybar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_capacitybar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_capacitybar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_capacitybar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_capacitybar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_capacitybar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_capacitybar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_capacitybar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_capacitybar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_capacitybar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_capacitybar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_capacitybar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_capacitybar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_capacitybar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_capacitybar_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_capacitybar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_capacitybar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_capacitybar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_capacitybar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_capacitybar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_capacitybar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_capacitybar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_capacitybar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_capacitybar_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_capacitybar_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_capacitybar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_capacitybar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_capacitybar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_capacitybar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_capacitybar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_capacitybar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_capacitybar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_capacitybar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_capacitybar_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_capacitybar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_capacitybar_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_capacitybar_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_capacitybar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_capacitybar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_capacitybar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_capacitybar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_capacitybar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_capacitybar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_capacitybar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_capacitybar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_capacitybar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_capacitybar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_capacitybar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_capacitybar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_capacitybar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_capacitybar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_capacitybar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_capacitybar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_capacitybar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_capacitybar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_capacitybar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_capacitybar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_capacitybar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_capacitybar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_capacitybar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_capacitybar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_capacitybar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_capacitybar_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_capacitybar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_capacitybar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_capacitybar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_capacitybar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_capacitybar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_capacitybar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_capacitybar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_capacitybar_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_capacitybar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_capacitybar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_capacitybar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_capacitybar_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_capacitybar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_capacitybar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_capacitybar_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_capacitybar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_capacitybar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_capacitybar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_capacitybar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_capacitybar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_capacitybar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_capacitybar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_capacitybar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_capacitybar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_capacitybar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_capacitybar_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_capacitybar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_capacitybar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_capacitybar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_capacitybar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_capacitybar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_capacitybar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_capacitybar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_capacitybar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_capacitybar_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_capacitybar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_capacitybar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_capacitybar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_capacitybar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_capacitybar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_capacitybar_dynamic_property_names\n");
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

QBindingStorage* k_capacitybar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_capacitybar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_capacitybar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_capacitybar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_capacitybar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_capacitybar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_capacitybar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_capacitybar_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_capacitybar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_capacitybar_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_capacitybar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_capacitybar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_capacitybar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_capacitybar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_capacitybar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_capacitybar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_capacitybar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_capacitybar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_capacitybar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_capacitybar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_capacitybar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_capacitybar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_capacitybar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_capacitybar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_capacitybar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_capacitybar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_capacitybar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_capacitybar_dev_type(void* self) {
    return KCapacityBar_DevType((KCapacityBar*)self);
}

int32_t k_capacitybar_qbase_dev_type(void* self) {
    return KCapacityBar_QBaseDevType((KCapacityBar*)self);
}

void k_capacitybar_on_dev_type(void* self, int32_t (*callback)()) {
    KCapacityBar_OnDevType((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_set_visible(void* self, bool visible) {
    KCapacityBar_SetVisible((KCapacityBar*)self, visible);
}

void k_capacitybar_qbase_set_visible(void* self, bool visible) {
    KCapacityBar_QBaseSetVisible((KCapacityBar*)self, visible);
}

void k_capacitybar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KCapacityBar_OnSetVisible((KCapacityBar*)self, (intptr_t)callback);
}

QSize* k_capacitybar_size_hint(void* self) {
    return KCapacityBar_SizeHint((KCapacityBar*)self);
}

QSize* k_capacitybar_qbase_size_hint(void* self) {
    return KCapacityBar_QBaseSizeHint((KCapacityBar*)self);
}

void k_capacitybar_on_size_hint(void* self, QSize* (*callback)()) {
    KCapacityBar_OnSizeHint((KCapacityBar*)self, (intptr_t)callback);
}

int32_t k_capacitybar_height_for_width(void* self, int param1) {
    return KCapacityBar_HeightForWidth((KCapacityBar*)self, param1);
}

int32_t k_capacitybar_qbase_height_for_width(void* self, int param1) {
    return KCapacityBar_QBaseHeightForWidth((KCapacityBar*)self, param1);
}

void k_capacitybar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KCapacityBar_OnHeightForWidth((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_has_height_for_width(void* self) {
    return KCapacityBar_HasHeightForWidth((KCapacityBar*)self);
}

bool k_capacitybar_qbase_has_height_for_width(void* self) {
    return KCapacityBar_QBaseHasHeightForWidth((KCapacityBar*)self);
}

void k_capacitybar_on_has_height_for_width(void* self, bool (*callback)()) {
    KCapacityBar_OnHasHeightForWidth((KCapacityBar*)self, (intptr_t)callback);
}

QPaintEngine* k_capacitybar_paint_engine(void* self) {
    return KCapacityBar_PaintEngine((KCapacityBar*)self);
}

QPaintEngine* k_capacitybar_qbase_paint_engine(void* self) {
    return KCapacityBar_QBasePaintEngine((KCapacityBar*)self);
}

void k_capacitybar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KCapacityBar_OnPaintEngine((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_event(void* self, void* event) {
    return KCapacityBar_Event((KCapacityBar*)self, (QEvent*)event);
}

bool k_capacitybar_qbase_event(void* self, void* event) {
    return KCapacityBar_QBaseEvent((KCapacityBar*)self, (QEvent*)event);
}

void k_capacitybar_on_event(void* self, bool (*callback)(void*, void*)) {
    KCapacityBar_OnEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_mouse_press_event(void* self, void* event) {
    KCapacityBar_MousePressEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_qbase_mouse_press_event(void* self, void* event) {
    KCapacityBar_QBaseMousePressEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnMousePressEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_mouse_release_event(void* self, void* event) {
    KCapacityBar_MouseReleaseEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_qbase_mouse_release_event(void* self, void* event) {
    KCapacityBar_QBaseMouseReleaseEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnMouseReleaseEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_mouse_double_click_event(void* self, void* event) {
    KCapacityBar_MouseDoubleClickEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_qbase_mouse_double_click_event(void* self, void* event) {
    KCapacityBar_QBaseMouseDoubleClickEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnMouseDoubleClickEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_mouse_move_event(void* self, void* event) {
    KCapacityBar_MouseMoveEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_qbase_mouse_move_event(void* self, void* event) {
    KCapacityBar_QBaseMouseMoveEvent((KCapacityBar*)self, (QMouseEvent*)event);
}

void k_capacitybar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnMouseMoveEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_wheel_event(void* self, void* event) {
    KCapacityBar_WheelEvent((KCapacityBar*)self, (QWheelEvent*)event);
}

void k_capacitybar_qbase_wheel_event(void* self, void* event) {
    KCapacityBar_QBaseWheelEvent((KCapacityBar*)self, (QWheelEvent*)event);
}

void k_capacitybar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnWheelEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_key_press_event(void* self, void* event) {
    KCapacityBar_KeyPressEvent((KCapacityBar*)self, (QKeyEvent*)event);
}

void k_capacitybar_qbase_key_press_event(void* self, void* event) {
    KCapacityBar_QBaseKeyPressEvent((KCapacityBar*)self, (QKeyEvent*)event);
}

void k_capacitybar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnKeyPressEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_key_release_event(void* self, void* event) {
    KCapacityBar_KeyReleaseEvent((KCapacityBar*)self, (QKeyEvent*)event);
}

void k_capacitybar_qbase_key_release_event(void* self, void* event) {
    KCapacityBar_QBaseKeyReleaseEvent((KCapacityBar*)self, (QKeyEvent*)event);
}

void k_capacitybar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnKeyReleaseEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_focus_in_event(void* self, void* event) {
    KCapacityBar_FocusInEvent((KCapacityBar*)self, (QFocusEvent*)event);
}

void k_capacitybar_qbase_focus_in_event(void* self, void* event) {
    KCapacityBar_QBaseFocusInEvent((KCapacityBar*)self, (QFocusEvent*)event);
}

void k_capacitybar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnFocusInEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_focus_out_event(void* self, void* event) {
    KCapacityBar_FocusOutEvent((KCapacityBar*)self, (QFocusEvent*)event);
}

void k_capacitybar_qbase_focus_out_event(void* self, void* event) {
    KCapacityBar_QBaseFocusOutEvent((KCapacityBar*)self, (QFocusEvent*)event);
}

void k_capacitybar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnFocusOutEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_enter_event(void* self, void* event) {
    KCapacityBar_EnterEvent((KCapacityBar*)self, (QEnterEvent*)event);
}

void k_capacitybar_qbase_enter_event(void* self, void* event) {
    KCapacityBar_QBaseEnterEvent((KCapacityBar*)self, (QEnterEvent*)event);
}

void k_capacitybar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnEnterEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_leave_event(void* self, void* event) {
    KCapacityBar_LeaveEvent((KCapacityBar*)self, (QEvent*)event);
}

void k_capacitybar_qbase_leave_event(void* self, void* event) {
    KCapacityBar_QBaseLeaveEvent((KCapacityBar*)self, (QEvent*)event);
}

void k_capacitybar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnLeaveEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_move_event(void* self, void* event) {
    KCapacityBar_MoveEvent((KCapacityBar*)self, (QMoveEvent*)event);
}

void k_capacitybar_qbase_move_event(void* self, void* event) {
    KCapacityBar_QBaseMoveEvent((KCapacityBar*)self, (QMoveEvent*)event);
}

void k_capacitybar_on_move_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnMoveEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_resize_event(void* self, void* event) {
    KCapacityBar_ResizeEvent((KCapacityBar*)self, (QResizeEvent*)event);
}

void k_capacitybar_qbase_resize_event(void* self, void* event) {
    KCapacityBar_QBaseResizeEvent((KCapacityBar*)self, (QResizeEvent*)event);
}

void k_capacitybar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnResizeEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_close_event(void* self, void* event) {
    KCapacityBar_CloseEvent((KCapacityBar*)self, (QCloseEvent*)event);
}

void k_capacitybar_qbase_close_event(void* self, void* event) {
    KCapacityBar_QBaseCloseEvent((KCapacityBar*)self, (QCloseEvent*)event);
}

void k_capacitybar_on_close_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnCloseEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_context_menu_event(void* self, void* event) {
    KCapacityBar_ContextMenuEvent((KCapacityBar*)self, (QContextMenuEvent*)event);
}

void k_capacitybar_qbase_context_menu_event(void* self, void* event) {
    KCapacityBar_QBaseContextMenuEvent((KCapacityBar*)self, (QContextMenuEvent*)event);
}

void k_capacitybar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnContextMenuEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_tablet_event(void* self, void* event) {
    KCapacityBar_TabletEvent((KCapacityBar*)self, (QTabletEvent*)event);
}

void k_capacitybar_qbase_tablet_event(void* self, void* event) {
    KCapacityBar_QBaseTabletEvent((KCapacityBar*)self, (QTabletEvent*)event);
}

void k_capacitybar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnTabletEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_action_event(void* self, void* event) {
    KCapacityBar_ActionEvent((KCapacityBar*)self, (QActionEvent*)event);
}

void k_capacitybar_qbase_action_event(void* self, void* event) {
    KCapacityBar_QBaseActionEvent((KCapacityBar*)self, (QActionEvent*)event);
}

void k_capacitybar_on_action_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnActionEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_drag_enter_event(void* self, void* event) {
    KCapacityBar_DragEnterEvent((KCapacityBar*)self, (QDragEnterEvent*)event);
}

void k_capacitybar_qbase_drag_enter_event(void* self, void* event) {
    KCapacityBar_QBaseDragEnterEvent((KCapacityBar*)self, (QDragEnterEvent*)event);
}

void k_capacitybar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnDragEnterEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_drag_move_event(void* self, void* event) {
    KCapacityBar_DragMoveEvent((KCapacityBar*)self, (QDragMoveEvent*)event);
}

void k_capacitybar_qbase_drag_move_event(void* self, void* event) {
    KCapacityBar_QBaseDragMoveEvent((KCapacityBar*)self, (QDragMoveEvent*)event);
}

void k_capacitybar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnDragMoveEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_drag_leave_event(void* self, void* event) {
    KCapacityBar_DragLeaveEvent((KCapacityBar*)self, (QDragLeaveEvent*)event);
}

void k_capacitybar_qbase_drag_leave_event(void* self, void* event) {
    KCapacityBar_QBaseDragLeaveEvent((KCapacityBar*)self, (QDragLeaveEvent*)event);
}

void k_capacitybar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnDragLeaveEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_drop_event(void* self, void* event) {
    KCapacityBar_DropEvent((KCapacityBar*)self, (QDropEvent*)event);
}

void k_capacitybar_qbase_drop_event(void* self, void* event) {
    KCapacityBar_QBaseDropEvent((KCapacityBar*)self, (QDropEvent*)event);
}

void k_capacitybar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnDropEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_show_event(void* self, void* event) {
    KCapacityBar_ShowEvent((KCapacityBar*)self, (QShowEvent*)event);
}

void k_capacitybar_qbase_show_event(void* self, void* event) {
    KCapacityBar_QBaseShowEvent((KCapacityBar*)self, (QShowEvent*)event);
}

void k_capacitybar_on_show_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnShowEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_hide_event(void* self, void* event) {
    KCapacityBar_HideEvent((KCapacityBar*)self, (QHideEvent*)event);
}

void k_capacitybar_qbase_hide_event(void* self, void* event) {
    KCapacityBar_QBaseHideEvent((KCapacityBar*)self, (QHideEvent*)event);
}

void k_capacitybar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnHideEvent((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCapacityBar_NativeEvent((KCapacityBar*)self, qstring(eventType), message, result);
}

bool k_capacitybar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCapacityBar_QBaseNativeEvent((KCapacityBar*)self, qstring(eventType), message, result);
}

void k_capacitybar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KCapacityBar_OnNativeEvent((KCapacityBar*)self, (intptr_t)callback);
}

int32_t k_capacitybar_metric(void* self, int32_t param1) {
    return KCapacityBar_Metric((KCapacityBar*)self, param1);
}

int32_t k_capacitybar_qbase_metric(void* self, int32_t param1) {
    return KCapacityBar_QBaseMetric((KCapacityBar*)self, param1);
}

void k_capacitybar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KCapacityBar_OnMetric((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_init_painter(void* self, void* painter) {
    KCapacityBar_InitPainter((KCapacityBar*)self, (QPainter*)painter);
}

void k_capacitybar_qbase_init_painter(void* self, void* painter) {
    KCapacityBar_QBaseInitPainter((KCapacityBar*)self, (QPainter*)painter);
}

void k_capacitybar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnInitPainter((KCapacityBar*)self, (intptr_t)callback);
}

QPaintDevice* k_capacitybar_redirected(void* self, void* offset) {
    return KCapacityBar_Redirected((KCapacityBar*)self, (QPoint*)offset);
}

QPaintDevice* k_capacitybar_qbase_redirected(void* self, void* offset) {
    return KCapacityBar_QBaseRedirected((KCapacityBar*)self, (QPoint*)offset);
}

void k_capacitybar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KCapacityBar_OnRedirected((KCapacityBar*)self, (intptr_t)callback);
}

QPainter* k_capacitybar_shared_painter(void* self) {
    return KCapacityBar_SharedPainter((KCapacityBar*)self);
}

QPainter* k_capacitybar_qbase_shared_painter(void* self) {
    return KCapacityBar_QBaseSharedPainter((KCapacityBar*)self);
}

void k_capacitybar_on_shared_painter(void* self, QPainter* (*callback)()) {
    KCapacityBar_OnSharedPainter((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_input_method_event(void* self, void* param1) {
    KCapacityBar_InputMethodEvent((KCapacityBar*)self, (QInputMethodEvent*)param1);
}

void k_capacitybar_qbase_input_method_event(void* self, void* param1) {
    KCapacityBar_QBaseInputMethodEvent((KCapacityBar*)self, (QInputMethodEvent*)param1);
}

void k_capacitybar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnInputMethodEvent((KCapacityBar*)self, (intptr_t)callback);
}

QVariant* k_capacitybar_input_method_query(void* self, int32_t param1) {
    return KCapacityBar_InputMethodQuery((KCapacityBar*)self, param1);
}

QVariant* k_capacitybar_qbase_input_method_query(void* self, int32_t param1) {
    return KCapacityBar_QBaseInputMethodQuery((KCapacityBar*)self, param1);
}

void k_capacitybar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KCapacityBar_OnInputMethodQuery((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_focus_next_prev_child(void* self, bool next) {
    return KCapacityBar_FocusNextPrevChild((KCapacityBar*)self, next);
}

bool k_capacitybar_qbase_focus_next_prev_child(void* self, bool next) {
    return KCapacityBar_QBaseFocusNextPrevChild((KCapacityBar*)self, next);
}

void k_capacitybar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KCapacityBar_OnFocusNextPrevChild((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_event_filter(void* self, void* watched, void* event) {
    return KCapacityBar_EventFilter((KCapacityBar*)self, (QObject*)watched, (QEvent*)event);
}

bool k_capacitybar_qbase_event_filter(void* self, void* watched, void* event) {
    return KCapacityBar_QBaseEventFilter((KCapacityBar*)self, (QObject*)watched, (QEvent*)event);
}

void k_capacitybar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCapacityBar_OnEventFilter((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_timer_event(void* self, void* event) {
    KCapacityBar_TimerEvent((KCapacityBar*)self, (QTimerEvent*)event);
}

void k_capacitybar_qbase_timer_event(void* self, void* event) {
    KCapacityBar_QBaseTimerEvent((KCapacityBar*)self, (QTimerEvent*)event);
}

void k_capacitybar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnTimerEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_child_event(void* self, void* event) {
    KCapacityBar_ChildEvent((KCapacityBar*)self, (QChildEvent*)event);
}

void k_capacitybar_qbase_child_event(void* self, void* event) {
    KCapacityBar_QBaseChildEvent((KCapacityBar*)self, (QChildEvent*)event);
}

void k_capacitybar_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnChildEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_custom_event(void* self, void* event) {
    KCapacityBar_CustomEvent((KCapacityBar*)self, (QEvent*)event);
}

void k_capacitybar_qbase_custom_event(void* self, void* event) {
    KCapacityBar_QBaseCustomEvent((KCapacityBar*)self, (QEvent*)event);
}

void k_capacitybar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnCustomEvent((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_connect_notify(void* self, void* signal) {
    KCapacityBar_ConnectNotify((KCapacityBar*)self, (QMetaMethod*)signal);
}

void k_capacitybar_qbase_connect_notify(void* self, void* signal) {
    KCapacityBar_QBaseConnectNotify((KCapacityBar*)self, (QMetaMethod*)signal);
}

void k_capacitybar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnConnectNotify((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_disconnect_notify(void* self, void* signal) {
    KCapacityBar_DisconnectNotify((KCapacityBar*)self, (QMetaMethod*)signal);
}

void k_capacitybar_qbase_disconnect_notify(void* self, void* signal) {
    KCapacityBar_QBaseDisconnectNotify((KCapacityBar*)self, (QMetaMethod*)signal);
}

void k_capacitybar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCapacityBar_OnDisconnectNotify((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_update_micro_focus(void* self) {
    KCapacityBar_UpdateMicroFocus((KCapacityBar*)self);
}

void k_capacitybar_qbase_update_micro_focus(void* self) {
    KCapacityBar_QBaseUpdateMicroFocus((KCapacityBar*)self);
}

void k_capacitybar_on_update_micro_focus(void* self, void (*callback)()) {
    KCapacityBar_OnUpdateMicroFocus((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_create(void* self) {
    KCapacityBar_Create((KCapacityBar*)self);
}

void k_capacitybar_qbase_create(void* self) {
    KCapacityBar_QBaseCreate((KCapacityBar*)self);
}

void k_capacitybar_on_create(void* self, void (*callback)()) {
    KCapacityBar_OnCreate((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_destroy(void* self) {
    KCapacityBar_Destroy((KCapacityBar*)self);
}

void k_capacitybar_qbase_destroy(void* self) {
    KCapacityBar_QBaseDestroy((KCapacityBar*)self);
}

void k_capacitybar_on_destroy(void* self, void (*callback)()) {
    KCapacityBar_OnDestroy((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_focus_next_child(void* self) {
    return KCapacityBar_FocusNextChild((KCapacityBar*)self);
}

bool k_capacitybar_qbase_focus_next_child(void* self) {
    return KCapacityBar_QBaseFocusNextChild((KCapacityBar*)self);
}

void k_capacitybar_on_focus_next_child(void* self, bool (*callback)()) {
    KCapacityBar_OnFocusNextChild((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_focus_previous_child(void* self) {
    return KCapacityBar_FocusPreviousChild((KCapacityBar*)self);
}

bool k_capacitybar_qbase_focus_previous_child(void* self) {
    return KCapacityBar_QBaseFocusPreviousChild((KCapacityBar*)self);
}

void k_capacitybar_on_focus_previous_child(void* self, bool (*callback)()) {
    KCapacityBar_OnFocusPreviousChild((KCapacityBar*)self, (intptr_t)callback);
}

QObject* k_capacitybar_sender(void* self) {
    return KCapacityBar_Sender((KCapacityBar*)self);
}

QObject* k_capacitybar_qbase_sender(void* self) {
    return KCapacityBar_QBaseSender((KCapacityBar*)self);
}

void k_capacitybar_on_sender(void* self, QObject* (*callback)()) {
    KCapacityBar_OnSender((KCapacityBar*)self, (intptr_t)callback);
}

int32_t k_capacitybar_sender_signal_index(void* self) {
    return KCapacityBar_SenderSignalIndex((KCapacityBar*)self);
}

int32_t k_capacitybar_qbase_sender_signal_index(void* self) {
    return KCapacityBar_QBaseSenderSignalIndex((KCapacityBar*)self);
}

void k_capacitybar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCapacityBar_OnSenderSignalIndex((KCapacityBar*)self, (intptr_t)callback);
}

int32_t k_capacitybar_receivers(void* self, const char* signal) {
    return KCapacityBar_Receivers((KCapacityBar*)self, signal);
}

int32_t k_capacitybar_qbase_receivers(void* self, const char* signal) {
    return KCapacityBar_QBaseReceivers((KCapacityBar*)self, signal);
}

void k_capacitybar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCapacityBar_OnReceivers((KCapacityBar*)self, (intptr_t)callback);
}

bool k_capacitybar_is_signal_connected(void* self, void* signal) {
    return KCapacityBar_IsSignalConnected((KCapacityBar*)self, (QMetaMethod*)signal);
}

bool k_capacitybar_qbase_is_signal_connected(void* self, void* signal) {
    return KCapacityBar_QBaseIsSignalConnected((KCapacityBar*)self, (QMetaMethod*)signal);
}

void k_capacitybar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCapacityBar_OnIsSignalConnected((KCapacityBar*)self, (intptr_t)callback);
}

double k_capacitybar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCapacityBar_GetDecodedMetricF((KCapacityBar*)self, metricA, metricB);
}

double k_capacitybar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCapacityBar_QBaseGetDecodedMetricF((KCapacityBar*)self, metricA, metricB);
}

void k_capacitybar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KCapacityBar_OnGetDecodedMetricF((KCapacityBar*)self, (intptr_t)callback);
}

void k_capacitybar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_capacitybar_delete(void* self) {
    KCapacityBar_Delete((KCapacityBar*)(self));
}
