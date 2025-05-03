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
#include "libqframe.hpp"
#include "libqframe.h"

QFrame* q_frame_new(void* parent) {
    return QFrame_new((QWidget*)parent);
}

QFrame* q_frame_new2() {
    return QFrame_new2();
}

QFrame* q_frame_new3(void* parent, int64_t f) {
    return QFrame_new3((QWidget*)parent, f);
}

QMetaObject* q_frame_meta_object(void* self) {
    return QFrame_MetaObject((QFrame*)self);
}

void* q_frame_metacast(void* self, const char* param1) {
    return QFrame_Metacast((QFrame*)self, param1);
}

int32_t q_frame_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFrame_Metacall((QFrame*)self, param1, param2, param3);
}

void q_frame_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFrame_OnMetacall((QFrame*)self, (intptr_t)slot);
}

int32_t q_frame_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFrame_QBaseMetacall((QFrame*)self, param1, param2, param3);
}

const char* q_frame_tr(const char* s) {
    libqt_string _str = QFrame_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_frame_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_frame_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_frame_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

QSize* q_frame_size_hint(void* self) {
    return QFrame_SizeHint((QFrame*)self);
}

void q_frame_on_size_hint(void* self, QSize* (*slot)()) {
    QFrame_OnSizeHint((QFrame*)self, (intptr_t)slot);
}

QSize* q_frame_qbase_size_hint(void* self) {
    return QFrame_QBaseSizeHint((QFrame*)self);
}

int64_t q_frame_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_frame_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_frame_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_frame_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_frame_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_frame_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_frame_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_frame_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_frame_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_frame_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

bool q_frame_event(void* self, void* e) {
    return QFrame_Event((QFrame*)self, (QEvent*)e);
}

void q_frame_on_event(void* self, bool (*slot)(void*, void*)) {
    QFrame_OnEvent((QFrame*)self, (intptr_t)slot);
}

bool q_frame_qbase_event(void* self, void* e) {
    return QFrame_QBaseEvent((QFrame*)self, (QEvent*)e);
}

void q_frame_paint_event(void* self, void* param1) {
    QFrame_PaintEvent((QFrame*)self, (QPaintEvent*)param1);
}

void q_frame_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnPaintEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_qbase_paint_event(void* self, void* param1) {
    QFrame_QBasePaintEvent((QFrame*)self, (QPaintEvent*)param1);
}

void q_frame_change_event(void* self, void* param1) {
    QFrame_ChangeEvent((QFrame*)self, (QEvent*)param1);
}

void q_frame_on_change_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnChangeEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_qbase_change_event(void* self, void* param1) {
    QFrame_QBaseChangeEvent((QFrame*)self, (QEvent*)param1);
}

void q_frame_draw_frame(void* self, void* param1) {
    QFrame_DrawFrame((QFrame*)self, (QPainter*)param1);
}

void q_frame_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QFrame_OnDrawFrame((QFrame*)self, (intptr_t)slot);
}

void q_frame_qbase_draw_frame(void* self, void* param1) {
    QFrame_QBaseDrawFrame((QFrame*)self, (QPainter*)param1);
}

void q_frame_init_style_option(void* self, void* option) {
    QFrame_InitStyleOption((QFrame*)self, (QStyleOptionFrame*)option);
}

void q_frame_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QFrame_OnInitStyleOption((QFrame*)self, (intptr_t)slot);
}

void q_frame_qbase_init_style_option(void* self, void* option) {
    QFrame_QBaseInitStyleOption((QFrame*)self, (QStyleOptionFrame*)option);
}

