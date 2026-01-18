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
#include "libqpagesetupdialog.hpp"
#include "libqpagesetupdialog.h"

QPageSetupDialog* q_pagesetupdialog_new(void* parent) {
    return QPageSetupDialog_new((QWidget*)parent);
}

QPageSetupDialog* q_pagesetupdialog_new2(void* printer) {
    return QPageSetupDialog_new2((QPrinter*)printer);
}

QPageSetupDialog* q_pagesetupdialog_new3() {
    return QPageSetupDialog_new3();
}

QPageSetupDialog* q_pagesetupdialog_new4(void* printer, void* parent) {
    return QPageSetupDialog_new4((QPrinter*)printer, (QWidget*)parent);
}

const QMetaObject* q_pagesetupdialog_meta_object(void* self) {
    return QPageSetupDialog_MetaObject((QPageSetupDialog*)self);
}

void* q_pagesetupdialog_metacast(void* self, const char* param1) {
    return QPageSetupDialog_Metacast((QPageSetupDialog*)self, param1);
}

int32_t q_pagesetupdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPageSetupDialog_Metacall((QPageSetupDialog*)self, param1, param2, param3);
}

void q_pagesetupdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPageSetupDialog_OnMetacall((QPageSetupDialog*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPageSetupDialog_QBaseMetacall((QPageSetupDialog*)self, param1, param2, param3);
}

const char* q_pagesetupdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pagesetupdialog_exec(void* self) {
    return QPageSetupDialog_Exec((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_exec(void* self, int32_t (*callback)()) {
    QPageSetupDialog_OnExec((QPageSetupDialog*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_qbase_exec(void* self) {
    return QPageSetupDialog_QBaseExec((QPageSetupDialog*)self);
}

void q_pagesetupdialog_done(void* self, int result) {
    QPageSetupDialog_Done((QPageSetupDialog*)self, result);
}

void q_pagesetupdialog_on_done(void* self, void (*callback)(void*, int)) {
    QPageSetupDialog_OnDone((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_qbase_done(void* self, int result) {
    QPageSetupDialog_QBaseDone((QPageSetupDialog*)self, result);
}

QPrinter* q_pagesetupdialog_printer(void* self) {
    return QPageSetupDialog_Printer((QPageSetupDialog*)self);
}

const char* q_pagesetupdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pagesetupdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pagesetupdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_pagesetupdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_pagesetupdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_pagesetupdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_pagesetupdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_pagesetupdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_pagesetupdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_pagesetupdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_pagesetupdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_pagesetupdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_pagesetupdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_pagesetupdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_pagesetupdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_pagesetupdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_pagesetupdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_pagesetupdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_pagesetupdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_pagesetupdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_pagesetupdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_pagesetupdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_pagesetupdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_pagesetupdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_pagesetupdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_pagesetupdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_pagesetupdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_pagesetupdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_pagesetupdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_pagesetupdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_pagesetupdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_pagesetupdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_pagesetupdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_pagesetupdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_pagesetupdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_pagesetupdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_pagesetupdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_pagesetupdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_pagesetupdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_pagesetupdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_pagesetupdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_pagesetupdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_pagesetupdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_pagesetupdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_pagesetupdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_pagesetupdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_pagesetupdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_pagesetupdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_pagesetupdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_pagesetupdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_pagesetupdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_pagesetupdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_pagesetupdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_pagesetupdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_pagesetupdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_pagesetupdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_pagesetupdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_pagesetupdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_pagesetupdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_pagesetupdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_pagesetupdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_pagesetupdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_pagesetupdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_pagesetupdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_pagesetupdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pagesetupdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pagesetupdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pagesetupdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pagesetupdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pagesetupdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pagesetupdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_pagesetupdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_pagesetupdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_pagesetupdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_pagesetupdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_pagesetupdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_pagesetupdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_pagesetupdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_pagesetupdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_pagesetupdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_pagesetupdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_pagesetupdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_pagesetupdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_pagesetupdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_pagesetupdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_pagesetupdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_pagesetupdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_pagesetupdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_pagesetupdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_pagesetupdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_pagesetupdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_pagesetupdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_pagesetupdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_pagesetupdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_pagesetupdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_pagesetupdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_pagesetupdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_pagesetupdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_pagesetupdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_pagesetupdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_pagesetupdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_pagesetupdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_pagesetupdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_pagesetupdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_pagesetupdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_pagesetupdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_pagesetupdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_pagesetupdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_pagesetupdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_pagesetupdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_pagesetupdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pagesetupdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_pagesetupdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_pagesetupdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_pagesetupdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_pagesetupdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_pagesetupdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_pagesetupdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_pagesetupdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_pagesetupdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_pagesetupdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_pagesetupdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_pagesetupdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_pagesetupdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_pagesetupdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pagesetupdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_pagesetupdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_pagesetupdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_pagesetupdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_pagesetupdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_pagesetupdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_pagesetupdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_pagesetupdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_pagesetupdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_pagesetupdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_pagesetupdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_pagesetupdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_pagesetupdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_pagesetupdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_pagesetupdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_pagesetupdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_pagesetupdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_pagesetupdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_pagesetupdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_pagesetupdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_pagesetupdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_pagesetupdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_pagesetupdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_pagesetupdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_pagesetupdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_pagesetupdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_pagesetupdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_pagesetupdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_pagesetupdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_pagesetupdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_pagesetupdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_pagesetupdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_pagesetupdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_pagesetupdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_pagesetupdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_pagesetupdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_pagesetupdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_pagesetupdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_pagesetupdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_pagesetupdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_pagesetupdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_pagesetupdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_pagesetupdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_pagesetupdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_pagesetupdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_pagesetupdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_pagesetupdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_pagesetupdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_pagesetupdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_pagesetupdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_pagesetupdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_pagesetupdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_pagesetupdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_pagesetupdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_pagesetupdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_pagesetupdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_pagesetupdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_pagesetupdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_pagesetupdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_pagesetupdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_pagesetupdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_pagesetupdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_pagesetupdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_pagesetupdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_pagesetupdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_pagesetupdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_pagesetupdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_pagesetupdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_pagesetupdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_pagesetupdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_pagesetupdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_pagesetupdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_pagesetupdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_pagesetupdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_pagesetupdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_pagesetupdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_pagesetupdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_pagesetupdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_pagesetupdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_pagesetupdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_pagesetupdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_pagesetupdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_pagesetupdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_pagesetupdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_pagesetupdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_pagesetupdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_pagesetupdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_pagesetupdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_pagesetupdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_pagesetupdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_pagesetupdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_pagesetupdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_pagesetupdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_pagesetupdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_pagesetupdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_pagesetupdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_pagesetupdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_pagesetupdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_pagesetupdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_pagesetupdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_pagesetupdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_pagesetupdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_pagesetupdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_pagesetupdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_pagesetupdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_pagesetupdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_pagesetupdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_pagesetupdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_pagesetupdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_pagesetupdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_pagesetupdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_pagesetupdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_pagesetupdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_pagesetupdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_pagesetupdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_pagesetupdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_pagesetupdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_pagesetupdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_pagesetupdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_pagesetupdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_pagesetupdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_pagesetupdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_pagesetupdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_pagesetupdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_pagesetupdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_pagesetupdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_pagesetupdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_pagesetupdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_pagesetupdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_pagesetupdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_pagesetupdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_pagesetupdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_pagesetupdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_pagesetupdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_pagesetupdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_pagesetupdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_pagesetupdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_pagesetupdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_pagesetupdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_pagesetupdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_pagesetupdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_pagesetupdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_pagesetupdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_pagesetupdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_pagesetupdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_pagesetupdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_pagesetupdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_pagesetupdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_pagesetupdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_pagesetupdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pagesetupdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pagesetupdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pagesetupdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pagesetupdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pagesetupdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pagesetupdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pagesetupdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pagesetupdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pagesetupdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pagesetupdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pagesetupdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pagesetupdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pagesetupdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pagesetupdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pagesetupdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pagesetupdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pagesetupdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pagesetupdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pagesetupdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pagesetupdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pagesetupdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pagesetupdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pagesetupdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pagesetupdialog_dynamic_property_names\n");
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

QBindingStorage* q_pagesetupdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pagesetupdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pagesetupdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pagesetupdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pagesetupdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pagesetupdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pagesetupdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pagesetupdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pagesetupdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pagesetupdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pagesetupdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pagesetupdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pagesetupdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_pagesetupdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_pagesetupdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_pagesetupdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_pagesetupdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_pagesetupdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_pagesetupdialog_set_visible(void* self, bool visible) {
    QPageSetupDialog_SetVisible((QPageSetupDialog*)self, visible);
}

void q_pagesetupdialog_qbase_set_visible(void* self, bool visible) {
    QPageSetupDialog_QBaseSetVisible((QPageSetupDialog*)self, visible);
}

void q_pagesetupdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QPageSetupDialog_OnSetVisible((QPageSetupDialog*)self, (intptr_t)callback);
}

QSize* q_pagesetupdialog_size_hint(void* self) {
    return QPageSetupDialog_SizeHint((QPageSetupDialog*)self);
}

QSize* q_pagesetupdialog_qbase_size_hint(void* self) {
    return QPageSetupDialog_QBaseSizeHint((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_size_hint(void* self, QSize* (*callback)()) {
    QPageSetupDialog_OnSizeHint((QPageSetupDialog*)self, (intptr_t)callback);
}

QSize* q_pagesetupdialog_minimum_size_hint(void* self) {
    return QPageSetupDialog_MinimumSizeHint((QPageSetupDialog*)self);
}

QSize* q_pagesetupdialog_qbase_minimum_size_hint(void* self) {
    return QPageSetupDialog_QBaseMinimumSizeHint((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QPageSetupDialog_OnMinimumSizeHint((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_open(void* self) {
    QPageSetupDialog_Open((QPageSetupDialog*)self);
}

void q_pagesetupdialog_qbase_open(void* self) {
    QPageSetupDialog_QBaseOpen((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_open(void* self, void (*callback)()) {
    QPageSetupDialog_OnOpen((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_accept(void* self) {
    QPageSetupDialog_Accept((QPageSetupDialog*)self);
}

void q_pagesetupdialog_qbase_accept(void* self) {
    QPageSetupDialog_QBaseAccept((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_accept(void* self, void (*callback)()) {
    QPageSetupDialog_OnAccept((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_reject(void* self) {
    QPageSetupDialog_Reject((QPageSetupDialog*)self);
}

void q_pagesetupdialog_qbase_reject(void* self) {
    QPageSetupDialog_QBaseReject((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_reject(void* self, void (*callback)()) {
    QPageSetupDialog_OnReject((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_key_press_event(void* self, void* param1) {
    QPageSetupDialog_KeyPressEvent((QPageSetupDialog*)self, (QKeyEvent*)param1);
}

void q_pagesetupdialog_qbase_key_press_event(void* self, void* param1) {
    QPageSetupDialog_QBaseKeyPressEvent((QPageSetupDialog*)self, (QKeyEvent*)param1);
}

void q_pagesetupdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnKeyPressEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_close_event(void* self, void* param1) {
    QPageSetupDialog_CloseEvent((QPageSetupDialog*)self, (QCloseEvent*)param1);
}

void q_pagesetupdialog_qbase_close_event(void* self, void* param1) {
    QPageSetupDialog_QBaseCloseEvent((QPageSetupDialog*)self, (QCloseEvent*)param1);
}

void q_pagesetupdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnCloseEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_show_event(void* self, void* param1) {
    QPageSetupDialog_ShowEvent((QPageSetupDialog*)self, (QShowEvent*)param1);
}

void q_pagesetupdialog_qbase_show_event(void* self, void* param1) {
    QPageSetupDialog_QBaseShowEvent((QPageSetupDialog*)self, (QShowEvent*)param1);
}

void q_pagesetupdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnShowEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_resize_event(void* self, void* param1) {
    QPageSetupDialog_ResizeEvent((QPageSetupDialog*)self, (QResizeEvent*)param1);
}

void q_pagesetupdialog_qbase_resize_event(void* self, void* param1) {
    QPageSetupDialog_QBaseResizeEvent((QPageSetupDialog*)self, (QResizeEvent*)param1);
}

void q_pagesetupdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnResizeEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_context_menu_event(void* self, void* param1) {
    QPageSetupDialog_ContextMenuEvent((QPageSetupDialog*)self, (QContextMenuEvent*)param1);
}

void q_pagesetupdialog_qbase_context_menu_event(void* self, void* param1) {
    QPageSetupDialog_QBaseContextMenuEvent((QPageSetupDialog*)self, (QContextMenuEvent*)param1);
}

void q_pagesetupdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnContextMenuEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_event_filter(void* self, void* param1, void* param2) {
    return QPageSetupDialog_EventFilter((QPageSetupDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_pagesetupdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QPageSetupDialog_QBaseEventFilter((QPageSetupDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_pagesetupdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPageSetupDialog_OnEventFilter((QPageSetupDialog*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_dev_type(void* self) {
    return QPageSetupDialog_DevType((QPageSetupDialog*)self);
}

int32_t q_pagesetupdialog_qbase_dev_type(void* self) {
    return QPageSetupDialog_QBaseDevType((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_dev_type(void* self, int32_t (*callback)()) {
    QPageSetupDialog_OnDevType((QPageSetupDialog*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_height_for_width(void* self, int param1) {
    return QPageSetupDialog_HeightForWidth((QPageSetupDialog*)self, param1);
}

int32_t q_pagesetupdialog_qbase_height_for_width(void* self, int param1) {
    return QPageSetupDialog_QBaseHeightForWidth((QPageSetupDialog*)self, param1);
}

void q_pagesetupdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QPageSetupDialog_OnHeightForWidth((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_has_height_for_width(void* self) {
    return QPageSetupDialog_HasHeightForWidth((QPageSetupDialog*)self);
}

bool q_pagesetupdialog_qbase_has_height_for_width(void* self) {
    return QPageSetupDialog_QBaseHasHeightForWidth((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QPageSetupDialog_OnHasHeightForWidth((QPageSetupDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_pagesetupdialog_paint_engine(void* self) {
    return QPageSetupDialog_PaintEngine((QPageSetupDialog*)self);
}

QPaintEngine* q_pagesetupdialog_qbase_paint_engine(void* self) {
    return QPageSetupDialog_QBasePaintEngine((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPageSetupDialog_OnPaintEngine((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_event(void* self, void* event) {
    return QPageSetupDialog_Event((QPageSetupDialog*)self, (QEvent*)event);
}

bool q_pagesetupdialog_qbase_event(void* self, void* event) {
    return QPageSetupDialog_QBaseEvent((QPageSetupDialog*)self, (QEvent*)event);
}

void q_pagesetupdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QPageSetupDialog_OnEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_mouse_press_event(void* self, void* event) {
    QPageSetupDialog_MousePressEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_qbase_mouse_press_event(void* self, void* event) {
    QPageSetupDialog_QBaseMousePressEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnMousePressEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_mouse_release_event(void* self, void* event) {
    QPageSetupDialog_MouseReleaseEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_qbase_mouse_release_event(void* self, void* event) {
    QPageSetupDialog_QBaseMouseReleaseEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnMouseReleaseEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_mouse_double_click_event(void* self, void* event) {
    QPageSetupDialog_MouseDoubleClickEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QPageSetupDialog_QBaseMouseDoubleClickEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnMouseDoubleClickEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_mouse_move_event(void* self, void* event) {
    QPageSetupDialog_MouseMoveEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_qbase_mouse_move_event(void* self, void* event) {
    QPageSetupDialog_QBaseMouseMoveEvent((QPageSetupDialog*)self, (QMouseEvent*)event);
}

void q_pagesetupdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnMouseMoveEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_wheel_event(void* self, void* event) {
    QPageSetupDialog_WheelEvent((QPageSetupDialog*)self, (QWheelEvent*)event);
}

void q_pagesetupdialog_qbase_wheel_event(void* self, void* event) {
    QPageSetupDialog_QBaseWheelEvent((QPageSetupDialog*)self, (QWheelEvent*)event);
}

void q_pagesetupdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnWheelEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_key_release_event(void* self, void* event) {
    QPageSetupDialog_KeyReleaseEvent((QPageSetupDialog*)self, (QKeyEvent*)event);
}

void q_pagesetupdialog_qbase_key_release_event(void* self, void* event) {
    QPageSetupDialog_QBaseKeyReleaseEvent((QPageSetupDialog*)self, (QKeyEvent*)event);
}

void q_pagesetupdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnKeyReleaseEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_focus_in_event(void* self, void* event) {
    QPageSetupDialog_FocusInEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

void q_pagesetupdialog_qbase_focus_in_event(void* self, void* event) {
    QPageSetupDialog_QBaseFocusInEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

void q_pagesetupdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnFocusInEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_focus_out_event(void* self, void* event) {
    QPageSetupDialog_FocusOutEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

void q_pagesetupdialog_qbase_focus_out_event(void* self, void* event) {
    QPageSetupDialog_QBaseFocusOutEvent((QPageSetupDialog*)self, (QFocusEvent*)event);
}

void q_pagesetupdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnFocusOutEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_enter_event(void* self, void* event) {
    QPageSetupDialog_EnterEvent((QPageSetupDialog*)self, (QEnterEvent*)event);
}

void q_pagesetupdialog_qbase_enter_event(void* self, void* event) {
    QPageSetupDialog_QBaseEnterEvent((QPageSetupDialog*)self, (QEnterEvent*)event);
}

void q_pagesetupdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnEnterEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_leave_event(void* self, void* event) {
    QPageSetupDialog_LeaveEvent((QPageSetupDialog*)self, (QEvent*)event);
}

void q_pagesetupdialog_qbase_leave_event(void* self, void* event) {
    QPageSetupDialog_QBaseLeaveEvent((QPageSetupDialog*)self, (QEvent*)event);
}

void q_pagesetupdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnLeaveEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_paint_event(void* self, void* event) {
    QPageSetupDialog_PaintEvent((QPageSetupDialog*)self, (QPaintEvent*)event);
}

void q_pagesetupdialog_qbase_paint_event(void* self, void* event) {
    QPageSetupDialog_QBasePaintEvent((QPageSetupDialog*)self, (QPaintEvent*)event);
}

void q_pagesetupdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnPaintEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_move_event(void* self, void* event) {
    QPageSetupDialog_MoveEvent((QPageSetupDialog*)self, (QMoveEvent*)event);
}

void q_pagesetupdialog_qbase_move_event(void* self, void* event) {
    QPageSetupDialog_QBaseMoveEvent((QPageSetupDialog*)self, (QMoveEvent*)event);
}

void q_pagesetupdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnMoveEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_tablet_event(void* self, void* event) {
    QPageSetupDialog_TabletEvent((QPageSetupDialog*)self, (QTabletEvent*)event);
}

void q_pagesetupdialog_qbase_tablet_event(void* self, void* event) {
    QPageSetupDialog_QBaseTabletEvent((QPageSetupDialog*)self, (QTabletEvent*)event);
}

void q_pagesetupdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnTabletEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_action_event(void* self, void* event) {
    QPageSetupDialog_ActionEvent((QPageSetupDialog*)self, (QActionEvent*)event);
}

void q_pagesetupdialog_qbase_action_event(void* self, void* event) {
    QPageSetupDialog_QBaseActionEvent((QPageSetupDialog*)self, (QActionEvent*)event);
}

void q_pagesetupdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnActionEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_drag_enter_event(void* self, void* event) {
    QPageSetupDialog_DragEnterEvent((QPageSetupDialog*)self, (QDragEnterEvent*)event);
}

void q_pagesetupdialog_qbase_drag_enter_event(void* self, void* event) {
    QPageSetupDialog_QBaseDragEnterEvent((QPageSetupDialog*)self, (QDragEnterEvent*)event);
}

void q_pagesetupdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnDragEnterEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_drag_move_event(void* self, void* event) {
    QPageSetupDialog_DragMoveEvent((QPageSetupDialog*)self, (QDragMoveEvent*)event);
}

void q_pagesetupdialog_qbase_drag_move_event(void* self, void* event) {
    QPageSetupDialog_QBaseDragMoveEvent((QPageSetupDialog*)self, (QDragMoveEvent*)event);
}

void q_pagesetupdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnDragMoveEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_drag_leave_event(void* self, void* event) {
    QPageSetupDialog_DragLeaveEvent((QPageSetupDialog*)self, (QDragLeaveEvent*)event);
}

void q_pagesetupdialog_qbase_drag_leave_event(void* self, void* event) {
    QPageSetupDialog_QBaseDragLeaveEvent((QPageSetupDialog*)self, (QDragLeaveEvent*)event);
}

void q_pagesetupdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnDragLeaveEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_drop_event(void* self, void* event) {
    QPageSetupDialog_DropEvent((QPageSetupDialog*)self, (QDropEvent*)event);
}

void q_pagesetupdialog_qbase_drop_event(void* self, void* event) {
    QPageSetupDialog_QBaseDropEvent((QPageSetupDialog*)self, (QDropEvent*)event);
}

void q_pagesetupdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnDropEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_hide_event(void* self, void* event) {
    QPageSetupDialog_HideEvent((QPageSetupDialog*)self, (QHideEvent*)event);
}

void q_pagesetupdialog_qbase_hide_event(void* self, void* event) {
    QPageSetupDialog_QBaseHideEvent((QPageSetupDialog*)self, (QHideEvent*)event);
}

void q_pagesetupdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnHideEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPageSetupDialog_NativeEvent((QPageSetupDialog*)self, qstring(eventType), message, result);
}

bool q_pagesetupdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QPageSetupDialog_QBaseNativeEvent((QPageSetupDialog*)self, qstring(eventType), message, result);
}

void q_pagesetupdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QPageSetupDialog_OnNativeEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_change_event(void* self, void* param1) {
    QPageSetupDialog_ChangeEvent((QPageSetupDialog*)self, (QEvent*)param1);
}

void q_pagesetupdialog_qbase_change_event(void* self, void* param1) {
    QPageSetupDialog_QBaseChangeEvent((QPageSetupDialog*)self, (QEvent*)param1);
}

void q_pagesetupdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnChangeEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_metric(void* self, int32_t param1) {
    return QPageSetupDialog_Metric((QPageSetupDialog*)self, param1);
}

int32_t q_pagesetupdialog_qbase_metric(void* self, int32_t param1) {
    return QPageSetupDialog_QBaseMetric((QPageSetupDialog*)self, param1);
}

void q_pagesetupdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPageSetupDialog_OnMetric((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_init_painter(void* self, void* painter) {
    QPageSetupDialog_InitPainter((QPageSetupDialog*)self, (QPainter*)painter);
}

void q_pagesetupdialog_qbase_init_painter(void* self, void* painter) {
    QPageSetupDialog_QBaseInitPainter((QPageSetupDialog*)self, (QPainter*)painter);
}

void q_pagesetupdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnInitPainter((QPageSetupDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_pagesetupdialog_redirected(void* self, void* offset) {
    return QPageSetupDialog_Redirected((QPageSetupDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_pagesetupdialog_qbase_redirected(void* self, void* offset) {
    return QPageSetupDialog_QBaseRedirected((QPageSetupDialog*)self, (QPoint*)offset);
}

void q_pagesetupdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPageSetupDialog_OnRedirected((QPageSetupDialog*)self, (intptr_t)callback);
}

QPainter* q_pagesetupdialog_shared_painter(void* self) {
    return QPageSetupDialog_SharedPainter((QPageSetupDialog*)self);
}

QPainter* q_pagesetupdialog_qbase_shared_painter(void* self) {
    return QPageSetupDialog_QBaseSharedPainter((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPageSetupDialog_OnSharedPainter((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_input_method_event(void* self, void* param1) {
    QPageSetupDialog_InputMethodEvent((QPageSetupDialog*)self, (QInputMethodEvent*)param1);
}

void q_pagesetupdialog_qbase_input_method_event(void* self, void* param1) {
    QPageSetupDialog_QBaseInputMethodEvent((QPageSetupDialog*)self, (QInputMethodEvent*)param1);
}

void q_pagesetupdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnInputMethodEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

QVariant* q_pagesetupdialog_input_method_query(void* self, int32_t param1) {
    return QPageSetupDialog_InputMethodQuery((QPageSetupDialog*)self, param1);
}

QVariant* q_pagesetupdialog_qbase_input_method_query(void* self, int32_t param1) {
    return QPageSetupDialog_QBaseInputMethodQuery((QPageSetupDialog*)self, param1);
}

void q_pagesetupdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QPageSetupDialog_OnInputMethodQuery((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_focus_next_prev_child(void* self, bool next) {
    return QPageSetupDialog_FocusNextPrevChild((QPageSetupDialog*)self, next);
}

bool q_pagesetupdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QPageSetupDialog_QBaseFocusNextPrevChild((QPageSetupDialog*)self, next);
}

void q_pagesetupdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QPageSetupDialog_OnFocusNextPrevChild((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_timer_event(void* self, void* event) {
    QPageSetupDialog_TimerEvent((QPageSetupDialog*)self, (QTimerEvent*)event);
}

void q_pagesetupdialog_qbase_timer_event(void* self, void* event) {
    QPageSetupDialog_QBaseTimerEvent((QPageSetupDialog*)self, (QTimerEvent*)event);
}

void q_pagesetupdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnTimerEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_child_event(void* self, void* event) {
    QPageSetupDialog_ChildEvent((QPageSetupDialog*)self, (QChildEvent*)event);
}

void q_pagesetupdialog_qbase_child_event(void* self, void* event) {
    QPageSetupDialog_QBaseChildEvent((QPageSetupDialog*)self, (QChildEvent*)event);
}

void q_pagesetupdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnChildEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_custom_event(void* self, void* event) {
    QPageSetupDialog_CustomEvent((QPageSetupDialog*)self, (QEvent*)event);
}

void q_pagesetupdialog_qbase_custom_event(void* self, void* event) {
    QPageSetupDialog_QBaseCustomEvent((QPageSetupDialog*)self, (QEvent*)event);
}

void q_pagesetupdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnCustomEvent((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_connect_notify(void* self, void* signal) {
    QPageSetupDialog_ConnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

void q_pagesetupdialog_qbase_connect_notify(void* self, void* signal) {
    QPageSetupDialog_QBaseConnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

void q_pagesetupdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnConnectNotify((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_disconnect_notify(void* self, void* signal) {
    QPageSetupDialog_DisconnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

void q_pagesetupdialog_qbase_disconnect_notify(void* self, void* signal) {
    QPageSetupDialog_QBaseDisconnectNotify((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

void q_pagesetupdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnDisconnectNotify((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_adjust_position(void* self, void* param1) {
    QPageSetupDialog_AdjustPosition((QPageSetupDialog*)self, (QWidget*)param1);
}

void q_pagesetupdialog_qbase_adjust_position(void* self, void* param1) {
    QPageSetupDialog_QBaseAdjustPosition((QPageSetupDialog*)self, (QWidget*)param1);
}

void q_pagesetupdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QPageSetupDialog_OnAdjustPosition((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_update_micro_focus(void* self) {
    QPageSetupDialog_UpdateMicroFocus((QPageSetupDialog*)self);
}

void q_pagesetupdialog_qbase_update_micro_focus(void* self) {
    QPageSetupDialog_QBaseUpdateMicroFocus((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_update_micro_focus(void* self, void (*callback)()) {
    QPageSetupDialog_OnUpdateMicroFocus((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_create(void* self) {
    QPageSetupDialog_Create((QPageSetupDialog*)self);
}

void q_pagesetupdialog_qbase_create(void* self) {
    QPageSetupDialog_QBaseCreate((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_create(void* self, void (*callback)()) {
    QPageSetupDialog_OnCreate((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_destroy(void* self) {
    QPageSetupDialog_Destroy((QPageSetupDialog*)self);
}

void q_pagesetupdialog_qbase_destroy(void* self) {
    QPageSetupDialog_QBaseDestroy((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_destroy(void* self, void (*callback)()) {
    QPageSetupDialog_OnDestroy((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_focus_next_child(void* self) {
    return QPageSetupDialog_FocusNextChild((QPageSetupDialog*)self);
}

bool q_pagesetupdialog_qbase_focus_next_child(void* self) {
    return QPageSetupDialog_QBaseFocusNextChild((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_focus_next_child(void* self, bool (*callback)()) {
    QPageSetupDialog_OnFocusNextChild((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_focus_previous_child(void* self) {
    return QPageSetupDialog_FocusPreviousChild((QPageSetupDialog*)self);
}

bool q_pagesetupdialog_qbase_focus_previous_child(void* self) {
    return QPageSetupDialog_QBaseFocusPreviousChild((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QPageSetupDialog_OnFocusPreviousChild((QPageSetupDialog*)self, (intptr_t)callback);
}

QObject* q_pagesetupdialog_sender(void* self) {
    return QPageSetupDialog_Sender((QPageSetupDialog*)self);
}

QObject* q_pagesetupdialog_qbase_sender(void* self) {
    return QPageSetupDialog_QBaseSender((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_sender(void* self, QObject* (*callback)()) {
    QPageSetupDialog_OnSender((QPageSetupDialog*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_sender_signal_index(void* self) {
    return QPageSetupDialog_SenderSignalIndex((QPageSetupDialog*)self);
}

int32_t q_pagesetupdialog_qbase_sender_signal_index(void* self) {
    return QPageSetupDialog_QBaseSenderSignalIndex((QPageSetupDialog*)self);
}

void q_pagesetupdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPageSetupDialog_OnSenderSignalIndex((QPageSetupDialog*)self, (intptr_t)callback);
}

int32_t q_pagesetupdialog_receivers(void* self, const char* signal) {
    return QPageSetupDialog_Receivers((QPageSetupDialog*)self, signal);
}

int32_t q_pagesetupdialog_qbase_receivers(void* self, const char* signal) {
    return QPageSetupDialog_QBaseReceivers((QPageSetupDialog*)self, signal);
}

void q_pagesetupdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPageSetupDialog_OnReceivers((QPageSetupDialog*)self, (intptr_t)callback);
}

bool q_pagesetupdialog_is_signal_connected(void* self, void* signal) {
    return QPageSetupDialog_IsSignalConnected((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

bool q_pagesetupdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QPageSetupDialog_QBaseIsSignalConnected((QPageSetupDialog*)self, (QMetaMethod*)signal);
}

void q_pagesetupdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPageSetupDialog_OnIsSignalConnected((QPageSetupDialog*)self, (intptr_t)callback);
}

double q_pagesetupdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPageSetupDialog_GetDecodedMetricF((QPageSetupDialog*)self, metricA, metricB);
}

double q_pagesetupdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPageSetupDialog_QBaseGetDecodedMetricF((QPageSetupDialog*)self, metricA, metricB);
}

void q_pagesetupdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPageSetupDialog_OnGetDecodedMetricF((QPageSetupDialog*)self, (intptr_t)callback);
}

void q_pagesetupdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pagesetupdialog_delete(void* self) {
    QPageSetupDialog_Delete((QPageSetupDialog*)(self));
}
