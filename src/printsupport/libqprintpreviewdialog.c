#include "../libqevent.hpp"
#include "../libqdialog.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "libqprinter.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqcoreevent.hpp"
#include "libqprintpreviewdialog.hpp"
#include "libqprintpreviewdialog.h"

QPrintPreviewDialog* q_printpreviewdialog_new(void* parent) {
    return QPrintPreviewDialog_new((QWidget*)parent);
}

QPrintPreviewDialog* q_printpreviewdialog_new2() {
    return QPrintPreviewDialog_new2();
}

QPrintPreviewDialog* q_printpreviewdialog_new3(void* printer) {
    return QPrintPreviewDialog_new3((QPrinter*)printer);
}

QPrintPreviewDialog* q_printpreviewdialog_new4(void* parent, int64_t flags) {
    return QPrintPreviewDialog_new4((QWidget*)parent, flags);
}

QPrintPreviewDialog* q_printpreviewdialog_new5(void* printer, void* parent) {
    return QPrintPreviewDialog_new5((QPrinter*)printer, (QWidget*)parent);
}

QPrintPreviewDialog* q_printpreviewdialog_new6(void* printer, void* parent, int64_t flags) {
    return QPrintPreviewDialog_new6((QPrinter*)printer, (QWidget*)parent, flags);
}

const QMetaObject* q_printpreviewdialog_meta_object(void* self) {
    return QPrintPreviewDialog_MetaObject((QPrintPreviewDialog*)self);
}

void* q_printpreviewdialog_metacast(void* self, const char* param1) {
    return QPrintPreviewDialog_Metacast((QPrintPreviewDialog*)self, param1);
}

int32_t q_printpreviewdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintPreviewDialog_Metacall((QPrintPreviewDialog*)self, param1, param2, param3);
}

void q_printpreviewdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPrintPreviewDialog_OnMetacall((QPrintPreviewDialog*)self, (intptr_t)slot);
}

int32_t q_printpreviewdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPrintPreviewDialog_QBaseMetacall((QPrintPreviewDialog*)self, param1, param2, param3);
}