const char* q_frame_tr2(const char* s, const char* c) {
    libqt_string _str = QFrame_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_frame_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFrame_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_frame_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_frame_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_frame_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_frame_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_frame_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_frame_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_frame_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_frame_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_frame_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_frame_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_frame_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_frame_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_frame_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_frame_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_frame_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_frame_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_frame_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_frame_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_frame_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_frame_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_frame_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_frame_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_frame_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_frame_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_frame_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_frame_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_frame_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_frame_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_frame_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_frame_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_frame_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_frame_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_frame_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_frame_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_frame_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_frame_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_frame_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_frame_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_frame_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_frame_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_frame_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_frame_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_frame_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_frame_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_frame_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_frame_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_frame_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_frame_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_frame_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_frame_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_frame_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_frame_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_frame_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_frame_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_frame_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_frame_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_frame_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_frame_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_frame_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_frame_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_frame_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_frame_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_frame_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_frame_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_frame_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_frame_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_frame_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_frame_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_frame_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_frame_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_frame_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_frame_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_frame_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_frame_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_frame_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_frame_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_frame_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_frame_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_frame_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_frame_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_frame_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_frame_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_frame_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_frame_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_frame_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_frame_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_frame_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_frame_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_frame_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_frame_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_frame_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_frame_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_frame_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_frame_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_frame_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_frame_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_frame_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_frame_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_frame_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_frame_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_frame_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_frame_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_frame_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_frame_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_frame_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_frame_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_frame_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_frame_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_frame_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_frame_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_frame_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_frame_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_frame_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_frame_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_frame_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_frame_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_frame_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_frame_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_frame_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_frame_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_frame_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_frame_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_frame_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_frame_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_frame_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_frame_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_frame_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_frame_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_frame_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_frame_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_frame_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_frame_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_frame_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_frame_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_frame_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_frame_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_frame_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_frame_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_frame_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_frame_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_frame_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_frame_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_frame_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_frame_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_frame_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_frame_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_frame_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_frame_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_frame_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_frame_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_frame_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_frame_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_frame_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_frame_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_frame_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_frame_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_frame_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_frame_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_frame_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_frame_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_frame_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_frame_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_frame_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_frame_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_frame_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_frame_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_frame_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_frame_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_frame_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_frame_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_frame_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_frame_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_frame_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_frame_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_frame_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_frame_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_frame_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_frame_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_frame_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_frame_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_frame_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_frame_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_frame_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_frame_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_frame_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_frame_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_frame_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_frame_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_frame_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_frame_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_frame_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_frame_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_frame_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_frame_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_frame_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_frame_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_frame_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_frame_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_frame_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_frame_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_frame_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_frame_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_frame_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_frame_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_frame_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_frame_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_frame_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_frame_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_frame_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_frame_add_actions(void* self, void* actions[]) {
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

void q_frame_insert_actions(void* self, void* before, void* actions[]) {
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

void q_frame_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_frame_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_frame_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_frame_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_frame_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_frame_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_frame_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_frame_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_frame_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_frame_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_frame_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_frame_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_frame_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_frame_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_frame_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_frame_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_frame_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_frame_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_frame_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_frame_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_frame_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_frame_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_frame_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_frame_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_frame_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_frame_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_frame_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_frame_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_frame_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_frame_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_frame_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_frame_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_frame_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_frame_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_frame_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_frame_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_frame_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_frame_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_frame_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_frame_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_frame_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_frame_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_frame_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_frame_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_frame_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_frame_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_frame_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_frame_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_frame_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_frame_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_frame_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_frame_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_frame_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_frame_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_frame_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_frame_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_frame_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_frame_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_frame_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_frame_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_frame_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_frame_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_frame_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_frame_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_frame_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_frame_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_frame_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_frame_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_frame_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_frame_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_frame_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_frame_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_frame_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_frame_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_frame_dynamic_property_names(void* self) {
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

QBindingStorage* q_frame_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_frame_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_frame_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_frame_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_frame_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_frame_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_frame_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_frame_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_frame_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_frame_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_frame_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_frame_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_frame_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_frame_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_frame_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_frame_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_frame_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_frame_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_frame_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_frame_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_frame_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_frame_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_frame_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_frame_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_frame_dev_type(void* self) {
    return QFrame_DevType((QFrame*)self);
}

int32_t q_frame_qbase_dev_type(void* self) {
    return QFrame_QBaseDevType((QFrame*)self);
}

void q_frame_on_dev_type(void* self, int32_t (*slot)()) {
    QFrame_OnDevType((QFrame*)self, (intptr_t)slot);
}

void q_frame_set_visible(void* self, bool visible) {
    QFrame_SetVisible((QFrame*)self, visible);
}

void q_frame_qbase_set_visible(void* self, bool visible) {
    QFrame_QBaseSetVisible((QFrame*)self, visible);
}

void q_frame_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QFrame_OnSetVisible((QFrame*)self, (intptr_t)slot);
}

QSize* q_frame_minimum_size_hint(void* self) {
    return QFrame_MinimumSizeHint((QFrame*)self);
}

QSize* q_frame_qbase_minimum_size_hint(void* self) {
    return QFrame_QBaseMinimumSizeHint((QFrame*)self);
}

void q_frame_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QFrame_OnMinimumSizeHint((QFrame*)self, (intptr_t)slot);
}

int32_t q_frame_height_for_width(void* self, int param1) {
    return QFrame_HeightForWidth((QFrame*)self, param1);
}

int32_t q_frame_qbase_height_for_width(void* self, int param1) {
    return QFrame_QBaseHeightForWidth((QFrame*)self, param1);
}

void q_frame_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QFrame_OnHeightForWidth((QFrame*)self, (intptr_t)slot);
}

bool q_frame_has_height_for_width(void* self) {
    return QFrame_HasHeightForWidth((QFrame*)self);
}

bool q_frame_qbase_has_height_for_width(void* self) {
    return QFrame_QBaseHasHeightForWidth((QFrame*)self);
}

void q_frame_on_has_height_for_width(void* self, bool (*slot)()) {
    QFrame_OnHasHeightForWidth((QFrame*)self, (intptr_t)slot);
}

QPaintEngine* q_frame_paint_engine(void* self) {
    return QFrame_PaintEngine((QFrame*)self);
}

QPaintEngine* q_frame_qbase_paint_engine(void* self) {
    return QFrame_QBasePaintEngine((QFrame*)self);
}

void q_frame_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QFrame_OnPaintEngine((QFrame*)self, (intptr_t)slot);
}

