#include "libqevent.hpp"
#include "libqframe.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqlcdnumber.hpp"
#include "libqlcdnumber.h"

QLCDNumber* q_lcdnumber_new(void* parent) {
    return QLCDNumber_new((QWidget*)parent);
}

QLCDNumber* q_lcdnumber_new2() {
    return QLCDNumber_new2();
}

QLCDNumber* q_lcdnumber_new3(uint32_t numDigits) {
    return QLCDNumber_new3(numDigits);
}

QLCDNumber* q_lcdnumber_new4(uint32_t numDigits, void* parent) {
    return QLCDNumber_new4(numDigits, (QWidget*)parent);
}

const QMetaObject* q_lcdnumber_meta_object(void* self) {
    return QLCDNumber_MetaObject((QLCDNumber*)self);
}

void* q_lcdnumber_metacast(void* self, const char* param1) {
    return QLCDNumber_Metacast((QLCDNumber*)self, param1);
}

int32_t q_lcdnumber_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLCDNumber_Metacall((QLCDNumber*)self, param1, param2, param3);
}

void q_lcdnumber_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLCDNumber_OnMetacall((QLCDNumber*)self, (intptr_t)slot);
}

int32_t q_lcdnumber_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLCDNumber_QBaseMetacall((QLCDNumber*)self, param1, param2, param3);
}

