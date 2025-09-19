#include "libqabstractprintdialog.hpp"
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
#include "libqprinter.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqprintdialog.hpp"
#include "libqprintdialog.h"

QPrintDialog* q_printdialog_new(void* parent) {
    return QPrintDialog_new((QWidget*)parent);
}

QPrintDialog* q_printdialog_new2(void* printer) {
    return QPrintDialog_new2((QPrinter*)printer);
}

QPrintDialog* q_printdialog_new3() {
    return QPrintDialog_new3();
}

QPrintDialog* q_printdialog_new4(void* printer, void* parent) {
    return QPrintDialog_new4((QPrinter*)printer, (QWidget*)parent);
}

const QMetaObject* q_printdialog_meta_object(void* self) {
    return QPrintDialog_MetaObject((QPrintDialog*)self);
}

void* q_printdialog_metacast(void* self, const char* param1) {
    return QPrintDialog_Metacast((QPrintDialog*)self, param1);
}

int32_t q_printdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPrintDialog_Metacall((QPrintDialog*)self, param1, param2, param3);
}

void q_printdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPrintDialog_OnMetacall((QPrintDialog*)self, (intptr_t)callback);
}

int32_t q_printdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPrintDialog_QBaseMetacall((QPrintDialog*)self, param1, param2, param3);
}