void q_frame_mouse_press_event(void* self, void* event) {
    QFrame_MousePressEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_qbase_mouse_press_event(void* self, void* event) {
    QFrame_QBaseMousePressEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnMousePressEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_mouse_release_event(void* self, void* event) {
    QFrame_MouseReleaseEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_qbase_mouse_release_event(void* self, void* event) {
    QFrame_QBaseMouseReleaseEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnMouseReleaseEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_mouse_double_click_event(void* self, void* event) {
    QFrame_MouseDoubleClickEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_qbase_mouse_double_click_event(void* self, void* event) {
    QFrame_QBaseMouseDoubleClickEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnMouseDoubleClickEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_mouse_move_event(void* self, void* event) {
    QFrame_MouseMoveEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_qbase_mouse_move_event(void* self, void* event) {
    QFrame_QBaseMouseMoveEvent((QFrame*)self, (QMouseEvent*)event);
}

void q_frame_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnMouseMoveEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_wheel_event(void* self, void* event) {
    QFrame_WheelEvent((QFrame*)self, (QWheelEvent*)event);
}

void q_frame_qbase_wheel_event(void* self, void* event) {
    QFrame_QBaseWheelEvent((QFrame*)self, (QWheelEvent*)event);
}

void q_frame_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnWheelEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_key_press_event(void* self, void* event) {
    QFrame_KeyPressEvent((QFrame*)self, (QKeyEvent*)event);
}

void q_frame_qbase_key_press_event(void* self, void* event) {
    QFrame_QBaseKeyPressEvent((QFrame*)self, (QKeyEvent*)event);
}

void q_frame_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnKeyPressEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_key_release_event(void* self, void* event) {
    QFrame_KeyReleaseEvent((QFrame*)self, (QKeyEvent*)event);
}

void q_frame_qbase_key_release_event(void* self, void* event) {
    QFrame_QBaseKeyReleaseEvent((QFrame*)self, (QKeyEvent*)event);
}

void q_frame_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnKeyReleaseEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_focus_in_event(void* self, void* event) {
    QFrame_FocusInEvent((QFrame*)self, (QFocusEvent*)event);
}

void q_frame_qbase_focus_in_event(void* self, void* event) {
    QFrame_QBaseFocusInEvent((QFrame*)self, (QFocusEvent*)event);
}

void q_frame_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnFocusInEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_focus_out_event(void* self, void* event) {
    QFrame_FocusOutEvent((QFrame*)self, (QFocusEvent*)event);
}

void q_frame_qbase_focus_out_event(void* self, void* event) {
    QFrame_QBaseFocusOutEvent((QFrame*)self, (QFocusEvent*)event);
}

void q_frame_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnFocusOutEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_enter_event(void* self, void* event) {
    QFrame_EnterEvent((QFrame*)self, (QEnterEvent*)event);
}

void q_frame_qbase_enter_event(void* self, void* event) {
    QFrame_QBaseEnterEvent((QFrame*)self, (QEnterEvent*)event);
}

void q_frame_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnEnterEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_leave_event(void* self, void* event) {
    QFrame_LeaveEvent((QFrame*)self, (QEvent*)event);
}

void q_frame_qbase_leave_event(void* self, void* event) {
    QFrame_QBaseLeaveEvent((QFrame*)self, (QEvent*)event);
}

void q_frame_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnLeaveEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_move_event(void* self, void* event) {
    QFrame_MoveEvent((QFrame*)self, (QMoveEvent*)event);
}

void q_frame_qbase_move_event(void* self, void* event) {
    QFrame_QBaseMoveEvent((QFrame*)self, (QMoveEvent*)event);
}

void q_frame_on_move_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnMoveEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_resize_event(void* self, void* event) {
    QFrame_ResizeEvent((QFrame*)self, (QResizeEvent*)event);
}

void q_frame_qbase_resize_event(void* self, void* event) {
    QFrame_QBaseResizeEvent((QFrame*)self, (QResizeEvent*)event);
}

void q_frame_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnResizeEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_close_event(void* self, void* event) {
    QFrame_CloseEvent((QFrame*)self, (QCloseEvent*)event);
}

void q_frame_qbase_close_event(void* self, void* event) {
    QFrame_QBaseCloseEvent((QFrame*)self, (QCloseEvent*)event);
}

void q_frame_on_close_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnCloseEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_context_menu_event(void* self, void* event) {
    QFrame_ContextMenuEvent((QFrame*)self, (QContextMenuEvent*)event);
}

void q_frame_qbase_context_menu_event(void* self, void* event) {
    QFrame_QBaseContextMenuEvent((QFrame*)self, (QContextMenuEvent*)event);
}

void q_frame_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnContextMenuEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_tablet_event(void* self, void* event) {
    QFrame_TabletEvent((QFrame*)self, (QTabletEvent*)event);
}

void q_frame_qbase_tablet_event(void* self, void* event) {
    QFrame_QBaseTabletEvent((QFrame*)self, (QTabletEvent*)event);
}

void q_frame_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnTabletEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_action_event(void* self, void* event) {
    QFrame_ActionEvent((QFrame*)self, (QActionEvent*)event);
}

void q_frame_qbase_action_event(void* self, void* event) {
    QFrame_QBaseActionEvent((QFrame*)self, (QActionEvent*)event);
}

void q_frame_on_action_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnActionEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_drag_enter_event(void* self, void* event) {
    QFrame_DragEnterEvent((QFrame*)self, (QDragEnterEvent*)event);
}

void q_frame_qbase_drag_enter_event(void* self, void* event) {
    QFrame_QBaseDragEnterEvent((QFrame*)self, (QDragEnterEvent*)event);
}

void q_frame_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnDragEnterEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_drag_move_event(void* self, void* event) {
    QFrame_DragMoveEvent((QFrame*)self, (QDragMoveEvent*)event);
}

void q_frame_qbase_drag_move_event(void* self, void* event) {
    QFrame_QBaseDragMoveEvent((QFrame*)self, (QDragMoveEvent*)event);
}

void q_frame_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnDragMoveEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_drag_leave_event(void* self, void* event) {
    QFrame_DragLeaveEvent((QFrame*)self, (QDragLeaveEvent*)event);
}

void q_frame_qbase_drag_leave_event(void* self, void* event) {
    QFrame_QBaseDragLeaveEvent((QFrame*)self, (QDragLeaveEvent*)event);
}

void q_frame_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnDragLeaveEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_drop_event(void* self, void* event) {
    QFrame_DropEvent((QFrame*)self, (QDropEvent*)event);
}

void q_frame_qbase_drop_event(void* self, void* event) {
    QFrame_QBaseDropEvent((QFrame*)self, (QDropEvent*)event);
}

void q_frame_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnDropEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_show_event(void* self, void* event) {
    QFrame_ShowEvent((QFrame*)self, (QShowEvent*)event);
}

void q_frame_qbase_show_event(void* self, void* event) {
    QFrame_QBaseShowEvent((QFrame*)self, (QShowEvent*)event);
}

void q_frame_on_show_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnShowEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_hide_event(void* self, void* event) {
    QFrame_HideEvent((QFrame*)self, (QHideEvent*)event);
}

void q_frame_qbase_hide_event(void* self, void* event) {
    QFrame_QBaseHideEvent((QFrame*)self, (QHideEvent*)event);
}

void q_frame_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnHideEvent((QFrame*)self, (intptr_t)slot);
}

bool q_frame_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFrame_NativeEvent((QFrame*)self, qstring(eventType), message, result);
}

bool q_frame_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFrame_QBaseNativeEvent((QFrame*)self, qstring(eventType), message, result);
}

void q_frame_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QFrame_OnNativeEvent((QFrame*)self, (intptr_t)slot);
}

int32_t q_frame_metric(void* self, int64_t param1) {
    return QFrame_Metric((QFrame*)self, param1);
}

int32_t q_frame_qbase_metric(void* self, int64_t param1) {
    return QFrame_QBaseMetric((QFrame*)self, param1);
}

void q_frame_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QFrame_OnMetric((QFrame*)self, (intptr_t)slot);
}

void q_frame_init_painter(void* self, void* painter) {
    QFrame_InitPainter((QFrame*)self, (QPainter*)painter);
}

void q_frame_qbase_init_painter(void* self, void* painter) {
    QFrame_QBaseInitPainter((QFrame*)self, (QPainter*)painter);
}

void q_frame_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QFrame_OnInitPainter((QFrame*)self, (intptr_t)slot);
}

QPaintDevice* q_frame_redirected(void* self, void* offset) {
    return QFrame_Redirected((QFrame*)self, (QPoint*)offset);
}

QPaintDevice* q_frame_qbase_redirected(void* self, void* offset) {
    return QFrame_QBaseRedirected((QFrame*)self, (QPoint*)offset);
}

void q_frame_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QFrame_OnRedirected((QFrame*)self, (intptr_t)slot);
}

