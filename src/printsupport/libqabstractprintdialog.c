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
#include "libqabstractprintdialog.hpp"
#include "libqabstractprintdialog.h"

QAbstractPrintDialog* q_abstractprintdialog_new(void* printer) {
    return QAbstractPrintDialog_new((QPrinter*)printer);
}

QAbstractPrintDialog* q_abstractprintdialog_new2(void* printer, void* parent) {
    return QAbstractPrintDialog_new2((QPrinter*)printer, (QWidget*)parent);
}

const QMetaObject* q_abstractprintdialog_meta_object(void* self) {
    return QAbstractPrintDialog_MetaObject((QAbstractPrintDialog*)self);
}

void* q_abstractprintdialog_metacast(void* self, const char* param1) {
    return QAbstractPrintDialog_Metacast((QAbstractPrintDialog*)self, param1);
}

int32_t q_abstractprintdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractPrintDialog_Metacall((QAbstractPrintDialog*)self, param1, param2, param3);
}

void q_abstractprintdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAbstractPrintDialog_OnMetacall((QAbstractPrintDialog*)self, (intptr_t)callback);
}

int32_t q_abstractprintdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractPrintDialog_QBaseMetacall((QAbstractPrintDialog*)self, param1, param2, param3);
}

const char* q_abstractprintdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_option_tabs(void* self, libqt_list tabs) {
    QAbstractPrintDialog_SetOptionTabs((QAbstractPrintDialog*)self, tabs);
}

void q_abstractprintdialog_set_print_range(void* self, int32_t range) {
    QAbstractPrintDialog_SetPrintRange((QAbstractPrintDialog*)self, range);
}