const char* q_lcdnumber_tr(const char* s) {
    libqt_string _str = QLCDNumber_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_lcdnumber_small_decimal_point(void* self) {
    return QLCDNumber_SmallDecimalPoint((QLCDNumber*)self);
}

int32_t q_lcdnumber_digit_count(void* self) {
    return QLCDNumber_DigitCount((QLCDNumber*)self);
}

void q_lcdnumber_set_digit_count(void* self, int nDigits) {
    QLCDNumber_SetDigitCount((QLCDNumber*)self, nDigits);
}

bool q_lcdnumber_check_overflow(void* self, double num) {
    return QLCDNumber_CheckOverflow((QLCDNumber*)self, num);
}

bool q_lcdnumber_check_overflow_with_num(void* self, int num) {
    return QLCDNumber_CheckOverflowWithNum((QLCDNumber*)self, num);
}

int64_t q_lcdnumber_mode(void* self) {
    return QLCDNumber_Mode((QLCDNumber*)self);
}

void q_lcdnumber_set_mode(void* self, int64_t mode) {
    QLCDNumber_SetMode((QLCDNumber*)self, mode);
}

int64_t q_lcdnumber_segment_style(void* self) {
    return QLCDNumber_SegmentStyle((QLCDNumber*)self);
}

void q_lcdnumber_set_segment_style(void* self, int64_t segmentStyle) {
    QLCDNumber_SetSegmentStyle((QLCDNumber*)self, segmentStyle);
}

double q_lcdnumber_value(void* self) {
    return QLCDNumber_Value((QLCDNumber*)self);
}

int32_t q_lcdnumber_int_value(void* self) {
    return QLCDNumber_IntValue((QLCDNumber*)self);
}

QSize* q_lcdnumber_size_hint(void* self) {
    return QLCDNumber_SizeHint((QLCDNumber*)self);
}

void q_lcdnumber_on_size_hint(void* self, QSize* (*slot)()) {
    QLCDNumber_OnSizeHint((QLCDNumber*)self, (intptr_t)slot);
}

QSize* q_lcdnumber_qbase_size_hint(void* self) {
    return QLCDNumber_QBaseSizeHint((QLCDNumber*)self);
}

void q_lcdnumber_display(void* self, const char* str) {
    QLCDNumber_Display((QLCDNumber*)self, qstring(str));
}

void q_lcdnumber_display_with_num(void* self, int num) {
    QLCDNumber_DisplayWithNum((QLCDNumber*)self, num);
}

void q_lcdnumber_display2(void* self, double num) {
    QLCDNumber_Display2((QLCDNumber*)self, num);
}

void q_lcdnumber_set_hex_mode(void* self) {
    QLCDNumber_SetHexMode((QLCDNumber*)self);
}

void q_lcdnumber_set_dec_mode(void* self) {
    QLCDNumber_SetDecMode((QLCDNumber*)self);
}

void q_lcdnumber_set_oct_mode(void* self) {
    QLCDNumber_SetOctMode((QLCDNumber*)self);
}

void q_lcdnumber_set_bin_mode(void* self) {
    QLCDNumber_SetBinMode((QLCDNumber*)self);
}

void q_lcdnumber_set_small_decimal_point(void* self, bool smallDecimalPoint) {
    QLCDNumber_SetSmallDecimalPoint((QLCDNumber*)self, smallDecimalPoint);
}

void q_lcdnumber_overflow(void* self) {
    QLCDNumber_Overflow((QLCDNumber*)self);
}

void q_lcdnumber_on_overflow(void* self, void (*slot)(void*)) {
    QLCDNumber_Connect_Overflow((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_event(void* self, void* e) {
    return QLCDNumber_Event((QLCDNumber*)self, (QEvent*)e);
}

void q_lcdnumber_on_event(void* self, bool (*slot)(void*, void*)) {
    QLCDNumber_OnEvent((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_qbase_event(void* self, void* e) {
    return QLCDNumber_QBaseEvent((QLCDNumber*)self, (QEvent*)e);
}

void q_lcdnumber_paint_event(void* self, void* param1) {
    QLCDNumber_PaintEvent((QLCDNumber*)self, (QPaintEvent*)param1);
}

void q_lcdnumber_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnPaintEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_qbase_paint_event(void* self, void* param1) {
    QLCDNumber_QBasePaintEvent((QLCDNumber*)self, (QPaintEvent*)param1);
}

const char* q_lcdnumber_tr2(const char* s, const char* c) {
    libqt_string _str = QLCDNumber_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lcdnumber_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLCDNumber_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_lcdnumber_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_lcdnumber_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_lcdnumber_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_lcdnumber_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_lcdnumber_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_lcdnumber_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_lcdnumber_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_lcdnumber_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_lcdnumber_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_lcdnumber_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_lcdnumber_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_lcdnumber_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_lcdnumber_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_lcdnumber_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_lcdnumber_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_lcdnumber_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_lcdnumber_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_lcdnumber_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_lcdnumber_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_lcdnumber_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_lcdnumber_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_lcdnumber_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_lcdnumber_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_lcdnumber_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_lcdnumber_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_lcdnumber_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_lcdnumber_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_lcdnumber_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_lcdnumber_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_lcdnumber_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_lcdnumber_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_lcdnumber_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_lcdnumber_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_lcdnumber_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_lcdnumber_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_lcdnumber_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_lcdnumber_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_lcdnumber_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_lcdnumber_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_lcdnumber_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_lcdnumber_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_lcdnumber_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_lcdnumber_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_lcdnumber_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_lcdnumber_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_lcdnumber_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_lcdnumber_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_lcdnumber_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_lcdnumber_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_lcdnumber_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_lcdnumber_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_lcdnumber_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_lcdnumber_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_lcdnumber_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_lcdnumber_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_lcdnumber_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_lcdnumber_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_lcdnumber_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_lcdnumber_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_lcdnumber_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_lcdnumber_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_lcdnumber_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_lcdnumber_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_lcdnumber_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_lcdnumber_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_lcdnumber_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_lcdnumber_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lcdnumber_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lcdnumber_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lcdnumber_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lcdnumber_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lcdnumber_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lcdnumber_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_lcdnumber_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_lcdnumber_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_lcdnumber_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_lcdnumber_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_lcdnumber_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_lcdnumber_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_lcdnumber_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_lcdnumber_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_lcdnumber_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_lcdnumber_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_lcdnumber_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_lcdnumber_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_lcdnumber_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_lcdnumber_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_lcdnumber_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_lcdnumber_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_lcdnumber_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_lcdnumber_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_lcdnumber_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_lcdnumber_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_lcdnumber_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_lcdnumber_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_lcdnumber_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_lcdnumber_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_lcdnumber_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_lcdnumber_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_lcdnumber_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_lcdnumber_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_lcdnumber_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_lcdnumber_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_lcdnumber_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_lcdnumber_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_lcdnumber_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_lcdnumber_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_lcdnumber_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_lcdnumber_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_lcdnumber_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_lcdnumber_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_lcdnumber_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_lcdnumber_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lcdnumber_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_lcdnumber_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_lcdnumber_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_lcdnumber_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_lcdnumber_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_lcdnumber_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_lcdnumber_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_lcdnumber_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_lcdnumber_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_lcdnumber_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_lcdnumber_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_lcdnumber_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_lcdnumber_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_lcdnumber_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lcdnumber_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_lcdnumber_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_lcdnumber_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_lcdnumber_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_lcdnumber_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_lcdnumber_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_lcdnumber_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_lcdnumber_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_lcdnumber_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_lcdnumber_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_lcdnumber_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_lcdnumber_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_lcdnumber_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_lcdnumber_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_lcdnumber_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_lcdnumber_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_lcdnumber_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_lcdnumber_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_lcdnumber_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_lcdnumber_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_lcdnumber_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_lcdnumber_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_lcdnumber_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_lcdnumber_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_lcdnumber_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_lcdnumber_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_lcdnumber_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_lcdnumber_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_lcdnumber_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_lcdnumber_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_lcdnumber_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_lcdnumber_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_lcdnumber_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_lcdnumber_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_lcdnumber_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_lcdnumber_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_lcdnumber_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_lcdnumber_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_lcdnumber_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_lcdnumber_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_lcdnumber_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_lcdnumber_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_lcdnumber_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_lcdnumber_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_lcdnumber_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_lcdnumber_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_lcdnumber_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_lcdnumber_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_lcdnumber_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_lcdnumber_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_lcdnumber_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_lcdnumber_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_lcdnumber_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_lcdnumber_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_lcdnumber_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_lcdnumber_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_lcdnumber_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_lcdnumber_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_lcdnumber_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_lcdnumber_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_lcdnumber_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_lcdnumber_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_lcdnumber_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_lcdnumber_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_lcdnumber_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_lcdnumber_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_lcdnumber_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_lcdnumber_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_lcdnumber_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_lcdnumber_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_lcdnumber_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_lcdnumber_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_lcdnumber_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_lcdnumber_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_lcdnumber_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_lcdnumber_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_lcdnumber_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_lcdnumber_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_lcdnumber_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_lcdnumber_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_lcdnumber_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_lcdnumber_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_lcdnumber_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_lcdnumber_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_lcdnumber_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_lcdnumber_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_lcdnumber_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_lcdnumber_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_lcdnumber_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_lcdnumber_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_lcdnumber_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_lcdnumber_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_lcdnumber_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_lcdnumber_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_lcdnumber_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_lcdnumber_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_lcdnumber_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_lcdnumber_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_lcdnumber_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_lcdnumber_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_lcdnumber_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_lcdnumber_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_lcdnumber_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_lcdnumber_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_lcdnumber_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_lcdnumber_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_lcdnumber_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_lcdnumber_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_lcdnumber_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_lcdnumber_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_lcdnumber_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_lcdnumber_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_lcdnumber_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

QWidget* q_lcdnumber_child_at_with_q_point_f(void* self, void* p) {
    return QWidget_ChildAtWithQPointF((QWidget*)self, (QPointF*)p);
}

void q_lcdnumber_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_lcdnumber_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_lcdnumber_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_lcdnumber_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_lcdnumber_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_lcdnumber_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_lcdnumber_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_lcdnumber_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_lcdnumber_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_lcdnumber_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_lcdnumber_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_lcdnumber_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_lcdnumber_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_lcdnumber_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_lcdnumber_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_lcdnumber_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_lcdnumber_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_lcdnumber_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_lcdnumber_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_lcdnumber_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_lcdnumber_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_lcdnumber_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_lcdnumber_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_lcdnumber_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_lcdnumber_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_lcdnumber_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_lcdnumber_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_lcdnumber_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_lcdnumber_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_lcdnumber_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_lcdnumber_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_lcdnumber_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_lcdnumber_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_lcdnumber_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_lcdnumber_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_lcdnumber_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_lcdnumber_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lcdnumber_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_lcdnumber_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_lcdnumber_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_lcdnumber_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_lcdnumber_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_lcdnumber_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_lcdnumber_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_lcdnumber_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_lcdnumber_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_lcdnumber_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_lcdnumber_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_lcdnumber_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_lcdnumber_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_lcdnumber_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_lcdnumber_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_lcdnumber_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_lcdnumber_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_lcdnumber_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_lcdnumber_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_lcdnumber_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_lcdnumber_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_lcdnumber_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_lcdnumber_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_lcdnumber_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_lcdnumber_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_lcdnumber_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_lcdnumber_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_lcdnumber_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_lcdnumber_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_lcdnumber_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_lcdnumber_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_lcdnumber_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_lcdnumber_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_lcdnumber_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_lcdnumber_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_lcdnumber_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_lcdnumber_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_lcdnumber_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_lcdnumber_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_lcdnumber_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_lcdnumber_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_lcdnumber_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_lcdnumber_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_lcdnumber_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_lcdnumber_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_lcdnumber_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_lcdnumber_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_lcdnumber_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_lcdnumber_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_lcdnumber_change_event(void* self, void* param1) {
    QLCDNumber_ChangeEvent((QLCDNumber*)self, (QEvent*)param1);
}

void q_lcdnumber_qbase_change_event(void* self, void* param1) {
    QLCDNumber_QBaseChangeEvent((QLCDNumber*)self, (QEvent*)param1);
}

void q_lcdnumber_on_change_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnChangeEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_init_style_option(void* self, void* option) {
    QLCDNumber_InitStyleOption((QLCDNumber*)self, (QStyleOptionFrame*)option);
}

void q_lcdnumber_qbase_init_style_option(void* self, void* option) {
    QLCDNumber_QBaseInitStyleOption((QLCDNumber*)self, (QStyleOptionFrame*)option);
}

void q_lcdnumber_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnInitStyleOption((QLCDNumber*)self, (intptr_t)slot);
}

int32_t q_lcdnumber_dev_type(void* self) {
    return QLCDNumber_DevType((QLCDNumber*)self);
}

int32_t q_lcdnumber_qbase_dev_type(void* self) {
    return QLCDNumber_QBaseDevType((QLCDNumber*)self);
}

void q_lcdnumber_on_dev_type(void* self, int32_t (*slot)()) {
    QLCDNumber_OnDevType((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_set_visible(void* self, bool visible) {
    QLCDNumber_SetVisible((QLCDNumber*)self, visible);
}

void q_lcdnumber_qbase_set_visible(void* self, bool visible) {
    QLCDNumber_QBaseSetVisible((QLCDNumber*)self, visible);
}

void q_lcdnumber_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QLCDNumber_OnSetVisible((QLCDNumber*)self, (intptr_t)slot);
}

QSize* q_lcdnumber_minimum_size_hint(void* self) {
    return QLCDNumber_MinimumSizeHint((QLCDNumber*)self);
}

QSize* q_lcdnumber_qbase_minimum_size_hint(void* self) {
    return QLCDNumber_QBaseMinimumSizeHint((QLCDNumber*)self);
}

void q_lcdnumber_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QLCDNumber_OnMinimumSizeHint((QLCDNumber*)self, (intptr_t)slot);
}

int32_t q_lcdnumber_height_for_width(void* self, int param1) {
    return QLCDNumber_HeightForWidth((QLCDNumber*)self, param1);
}

int32_t q_lcdnumber_qbase_height_for_width(void* self, int param1) {
    return QLCDNumber_QBaseHeightForWidth((QLCDNumber*)self, param1);
}

void q_lcdnumber_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QLCDNumber_OnHeightForWidth((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_has_height_for_width(void* self) {
    return QLCDNumber_HasHeightForWidth((QLCDNumber*)self);
}

bool q_lcdnumber_qbase_has_height_for_width(void* self) {
    return QLCDNumber_QBaseHasHeightForWidth((QLCDNumber*)self);
}

void q_lcdnumber_on_has_height_for_width(void* self, bool (*slot)()) {
    QLCDNumber_OnHasHeightForWidth((QLCDNumber*)self, (intptr_t)slot);
}

QPaintEngine* q_lcdnumber_paint_engine(void* self) {
    return QLCDNumber_PaintEngine((QLCDNumber*)self);
}

QPaintEngine* q_lcdnumber_qbase_paint_engine(void* self) {
    return QLCDNumber_QBasePaintEngine((QLCDNumber*)self);
}

void q_lcdnumber_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QLCDNumber_OnPaintEngine((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_mouse_press_event(void* self, void* event) {
    QLCDNumber_MousePressEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_qbase_mouse_press_event(void* self, void* event) {
    QLCDNumber_QBaseMousePressEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnMousePressEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_mouse_release_event(void* self, void* event) {
    QLCDNumber_MouseReleaseEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_qbase_mouse_release_event(void* self, void* event) {
    QLCDNumber_QBaseMouseReleaseEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnMouseReleaseEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_mouse_double_click_event(void* self, void* event) {
    QLCDNumber_MouseDoubleClickEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_qbase_mouse_double_click_event(void* self, void* event) {
    QLCDNumber_QBaseMouseDoubleClickEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnMouseDoubleClickEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_mouse_move_event(void* self, void* event) {
    QLCDNumber_MouseMoveEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_qbase_mouse_move_event(void* self, void* event) {
    QLCDNumber_QBaseMouseMoveEvent((QLCDNumber*)self, (QMouseEvent*)event);
}

void q_lcdnumber_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnMouseMoveEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_wheel_event(void* self, void* event) {
    QLCDNumber_WheelEvent((QLCDNumber*)self, (QWheelEvent*)event);
}

void q_lcdnumber_qbase_wheel_event(void* self, void* event) {
    QLCDNumber_QBaseWheelEvent((QLCDNumber*)self, (QWheelEvent*)event);
}

void q_lcdnumber_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnWheelEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_key_press_event(void* self, void* event) {
    QLCDNumber_KeyPressEvent((QLCDNumber*)self, (QKeyEvent*)event);
}

void q_lcdnumber_qbase_key_press_event(void* self, void* event) {
    QLCDNumber_QBaseKeyPressEvent((QLCDNumber*)self, (QKeyEvent*)event);
}

void q_lcdnumber_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnKeyPressEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_key_release_event(void* self, void* event) {
    QLCDNumber_KeyReleaseEvent((QLCDNumber*)self, (QKeyEvent*)event);
}

void q_lcdnumber_qbase_key_release_event(void* self, void* event) {
    QLCDNumber_QBaseKeyReleaseEvent((QLCDNumber*)self, (QKeyEvent*)event);
}

void q_lcdnumber_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnKeyReleaseEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_focus_in_event(void* self, void* event) {
    QLCDNumber_FocusInEvent((QLCDNumber*)self, (QFocusEvent*)event);
}

void q_lcdnumber_qbase_focus_in_event(void* self, void* event) {
    QLCDNumber_QBaseFocusInEvent((QLCDNumber*)self, (QFocusEvent*)event);
}

void q_lcdnumber_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnFocusInEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_focus_out_event(void* self, void* event) {
    QLCDNumber_FocusOutEvent((QLCDNumber*)self, (QFocusEvent*)event);
}

void q_lcdnumber_qbase_focus_out_event(void* self, void* event) {
    QLCDNumber_QBaseFocusOutEvent((QLCDNumber*)self, (QFocusEvent*)event);
}

void q_lcdnumber_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnFocusOutEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_enter_event(void* self, void* event) {
    QLCDNumber_EnterEvent((QLCDNumber*)self, (QEnterEvent*)event);
}

void q_lcdnumber_qbase_enter_event(void* self, void* event) {
    QLCDNumber_QBaseEnterEvent((QLCDNumber*)self, (QEnterEvent*)event);
}

void q_lcdnumber_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnEnterEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_leave_event(void* self, void* event) {
    QLCDNumber_LeaveEvent((QLCDNumber*)self, (QEvent*)event);
}

void q_lcdnumber_qbase_leave_event(void* self, void* event) {
    QLCDNumber_QBaseLeaveEvent((QLCDNumber*)self, (QEvent*)event);
}

void q_lcdnumber_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnLeaveEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_move_event(void* self, void* event) {
    QLCDNumber_MoveEvent((QLCDNumber*)self, (QMoveEvent*)event);
}

void q_lcdnumber_qbase_move_event(void* self, void* event) {
    QLCDNumber_QBaseMoveEvent((QLCDNumber*)self, (QMoveEvent*)event);
}

void q_lcdnumber_on_move_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnMoveEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_resize_event(void* self, void* event) {
    QLCDNumber_ResizeEvent((QLCDNumber*)self, (QResizeEvent*)event);
}

void q_lcdnumber_qbase_resize_event(void* self, void* event) {
    QLCDNumber_QBaseResizeEvent((QLCDNumber*)self, (QResizeEvent*)event);
}

void q_lcdnumber_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnResizeEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_close_event(void* self, void* event) {
    QLCDNumber_CloseEvent((QLCDNumber*)self, (QCloseEvent*)event);
}

void q_lcdnumber_qbase_close_event(void* self, void* event) {
    QLCDNumber_QBaseCloseEvent((QLCDNumber*)self, (QCloseEvent*)event);
}

void q_lcdnumber_on_close_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnCloseEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_context_menu_event(void* self, void* event) {
    QLCDNumber_ContextMenuEvent((QLCDNumber*)self, (QContextMenuEvent*)event);
}

void q_lcdnumber_qbase_context_menu_event(void* self, void* event) {
    QLCDNumber_QBaseContextMenuEvent((QLCDNumber*)self, (QContextMenuEvent*)event);
}

void q_lcdnumber_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnContextMenuEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_tablet_event(void* self, void* event) {
    QLCDNumber_TabletEvent((QLCDNumber*)self, (QTabletEvent*)event);
}

void q_lcdnumber_qbase_tablet_event(void* self, void* event) {
    QLCDNumber_QBaseTabletEvent((QLCDNumber*)self, (QTabletEvent*)event);
}

void q_lcdnumber_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnTabletEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_action_event(void* self, void* event) {
    QLCDNumber_ActionEvent((QLCDNumber*)self, (QActionEvent*)event);
}

void q_lcdnumber_qbase_action_event(void* self, void* event) {
    QLCDNumber_QBaseActionEvent((QLCDNumber*)self, (QActionEvent*)event);
}

void q_lcdnumber_on_action_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnActionEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_drag_enter_event(void* self, void* event) {
    QLCDNumber_DragEnterEvent((QLCDNumber*)self, (QDragEnterEvent*)event);
}

void q_lcdnumber_qbase_drag_enter_event(void* self, void* event) {
    QLCDNumber_QBaseDragEnterEvent((QLCDNumber*)self, (QDragEnterEvent*)event);
}

void q_lcdnumber_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnDragEnterEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_drag_move_event(void* self, void* event) {
    QLCDNumber_DragMoveEvent((QLCDNumber*)self, (QDragMoveEvent*)event);
}

void q_lcdnumber_qbase_drag_move_event(void* self, void* event) {
    QLCDNumber_QBaseDragMoveEvent((QLCDNumber*)self, (QDragMoveEvent*)event);
}

void q_lcdnumber_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnDragMoveEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_drag_leave_event(void* self, void* event) {
    QLCDNumber_DragLeaveEvent((QLCDNumber*)self, (QDragLeaveEvent*)event);
}

void q_lcdnumber_qbase_drag_leave_event(void* self, void* event) {
    QLCDNumber_QBaseDragLeaveEvent((QLCDNumber*)self, (QDragLeaveEvent*)event);
}

void q_lcdnumber_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnDragLeaveEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_drop_event(void* self, void* event) {
    QLCDNumber_DropEvent((QLCDNumber*)self, (QDropEvent*)event);
}

void q_lcdnumber_qbase_drop_event(void* self, void* event) {
    QLCDNumber_QBaseDropEvent((QLCDNumber*)self, (QDropEvent*)event);
}

void q_lcdnumber_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnDropEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_show_event(void* self, void* event) {
    QLCDNumber_ShowEvent((QLCDNumber*)self, (QShowEvent*)event);
}

void q_lcdnumber_qbase_show_event(void* self, void* event) {
    QLCDNumber_QBaseShowEvent((QLCDNumber*)self, (QShowEvent*)event);
}

void q_lcdnumber_on_show_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnShowEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_hide_event(void* self, void* event) {
    QLCDNumber_HideEvent((QLCDNumber*)self, (QHideEvent*)event);
}

void q_lcdnumber_qbase_hide_event(void* self, void* event) {
    QLCDNumber_QBaseHideEvent((QLCDNumber*)self, (QHideEvent*)event);
}

void q_lcdnumber_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnHideEvent((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QLCDNumber_NativeEvent((QLCDNumber*)self, qstring(eventType), message, result);
}

bool q_lcdnumber_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QLCDNumber_QBaseNativeEvent((QLCDNumber*)self, qstring(eventType), message, result);
}

void q_lcdnumber_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QLCDNumber_OnNativeEvent((QLCDNumber*)self, (intptr_t)slot);
}

int32_t q_lcdnumber_metric(void* self, int64_t param1) {
    return QLCDNumber_Metric((QLCDNumber*)self, param1);
}

int32_t q_lcdnumber_qbase_metric(void* self, int64_t param1) {
    return QLCDNumber_QBaseMetric((QLCDNumber*)self, param1);
}

void q_lcdnumber_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QLCDNumber_OnMetric((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_init_painter(void* self, void* painter) {
    QLCDNumber_InitPainter((QLCDNumber*)self, (QPainter*)painter);
}

void q_lcdnumber_qbase_init_painter(void* self, void* painter) {
    QLCDNumber_QBaseInitPainter((QLCDNumber*)self, (QPainter*)painter);
}

void q_lcdnumber_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnInitPainter((QLCDNumber*)self, (intptr_t)slot);
}

QPaintDevice* q_lcdnumber_redirected(void* self, void* offset) {
    return QLCDNumber_Redirected((QLCDNumber*)self, (QPoint*)offset);
}

QPaintDevice* q_lcdnumber_qbase_redirected(void* self, void* offset) {
    return QLCDNumber_QBaseRedirected((QLCDNumber*)self, (QPoint*)offset);
}

void q_lcdnumber_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QLCDNumber_OnRedirected((QLCDNumber*)self, (intptr_t)slot);
}

QPainter* q_lcdnumber_shared_painter(void* self) {
    return QLCDNumber_SharedPainter((QLCDNumber*)self);
}

QPainter* q_lcdnumber_qbase_shared_painter(void* self) {
    return QLCDNumber_QBaseSharedPainter((QLCDNumber*)self);
}

void q_lcdnumber_on_shared_painter(void* self, QPainter* (*slot)()) {
    QLCDNumber_OnSharedPainter((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_input_method_event(void* self, void* param1) {
    QLCDNumber_InputMethodEvent((QLCDNumber*)self, (QInputMethodEvent*)param1);
}

void q_lcdnumber_qbase_input_method_event(void* self, void* param1) {
    QLCDNumber_QBaseInputMethodEvent((QLCDNumber*)self, (QInputMethodEvent*)param1);
}

void q_lcdnumber_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnInputMethodEvent((QLCDNumber*)self, (intptr_t)slot);
}

QVariant* q_lcdnumber_input_method_query(void* self, int64_t param1) {
    return QLCDNumber_InputMethodQuery((QLCDNumber*)self, param1);
}

QVariant* q_lcdnumber_qbase_input_method_query(void* self, int64_t param1) {
    return QLCDNumber_QBaseInputMethodQuery((QLCDNumber*)self, param1);
}

void q_lcdnumber_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QLCDNumber_OnInputMethodQuery((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_focus_next_prev_child(void* self, bool next) {
    return QLCDNumber_FocusNextPrevChild((QLCDNumber*)self, next);
}

bool q_lcdnumber_qbase_focus_next_prev_child(void* self, bool next) {
    return QLCDNumber_QBaseFocusNextPrevChild((QLCDNumber*)self, next);
}

void q_lcdnumber_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QLCDNumber_OnFocusNextPrevChild((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_event_filter(void* self, void* watched, void* event) {
    return QLCDNumber_EventFilter((QLCDNumber*)self, (QObject*)watched, (QEvent*)event);
}

bool q_lcdnumber_qbase_event_filter(void* self, void* watched, void* event) {
    return QLCDNumber_QBaseEventFilter((QLCDNumber*)self, (QObject*)watched, (QEvent*)event);
}

void q_lcdnumber_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLCDNumber_OnEventFilter((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_timer_event(void* self, void* event) {
    QLCDNumber_TimerEvent((QLCDNumber*)self, (QTimerEvent*)event);
}

void q_lcdnumber_qbase_timer_event(void* self, void* event) {
    QLCDNumber_QBaseTimerEvent((QLCDNumber*)self, (QTimerEvent*)event);
}

void q_lcdnumber_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnTimerEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_child_event(void* self, void* event) {
    QLCDNumber_ChildEvent((QLCDNumber*)self, (QChildEvent*)event);
}

void q_lcdnumber_qbase_child_event(void* self, void* event) {
    QLCDNumber_QBaseChildEvent((QLCDNumber*)self, (QChildEvent*)event);
}

void q_lcdnumber_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnChildEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_custom_event(void* self, void* event) {
    QLCDNumber_CustomEvent((QLCDNumber*)self, (QEvent*)event);
}

void q_lcdnumber_qbase_custom_event(void* self, void* event) {
    QLCDNumber_QBaseCustomEvent((QLCDNumber*)self, (QEvent*)event);
}

void q_lcdnumber_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnCustomEvent((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_connect_notify(void* self, void* signal) {
    QLCDNumber_ConnectNotify((QLCDNumber*)self, (QMetaMethod*)signal);
}

void q_lcdnumber_qbase_connect_notify(void* self, void* signal) {
    QLCDNumber_QBaseConnectNotify((QLCDNumber*)self, (QMetaMethod*)signal);
}

void q_lcdnumber_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnConnectNotify((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_disconnect_notify(void* self, void* signal) {
    QLCDNumber_DisconnectNotify((QLCDNumber*)self, (QMetaMethod*)signal);
}

void q_lcdnumber_qbase_disconnect_notify(void* self, void* signal) {
    QLCDNumber_QBaseDisconnectNotify((QLCDNumber*)self, (QMetaMethod*)signal);
}

void q_lcdnumber_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnDisconnectNotify((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_draw_frame(void* self, void* param1) {
    QLCDNumber_DrawFrame((QLCDNumber*)self, (QPainter*)param1);
}

void q_lcdnumber_qbase_draw_frame(void* self, void* param1) {
    QLCDNumber_QBaseDrawFrame((QLCDNumber*)self, (QPainter*)param1);
}

void q_lcdnumber_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QLCDNumber_OnDrawFrame((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_update_micro_focus(void* self) {
    QLCDNumber_UpdateMicroFocus((QLCDNumber*)self);
}

void q_lcdnumber_qbase_update_micro_focus(void* self) {
    QLCDNumber_QBaseUpdateMicroFocus((QLCDNumber*)self);
}

void q_lcdnumber_on_update_micro_focus(void* self, void (*slot)()) {
    QLCDNumber_OnUpdateMicroFocus((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_create(void* self) {
    QLCDNumber_Create((QLCDNumber*)self);
}

void q_lcdnumber_qbase_create(void* self) {
    QLCDNumber_QBaseCreate((QLCDNumber*)self);
}

void q_lcdnumber_on_create(void* self, void (*slot)()) {
    QLCDNumber_OnCreate((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_destroy(void* self) {
    QLCDNumber_Destroy((QLCDNumber*)self);
}

void q_lcdnumber_qbase_destroy(void* self) {
    QLCDNumber_QBaseDestroy((QLCDNumber*)self);
}

void q_lcdnumber_on_destroy(void* self, void (*slot)()) {
    QLCDNumber_OnDestroy((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_focus_next_child(void* self) {
    return QLCDNumber_FocusNextChild((QLCDNumber*)self);
}

bool q_lcdnumber_qbase_focus_next_child(void* self) {
    return QLCDNumber_QBaseFocusNextChild((QLCDNumber*)self);
}

void q_lcdnumber_on_focus_next_child(void* self, bool (*slot)()) {
    QLCDNumber_OnFocusNextChild((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_focus_previous_child(void* self) {
    return QLCDNumber_FocusPreviousChild((QLCDNumber*)self);
}

bool q_lcdnumber_qbase_focus_previous_child(void* self) {
    return QLCDNumber_QBaseFocusPreviousChild((QLCDNumber*)self);
}

void q_lcdnumber_on_focus_previous_child(void* self, bool (*slot)()) {
    QLCDNumber_OnFocusPreviousChild((QLCDNumber*)self, (intptr_t)slot);
}

QObject* q_lcdnumber_sender(void* self) {
    return QLCDNumber_Sender((QLCDNumber*)self);
}

QObject* q_lcdnumber_qbase_sender(void* self) {
    return QLCDNumber_QBaseSender((QLCDNumber*)self);
}

void q_lcdnumber_on_sender(void* self, QObject* (*slot)()) {
    QLCDNumber_OnSender((QLCDNumber*)self, (intptr_t)slot);
}

int32_t q_lcdnumber_sender_signal_index(void* self) {
    return QLCDNumber_SenderSignalIndex((QLCDNumber*)self);
}

int32_t q_lcdnumber_qbase_sender_signal_index(void* self) {
    return QLCDNumber_QBaseSenderSignalIndex((QLCDNumber*)self);
}

void q_lcdnumber_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLCDNumber_OnSenderSignalIndex((QLCDNumber*)self, (intptr_t)slot);
}

int32_t q_lcdnumber_receivers(void* self, const char* signal) {
    return QLCDNumber_Receivers((QLCDNumber*)self, signal);
}

int32_t q_lcdnumber_qbase_receivers(void* self, const char* signal) {
    return QLCDNumber_QBaseReceivers((QLCDNumber*)self, signal);
}

void q_lcdnumber_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLCDNumber_OnReceivers((QLCDNumber*)self, (intptr_t)slot);
}

bool q_lcdnumber_is_signal_connected(void* self, void* signal) {
    return QLCDNumber_IsSignalConnected((QLCDNumber*)self, (QMetaMethod*)signal);
}

bool q_lcdnumber_qbase_is_signal_connected(void* self, void* signal) {
    return QLCDNumber_QBaseIsSignalConnected((QLCDNumber*)self, (QMetaMethod*)signal);
}

void q_lcdnumber_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLCDNumber_OnIsSignalConnected((QLCDNumber*)self, (intptr_t)slot);
}

double q_lcdnumber_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QLCDNumber_GetDecodedMetricF((QLCDNumber*)self, metricA, metricB);
}

double q_lcdnumber_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QLCDNumber_QBaseGetDecodedMetricF((QLCDNumber*)self, metricA, metricB);
}

void q_lcdnumber_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QLCDNumber_OnGetDecodedMetricF((QLCDNumber*)self, (intptr_t)slot);
}

void q_lcdnumber_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_lcdnumber_delete(void* self) {
    QLCDNumber_Delete((QLCDNumber*)(self));
}