QPainter* q_frame_shared_painter(void* self) {
    return QFrame_SharedPainter((QFrame*)self);
}

QPainter* q_frame_qbase_shared_painter(void* self) {
    return QFrame_QBaseSharedPainter((QFrame*)self);
}

void q_frame_on_shared_painter(void* self, QPainter* (*slot)()) {
    QFrame_OnSharedPainter((QFrame*)self, (intptr_t)slot);
}

void q_frame_input_method_event(void* self, void* param1) {
    QFrame_InputMethodEvent((QFrame*)self, (QInputMethodEvent*)param1);
}

void q_frame_qbase_input_method_event(void* self, void* param1) {
    QFrame_QBaseInputMethodEvent((QFrame*)self, (QInputMethodEvent*)param1);
}

void q_frame_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnInputMethodEvent((QFrame*)self, (intptr_t)slot);
}

QVariant* q_frame_input_method_query(void* self, int64_t param1) {
    return QFrame_InputMethodQuery((QFrame*)self, param1);
}

QVariant* q_frame_qbase_input_method_query(void* self, int64_t param1) {
    return QFrame_QBaseInputMethodQuery((QFrame*)self, param1);
}

void q_frame_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QFrame_OnInputMethodQuery((QFrame*)self, (intptr_t)slot);
}