int32_t q_abstractprintdialog_print_range(void* self) {
    return QAbstractPrintDialog_PrintRange((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_set_min_max(void* self, int min, int max) {
    QAbstractPrintDialog_SetMinMax((QAbstractPrintDialog*)self, min, max);
}

int32_t q_abstractprintdialog_min_page(void* self) {
    return QAbstractPrintDialog_MinPage((QAbstractPrintDialog*)self);
}

int32_t q_abstractprintdialog_max_page(void* self) {
    return QAbstractPrintDialog_MaxPage((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_set_from_to(void* self, int fromPage, int toPage) {
    QAbstractPrintDialog_SetFromTo((QAbstractPrintDialog*)self, fromPage, toPage);
}

int32_t q_abstractprintdialog_from_page(void* self) {
    return QAbstractPrintDialog_FromPage((QAbstractPrintDialog*)self);
}

int32_t q_abstractprintdialog_to_page(void* self) {
    return QAbstractPrintDialog_ToPage((QAbstractPrintDialog*)self);
}

QPrinter* q_abstractprintdialog_printer(void* self) {
    return QAbstractPrintDialog_Printer((QAbstractPrintDialog*)self);
}

const char* q_abstractprintdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractprintdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_abstractprintdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_abstractprintdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_abstractprintdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_abstractprintdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_abstractprintdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_abstractprintdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_abstractprintdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_abstractprintdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_abstractprintdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_abstractprintdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_abstractprintdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_abstractprintdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_abstractprintdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_abstractprintdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_abstractprintdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_abstractprintdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_abstractprintdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_abstractprintdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_abstractprintdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_abstractprintdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_abstractprintdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_abstractprintdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_abstractprintdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_abstractprintdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_abstractprintdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_abstractprintdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_abstractprintdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_abstractprintdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_abstractprintdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_abstractprintdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_abstractprintdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_abstractprintdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_abstractprintdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_abstractprintdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_abstractprintdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_abstractprintdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_abstractprintdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_abstractprintdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_abstractprintdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_abstractprintdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_abstractprintdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_abstractprintdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_abstractprintdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_abstractprintdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_abstractprintdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_abstractprintdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_abstractprintdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_abstractprintdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_abstractprintdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_abstractprintdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_abstractprintdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_abstractprintdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_abstractprintdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_abstractprintdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_abstractprintdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_abstractprintdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_abstractprintdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_abstractprintdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_abstractprintdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_abstractprintdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_abstractprintdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_abstractprintdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_abstractprintdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractprintdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractprintdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractprintdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractprintdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractprintdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractprintdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractprintdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractprintdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractprintdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_abstractprintdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractprintdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_abstractprintdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_abstractprintdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_abstractprintdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_abstractprintdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_abstractprintdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_abstractprintdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_abstractprintdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_abstractprintdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_abstractprintdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_abstractprintdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_abstractprintdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_abstractprintdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_abstractprintdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_abstractprintdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_abstractprintdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_abstractprintdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_abstractprintdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_abstractprintdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_abstractprintdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_abstractprintdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_abstractprintdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_abstractprintdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_abstractprintdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_abstractprintdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_abstractprintdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_abstractprintdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_abstractprintdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_abstractprintdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_abstractprintdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_abstractprintdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_abstractprintdialog_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_abstractprintdialog_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_abstractprintdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_abstractprintdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_abstractprintdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractprintdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_abstractprintdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_abstractprintdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_abstractprintdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_abstractprintdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_abstractprintdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_abstractprintdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_abstractprintdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_abstractprintdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_abstractprintdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_abstractprintdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_abstractprintdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_abstractprintdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_abstractprintdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractprintdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_abstractprintdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_abstractprintdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_abstractprintdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_abstractprintdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_abstractprintdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_abstractprintdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_abstractprintdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_abstractprintdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_abstractprintdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_abstractprintdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_abstractprintdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_abstractprintdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_abstractprintdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_abstractprintdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_abstractprintdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_abstractprintdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_abstractprintdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_abstractprintdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_abstractprintdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_abstractprintdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_abstractprintdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_abstractprintdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_abstractprintdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_abstractprintdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_abstractprintdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_abstractprintdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_abstractprintdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_abstractprintdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_abstractprintdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_abstractprintdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_abstractprintdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_abstractprintdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_abstractprintdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_abstractprintdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_abstractprintdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_abstractprintdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_abstractprintdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_abstractprintdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_abstractprintdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_abstractprintdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_abstractprintdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_abstractprintdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_abstractprintdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_abstractprintdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_abstractprintdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_abstractprintdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_abstractprintdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_abstractprintdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_abstractprintdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_abstractprintdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_abstractprintdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_abstractprintdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_abstractprintdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_abstractprintdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_abstractprintdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_abstractprintdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_abstractprintdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_abstractprintdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_abstractprintdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_abstractprintdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_abstractprintdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_abstractprintdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractprintdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_abstractprintdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_abstractprintdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_abstractprintdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_abstractprintdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_abstractprintdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_abstractprintdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_abstractprintdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_abstractprintdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_abstractprintdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_abstractprintdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_abstractprintdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_abstractprintdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_abstractprintdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_abstractprintdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_abstractprintdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_abstractprintdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_abstractprintdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_abstractprintdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_abstractprintdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_abstractprintdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_abstractprintdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_abstractprintdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_abstractprintdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_abstractprintdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_abstractprintdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_abstractprintdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_abstractprintdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_abstractprintdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_abstractprintdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_abstractprintdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_abstractprintdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_abstractprintdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_abstractprintdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_abstractprintdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_abstractprintdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_abstractprintdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_abstractprintdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_abstractprintdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_abstractprintdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_abstractprintdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_abstractprintdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_abstractprintdialog_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_abstractprintdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_abstractprintdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_abstractprintdialog_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_abstractprintdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_abstractprintdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_abstractprintdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_abstractprintdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_abstractprintdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_abstractprintdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_abstractprintdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_abstractprintdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_abstractprintdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_abstractprintdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_abstractprintdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_abstractprintdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_abstractprintdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_abstractprintdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_abstractprintdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_abstractprintdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_abstractprintdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_abstractprintdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_abstractprintdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_abstractprintdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_abstractprintdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_abstractprintdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_abstractprintdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_abstractprintdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_abstractprintdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_abstractprintdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_abstractprintdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_abstractprintdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractprintdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_abstractprintdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_abstractprintdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractprintdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_abstractprintdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_abstractprintdialog_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_abstractprintdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_abstractprintdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_abstractprintdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_abstractprintdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_abstractprintdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_abstractprintdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_abstractprintdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_abstractprintdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractprintdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractprintdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractprintdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractprintdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractprintdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractprintdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractprintdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractprintdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractprintdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractprintdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractprintdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractprintdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractprintdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractprintdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractprintdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractprintdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractprintdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractprintdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractprintdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractprintdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractprintdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractprintdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractprintdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstractprintdialog_dynamic_property_names");
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

QBindingStorage* q_abstractprintdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractprintdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractprintdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractprintdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstractprintdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractprintdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractprintdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractprintdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractprintdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractprintdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstractprintdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_abstractprintdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractprintdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_abstractprintdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_abstractprintdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_abstractprintdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_abstractprintdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_abstractprintdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_abstractprintdialog_set_visible(void* self, bool visible) {
    QAbstractPrintDialog_SetVisible((QAbstractPrintDialog*)self, visible);
}

void q_abstractprintdialog_qbase_set_visible(void* self, bool visible) {
    QAbstractPrintDialog_QBaseSetVisible((QAbstractPrintDialog*)self, visible);
}

void q_abstractprintdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QAbstractPrintDialog_OnSetVisible((QAbstractPrintDialog*)self, (intptr_t)callback);
}

QSize* q_abstractprintdialog_size_hint(void* self) {
    return QAbstractPrintDialog_SizeHint((QAbstractPrintDialog*)self);
}

QSize* q_abstractprintdialog_qbase_size_hint(void* self) {
    return QAbstractPrintDialog_QBaseSizeHint((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_size_hint(void* self, QSize* (*callback)()) {
    QAbstractPrintDialog_OnSizeHint((QAbstractPrintDialog*)self, (intptr_t)callback);
}

QSize* q_abstractprintdialog_minimum_size_hint(void* self) {
    return QAbstractPrintDialog_MinimumSizeHint((QAbstractPrintDialog*)self);
}

QSize* q_abstractprintdialog_qbase_minimum_size_hint(void* self) {
    return QAbstractPrintDialog_QBaseMinimumSizeHint((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QAbstractPrintDialog_OnMinimumSizeHint((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_open(void* self) {
    QAbstractPrintDialog_Open((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_qbase_open(void* self) {
    QAbstractPrintDialog_QBaseOpen((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_open(void* self, void (*callback)()) {
    QAbstractPrintDialog_OnOpen((QAbstractPrintDialog*)self, (intptr_t)callback);
}

int32_t q_abstractprintdialog_exec(void* self) {
    return QAbstractPrintDialog_Exec((QAbstractPrintDialog*)self);
}

int32_t q_abstractprintdialog_qbase_exec(void* self) {
    return QAbstractPrintDialog_QBaseExec((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_exec(void* self, int32_t (*callback)()) {
    QAbstractPrintDialog_OnExec((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_done(void* self, int param1) {
    QAbstractPrintDialog_Done((QAbstractPrintDialog*)self, param1);
}

void q_abstractprintdialog_qbase_done(void* self, int param1) {
    QAbstractPrintDialog_QBaseDone((QAbstractPrintDialog*)self, param1);
}

void q_abstractprintdialog_on_done(void* self, void (*callback)(void*, int)) {
    QAbstractPrintDialog_OnDone((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_accept(void* self) {
    QAbstractPrintDialog_Accept((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_qbase_accept(void* self) {
    QAbstractPrintDialog_QBaseAccept((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_accept(void* self, void (*callback)()) {
    QAbstractPrintDialog_OnAccept((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_reject(void* self) {
    QAbstractPrintDialog_Reject((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_qbase_reject(void* self) {
    QAbstractPrintDialog_QBaseReject((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_reject(void* self, void (*callback)()) {
    QAbstractPrintDialog_OnReject((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_key_press_event(void* self, void* param1) {
    QAbstractPrintDialog_KeyPressEvent((QAbstractPrintDialog*)self, (QKeyEvent*)param1);
}

void q_abstractprintdialog_qbase_key_press_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseKeyPressEvent((QAbstractPrintDialog*)self, (QKeyEvent*)param1);
}

void q_abstractprintdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnKeyPressEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_close_event(void* self, void* param1) {
    QAbstractPrintDialog_CloseEvent((QAbstractPrintDialog*)self, (QCloseEvent*)param1);
}

void q_abstractprintdialog_qbase_close_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseCloseEvent((QAbstractPrintDialog*)self, (QCloseEvent*)param1);
}

void q_abstractprintdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnCloseEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_show_event(void* self, void* param1) {
    QAbstractPrintDialog_ShowEvent((QAbstractPrintDialog*)self, (QShowEvent*)param1);
}

void q_abstractprintdialog_qbase_show_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseShowEvent((QAbstractPrintDialog*)self, (QShowEvent*)param1);
}

void q_abstractprintdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnShowEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_resize_event(void* self, void* param1) {
    QAbstractPrintDialog_ResizeEvent((QAbstractPrintDialog*)self, (QResizeEvent*)param1);
}

void q_abstractprintdialog_qbase_resize_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseResizeEvent((QAbstractPrintDialog*)self, (QResizeEvent*)param1);
}

void q_abstractprintdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnResizeEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_context_menu_event(void* self, void* param1) {
    QAbstractPrintDialog_ContextMenuEvent((QAbstractPrintDialog*)self, (QContextMenuEvent*)param1);
}

void q_abstractprintdialog_qbase_context_menu_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseContextMenuEvent((QAbstractPrintDialog*)self, (QContextMenuEvent*)param1);
}

void q_abstractprintdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnContextMenuEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_event_filter(void* self, void* param1, void* param2) {
    return QAbstractPrintDialog_EventFilter((QAbstractPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_abstractprintdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QAbstractPrintDialog_QBaseEventFilter((QAbstractPrintDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_abstractprintdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractPrintDialog_OnEventFilter((QAbstractPrintDialog*)self, (intptr_t)callback);
}

int32_t q_abstractprintdialog_dev_type(void* self) {
    return QAbstractPrintDialog_DevType((QAbstractPrintDialog*)self);
}

int32_t q_abstractprintdialog_qbase_dev_type(void* self) {
    return QAbstractPrintDialog_QBaseDevType((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_dev_type(void* self, int32_t (*callback)()) {
    QAbstractPrintDialog_OnDevType((QAbstractPrintDialog*)self, (intptr_t)callback);
}

int32_t q_abstractprintdialog_height_for_width(void* self, int param1) {
    return QAbstractPrintDialog_HeightForWidth((QAbstractPrintDialog*)self, param1);
}

int32_t q_abstractprintdialog_qbase_height_for_width(void* self, int param1) {
    return QAbstractPrintDialog_QBaseHeightForWidth((QAbstractPrintDialog*)self, param1);
}

void q_abstractprintdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QAbstractPrintDialog_OnHeightForWidth((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_has_height_for_width(void* self) {
    return QAbstractPrintDialog_HasHeightForWidth((QAbstractPrintDialog*)self);
}

bool q_abstractprintdialog_qbase_has_height_for_width(void* self) {
    return QAbstractPrintDialog_QBaseHasHeightForWidth((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QAbstractPrintDialog_OnHasHeightForWidth((QAbstractPrintDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_abstractprintdialog_paint_engine(void* self) {
    return QAbstractPrintDialog_PaintEngine((QAbstractPrintDialog*)self);
}

QPaintEngine* q_abstractprintdialog_qbase_paint_engine(void* self) {
    return QAbstractPrintDialog_QBasePaintEngine((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QAbstractPrintDialog_OnPaintEngine((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_event(void* self, void* event) {
    return QAbstractPrintDialog_Event((QAbstractPrintDialog*)self, (QEvent*)event);
}

bool q_abstractprintdialog_qbase_event(void* self, void* event) {
    return QAbstractPrintDialog_QBaseEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

void q_abstractprintdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_mouse_press_event(void* self, void* event) {
    QAbstractPrintDialog_MousePressEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_qbase_mouse_press_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMousePressEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnMousePressEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_mouse_release_event(void* self, void* event) {
    QAbstractPrintDialog_MouseReleaseEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_qbase_mouse_release_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMouseReleaseEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnMouseReleaseEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_mouse_double_click_event(void* self, void* event) {
    QAbstractPrintDialog_MouseDoubleClickEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMouseDoubleClickEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnMouseDoubleClickEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_mouse_move_event(void* self, void* event) {
    QAbstractPrintDialog_MouseMoveEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_qbase_mouse_move_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMouseMoveEvent((QAbstractPrintDialog*)self, (QMouseEvent*)event);
}

void q_abstractprintdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnMouseMoveEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_wheel_event(void* self, void* event) {
    QAbstractPrintDialog_WheelEvent((QAbstractPrintDialog*)self, (QWheelEvent*)event);
}

void q_abstractprintdialog_qbase_wheel_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseWheelEvent((QAbstractPrintDialog*)self, (QWheelEvent*)event);
}

void q_abstractprintdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnWheelEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_key_release_event(void* self, void* event) {
    QAbstractPrintDialog_KeyReleaseEvent((QAbstractPrintDialog*)self, (QKeyEvent*)event);
}

void q_abstractprintdialog_qbase_key_release_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseKeyReleaseEvent((QAbstractPrintDialog*)self, (QKeyEvent*)event);
}

void q_abstractprintdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnKeyReleaseEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_focus_in_event(void* self, void* event) {
    QAbstractPrintDialog_FocusInEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

void q_abstractprintdialog_qbase_focus_in_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseFocusInEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

void q_abstractprintdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnFocusInEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_focus_out_event(void* self, void* event) {
    QAbstractPrintDialog_FocusOutEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

void q_abstractprintdialog_qbase_focus_out_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseFocusOutEvent((QAbstractPrintDialog*)self, (QFocusEvent*)event);
}

void q_abstractprintdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnFocusOutEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_enter_event(void* self, void* event) {
    QAbstractPrintDialog_EnterEvent((QAbstractPrintDialog*)self, (QEnterEvent*)event);
}

void q_abstractprintdialog_qbase_enter_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseEnterEvent((QAbstractPrintDialog*)self, (QEnterEvent*)event);
}

void q_abstractprintdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnEnterEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_leave_event(void* self, void* event) {
    QAbstractPrintDialog_LeaveEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

void q_abstractprintdialog_qbase_leave_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseLeaveEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

void q_abstractprintdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnLeaveEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_paint_event(void* self, void* event) {
    QAbstractPrintDialog_PaintEvent((QAbstractPrintDialog*)self, (QPaintEvent*)event);
}

void q_abstractprintdialog_qbase_paint_event(void* self, void* event) {
    QAbstractPrintDialog_QBasePaintEvent((QAbstractPrintDialog*)self, (QPaintEvent*)event);
}

void q_abstractprintdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnPaintEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_move_event(void* self, void* event) {
    QAbstractPrintDialog_MoveEvent((QAbstractPrintDialog*)self, (QMoveEvent*)event);
}

void q_abstractprintdialog_qbase_move_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseMoveEvent((QAbstractPrintDialog*)self, (QMoveEvent*)event);
}

void q_abstractprintdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnMoveEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_tablet_event(void* self, void* event) {
    QAbstractPrintDialog_TabletEvent((QAbstractPrintDialog*)self, (QTabletEvent*)event);
}

void q_abstractprintdialog_qbase_tablet_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseTabletEvent((QAbstractPrintDialog*)self, (QTabletEvent*)event);
}

void q_abstractprintdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnTabletEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_action_event(void* self, void* event) {
    QAbstractPrintDialog_ActionEvent((QAbstractPrintDialog*)self, (QActionEvent*)event);
}

void q_abstractprintdialog_qbase_action_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseActionEvent((QAbstractPrintDialog*)self, (QActionEvent*)event);
}

void q_abstractprintdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnActionEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_drag_enter_event(void* self, void* event) {
    QAbstractPrintDialog_DragEnterEvent((QAbstractPrintDialog*)self, (QDragEnterEvent*)event);
}

void q_abstractprintdialog_qbase_drag_enter_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDragEnterEvent((QAbstractPrintDialog*)self, (QDragEnterEvent*)event);
}

void q_abstractprintdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnDragEnterEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_drag_move_event(void* self, void* event) {
    QAbstractPrintDialog_DragMoveEvent((QAbstractPrintDialog*)self, (QDragMoveEvent*)event);
}

void q_abstractprintdialog_qbase_drag_move_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDragMoveEvent((QAbstractPrintDialog*)self, (QDragMoveEvent*)event);
}

void q_abstractprintdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnDragMoveEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_drag_leave_event(void* self, void* event) {
    QAbstractPrintDialog_DragLeaveEvent((QAbstractPrintDialog*)self, (QDragLeaveEvent*)event);
}

void q_abstractprintdialog_qbase_drag_leave_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDragLeaveEvent((QAbstractPrintDialog*)self, (QDragLeaveEvent*)event);
}

void q_abstractprintdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnDragLeaveEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_drop_event(void* self, void* event) {
    QAbstractPrintDialog_DropEvent((QAbstractPrintDialog*)self, (QDropEvent*)event);
}

void q_abstractprintdialog_qbase_drop_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseDropEvent((QAbstractPrintDialog*)self, (QDropEvent*)event);
}

void q_abstractprintdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnDropEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_hide_event(void* self, void* event) {
    QAbstractPrintDialog_HideEvent((QAbstractPrintDialog*)self, (QHideEvent*)event);
}

void q_abstractprintdialog_qbase_hide_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseHideEvent((QAbstractPrintDialog*)self, (QHideEvent*)event);
}

void q_abstractprintdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnHideEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractPrintDialog_NativeEvent((QAbstractPrintDialog*)self, qstring(eventType), message, result);
}

bool q_abstractprintdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractPrintDialog_QBaseNativeEvent((QAbstractPrintDialog*)self, qstring(eventType), message, result);
}

void q_abstractprintdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QAbstractPrintDialog_OnNativeEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_change_event(void* self, void* param1) {
    QAbstractPrintDialog_ChangeEvent((QAbstractPrintDialog*)self, (QEvent*)param1);
}

void q_abstractprintdialog_qbase_change_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseChangeEvent((QAbstractPrintDialog*)self, (QEvent*)param1);
}

void q_abstractprintdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnChangeEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

int32_t q_abstractprintdialog_metric(void* self, int32_t param1) {
    return QAbstractPrintDialog_Metric((QAbstractPrintDialog*)self, param1);
}

int32_t q_abstractprintdialog_qbase_metric(void* self, int32_t param1) {
    return QAbstractPrintDialog_QBaseMetric((QAbstractPrintDialog*)self, param1);
}

void q_abstractprintdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QAbstractPrintDialog_OnMetric((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_init_painter(void* self, void* painter) {
    QAbstractPrintDialog_InitPainter((QAbstractPrintDialog*)self, (QPainter*)painter);
}

void q_abstractprintdialog_qbase_init_painter(void* self, void* painter) {
    QAbstractPrintDialog_QBaseInitPainter((QAbstractPrintDialog*)self, (QPainter*)painter);
}

void q_abstractprintdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnInitPainter((QAbstractPrintDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_abstractprintdialog_redirected(void* self, void* offset) {
    return QAbstractPrintDialog_Redirected((QAbstractPrintDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_abstractprintdialog_qbase_redirected(void* self, void* offset) {
    return QAbstractPrintDialog_QBaseRedirected((QAbstractPrintDialog*)self, (QPoint*)offset);
}

void q_abstractprintdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnRedirected((QAbstractPrintDialog*)self, (intptr_t)callback);
}

QPainter* q_abstractprintdialog_shared_painter(void* self) {
    return QAbstractPrintDialog_SharedPainter((QAbstractPrintDialog*)self);
}

QPainter* q_abstractprintdialog_qbase_shared_painter(void* self) {
    return QAbstractPrintDialog_QBaseSharedPainter((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QAbstractPrintDialog_OnSharedPainter((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_input_method_event(void* self, void* param1) {
    QAbstractPrintDialog_InputMethodEvent((QAbstractPrintDialog*)self, (QInputMethodEvent*)param1);
}

void q_abstractprintdialog_qbase_input_method_event(void* self, void* param1) {
    QAbstractPrintDialog_QBaseInputMethodEvent((QAbstractPrintDialog*)self, (QInputMethodEvent*)param1);
}

void q_abstractprintdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnInputMethodEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

QVariant* q_abstractprintdialog_input_method_query(void* self, int64_t param1) {
    return QAbstractPrintDialog_InputMethodQuery((QAbstractPrintDialog*)self, param1);
}

QVariant* q_abstractprintdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractPrintDialog_QBaseInputMethodQuery((QAbstractPrintDialog*)self, param1);
}

void q_abstractprintdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QAbstractPrintDialog_OnInputMethodQuery((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_focus_next_prev_child(void* self, bool next) {
    return QAbstractPrintDialog_FocusNextPrevChild((QAbstractPrintDialog*)self, next);
}

bool q_abstractprintdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractPrintDialog_QBaseFocusNextPrevChild((QAbstractPrintDialog*)self, next);
}

void q_abstractprintdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QAbstractPrintDialog_OnFocusNextPrevChild((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_timer_event(void* self, void* event) {
    QAbstractPrintDialog_TimerEvent((QAbstractPrintDialog*)self, (QTimerEvent*)event);
}

void q_abstractprintdialog_qbase_timer_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseTimerEvent((QAbstractPrintDialog*)self, (QTimerEvent*)event);
}

void q_abstractprintdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnTimerEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_child_event(void* self, void* event) {
    QAbstractPrintDialog_ChildEvent((QAbstractPrintDialog*)self, (QChildEvent*)event);
}

void q_abstractprintdialog_qbase_child_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseChildEvent((QAbstractPrintDialog*)self, (QChildEvent*)event);
}

void q_abstractprintdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnChildEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_custom_event(void* self, void* event) {
    QAbstractPrintDialog_CustomEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

void q_abstractprintdialog_qbase_custom_event(void* self, void* event) {
    QAbstractPrintDialog_QBaseCustomEvent((QAbstractPrintDialog*)self, (QEvent*)event);
}

void q_abstractprintdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnCustomEvent((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_connect_notify(void* self, void* signal) {
    QAbstractPrintDialog_ConnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

void q_abstractprintdialog_qbase_connect_notify(void* self, void* signal) {
    QAbstractPrintDialog_QBaseConnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

void q_abstractprintdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnConnectNotify((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_disconnect_notify(void* self, void* signal) {
    QAbstractPrintDialog_DisconnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

void q_abstractprintdialog_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractPrintDialog_QBaseDisconnectNotify((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

void q_abstractprintdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnDisconnectNotify((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_adjust_position(void* self, void* param1) {
    QAbstractPrintDialog_AdjustPosition((QAbstractPrintDialog*)self, (QWidget*)param1);
}

void q_abstractprintdialog_qbase_adjust_position(void* self, void* param1) {
    QAbstractPrintDialog_QBaseAdjustPosition((QAbstractPrintDialog*)self, (QWidget*)param1);
}

void q_abstractprintdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnAdjustPosition((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_update_micro_focus(void* self) {
    QAbstractPrintDialog_UpdateMicroFocus((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_qbase_update_micro_focus(void* self) {
    QAbstractPrintDialog_QBaseUpdateMicroFocus((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_update_micro_focus(void* self, void (*callback)()) {
    QAbstractPrintDialog_OnUpdateMicroFocus((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_create(void* self) {
    QAbstractPrintDialog_Create((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_qbase_create(void* self) {
    QAbstractPrintDialog_QBaseCreate((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_create(void* self, void (*callback)()) {
    QAbstractPrintDialog_OnCreate((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_destroy(void* self) {
    QAbstractPrintDialog_Destroy((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_qbase_destroy(void* self) {
    QAbstractPrintDialog_QBaseDestroy((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_destroy(void* self, void (*callback)()) {
    QAbstractPrintDialog_OnDestroy((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_focus_next_child(void* self) {
    return QAbstractPrintDialog_FocusNextChild((QAbstractPrintDialog*)self);
}

bool q_abstractprintdialog_qbase_focus_next_child(void* self) {
    return QAbstractPrintDialog_QBaseFocusNextChild((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_focus_next_child(void* self, bool (*callback)()) {
    QAbstractPrintDialog_OnFocusNextChild((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_focus_previous_child(void* self) {
    return QAbstractPrintDialog_FocusPreviousChild((QAbstractPrintDialog*)self);
}

bool q_abstractprintdialog_qbase_focus_previous_child(void* self) {
    return QAbstractPrintDialog_QBaseFocusPreviousChild((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QAbstractPrintDialog_OnFocusPreviousChild((QAbstractPrintDialog*)self, (intptr_t)callback);
}

QObject* q_abstractprintdialog_sender(void* self) {
    return QAbstractPrintDialog_Sender((QAbstractPrintDialog*)self);
}

QObject* q_abstractprintdialog_qbase_sender(void* self) {
    return QAbstractPrintDialog_QBaseSender((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_sender(void* self, QObject* (*callback)()) {
    QAbstractPrintDialog_OnSender((QAbstractPrintDialog*)self, (intptr_t)callback);
}

int32_t q_abstractprintdialog_sender_signal_index(void* self) {
    return QAbstractPrintDialog_SenderSignalIndex((QAbstractPrintDialog*)self);
}

int32_t q_abstractprintdialog_qbase_sender_signal_index(void* self) {
    return QAbstractPrintDialog_QBaseSenderSignalIndex((QAbstractPrintDialog*)self);
}

void q_abstractprintdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractPrintDialog_OnSenderSignalIndex((QAbstractPrintDialog*)self, (intptr_t)callback);
}

int32_t q_abstractprintdialog_receivers(void* self, const char* signal) {
    return QAbstractPrintDialog_Receivers((QAbstractPrintDialog*)self, signal);
}

int32_t q_abstractprintdialog_qbase_receivers(void* self, const char* signal) {
    return QAbstractPrintDialog_QBaseReceivers((QAbstractPrintDialog*)self, signal);
}

void q_abstractprintdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractPrintDialog_OnReceivers((QAbstractPrintDialog*)self, (intptr_t)callback);
}

bool q_abstractprintdialog_is_signal_connected(void* self, void* signal) {
    return QAbstractPrintDialog_IsSignalConnected((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

bool q_abstractprintdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractPrintDialog_QBaseIsSignalConnected((QAbstractPrintDialog*)self, (QMetaMethod*)signal);
}

void q_abstractprintdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractPrintDialog_OnIsSignalConnected((QAbstractPrintDialog*)self, (intptr_t)callback);
}

double q_abstractprintdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QAbstractPrintDialog_GetDecodedMetricF((QAbstractPrintDialog*)self, metricA, metricB);
}

double q_abstractprintdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QAbstractPrintDialog_QBaseGetDecodedMetricF((QAbstractPrintDialog*)self, metricA, metricB);
}

void q_abstractprintdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QAbstractPrintDialog_OnGetDecodedMetricF((QAbstractPrintDialog*)self, (intptr_t)callback);
}

void q_abstractprintdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractprintdialog_delete(void* self) {
    QAbstractPrintDialog_Delete((QAbstractPrintDialog*)(self));
}