const char* q_printdialog_tr(const char* s) {
    libqt_string _str = QPrintDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_printdialog_exec(void* self) {
    return QPrintDialog_Exec((QPrintDialog*)self);
}

void q_printdialog_on_exec(void* self, int32_t (*callback)()) {
    QPrintDialog_OnExec((QPrintDialog*)self, (intptr_t)callback);
}

int32_t q_printdialog_qbase_exec(void* self) {
    return QPrintDialog_QBaseExec((QPrintDialog*)self);
}

void q_printdialog_accept(void* self) {
    QPrintDialog_Accept((QPrintDialog*)self);
}

void q_printdialog_on_accept(void* self, void (*callback)()) {
    QPrintDialog_OnAccept((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_qbase_accept(void* self) {
    QPrintDialog_QBaseAccept((QPrintDialog*)self);
}

void q_printdialog_done(void* self, int result) {
    QPrintDialog_Done((QPrintDialog*)self, result);
}

void q_printdialog_on_done(void* self, void (*callback)(void*, int)) {
    QPrintDialog_OnDone((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_qbase_done(void* self, int result) {
    QPrintDialog_QBaseDone((QPrintDialog*)self, result);
}

void q_printdialog_set_option(void* self, int32_t option) {
    QPrintDialog_SetOption((QPrintDialog*)self, option);
}

bool q_printdialog_test_option(void* self, int32_t option) {
    return QPrintDialog_TestOption((QPrintDialog*)self, option);
}

void q_printdialog_set_options(void* self, int32_t options) {
    QPrintDialog_SetOptions((QPrintDialog*)self, options);
}

int32_t q_printdialog_options(void* self) {
    return QPrintDialog_Options((QPrintDialog*)self);
}

void q_printdialog_set_visible(void* self, bool visible) {
    QPrintDialog_SetVisible((QPrintDialog*)self, visible);
}

void q_printdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QPrintDialog_OnSetVisible((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_qbase_set_visible(void* self, bool visible) {
    QPrintDialog_QBaseSetVisible((QPrintDialog*)self, visible);
}

void q_printdialog_accepted(void* self, void* printer) {
    QPrintDialog_Accepted((QPrintDialog*)self, (QPrinter*)printer);
}

const char* q_printdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QPrintDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPrintDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_option2(void* self, int32_t option, bool on) {
    QPrintDialog_SetOption2((QPrintDialog*)self, option, on);
}

void q_printdialog_set_option_tabs(void* self, libqt_list tabs) {
    QAbstractPrintDialog_SetOptionTabs((QAbstractPrintDialog*)self, tabs);
}

void q_printdialog_set_print_range(void* self, int32_t range) {
    QAbstractPrintDialog_SetPrintRange((QAbstractPrintDialog*)self, range);
}

int32_t q_printdialog_print_range(void* self) {
    return QAbstractPrintDialog_PrintRange((QAbstractPrintDialog*)self);
}

void q_printdialog_set_min_max(void* self, int min, int max) {
    QAbstractPrintDialog_SetMinMax((QAbstractPrintDialog*)self, min, max);
}

int32_t q_printdialog_min_page(void* self) {
    return QAbstractPrintDialog_MinPage((QAbstractPrintDialog*)self);
}

int32_t q_printdialog_max_page(void* self) {
    return QAbstractPrintDialog_MaxPage((QAbstractPrintDialog*)self);
}

void q_printdialog_set_from_to(void* self, int fromPage, int toPage) {
    QAbstractPrintDialog_SetFromTo((QAbstractPrintDialog*)self, fromPage, toPage);
}

int32_t q_printdialog_from_page(void* self) {
    return QAbstractPrintDialog_FromPage((QAbstractPrintDialog*)self);
}

int32_t q_printdialog_to_page(void* self) {
    return QAbstractPrintDialog_ToPage((QAbstractPrintDialog*)self);
}

QPrinter* q_printdialog_printer(void* self) {
    return QAbstractPrintDialog_Printer((QAbstractPrintDialog*)self);
}

int32_t q_printdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_printdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_printdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_printdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_printdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_printdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_printdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_printdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_printdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_printdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_printdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_printdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_printdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_printdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_printdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_printdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_printdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_printdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_printdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_printdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_printdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_printdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_printdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_printdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_printdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_printdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_printdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_printdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_printdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_printdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_printdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_printdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_printdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_printdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_printdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_printdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_printdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_printdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_printdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_printdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_printdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_printdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_printdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_printdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_printdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_printdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_printdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_printdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_printdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_printdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_printdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_printdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_printdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_printdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_printdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_printdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_printdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_printdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_printdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_printdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_printdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_printdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_printdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_printdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_printdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_printdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_printdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_printdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_printdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_printdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_printdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_printdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_printdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_printdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_printdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_printdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_printdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_printdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_printdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_printdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_printdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_printdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_printdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_printdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_printdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_printdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_printdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_printdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_printdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_printdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_printdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_printdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_printdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_printdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_printdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_printdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_printdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_printdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_printdialog_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_printdialog_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_printdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_printdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_printdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_printdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_printdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_printdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_printdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_printdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_printdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_printdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_printdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_printdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_printdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_printdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_printdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_printdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_printdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_printdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_printdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_printdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_printdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_printdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_printdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_printdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_printdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_printdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_printdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_printdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_printdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_printdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_printdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_printdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_printdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_printdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_printdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_printdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_printdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_printdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_printdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_printdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_printdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_printdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_printdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_printdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_printdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_printdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_printdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_printdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_printdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_printdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_printdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_printdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_printdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_printdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_printdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_printdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_printdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_printdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_printdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_printdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_printdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_printdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_printdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_printdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_printdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_printdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_printdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_printdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_printdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_printdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_printdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_printdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_printdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_printdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_printdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_printdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_printdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_printdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_printdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_printdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_printdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_printdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_printdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_printdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_printdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_printdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_printdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_printdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_printdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_printdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_printdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_printdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_printdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_printdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_printdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_printdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_printdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_printdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_printdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_printdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_printdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_printdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_printdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_printdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_printdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_printdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_printdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_printdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_printdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_printdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_printdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_printdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_printdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_printdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_printdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_printdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_printdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_printdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_printdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_printdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_printdialog_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_printdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_printdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_printdialog_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_printdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_printdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_printdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_printdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_printdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_printdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_printdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_printdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_printdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_printdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_printdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_printdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_printdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_printdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_printdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_printdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_printdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_printdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_printdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_printdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_printdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_printdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_printdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_printdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_printdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_printdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_printdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_printdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_printdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_printdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_printdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_printdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_printdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_printdialog_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_printdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_printdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_printdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_printdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_printdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_printdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_printdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_printdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_printdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_printdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_printdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_printdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_printdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_printdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_printdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_printdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_printdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_printdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_printdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_printdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_printdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_printdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_printdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_printdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_printdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_printdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_printdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_printdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_printdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_printdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_printdialog_dynamic_property_names");
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

QBindingStorage* q_printdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_printdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_printdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_printdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_printdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_printdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_printdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_printdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_printdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_printdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_printdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_printdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_printdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_printdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_printdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_printdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_printdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_printdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_printdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_printdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_printdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_printdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_printdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_printdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_printdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_printdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_printdialog_size_hint(void* self) {
    return QPrintDialog_SizeHint((QPrintDialog*)self);
}

QSize* q_printdialog_qbase_size_hint(void* self) {
    return QPrintDialog_QBaseSizeHint((QPrintDialog*)self);
}

void q_printdialog_on_size_hint(void* self, QSize* (*callback)()) {
    QPrintDialog_OnSizeHint((QPrintDialog*)self, (intptr_t)callback);
}

QSize* q_printdialog_minimum_size_hint(void* self) {
    return QPrintDialog_MinimumSizeHint((QPrintDialog*)self);
}

QSize* q_printdialog_qbase_minimum_size_hint(void* self) {
    return QPrintDialog_QBaseMinimumSizeHint((QPrintDialog*)self);
}

void q_printdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QPrintDialog_OnMinimumSizeHint((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_open(void* self) {
    QPrintDialog_Open((QPrintDialog*)self);
}

void q_printdialog_qbase_open(void* self) {
    QPrintDialog_QBaseOpen((QPrintDialog*)self);
}

void q_printdialog_on_open(void* self, void (*callback)()) {
    QPrintDialog_OnOpen((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_reject(void* self) {
    QPrintDialog_Reject((QPrintDialog*)self);
}

void q_printdialog_qbase_reject(void* self) {
    QPrintDialog_QBaseReject((QPrintDialog*)self);
}

void q_printdialog_on_reject(void* self, void (*callback)()) {
    QPrintDialog_OnReject((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_key_press_event(void* self, void* param1) {
    QPrintDialog_KeyPressEvent((QPrintDialog*)self, (QKeyEvent*)param1);
}

void q_printdialog_qbase_key_press_event(void* self, void* param1) {
    QPrintDialog_QBaseKeyPressEvent((QPrintDialog*)self, (QKeyEvent*)param1);
}

void q_printdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnKeyPressEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_close_event(void* self, void* param1) {
    QPrintDialog_CloseEvent((QPrintDialog*)self, (QCloseEvent*)param1);
}

void q_printdialog_qbase_close_event(void* self, void* param1) {
    QPrintDialog_QBaseCloseEvent((QPrintDialog*)self, (QCloseEvent*)param1);
}

void q_printdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnCloseEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_show_event(void* self, void* param1) {
    QPrintDialog_ShowEvent((QPrintDialog*)self, (QShowEvent*)param1);
}

void q_printdialog_qbase_show_event(void* self, void* param1) {
    QPrintDialog_QBaseShowEvent((QPrintDialog*)self, (QShowEvent*)param1);
}

void q_printdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnShowEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_resize_event(void* self, void* param1) {
    QPrintDialog_ResizeEvent((QPrintDialog*)self, (QResizeEvent*)param1);
}

void q_printdialog_qbase_resize_event(void* self, void* param1) {
    QPrintDialog_QBaseResizeEvent((QPrintDialog*)self, (QResizeEvent*)param1);
}

void q_printdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnResizeEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_context_menu_event(void* self, void* param1) {
    QPrintDialog_ContextMenuEvent((QPrintDialog*)self, (QContextMenuEvent*)param1);
}

void q_printdialog_qbase_context_menu_event(void* self, void* param1) {
    QPrintDialog_QBaseContextMenuEvent((QPrintDialog*)self, (QContextMenuEvent*)param1);
}

void q_printdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnContextMenuEvent((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_event_filter(void* self, void* param1, void* param2) {
    return QPrintDialog_EventFilter((QPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_printdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPrintDialog_QBaseEventFilter((QPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_printdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPrintDialog_OnEventFilter((QPrintDialog*)self, (intptr_t)callback);
}

int32_t q_printdialog_dev_type(void* self) {
    return QPrintDialog_DevType((QPrintDialog*)self);
}

int32_t q_printdialog_qbase_dev_type(void* self) {
    return QPrintDialog_QBaseDevType((QPrintDialog*)self);
}

void q_printdialog_on_dev_type(void* self, int32_t (*callback)()) {
    QPrintDialog_OnDevType((QPrintDialog*)self, (intptr_t)callback);
}

int32_t q_printdialog_height_for_width(void* self, int param1) {
    return QPrintDialog_HeightForWidth((QPrintDialog*)self, param1);
}

int32_t q_printdialog_qbase_height_for_width(void* self, int param1) {
    return QPrintDialog_QBaseHeightForWidth((QPrintDialog*)self, param1);
}

void q_printdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QPrintDialog_OnHeightForWidth((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_has_height_for_width(void* self) {
    return QPrintDialog_HasHeightForWidth((QPrintDialog*)self);
}

bool q_printdialog_qbase_has_height_for_width(void* self) {
    return QPrintDialog_QBaseHasHeightForWidth((QPrintDialog*)self);
}

void q_printdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QPrintDialog_OnHasHeightForWidth((QPrintDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_printdialog_paint_engine(void* self) {
    return QPrintDialog_PaintEngine((QPrintDialog*)self);
}

QPaintEngine* q_printdialog_qbase_paint_engine(void* self) {
    return QPrintDialog_QBasePaintEngine((QPrintDialog*)self);
}

void q_printdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPrintDialog_OnPaintEngine((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_event(void* self, void* event) {
    return QPrintDialog_Event((QPrintDialog*)self, (QEvent*)event);
}

bool q_printdialog_qbase_event(void* self, void* event) {
    return QPrintDialog_QBaseEvent((QPrintDialog*)self, (QEvent*)event);
}

void q_printdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QPrintDialog_OnEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_mouse_press_event(void* self, void* event) {
    QPrintDialog_MousePressEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_qbase_mouse_press_event(void* self, void* event) {
    QPrintDialog_QBaseMousePressEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnMousePressEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_mouse_release_event(void* self, void* event) {
    QPrintDialog_MouseReleaseEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_qbase_mouse_release_event(void* self, void* event) {
    QPrintDialog_QBaseMouseReleaseEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnMouseReleaseEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_mouse_double_click_event(void* self, void* event) {
    QPrintDialog_MouseDoubleClickEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QPrintDialog_QBaseMouseDoubleClickEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnMouseDoubleClickEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_mouse_move_event(void* self, void* event) {
    QPrintDialog_MouseMoveEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_qbase_mouse_move_event(void* self, void* event) {
    QPrintDialog_QBaseMouseMoveEvent((QPrintDialog*)self, (QMouseEvent*)event);
}

void q_printdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnMouseMoveEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_wheel_event(void* self, void* event) {
    QPrintDialog_WheelEvent((QPrintDialog*)self, (QWheelEvent*)event);
}

void q_printdialog_qbase_wheel_event(void* self, void* event) {
    QPrintDialog_QBaseWheelEvent((QPrintDialog*)self, (QWheelEvent*)event);
}

void q_printdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnWheelEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_key_release_event(void* self, void* event) {
    QPrintDialog_KeyReleaseEvent((QPrintDialog*)self, (QKeyEvent*)event);
}

void q_printdialog_qbase_key_release_event(void* self, void* event) {
    QPrintDialog_QBaseKeyReleaseEvent((QPrintDialog*)self, (QKeyEvent*)event);
}

void q_printdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnKeyReleaseEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_focus_in_event(void* self, void* event) {
    QPrintDialog_FocusInEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

void q_printdialog_qbase_focus_in_event(void* self, void* event) {
    QPrintDialog_QBaseFocusInEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

void q_printdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnFocusInEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_focus_out_event(void* self, void* event) {
    QPrintDialog_FocusOutEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

void q_printdialog_qbase_focus_out_event(void* self, void* event) {
    QPrintDialog_QBaseFocusOutEvent((QPrintDialog*)self, (QFocusEvent*)event);
}

void q_printdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnFocusOutEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_enter_event(void* self, void* event) {
    QPrintDialog_EnterEvent((QPrintDialog*)self, (QEnterEvent*)event);
}

void q_printdialog_qbase_enter_event(void* self, void* event) {
    QPrintDialog_QBaseEnterEvent((QPrintDialog*)self, (QEnterEvent*)event);
}

void q_printdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnEnterEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_leave_event(void* self, void* event) {
    QPrintDialog_LeaveEvent((QPrintDialog*)self, (QEvent*)event);
}

void q_printdialog_qbase_leave_event(void* self, void* event) {
    QPrintDialog_QBaseLeaveEvent((QPrintDialog*)self, (QEvent*)event);
}

void q_printdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnLeaveEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_paint_event(void* self, void* event) {
    QPrintDialog_PaintEvent((QPrintDialog*)self, (QPaintEvent*)event);
}

void q_printdialog_qbase_paint_event(void* self, void* event) {
    QPrintDialog_QBasePaintEvent((QPrintDialog*)self, (QPaintEvent*)event);
}

void q_printdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnPaintEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_move_event(void* self, void* event) {
    QPrintDialog_MoveEvent((QPrintDialog*)self, (QMoveEvent*)event);
}

void q_printdialog_qbase_move_event(void* self, void* event) {
    QPrintDialog_QBaseMoveEvent((QPrintDialog*)self, (QMoveEvent*)event);
}

void q_printdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnMoveEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_tablet_event(void* self, void* event) {
    QPrintDialog_TabletEvent((QPrintDialog*)self, (QTabletEvent*)event);
}

void q_printdialog_qbase_tablet_event(void* self, void* event) {
    QPrintDialog_QBaseTabletEvent((QPrintDialog*)self, (QTabletEvent*)event);
}

void q_printdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnTabletEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_action_event(void* self, void* event) {
    QPrintDialog_ActionEvent((QPrintDialog*)self, (QActionEvent*)event);
}

void q_printdialog_qbase_action_event(void* self, void* event) {
    QPrintDialog_QBaseActionEvent((QPrintDialog*)self, (QActionEvent*)event);
}

void q_printdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnActionEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_drag_enter_event(void* self, void* event) {
    QPrintDialog_DragEnterEvent((QPrintDialog*)self, (QDragEnterEvent*)event);
}

void q_printdialog_qbase_drag_enter_event(void* self, void* event) {
    QPrintDialog_QBaseDragEnterEvent((QPrintDialog*)self, (QDragEnterEvent*)event);
}

void q_printdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnDragEnterEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_drag_move_event(void* self, void* event) {
    QPrintDialog_DragMoveEvent((QPrintDialog*)self, (QDragMoveEvent*)event);
}

void q_printdialog_qbase_drag_move_event(void* self, void* event) {
    QPrintDialog_QBaseDragMoveEvent((QPrintDialog*)self, (QDragMoveEvent*)event);
}

void q_printdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnDragMoveEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_drag_leave_event(void* self, void* event) {
    QPrintDialog_DragLeaveEvent((QPrintDialog*)self, (QDragLeaveEvent*)event);
}

void q_printdialog_qbase_drag_leave_event(void* self, void* event) {
    QPrintDialog_QBaseDragLeaveEvent((QPrintDialog*)self, (QDragLeaveEvent*)event);
}

void q_printdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnDragLeaveEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_drop_event(void* self, void* event) {
    QPrintDialog_DropEvent((QPrintDialog*)self, (QDropEvent*)event);
}

void q_printdialog_qbase_drop_event(void* self, void* event) {
    QPrintDialog_QBaseDropEvent((QPrintDialog*)self, (QDropEvent*)event);
}

void q_printdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnDropEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_hide_event(void* self, void* event) {
    QPrintDialog_HideEvent((QPrintDialog*)self, (QHideEvent*)event);
}

void q_printdialog_qbase_hide_event(void* self, void* event) {
    QPrintDialog_QBaseHideEvent((QPrintDialog*)self, (QHideEvent*)event);
}

void q_printdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnHideEvent((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintDialog_NativeEvent((QPrintDialog*)self, qstring(eventType), message, result);
}

bool q_printdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPrintDialog_QBaseNativeEvent((QPrintDialog*)self, qstring(eventType), message, result);
}

void q_printdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QPrintDialog_OnNativeEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_change_event(void* self, void* param1) {
    QPrintDialog_ChangeEvent((QPrintDialog*)self, (QEvent*)param1);
}

void q_printdialog_qbase_change_event(void* self, void* param1) {
    QPrintDialog_QBaseChangeEvent((QPrintDialog*)self, (QEvent*)param1);
}

void q_printdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnChangeEvent((QPrintDialog*)self, (intptr_t)callback);
}

int32_t q_printdialog_metric(void* self, int32_t param1) {
    return QPrintDialog_Metric((QPrintDialog*)self, param1);
}

int32_t q_printdialog_qbase_metric(void* self, int32_t param1) {
    return QPrintDialog_QBaseMetric((QPrintDialog*)self, param1);
}

void q_printdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPrintDialog_OnMetric((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_init_painter(void* self, void* painter) {
    QPrintDialog_InitPainter((QPrintDialog*)self, (QPainter*)painter);
}

void q_printdialog_qbase_init_painter(void* self, void* painter) {
    QPrintDialog_QBaseInitPainter((QPrintDialog*)self, (QPainter*)painter);
}

void q_printdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnInitPainter((QPrintDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_printdialog_redirected(void* self, void* offset) {
    return QPrintDialog_Redirected((QPrintDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_printdialog_qbase_redirected(void* self, void* offset) {
    return QPrintDialog_QBaseRedirected((QPrintDialog*)self, (QPoint*)offset);
}

void q_printdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPrintDialog_OnRedirected((QPrintDialog*)self, (intptr_t)callback);
}

QPainter* q_printdialog_shared_painter(void* self) {
    return QPrintDialog_SharedPainter((QPrintDialog*)self);
}

QPainter* q_printdialog_qbase_shared_painter(void* self) {
    return QPrintDialog_QBaseSharedPainter((QPrintDialog*)self);
}

void q_printdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPrintDialog_OnSharedPainter((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_input_method_event(void* self, void* param1) {
    QPrintDialog_InputMethodEvent((QPrintDialog*)self, (QInputMethodEvent*)param1);
}

void q_printdialog_qbase_input_method_event(void* self, void* param1) {
    QPrintDialog_QBaseInputMethodEvent((QPrintDialog*)self, (QInputMethodEvent*)param1);
}

void q_printdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnInputMethodEvent((QPrintDialog*)self, (intptr_t)callback);
}

QVariant* q_printdialog_input_method_query(void* self, int64_t param1) {
    return QPrintDialog_InputMethodQuery((QPrintDialog*)self, param1);
}

QVariant* q_printdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QPrintDialog_QBaseInputMethodQuery((QPrintDialog*)self, param1);
}

void q_printdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QPrintDialog_OnInputMethodQuery((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_focus_next_prev_child(void* self, bool next) {
    return QPrintDialog_FocusNextPrevChild((QPrintDialog*)self, next);
}

bool q_printdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QPrintDialog_QBaseFocusNextPrevChild((QPrintDialog*)self, next);
}

void q_printdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QPrintDialog_OnFocusNextPrevChild((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_timer_event(void* self, void* event) {
    QPrintDialog_TimerEvent((QPrintDialog*)self, (QTimerEvent*)event);
}

void q_printdialog_qbase_timer_event(void* self, void* event) {
    QPrintDialog_QBaseTimerEvent((QPrintDialog*)self, (QTimerEvent*)event);
}

void q_printdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnTimerEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_child_event(void* self, void* event) {
    QPrintDialog_ChildEvent((QPrintDialog*)self, (QChildEvent*)event);
}

void q_printdialog_qbase_child_event(void* self, void* event) {
    QPrintDialog_QBaseChildEvent((QPrintDialog*)self, (QChildEvent*)event);
}

void q_printdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnChildEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_custom_event(void* self, void* event) {
    QPrintDialog_CustomEvent((QPrintDialog*)self, (QEvent*)event);
}

void q_printdialog_qbase_custom_event(void* self, void* event) {
    QPrintDialog_QBaseCustomEvent((QPrintDialog*)self, (QEvent*)event);
}

void q_printdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnCustomEvent((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_connect_notify(void* self, void* signal) {
    QPrintDialog_ConnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

void q_printdialog_qbase_connect_notify(void* self, void* signal) {
    QPrintDialog_QBaseConnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

void q_printdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnConnectNotify((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_disconnect_notify(void* self, void* signal) {
    QPrintDialog_DisconnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

void q_printdialog_qbase_disconnect_notify(void* self, void* signal) {
    QPrintDialog_QBaseDisconnectNotify((QPrintDialog*)self, (QMetaMethod*)signal);
}

void q_printdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnDisconnectNotify((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_adjust_position(void* self, void* param1) {
    QPrintDialog_AdjustPosition((QPrintDialog*)self, (QWidget*)param1);
}

void q_printdialog_qbase_adjust_position(void* self, void* param1) {
    QPrintDialog_QBaseAdjustPosition((QPrintDialog*)self, (QWidget*)param1);
}

void q_printdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QPrintDialog_OnAdjustPosition((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_update_micro_focus(void* self) {
    QPrintDialog_UpdateMicroFocus((QPrintDialog*)self);
}

void q_printdialog_qbase_update_micro_focus(void* self) {
    QPrintDialog_QBaseUpdateMicroFocus((QPrintDialog*)self);
}

void q_printdialog_on_update_micro_focus(void* self, void (*callback)()) {
    QPrintDialog_OnUpdateMicroFocus((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_create(void* self) {
    QPrintDialog_Create((QPrintDialog*)self);
}

void q_printdialog_qbase_create(void* self) {
    QPrintDialog_QBaseCreate((QPrintDialog*)self);
}

void q_printdialog_on_create(void* self, void (*callback)()) {
    QPrintDialog_OnCreate((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_destroy(void* self) {
    QPrintDialog_Destroy((QPrintDialog*)self);
}

void q_printdialog_qbase_destroy(void* self) {
    QPrintDialog_QBaseDestroy((QPrintDialog*)self);
}

void q_printdialog_on_destroy(void* self, void (*callback)()) {
    QPrintDialog_OnDestroy((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_focus_next_child(void* self) {
    return QPrintDialog_FocusNextChild((QPrintDialog*)self);
}

bool q_printdialog_qbase_focus_next_child(void* self) {
    return QPrintDialog_QBaseFocusNextChild((QPrintDialog*)self);
}

void q_printdialog_on_focus_next_child(void* self, bool (*callback)()) {
    QPrintDialog_OnFocusNextChild((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_focus_previous_child(void* self) {
    return QPrintDialog_FocusPreviousChild((QPrintDialog*)self);
}

bool q_printdialog_qbase_focus_previous_child(void* self) {
    return QPrintDialog_QBaseFocusPreviousChild((QPrintDialog*)self);
}

void q_printdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QPrintDialog_OnFocusPreviousChild((QPrintDialog*)self, (intptr_t)callback);
}

QObject* q_printdialog_sender(void* self) {
    return QPrintDialog_Sender((QPrintDialog*)self);
}

QObject* q_printdialog_qbase_sender(void* self) {
    return QPrintDialog_QBaseSender((QPrintDialog*)self);
}

void q_printdialog_on_sender(void* self, QObject* (*callback)()) {
    QPrintDialog_OnSender((QPrintDialog*)self, (intptr_t)callback);
}

int32_t q_printdialog_sender_signal_index(void* self) {
    return QPrintDialog_SenderSignalIndex((QPrintDialog*)self);
}

int32_t q_printdialog_qbase_sender_signal_index(void* self) {
    return QPrintDialog_QBaseSenderSignalIndex((QPrintDialog*)self);
}

void q_printdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPrintDialog_OnSenderSignalIndex((QPrintDialog*)self, (intptr_t)callback);
}

int32_t q_printdialog_receivers(void* self, const char* signal) {
    return QPrintDialog_Receivers((QPrintDialog*)self, signal);
}

int32_t q_printdialog_qbase_receivers(void* self, const char* signal) {
    return QPrintDialog_QBaseReceivers((QPrintDialog*)self, signal);
}

void q_printdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPrintDialog_OnReceivers((QPrintDialog*)self, (intptr_t)callback);
}

bool q_printdialog_is_signal_connected(void* self, void* signal) {
    return QPrintDialog_IsSignalConnected((QPrintDialog*)self, (QMetaMethod*)signal);
}

bool q_printdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QPrintDialog_QBaseIsSignalConnected((QPrintDialog*)self, (QMetaMethod*)signal);
}

void q_printdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPrintDialog_OnIsSignalConnected((QPrintDialog*)self, (intptr_t)callback);
}

double q_printdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPrintDialog_GetDecodedMetricF((QPrintDialog*)self, metricA, metricB);
}

double q_printdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPrintDialog_QBaseGetDecodedMetricF((QPrintDialog*)self, metricA, metricB);
}

void q_printdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPrintDialog_OnGetDecodedMetricF((QPrintDialog*)self, (intptr_t)callback);
}

void q_printdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_printdialog_delete(void* self) {
    QPrintDialog_Delete((QPrintDialog*)(self));
}