bool q_frame_focus_next_prev_child(void* self, bool next) {
    return QFrame_FocusNextPrevChild((QFrame*)self, next);
}

bool q_frame_qbase_focus_next_prev_child(void* self, bool next) {
    return QFrame_QBaseFocusNextPrevChild((QFrame*)self, next);
}

void q_frame_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QFrame_OnFocusNextPrevChild((QFrame*)self, (intptr_t)slot);
}

bool q_frame_event_filter(void* self, void* watched, void* event) {
    return QFrame_EventFilter((QFrame*)self, (QObject*)watched, (QEvent*)event);
}

bool q_frame_qbase_event_filter(void* self, void* watched, void* event) {
    return QFrame_QBaseEventFilter((QFrame*)self, (QObject*)watched, (QEvent*)event);
}

void q_frame_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFrame_OnEventFilter((QFrame*)self, (intptr_t)slot);
}

void q_frame_timer_event(void* self, void* event) {
    QFrame_TimerEvent((QFrame*)self, (QTimerEvent*)event);
}

void q_frame_qbase_timer_event(void* self, void* event) {
    QFrame_QBaseTimerEvent((QFrame*)self, (QTimerEvent*)event);
}

void q_frame_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnTimerEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_child_event(void* self, void* event) {
    QFrame_ChildEvent((QFrame*)self, (QChildEvent*)event);
}

void q_frame_qbase_child_event(void* self, void* event) {
    QFrame_QBaseChildEvent((QFrame*)self, (QChildEvent*)event);
}

void q_frame_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnChildEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_custom_event(void* self, void* event) {
    QFrame_CustomEvent((QFrame*)self, (QEvent*)event);
}

void q_frame_qbase_custom_event(void* self, void* event) {
    QFrame_QBaseCustomEvent((QFrame*)self, (QEvent*)event);
}

void q_frame_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFrame_OnCustomEvent((QFrame*)self, (intptr_t)slot);
}

void q_frame_connect_notify(void* self, void* signal) {
    QFrame_ConnectNotify((QFrame*)self, (QMetaMethod*)signal);
}