const char* q_printpreviewdialog_tr(const char* s) {
    libqt_string _str = QPrintPreviewDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPrinter* q_printpreviewdialog_printer(void* self) {
    return QPrintPreviewDialog_Printer((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_set_visible(void* self, bool visible) {
    QPrintPreviewDialog_SetVisible((QPrintPreviewDialog*)self, visible);
}

void q_printpreviewdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QPrintPreviewDialog_OnSetVisible((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_qbase_set_visible(void* self, bool visible) {
    QPrintPreviewDialog_QBaseSetVisible((QPrintPreviewDialog*)self, visible);
}

void q_printpreviewdialog_done(void* self, int result) {
    QPrintPreviewDialog_Done((QPrintPreviewDialog*)self, result);
}

void q_printpreviewdialog_on_done(void* self, void (*slot)(void*, int)) {
    QPrintPreviewDialog_OnDone((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_qbase_done(void* self, int result) {
    QPrintPreviewDialog_QBaseDone((QPrintPreviewDialog*)self, result);
}

void q_printpreviewdialog_paint_requested(void* self, void* printer) {
    QPrintPreviewDialog_PaintRequested((QPrintPreviewDialog*)self, (QPrinter*)printer);
}

void q_printpreviewdialog_on_paint_requested(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_Connect_PaintRequested((QPrintPreviewDialog*)self, (intptr_t)slot);
}

const char* q_printpreviewdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QPrintPreviewDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printpreviewdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPrintPreviewDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_printpreviewdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_printpreviewdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_printpreviewdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_printpreviewdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_printpreviewdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_printpreviewdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_printpreviewdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_printpreviewdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_printpreviewdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

uintptr_t q_printpreviewdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_printpreviewdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_printpreviewdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_printpreviewdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_printpreviewdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_printpreviewdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_printpreviewdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_printpreviewdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_printpreviewdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_printpreviewdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_printpreviewdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_printpreviewdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_printpreviewdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_printpreviewdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_printpreviewdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_printpreviewdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_printpreviewdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_printpreviewdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_printpreviewdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_printpreviewdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_printpreviewdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_printpreviewdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_printpreviewdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_printpreviewdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_printpreviewdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_printpreviewdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_printpreviewdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_printpreviewdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_printpreviewdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_printpreviewdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_printpreviewdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_printpreviewdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_printpreviewdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_printpreviewdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_printpreviewdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_printpreviewdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_printpreviewdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_printpreviewdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_printpreviewdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_printpreviewdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_printpreviewdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_printpreviewdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_printpreviewdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_printpreviewdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_printpreviewdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_printpreviewdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_printpreviewdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_printpreviewdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_printpreviewdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_printpreviewdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_printpreviewdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_printpreviewdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_printpreviewdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_printpreviewdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewdialog_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewdialog_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewdialog_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printpreviewdialog_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printpreviewdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_printpreviewdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_printpreviewdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_printpreviewdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_printpreviewdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_printpreviewdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_printpreviewdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_printpreviewdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_printpreviewdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_printpreviewdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_printpreviewdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_printpreviewdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_printpreviewdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_printpreviewdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_printpreviewdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_printpreviewdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_printpreviewdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_printpreviewdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_printpreviewdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_printpreviewdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_printpreviewdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_printpreviewdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_printpreviewdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_printpreviewdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_printpreviewdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_printpreviewdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_printpreviewdialog_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_printpreviewdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_printpreviewdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_printpreviewdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_printpreviewdialog_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_printpreviewdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_printpreviewdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_printpreviewdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_printpreviewdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_printpreviewdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_printpreviewdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_printpreviewdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_printpreviewdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printpreviewdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_printpreviewdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_printpreviewdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_printpreviewdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_printpreviewdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_printpreviewdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_printpreviewdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_printpreviewdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_printpreviewdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_printpreviewdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_printpreviewdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_printpreviewdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_printpreviewdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_printpreviewdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printpreviewdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_printpreviewdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_printpreviewdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_printpreviewdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_printpreviewdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_printpreviewdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_printpreviewdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_printpreviewdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_printpreviewdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_printpreviewdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_printpreviewdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_printpreviewdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_printpreviewdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_printpreviewdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_printpreviewdialog_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_printpreviewdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_printpreviewdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_printpreviewdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_printpreviewdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_printpreviewdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_printpreviewdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_printpreviewdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_printpreviewdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_printpreviewdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_printpreviewdialog_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_printpreviewdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_printpreviewdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_printpreviewdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_printpreviewdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_printpreviewdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_printpreviewdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_printpreviewdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_printpreviewdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_printpreviewdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_printpreviewdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_printpreviewdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_printpreviewdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_printpreviewdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_printpreviewdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_printpreviewdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_printpreviewdialog_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_printpreviewdialog_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_printpreviewdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_printpreviewdialog_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_printpreviewdialog_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_printpreviewdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_printpreviewdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_printpreviewdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_printpreviewdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_printpreviewdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_printpreviewdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_printpreviewdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_printpreviewdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_printpreviewdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_printpreviewdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_printpreviewdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_printpreviewdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_printpreviewdialog_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_printpreviewdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_printpreviewdialog_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_printpreviewdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_printpreviewdialog_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_printpreviewdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_printpreviewdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_printpreviewdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_printpreviewdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_printpreviewdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_printpreviewdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_printpreviewdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_printpreviewdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_printpreviewdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_printpreviewdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_printpreviewdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_printpreviewdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_printpreviewdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_printpreviewdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_printpreviewdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_printpreviewdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_printpreviewdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_printpreviewdialog_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_printpreviewdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_printpreviewdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_printpreviewdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_printpreviewdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_printpreviewdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_printpreviewdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_printpreviewdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_printpreviewdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_printpreviewdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_printpreviewdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_printpreviewdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_printpreviewdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_printpreviewdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_printpreviewdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_printpreviewdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_printpreviewdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_printpreviewdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_printpreviewdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_printpreviewdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_printpreviewdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_printpreviewdialog_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_printpreviewdialog_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_printpreviewdialog_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_printpreviewdialog_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_printpreviewdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_printpreviewdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_printpreviewdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_printpreviewdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_printpreviewdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_printpreviewdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_printpreviewdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_printpreviewdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_printpreviewdialog_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_printpreviewdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_printpreviewdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_printpreviewdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_printpreviewdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_printpreviewdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_printpreviewdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_printpreviewdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_printpreviewdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_printpreviewdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_printpreviewdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_printpreviewdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_printpreviewdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_printpreviewdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_printpreviewdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_printpreviewdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_printpreviewdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_printpreviewdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_printpreviewdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_printpreviewdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_printpreviewdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_printpreviewdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_printpreviewdialog_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_printpreviewdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_printpreviewdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_printpreviewdialog_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_printpreviewdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_printpreviewdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_printpreviewdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_printpreviewdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_printpreviewdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_printpreviewdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_printpreviewdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_printpreviewdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_printpreviewdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_printpreviewdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_printpreviewdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_printpreviewdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printpreviewdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_printpreviewdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_printpreviewdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_printpreviewdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_printpreviewdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_printpreviewdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_printpreviewdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_printpreviewdialog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_printpreviewdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_printpreviewdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_printpreviewdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_printpreviewdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_printpreviewdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_printpreviewdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_printpreviewdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_printpreviewdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_printpreviewdialog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_printpreviewdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_printpreviewdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_printpreviewdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_printpreviewdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_printpreviewdialog_dynamic_property_names(void* self) {
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

QBindingStorage* q_printpreviewdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_printpreviewdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_printpreviewdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_printpreviewdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_printpreviewdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_printpreviewdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_printpreviewdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_printpreviewdialog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_printpreviewdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_printpreviewdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_printpreviewdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_printpreviewdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_printpreviewdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_printpreviewdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_printpreviewdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_printpreviewdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

QSize* q_printpreviewdialog_size_hint(void* self) {
    return QPrintPreviewDialog_SizeHint((QPrintPreviewDialog*)self);
}

QSize* q_printpreviewdialog_qbase_size_hint(void* self) {
    return QPrintPreviewDialog_QBaseSizeHint((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QPrintPreviewDialog_OnSizeHint((QPrintPreviewDialog*)self, (intptr_t)slot);
}

QSize* q_printpreviewdialog_minimum_size_hint(void* self) {
    return QPrintPreviewDialog_MinimumSizeHint((QPrintPreviewDialog*)self);
}

QSize* q_printpreviewdialog_qbase_minimum_size_hint(void* self) {
    return QPrintPreviewDialog_QBaseMinimumSizeHint((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QPrintPreviewDialog_OnMinimumSizeHint((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_open(void* self) {
    QPrintPreviewDialog_Open((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_qbase_open(void* self) {
    QPrintPreviewDialog_QBaseOpen((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_open(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnOpen((QPrintPreviewDialog*)self, (intptr_t)slot);
}

int32_t q_printpreviewdialog_exec(void* self) {
    return QPrintPreviewDialog_Exec((QPrintPreviewDialog*)self);
}

int32_t q_printpreviewdialog_qbase_exec(void* self) {
    return QPrintPreviewDialog_QBaseExec((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_exec(void* self, int32_t (*slot)()) {
    QPrintPreviewDialog_OnExec((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_accept(void* self) {
    QPrintPreviewDialog_Accept((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_qbase_accept(void* self) {
    QPrintPreviewDialog_QBaseAccept((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_accept(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnAccept((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_reject(void* self) {
    QPrintPreviewDialog_Reject((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_qbase_reject(void* self) {
    QPrintPreviewDialog_QBaseReject((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_reject(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnReject((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_key_press_event(void* self, void* param1) {
    QPrintPreviewDialog_KeyPressEvent((QPrintPreviewDialog*)self, (QKeyEvent*)param1);
}

void q_printpreviewdialog_qbase_key_press_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseKeyPressEvent((QPrintPreviewDialog*)self, (QKeyEvent*)param1);
}

void q_printpreviewdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnKeyPressEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_close_event(void* self, void* param1) {
    QPrintPreviewDialog_CloseEvent((QPrintPreviewDialog*)self, (QCloseEvent*)param1);
}

void q_printpreviewdialog_qbase_close_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseCloseEvent((QPrintPreviewDialog*)self, (QCloseEvent*)param1);
}

void q_printpreviewdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnCloseEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_show_event(void* self, void* param1) {
    QPrintPreviewDialog_ShowEvent((QPrintPreviewDialog*)self, (QShowEvent*)param1);
}

void q_printpreviewdialog_qbase_show_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseShowEvent((QPrintPreviewDialog*)self, (QShowEvent*)param1);
}

void q_printpreviewdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnShowEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_resize_event(void* self, void* param1) {
    QPrintPreviewDialog_ResizeEvent((QPrintPreviewDialog*)self, (QResizeEvent*)param1);
}

void q_printpreviewdialog_qbase_resize_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseResizeEvent((QPrintPreviewDialog*)self, (QResizeEvent*)param1);
}

void q_printpreviewdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnResizeEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_context_menu_event(void* self, void* param1) {
    QPrintPreviewDialog_ContextMenuEvent((QPrintPreviewDialog*)self, (QContextMenuEvent*)param1);
}

void q_printpreviewdialog_qbase_context_menu_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseContextMenuEvent((QPrintPreviewDialog*)self, (QContextMenuEvent*)param1);
}

void q_printpreviewdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnContextMenuEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_event_filter(void* self, void* param1, void* param2) {
    return QPrintPreviewDialog_EventFilter((QPrintPreviewDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_printpreviewdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPrintPreviewDialog_QBaseEventFilter((QPrintPreviewDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_printpreviewdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPrintPreviewDialog_OnEventFilter((QPrintPreviewDialog*)self, (intptr_t)slot);
}

int32_t q_printpreviewdialog_dev_type(void* self) {
    return QPrintPreviewDialog_DevType((QPrintPreviewDialog*)self);
}

int32_t q_printpreviewdialog_qbase_dev_type(void* self) {
    return QPrintPreviewDialog_QBaseDevType((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QPrintPreviewDialog_OnDevType((QPrintPreviewDialog*)self, (intptr_t)slot);
}

int32_t q_printpreviewdialog_height_for_width(void* self, int param1) {
    return QPrintPreviewDialog_HeightForWidth((QPrintPreviewDialog*)self, param1);
}

int32_t q_printpreviewdialog_qbase_height_for_width(void* self, int param1) {
    return QPrintPreviewDialog_QBaseHeightForWidth((QPrintPreviewDialog*)self, param1);
}

void q_printpreviewdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QPrintPreviewDialog_OnHeightForWidth((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_has_height_for_width(void* self) {
    return QPrintPreviewDialog_HasHeightForWidth((QPrintPreviewDialog*)self);
}

bool q_printpreviewdialog_qbase_has_height_for_width(void* self) {
    return QPrintPreviewDialog_QBaseHasHeightForWidth((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QPrintPreviewDialog_OnHasHeightForWidth((QPrintPreviewDialog*)self, (intptr_t)slot);
}

QPaintEngine* q_printpreviewdialog_paint_engine(void* self) {
    return QPrintPreviewDialog_PaintEngine((QPrintPreviewDialog*)self);
}

QPaintEngine* q_printpreviewdialog_qbase_paint_engine(void* self) {
    return QPrintPreviewDialog_QBasePaintEngine((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPrintPreviewDialog_OnPaintEngine((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_event(void* self, void* event) {
    return QPrintPreviewDialog_Event((QPrintPreviewDialog*)self, (QEvent*)event);
}

bool q_printpreviewdialog_qbase_event(void* self, void* event) {
    return QPrintPreviewDialog_QBaseEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

void q_printpreviewdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_mouse_press_event(void* self, void* event) {
    QPrintPreviewDialog_MousePressEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_qbase_mouse_press_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMousePressEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMousePressEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_mouse_release_event(void* self, void* event) {
    QPrintPreviewDialog_MouseReleaseEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_qbase_mouse_release_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMouseReleaseEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMouseReleaseEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewDialog_MouseDoubleClickEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMouseDoubleClickEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMouseDoubleClickEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_mouse_move_event(void* self, void* event) {
    QPrintPreviewDialog_MouseMoveEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_qbase_mouse_move_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMouseMoveEvent((QPrintPreviewDialog*)self, (QMouseEvent*)event);
}

void q_printpreviewdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMouseMoveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_wheel_event(void* self, void* event) {
    QPrintPreviewDialog_WheelEvent((QPrintPreviewDialog*)self, (QWheelEvent*)event);
}

void q_printpreviewdialog_qbase_wheel_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseWheelEvent((QPrintPreviewDialog*)self, (QWheelEvent*)event);
}

void q_printpreviewdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnWheelEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_key_release_event(void* self, void* event) {
    QPrintPreviewDialog_KeyReleaseEvent((QPrintPreviewDialog*)self, (QKeyEvent*)event);
}

void q_printpreviewdialog_qbase_key_release_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseKeyReleaseEvent((QPrintPreviewDialog*)self, (QKeyEvent*)event);
}

void q_printpreviewdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnKeyReleaseEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_focus_in_event(void* self, void* event) {
    QPrintPreviewDialog_FocusInEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

void q_printpreviewdialog_qbase_focus_in_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseFocusInEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

void q_printpreviewdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnFocusInEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_focus_out_event(void* self, void* event) {
    QPrintPreviewDialog_FocusOutEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

void q_printpreviewdialog_qbase_focus_out_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseFocusOutEvent((QPrintPreviewDialog*)self, (QFocusEvent*)event);
}

void q_printpreviewdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnFocusOutEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_enter_event(void* self, void* event) {
    QPrintPreviewDialog_EnterEvent((QPrintPreviewDialog*)self, (QEnterEvent*)event);
}

void q_printpreviewdialog_qbase_enter_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseEnterEvent((QPrintPreviewDialog*)self, (QEnterEvent*)event);
}

void q_printpreviewdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnEnterEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_leave_event(void* self, void* event) {
    QPrintPreviewDialog_LeaveEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

void q_printpreviewdialog_qbase_leave_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseLeaveEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

void q_printpreviewdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnLeaveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_paint_event(void* self, void* event) {
    QPrintPreviewDialog_PaintEvent((QPrintPreviewDialog*)self, (QPaintEvent*)event);
}

void q_printpreviewdialog_qbase_paint_event(void* self, void* event) {
    QPrintPreviewDialog_QBasePaintEvent((QPrintPreviewDialog*)self, (QPaintEvent*)event);
}

void q_printpreviewdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnPaintEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_move_event(void* self, void* event) {
    QPrintPreviewDialog_MoveEvent((QPrintPreviewDialog*)self, (QMoveEvent*)event);
}

void q_printpreviewdialog_qbase_move_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseMoveEvent((QPrintPreviewDialog*)self, (QMoveEvent*)event);
}

void q_printpreviewdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnMoveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_tablet_event(void* self, void* event) {
    QPrintPreviewDialog_TabletEvent((QPrintPreviewDialog*)self, (QTabletEvent*)event);
}

void q_printpreviewdialog_qbase_tablet_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseTabletEvent((QPrintPreviewDialog*)self, (QTabletEvent*)event);
}

void q_printpreviewdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnTabletEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_action_event(void* self, void* event) {
    QPrintPreviewDialog_ActionEvent((QPrintPreviewDialog*)self, (QActionEvent*)event);
}

void q_printpreviewdialog_qbase_action_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseActionEvent((QPrintPreviewDialog*)self, (QActionEvent*)event);
}

void q_printpreviewdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnActionEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_drag_enter_event(void* self, void* event) {
    QPrintPreviewDialog_DragEnterEvent((QPrintPreviewDialog*)self, (QDragEnterEvent*)event);
}

void q_printpreviewdialog_qbase_drag_enter_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDragEnterEvent((QPrintPreviewDialog*)self, (QDragEnterEvent*)event);
}

void q_printpreviewdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDragEnterEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_drag_move_event(void* self, void* event) {
    QPrintPreviewDialog_DragMoveEvent((QPrintPreviewDialog*)self, (QDragMoveEvent*)event);
}

void q_printpreviewdialog_qbase_drag_move_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDragMoveEvent((QPrintPreviewDialog*)self, (QDragMoveEvent*)event);
}

void q_printpreviewdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDragMoveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_drag_leave_event(void* self, void* event) {
    QPrintPreviewDialog_DragLeaveEvent((QPrintPreviewDialog*)self, (QDragLeaveEvent*)event);
}

void q_printpreviewdialog_qbase_drag_leave_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDragLeaveEvent((QPrintPreviewDialog*)self, (QDragLeaveEvent*)event);
}

void q_printpreviewdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDragLeaveEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_drop_event(void* self, void* event) {
    QPrintPreviewDialog_DropEvent((QPrintPreviewDialog*)self, (QDropEvent*)event);
}

void q_printpreviewdialog_qbase_drop_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseDropEvent((QPrintPreviewDialog*)self, (QDropEvent*)event);
}

void q_printpreviewdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDropEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_hide_event(void* self, void* event) {
    QPrintPreviewDialog_HideEvent((QPrintPreviewDialog*)self, (QHideEvent*)event);
}

void q_printpreviewdialog_qbase_hide_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseHideEvent((QPrintPreviewDialog*)self, (QHideEvent*)event);
}

void q_printpreviewdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnHideEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewDialog_NativeEvent((QPrintPreviewDialog*)self, qstring(eventType), message, result);
}

bool q_printpreviewdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintPreviewDialog_QBaseNativeEvent((QPrintPreviewDialog*)self, qstring(eventType), message, result);
}

void q_printpreviewdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QPrintPreviewDialog_OnNativeEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_change_event(void* self, void* param1) {
    QPrintPreviewDialog_ChangeEvent((QPrintPreviewDialog*)self, (QEvent*)param1);
}

void q_printpreviewdialog_qbase_change_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseChangeEvent((QPrintPreviewDialog*)self, (QEvent*)param1);
}

void q_printpreviewdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnChangeEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

int32_t q_printpreviewdialog_metric(void* self, int64_t param1) {
    return QPrintPreviewDialog_Metric((QPrintPreviewDialog*)self, param1);
}

int32_t q_printpreviewdialog_qbase_metric(void* self, int64_t param1) {
    return QPrintPreviewDialog_QBaseMetric((QPrintPreviewDialog*)self, param1);
}

void q_printpreviewdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPrintPreviewDialog_OnMetric((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_init_painter(void* self, void* painter) {
    QPrintPreviewDialog_InitPainter((QPrintPreviewDialog*)self, (QPainter*)painter);
}

void q_printpreviewdialog_qbase_init_painter(void* self, void* painter) {
    QPrintPreviewDialog_QBaseInitPainter((QPrintPreviewDialog*)self, (QPainter*)painter);
}

void q_printpreviewdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnInitPainter((QPrintPreviewDialog*)self, (intptr_t)slot);
}

QPaintDevice* q_printpreviewdialog_redirected(void* self, void* offset) {
    return QPrintPreviewDialog_Redirected((QPrintPreviewDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_printpreviewdialog_qbase_redirected(void* self, void* offset) {
    return QPrintPreviewDialog_QBaseRedirected((QPrintPreviewDialog*)self, (QPoint*)offset);
}

void q_printpreviewdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnRedirected((QPrintPreviewDialog*)self, (intptr_t)slot);
}

QPainter* q_printpreviewdialog_shared_painter(void* self) {
    return QPrintPreviewDialog_SharedPainter((QPrintPreviewDialog*)self);
}

QPainter* q_printpreviewdialog_qbase_shared_painter(void* self) {
    return QPrintPreviewDialog_QBaseSharedPainter((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPrintPreviewDialog_OnSharedPainter((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_input_method_event(void* self, void* param1) {
    QPrintPreviewDialog_InputMethodEvent((QPrintPreviewDialog*)self, (QInputMethodEvent*)param1);
}

void q_printpreviewdialog_qbase_input_method_event(void* self, void* param1) {
    QPrintPreviewDialog_QBaseInputMethodEvent((QPrintPreviewDialog*)self, (QInputMethodEvent*)param1);
}

void q_printpreviewdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnInputMethodEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

QVariant* q_printpreviewdialog_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewDialog_InputMethodQuery((QPrintPreviewDialog*)self, param1);
}

QVariant* q_printpreviewdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QPrintPreviewDialog_QBaseInputMethodQuery((QPrintPreviewDialog*)self, param1);
}

void q_printpreviewdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QPrintPreviewDialog_OnInputMethodQuery((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewDialog_FocusNextPrevChild((QPrintPreviewDialog*)self, next);
}

bool q_printpreviewdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QPrintPreviewDialog_QBaseFocusNextPrevChild((QPrintPreviewDialog*)self, next);
}

void q_printpreviewdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QPrintPreviewDialog_OnFocusNextPrevChild((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_timer_event(void* self, void* event) {
    QPrintPreviewDialog_TimerEvent((QPrintPreviewDialog*)self, (QTimerEvent*)event);
}

void q_printpreviewdialog_qbase_timer_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseTimerEvent((QPrintPreviewDialog*)self, (QTimerEvent*)event);
}

void q_printpreviewdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnTimerEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_child_event(void* self, void* event) {
    QPrintPreviewDialog_ChildEvent((QPrintPreviewDialog*)self, (QChildEvent*)event);
}

void q_printpreviewdialog_qbase_child_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseChildEvent((QPrintPreviewDialog*)self, (QChildEvent*)event);
}

void q_printpreviewdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnChildEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_custom_event(void* self, void* event) {
    QPrintPreviewDialog_CustomEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

void q_printpreviewdialog_qbase_custom_event(void* self, void* event) {
    QPrintPreviewDialog_QBaseCustomEvent((QPrintPreviewDialog*)self, (QEvent*)event);
}

void q_printpreviewdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnCustomEvent((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_connect_notify(void* self, void* signal) {
    QPrintPreviewDialog_ConnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

void q_printpreviewdialog_qbase_connect_notify(void* self, void* signal) {
    QPrintPreviewDialog_QBaseConnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

void q_printpreviewdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnConnectNotify((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_disconnect_notify(void* self, void* signal) {
    QPrintPreviewDialog_DisconnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

void q_printpreviewdialog_qbase_disconnect_notify(void* self, void* signal) {
    QPrintPreviewDialog_QBaseDisconnectNotify((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

void q_printpreviewdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnDisconnectNotify((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_adjust_position(void* self, void* param1) {
    QPrintPreviewDialog_AdjustPosition((QPrintPreviewDialog*)self, (QWidget*)param1);
}

void q_printpreviewdialog_qbase_adjust_position(void* self, void* param1) {
    QPrintPreviewDialog_QBaseAdjustPosition((QPrintPreviewDialog*)self, (QWidget*)param1);
}

void q_printpreviewdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnAdjustPosition((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_update_micro_focus(void* self) {
    QPrintPreviewDialog_UpdateMicroFocus((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_qbase_update_micro_focus(void* self) {
    QPrintPreviewDialog_QBaseUpdateMicroFocus((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnUpdateMicroFocus((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_create(void* self) {
    QPrintPreviewDialog_Create((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_qbase_create(void* self) {
    QPrintPreviewDialog_QBaseCreate((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_create(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnCreate((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_destroy(void* self) {
    QPrintPreviewDialog_Destroy((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_qbase_destroy(void* self) {
    QPrintPreviewDialog_QBaseDestroy((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_destroy(void* self, void (*slot)()) {
    QPrintPreviewDialog_OnDestroy((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_focus_next_child(void* self) {
    return QPrintPreviewDialog_FocusNextChild((QPrintPreviewDialog*)self);
}

bool q_printpreviewdialog_qbase_focus_next_child(void* self) {
    return QPrintPreviewDialog_QBaseFocusNextChild((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QPrintPreviewDialog_OnFocusNextChild((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_focus_previous_child(void* self) {
    return QPrintPreviewDialog_FocusPreviousChild((QPrintPreviewDialog*)self);
}

bool q_printpreviewdialog_qbase_focus_previous_child(void* self) {
    return QPrintPreviewDialog_QBaseFocusPreviousChild((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QPrintPreviewDialog_OnFocusPreviousChild((QPrintPreviewDialog*)self, (intptr_t)slot);
}

QObject* q_printpreviewdialog_sender(void* self) {
    return QPrintPreviewDialog_Sender((QPrintPreviewDialog*)self);
}

QObject* q_printpreviewdialog_qbase_sender(void* self) {
    return QPrintPreviewDialog_QBaseSender((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_sender(void* self, QObject* (*slot)()) {
    QPrintPreviewDialog_OnSender((QPrintPreviewDialog*)self, (intptr_t)slot);
}

int32_t q_printpreviewdialog_sender_signal_index(void* self) {
    return QPrintPreviewDialog_SenderSignalIndex((QPrintPreviewDialog*)self);
}

int32_t q_printpreviewdialog_qbase_sender_signal_index(void* self) {
    return QPrintPreviewDialog_QBaseSenderSignalIndex((QPrintPreviewDialog*)self);
}

void q_printpreviewdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPrintPreviewDialog_OnSenderSignalIndex((QPrintPreviewDialog*)self, (intptr_t)slot);
}

int32_t q_printpreviewdialog_receivers(void* self, const char* signal) {
    return QPrintPreviewDialog_Receivers((QPrintPreviewDialog*)self, signal);
}

int32_t q_printpreviewdialog_qbase_receivers(void* self, const char* signal) {
    return QPrintPreviewDialog_QBaseReceivers((QPrintPreviewDialog*)self, signal);
}

void q_printpreviewdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPrintPreviewDialog_OnReceivers((QPrintPreviewDialog*)self, (intptr_t)slot);
}

bool q_printpreviewdialog_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewDialog_IsSignalConnected((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

bool q_printpreviewdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QPrintPreviewDialog_QBaseIsSignalConnected((QPrintPreviewDialog*)self, (QMetaMethod*)signal);
}

void q_printpreviewdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPrintPreviewDialog_OnIsSignalConnected((QPrintPreviewDialog*)self, (intptr_t)slot);
}

void q_printpreviewdialog_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_printpreviewdialog_delete(void* self) {
    QPrintPreviewDialog_Delete((QPrintPreviewDialog*)(self));
}