void q_frame_qbase_connect_notify(void* self, void* signal) {
    QFrame_QBaseConnectNotify((QFrame*)self, (QMetaMethod*)signal);
}

void q_frame_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFrame_OnConnectNotify((QFrame*)self, (intptr_t)slot);
}

void q_frame_disconnect_notify(void* self, void* signal) {
    QFrame_DisconnectNotify((QFrame*)self, (QMetaMethod*)signal);
}

void q_frame_qbase_disconnect_notify(void* self, void* signal) {
    QFrame_QBaseDisconnectNotify((QFrame*)self, (QMetaMethod*)signal);
}

void q_frame_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFrame_OnDisconnectNotify((QFrame*)self, (intptr_t)slot);
}

void q_frame_update_micro_focus(void* self) {
    QFrame_UpdateMicroFocus((QFrame*)self);
}

void q_frame_qbase_update_micro_focus(void* self) {
    QFrame_QBaseUpdateMicroFocus((QFrame*)self);
}

void q_frame_on_update_micro_focus(void* self, void (*slot)()) {
    QFrame_OnUpdateMicroFocus((QFrame*)self, (intptr_t)slot);
}

void q_frame_create(void* self) {
    QFrame_Create((QFrame*)self);
}

void q_frame_qbase_create(void* self) {
    QFrame_QBaseCreate((QFrame*)self);
}

void q_frame_on_create(void* self, void (*slot)()) {
    QFrame_OnCreate((QFrame*)self, (intptr_t)slot);
}

void q_frame_destroy(void* self) {
    QFrame_Destroy((QFrame*)self);
}

void q_frame_qbase_destroy(void* self) {
    QFrame_QBaseDestroy((QFrame*)self);
}

void q_frame_on_destroy(void* self, void (*slot)()) {
    QFrame_OnDestroy((QFrame*)self, (intptr_t)slot);
}

bool q_frame_focus_next_child(void* self) {
    return QFrame_FocusNextChild((QFrame*)self);
}

bool q_frame_qbase_focus_next_child(void* self) {
    return QFrame_QBaseFocusNextChild((QFrame*)self);
}

void q_frame_on_focus_next_child(void* self, bool (*slot)()) {
    QFrame_OnFocusNextChild((QFrame*)self, (intptr_t)slot);
}

bool q_frame_focus_previous_child(void* self) {
    return QFrame_FocusPreviousChild((QFrame*)self);
}

bool q_frame_qbase_focus_previous_child(void* self) {
    return QFrame_QBaseFocusPreviousChild((QFrame*)self);
}

void q_frame_on_focus_previous_child(void* self, bool (*slot)()) {
    QFrame_OnFocusPreviousChild((QFrame*)self, (intptr_t)slot);
}

QObject* q_frame_sender(void* self) {
    return QFrame_Sender((QFrame*)self);
}

QObject* q_frame_qbase_sender(void* self) {
    return QFrame_QBaseSender((QFrame*)self);
}

void q_frame_on_sender(void* self, QObject* (*slot)()) {
    QFrame_OnSender((QFrame*)self, (intptr_t)slot);
}

int32_t q_frame_sender_signal_index(void* self) {
    return QFrame_SenderSignalIndex((QFrame*)self);
}

int32_t q_frame_qbase_sender_signal_index(void* self) {
    return QFrame_QBaseSenderSignalIndex((QFrame*)self);
}

void q_frame_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFrame_OnSenderSignalIndex((QFrame*)self, (intptr_t)slot);
}

int32_t q_frame_receivers(void* self, const char* signal) {
    return QFrame_Receivers((QFrame*)self, signal);
}

int32_t q_frame_qbase_receivers(void* self, const char* signal) {
    return QFrame_QBaseReceivers((QFrame*)self, signal);
}

void q_frame_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFrame_OnReceivers((QFrame*)self, (intptr_t)slot);
}

bool q_frame_is_signal_connected(void* self, void* signal) {
    return QFrame_IsSignalConnected((QFrame*)self, (QMetaMethod*)signal);
}

bool q_frame_qbase_is_signal_connected(void* self, void* signal) {
    return QFrame_QBaseIsSignalConnected((QFrame*)self, (QMetaMethod*)signal);
}

void q_frame_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFrame_OnIsSignalConnected((QFrame*)self, (intptr_t)slot);
}

void q_frame_delete(void* self) {
    QFrame_Delete((QFrame*)(self));
}
