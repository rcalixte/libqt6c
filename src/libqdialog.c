#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqdialog.hpp"
#include "libqdialog.h"

QDialog* q_dialog_new(void* parent) {
    return QDialog_new((QWidget*)parent);
}

QDialog* q_dialog_new2() {
    return QDialog_new2();
}

QDialog* q_dialog_new3(void* parent, int64_t f) {
    return QDialog_new3((QWidget*)parent, f);
}

const QMetaObject* q_dialog_meta_object(void* self) {
    return QDialog_MetaObject((QDialog*)self);
}

void* q_dialog_metacast(void* self, const char* param1) {
    return QDialog_Metacast((QDialog*)self, param1);
}

int32_t q_dialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDialog_Metacall((QDialog*)self, param1, param2, param3);
}

void q_dialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDialog_OnMetacall((QDialog*)self, (intptr_t)callback);
}

int32_t q_dialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDialog_QBaseMetacall((QDialog*)self, param1, param2, param3);
}

const char* q_dialog_tr(const char* s) {
    libqt_string _str = QDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_dialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_dialog_set_visible(void* self, bool visible) {
    QDialog_SetVisible((QDialog*)self, visible);
}

void q_dialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QDialog_OnSetVisible((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_set_visible(void* self, bool visible) {
    QDialog_QBaseSetVisible((QDialog*)self, visible);
}

QSize* q_dialog_size_hint(void* self) {
    return QDialog_SizeHint((QDialog*)self);
}

void q_dialog_on_size_hint(void* self, QSize* (*callback)()) {
    QDialog_OnSizeHint((QDialog*)self, (intptr_t)callback);
}

QSize* q_dialog_qbase_size_hint(void* self) {
    return QDialog_QBaseSizeHint((QDialog*)self);
}

QSize* q_dialog_minimum_size_hint(void* self) {
    return QDialog_MinimumSizeHint((QDialog*)self);
}

void q_dialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QDialog_OnMinimumSizeHint((QDialog*)self, (intptr_t)callback);
}

QSize* q_dialog_qbase_minimum_size_hint(void* self) {
    return QDialog_QBaseMinimumSizeHint((QDialog*)self);
}

void q_dialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_dialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_dialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_dialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_dialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_dialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_dialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_dialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_dialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_dialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

void q_dialog_open(void* self) {
    QDialog_Open((QDialog*)self);
}

void q_dialog_on_open(void* self, void (*callback)()) {
    QDialog_OnOpen((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_open(void* self) {
    QDialog_QBaseOpen((QDialog*)self);
}

int32_t q_dialog_exec(void* self) {
    return QDialog_Exec((QDialog*)self);
}

void q_dialog_on_exec(void* self, int32_t (*callback)()) {
    QDialog_OnExec((QDialog*)self, (intptr_t)callback);
}

int32_t q_dialog_qbase_exec(void* self) {
    return QDialog_QBaseExec((QDialog*)self);
}

void q_dialog_done(void* self, int param1) {
    QDialog_Done((QDialog*)self, param1);
}

void q_dialog_on_done(void* self, void (*callback)(void*, int)) {
    QDialog_OnDone((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_done(void* self, int param1) {
    QDialog_QBaseDone((QDialog*)self, param1);
}

void q_dialog_accept(void* self) {
    QDialog_Accept((QDialog*)self);
}

void q_dialog_on_accept(void* self, void (*callback)()) {
    QDialog_OnAccept((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_accept(void* self) {
    QDialog_QBaseAccept((QDialog*)self);
}

void q_dialog_reject(void* self) {
    QDialog_Reject((QDialog*)self);
}

void q_dialog_on_reject(void* self, void (*callback)()) {
    QDialog_OnReject((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_reject(void* self) {
    QDialog_QBaseReject((QDialog*)self);
}

void q_dialog_key_press_event(void* self, void* param1) {
    QDialog_KeyPressEvent((QDialog*)self, (QKeyEvent*)param1);
}

void q_dialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnKeyPressEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_key_press_event(void* self, void* param1) {
    QDialog_QBaseKeyPressEvent((QDialog*)self, (QKeyEvent*)param1);
}

void q_dialog_close_event(void* self, void* param1) {
    QDialog_CloseEvent((QDialog*)self, (QCloseEvent*)param1);
}

void q_dialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnCloseEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_close_event(void* self, void* param1) {
    QDialog_QBaseCloseEvent((QDialog*)self, (QCloseEvent*)param1);
}

void q_dialog_show_event(void* self, void* param1) {
    QDialog_ShowEvent((QDialog*)self, (QShowEvent*)param1);
}

void q_dialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnShowEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_show_event(void* self, void* param1) {
    QDialog_QBaseShowEvent((QDialog*)self, (QShowEvent*)param1);
}

void q_dialog_resize_event(void* self, void* param1) {
    QDialog_ResizeEvent((QDialog*)self, (QResizeEvent*)param1);
}

void q_dialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnResizeEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_resize_event(void* self, void* param1) {
    QDialog_QBaseResizeEvent((QDialog*)self, (QResizeEvent*)param1);
}

void q_dialog_context_menu_event(void* self, void* param1) {
    QDialog_ContextMenuEvent((QDialog*)self, (QContextMenuEvent*)param1);
}

void q_dialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnContextMenuEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_context_menu_event(void* self, void* param1) {
    QDialog_QBaseContextMenuEvent((QDialog*)self, (QContextMenuEvent*)param1);
}

bool q_dialog_event_filter(void* self, void* param1, void* param2) {
    return QDialog_EventFilter((QDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_dialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDialog_OnEventFilter((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QDialog_QBaseEventFilter((QDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_dialog_adjust_position(void* self, void* param1) {
    QDialog_AdjustPosition((QDialog*)self, (QWidget*)param1);
}

void q_dialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QDialog_OnAdjustPosition((QDialog*)self, (intptr_t)callback);
}

void q_dialog_qbase_adjust_position(void* self, void* param1) {
    QDialog_QBaseAdjustPosition((QDialog*)self, (QWidget*)param1);
}

const char* q_dialog_tr2(const char* s, const char* c) {
    libqt_string _str = QDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_dialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_dialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_dialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_dialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_dialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_dialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_dialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_dialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_dialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_dialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_dialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_dialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_dialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_dialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_dialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_dialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_dialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_dialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_dialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_dialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_dialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_dialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_dialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_dialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_dialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_dialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_dialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_dialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_dialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_dialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_dialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_dialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_dialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_dialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_dialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_dialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_dialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_dialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_dialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_dialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_dialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_dialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_dialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_dialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_dialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_dialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_dialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_dialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_dialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_dialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_dialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_dialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_dialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_dialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_dialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_dialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_dialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_dialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_dialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_dialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_dialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_dialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_dialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_dialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_dialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_dialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_dialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_dialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_dialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_dialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_dialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_dialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_dialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_dialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_dialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_dialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_dialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_dialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_dialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_dialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_dialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_dialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_dialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_dialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_dialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_dialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_dialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_dialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_dialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_dialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_dialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_dialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_dialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_dialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_dialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_dialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_dialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_dialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_dialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_dialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_dialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_dialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_dialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_dialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_dialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_dialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_dialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_dialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_dialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_dialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_dialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_dialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_dialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_dialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_dialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_dialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_dialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_dialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_dialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_dialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_dialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_dialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_dialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_dialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_dialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_dialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_dialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_dialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_dialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_dialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_dialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_dialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_dialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_dialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_dialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_dialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_dialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_dialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_dialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_dialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_dialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_dialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_dialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_dialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_dialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_dialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_dialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_dialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_dialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_dialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_dialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_dialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_dialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_dialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_dialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_dialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_dialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_dialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_dialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_dialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_dialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_dialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_dialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_dialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_dialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_dialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_dialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_dialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_dialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_dialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_dialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_dialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_dialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_dialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_dialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_dialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_dialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_dialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_dialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_dialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_dialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_dialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_dialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_dialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_dialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_dialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_dialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_dialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_dialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_dialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_dialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_dialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_dialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_dialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_dialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_dialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_dialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_dialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_dialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_dialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_dialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_dialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_dialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_dialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_dialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_dialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_dialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_dialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_dialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_dialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_dialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_dialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_dialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_dialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_dialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_dialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_dialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_dialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_dialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_dialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_dialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_dialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_dialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_dialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_dialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_dialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_dialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_dialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_dialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_dialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_dialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_dialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_dialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_dialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_dialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_dialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_dialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_dialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_dialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_dialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_dialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_dialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_dialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_dialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_dialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_dialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_dialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_dialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_dialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_dialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_dialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_dialog_dynamic_property_names");
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

QBindingStorage* q_dialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_dialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_dialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_dialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_dialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_dialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_dialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_dialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_dialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_dialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_dialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_dialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_dialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_dialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_dialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_dialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_dialog_dev_type(void* self) {
    return QDialog_DevType((QDialog*)self);
}

int32_t q_dialog_qbase_dev_type(void* self) {
    return QDialog_QBaseDevType((QDialog*)self);
}

void q_dialog_on_dev_type(void* self, int32_t (*callback)()) {
    QDialog_OnDevType((QDialog*)self, (intptr_t)callback);
}

int32_t q_dialog_height_for_width(void* self, int param1) {
    return QDialog_HeightForWidth((QDialog*)self, param1);
}

int32_t q_dialog_qbase_height_for_width(void* self, int param1) {
    return QDialog_QBaseHeightForWidth((QDialog*)self, param1);
}

void q_dialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QDialog_OnHeightForWidth((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_has_height_for_width(void* self) {
    return QDialog_HasHeightForWidth((QDialog*)self);
}

bool q_dialog_qbase_has_height_for_width(void* self) {
    return QDialog_QBaseHasHeightForWidth((QDialog*)self);
}

void q_dialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QDialog_OnHasHeightForWidth((QDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_dialog_paint_engine(void* self) {
    return QDialog_PaintEngine((QDialog*)self);
}

QPaintEngine* q_dialog_qbase_paint_engine(void* self) {
    return QDialog_QBasePaintEngine((QDialog*)self);
}

void q_dialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QDialog_OnPaintEngine((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_event(void* self, void* event) {
    return QDialog_Event((QDialog*)self, (QEvent*)event);
}

bool q_dialog_qbase_event(void* self, void* event) {
    return QDialog_QBaseEvent((QDialog*)self, (QEvent*)event);
}

void q_dialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QDialog_OnEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_mouse_press_event(void* self, void* event) {
    QDialog_MousePressEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_qbase_mouse_press_event(void* self, void* event) {
    QDialog_QBaseMousePressEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnMousePressEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_mouse_release_event(void* self, void* event) {
    QDialog_MouseReleaseEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_qbase_mouse_release_event(void* self, void* event) {
    QDialog_QBaseMouseReleaseEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnMouseReleaseEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_mouse_double_click_event(void* self, void* event) {
    QDialog_MouseDoubleClickEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_qbase_mouse_double_click_event(void* self, void* event) {
    QDialog_QBaseMouseDoubleClickEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnMouseDoubleClickEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_mouse_move_event(void* self, void* event) {
    QDialog_MouseMoveEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_qbase_mouse_move_event(void* self, void* event) {
    QDialog_QBaseMouseMoveEvent((QDialog*)self, (QMouseEvent*)event);
}

void q_dialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnMouseMoveEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_wheel_event(void* self, void* event) {
    QDialog_WheelEvent((QDialog*)self, (QWheelEvent*)event);
}

void q_dialog_qbase_wheel_event(void* self, void* event) {
    QDialog_QBaseWheelEvent((QDialog*)self, (QWheelEvent*)event);
}

void q_dialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnWheelEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_key_release_event(void* self, void* event) {
    QDialog_KeyReleaseEvent((QDialog*)self, (QKeyEvent*)event);
}

void q_dialog_qbase_key_release_event(void* self, void* event) {
    QDialog_QBaseKeyReleaseEvent((QDialog*)self, (QKeyEvent*)event);
}

void q_dialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnKeyReleaseEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_focus_in_event(void* self, void* event) {
    QDialog_FocusInEvent((QDialog*)self, (QFocusEvent*)event);
}

void q_dialog_qbase_focus_in_event(void* self, void* event) {
    QDialog_QBaseFocusInEvent((QDialog*)self, (QFocusEvent*)event);
}

void q_dialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnFocusInEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_focus_out_event(void* self, void* event) {
    QDialog_FocusOutEvent((QDialog*)self, (QFocusEvent*)event);
}

void q_dialog_qbase_focus_out_event(void* self, void* event) {
    QDialog_QBaseFocusOutEvent((QDialog*)self, (QFocusEvent*)event);
}

void q_dialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnFocusOutEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_enter_event(void* self, void* event) {
    QDialog_EnterEvent((QDialog*)self, (QEnterEvent*)event);
}

void q_dialog_qbase_enter_event(void* self, void* event) {
    QDialog_QBaseEnterEvent((QDialog*)self, (QEnterEvent*)event);
}

void q_dialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnEnterEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_leave_event(void* self, void* event) {
    QDialog_LeaveEvent((QDialog*)self, (QEvent*)event);
}

void q_dialog_qbase_leave_event(void* self, void* event) {
    QDialog_QBaseLeaveEvent((QDialog*)self, (QEvent*)event);
}

void q_dialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnLeaveEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_paint_event(void* self, void* event) {
    QDialog_PaintEvent((QDialog*)self, (QPaintEvent*)event);
}

void q_dialog_qbase_paint_event(void* self, void* event) {
    QDialog_QBasePaintEvent((QDialog*)self, (QPaintEvent*)event);
}

void q_dialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnPaintEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_move_event(void* self, void* event) {
    QDialog_MoveEvent((QDialog*)self, (QMoveEvent*)event);
}

void q_dialog_qbase_move_event(void* self, void* event) {
    QDialog_QBaseMoveEvent((QDialog*)self, (QMoveEvent*)event);
}

void q_dialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnMoveEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_tablet_event(void* self, void* event) {
    QDialog_TabletEvent((QDialog*)self, (QTabletEvent*)event);
}

void q_dialog_qbase_tablet_event(void* self, void* event) {
    QDialog_QBaseTabletEvent((QDialog*)self, (QTabletEvent*)event);
}

void q_dialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnTabletEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_action_event(void* self, void* event) {
    QDialog_ActionEvent((QDialog*)self, (QActionEvent*)event);
}

void q_dialog_qbase_action_event(void* self, void* event) {
    QDialog_QBaseActionEvent((QDialog*)self, (QActionEvent*)event);
}

void q_dialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnActionEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_drag_enter_event(void* self, void* event) {
    QDialog_DragEnterEvent((QDialog*)self, (QDragEnterEvent*)event);
}

void q_dialog_qbase_drag_enter_event(void* self, void* event) {
    QDialog_QBaseDragEnterEvent((QDialog*)self, (QDragEnterEvent*)event);
}

void q_dialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnDragEnterEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_drag_move_event(void* self, void* event) {
    QDialog_DragMoveEvent((QDialog*)self, (QDragMoveEvent*)event);
}

void q_dialog_qbase_drag_move_event(void* self, void* event) {
    QDialog_QBaseDragMoveEvent((QDialog*)self, (QDragMoveEvent*)event);
}

void q_dialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnDragMoveEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_drag_leave_event(void* self, void* event) {
    QDialog_DragLeaveEvent((QDialog*)self, (QDragLeaveEvent*)event);
}

void q_dialog_qbase_drag_leave_event(void* self, void* event) {
    QDialog_QBaseDragLeaveEvent((QDialog*)self, (QDragLeaveEvent*)event);
}

void q_dialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnDragLeaveEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_drop_event(void* self, void* event) {
    QDialog_DropEvent((QDialog*)self, (QDropEvent*)event);
}

void q_dialog_qbase_drop_event(void* self, void* event) {
    QDialog_QBaseDropEvent((QDialog*)self, (QDropEvent*)event);
}

void q_dialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnDropEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_hide_event(void* self, void* event) {
    QDialog_HideEvent((QDialog*)self, (QHideEvent*)event);
}

void q_dialog_qbase_hide_event(void* self, void* event) {
    QDialog_QBaseHideEvent((QDialog*)self, (QHideEvent*)event);
}

void q_dialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnHideEvent((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDialog_NativeEvent((QDialog*)self, qstring(eventType), message, result);
}

bool q_dialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDialog_QBaseNativeEvent((QDialog*)self, qstring(eventType), message, result);
}

void q_dialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QDialog_OnNativeEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_change_event(void* self, void* param1) {
    QDialog_ChangeEvent((QDialog*)self, (QEvent*)param1);
}

void q_dialog_qbase_change_event(void* self, void* param1) {
    QDialog_QBaseChangeEvent((QDialog*)self, (QEvent*)param1);
}

void q_dialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnChangeEvent((QDialog*)self, (intptr_t)callback);
}

int32_t q_dialog_metric(void* self, int32_t param1) {
    return QDialog_Metric((QDialog*)self, param1);
}

int32_t q_dialog_qbase_metric(void* self, int32_t param1) {
    return QDialog_QBaseMetric((QDialog*)self, param1);
}

void q_dialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QDialog_OnMetric((QDialog*)self, (intptr_t)callback);
}

void q_dialog_init_painter(void* self, void* painter) {
    QDialog_InitPainter((QDialog*)self, (QPainter*)painter);
}

void q_dialog_qbase_init_painter(void* self, void* painter) {
    QDialog_QBaseInitPainter((QDialog*)self, (QPainter*)painter);
}

void q_dialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QDialog_OnInitPainter((QDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_dialog_redirected(void* self, void* offset) {
    return QDialog_Redirected((QDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_dialog_qbase_redirected(void* self, void* offset) {
    return QDialog_QBaseRedirected((QDialog*)self, (QPoint*)offset);
}

void q_dialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QDialog_OnRedirected((QDialog*)self, (intptr_t)callback);
}

QPainter* q_dialog_shared_painter(void* self) {
    return QDialog_SharedPainter((QDialog*)self);
}

QPainter* q_dialog_qbase_shared_painter(void* self) {
    return QDialog_QBaseSharedPainter((QDialog*)self);
}

void q_dialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QDialog_OnSharedPainter((QDialog*)self, (intptr_t)callback);
}

void q_dialog_input_method_event(void* self, void* param1) {
    QDialog_InputMethodEvent((QDialog*)self, (QInputMethodEvent*)param1);
}

void q_dialog_qbase_input_method_event(void* self, void* param1) {
    QDialog_QBaseInputMethodEvent((QDialog*)self, (QInputMethodEvent*)param1);
}

void q_dialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnInputMethodEvent((QDialog*)self, (intptr_t)callback);
}

QVariant* q_dialog_input_method_query(void* self, int64_t param1) {
    return QDialog_InputMethodQuery((QDialog*)self, param1);
}

QVariant* q_dialog_qbase_input_method_query(void* self, int64_t param1) {
    return QDialog_QBaseInputMethodQuery((QDialog*)self, param1);
}

void q_dialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QDialog_OnInputMethodQuery((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_focus_next_prev_child(void* self, bool next) {
    return QDialog_FocusNextPrevChild((QDialog*)self, next);
}

bool q_dialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QDialog_QBaseFocusNextPrevChild((QDialog*)self, next);
}

void q_dialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QDialog_OnFocusNextPrevChild((QDialog*)self, (intptr_t)callback);
}

void q_dialog_timer_event(void* self, void* event) {
    QDialog_TimerEvent((QDialog*)self, (QTimerEvent*)event);
}

void q_dialog_qbase_timer_event(void* self, void* event) {
    QDialog_QBaseTimerEvent((QDialog*)self, (QTimerEvent*)event);
}

void q_dialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnTimerEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_child_event(void* self, void* event) {
    QDialog_ChildEvent((QDialog*)self, (QChildEvent*)event);
}

void q_dialog_qbase_child_event(void* self, void* event) {
    QDialog_QBaseChildEvent((QDialog*)self, (QChildEvent*)event);
}

void q_dialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnChildEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_custom_event(void* self, void* event) {
    QDialog_CustomEvent((QDialog*)self, (QEvent*)event);
}

void q_dialog_qbase_custom_event(void* self, void* event) {
    QDialog_QBaseCustomEvent((QDialog*)self, (QEvent*)event);
}

void q_dialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDialog_OnCustomEvent((QDialog*)self, (intptr_t)callback);
}

void q_dialog_connect_notify(void* self, void* signal) {
    QDialog_ConnectNotify((QDialog*)self, (QMetaMethod*)signal);
}

void q_dialog_qbase_connect_notify(void* self, void* signal) {
    QDialog_QBaseConnectNotify((QDialog*)self, (QMetaMethod*)signal);
}

void q_dialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDialog_OnConnectNotify((QDialog*)self, (intptr_t)callback);
}

void q_dialog_disconnect_notify(void* self, void* signal) {
    QDialog_DisconnectNotify((QDialog*)self, (QMetaMethod*)signal);
}

void q_dialog_qbase_disconnect_notify(void* self, void* signal) {
    QDialog_QBaseDisconnectNotify((QDialog*)self, (QMetaMethod*)signal);
}

void q_dialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDialog_OnDisconnectNotify((QDialog*)self, (intptr_t)callback);
}

void q_dialog_update_micro_focus(void* self) {
    QDialog_UpdateMicroFocus((QDialog*)self);
}

void q_dialog_qbase_update_micro_focus(void* self) {
    QDialog_QBaseUpdateMicroFocus((QDialog*)self);
}

void q_dialog_on_update_micro_focus(void* self, void (*callback)()) {
    QDialog_OnUpdateMicroFocus((QDialog*)self, (intptr_t)callback);
}

void q_dialog_create(void* self) {
    QDialog_Create((QDialog*)self);
}

void q_dialog_qbase_create(void* self) {
    QDialog_QBaseCreate((QDialog*)self);
}

void q_dialog_on_create(void* self, void (*callback)()) {
    QDialog_OnCreate((QDialog*)self, (intptr_t)callback);
}

void q_dialog_destroy(void* self) {
    QDialog_Destroy((QDialog*)self);
}

void q_dialog_qbase_destroy(void* self) {
    QDialog_QBaseDestroy((QDialog*)self);
}

void q_dialog_on_destroy(void* self, void (*callback)()) {
    QDialog_OnDestroy((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_focus_next_child(void* self) {
    return QDialog_FocusNextChild((QDialog*)self);
}

bool q_dialog_qbase_focus_next_child(void* self) {
    return QDialog_QBaseFocusNextChild((QDialog*)self);
}

void q_dialog_on_focus_next_child(void* self, bool (*callback)()) {
    QDialog_OnFocusNextChild((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_focus_previous_child(void* self) {
    return QDialog_FocusPreviousChild((QDialog*)self);
}

bool q_dialog_qbase_focus_previous_child(void* self) {
    return QDialog_QBaseFocusPreviousChild((QDialog*)self);
}

void q_dialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QDialog_OnFocusPreviousChild((QDialog*)self, (intptr_t)callback);
}

QObject* q_dialog_sender(void* self) {
    return QDialog_Sender((QDialog*)self);
}

QObject* q_dialog_qbase_sender(void* self) {
    return QDialog_QBaseSender((QDialog*)self);
}

void q_dialog_on_sender(void* self, QObject* (*callback)()) {
    QDialog_OnSender((QDialog*)self, (intptr_t)callback);
}

int32_t q_dialog_sender_signal_index(void* self) {
    return QDialog_SenderSignalIndex((QDialog*)self);
}

int32_t q_dialog_qbase_sender_signal_index(void* self) {
    return QDialog_QBaseSenderSignalIndex((QDialog*)self);
}

void q_dialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDialog_OnSenderSignalIndex((QDialog*)self, (intptr_t)callback);
}

int32_t q_dialog_receivers(void* self, const char* signal) {
    return QDialog_Receivers((QDialog*)self, signal);
}

int32_t q_dialog_qbase_receivers(void* self, const char* signal) {
    return QDialog_QBaseReceivers((QDialog*)self, signal);
}

void q_dialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDialog_OnReceivers((QDialog*)self, (intptr_t)callback);
}

bool q_dialog_is_signal_connected(void* self, void* signal) {
    return QDialog_IsSignalConnected((QDialog*)self, (QMetaMethod*)signal);
}

bool q_dialog_qbase_is_signal_connected(void* self, void* signal) {
    return QDialog_QBaseIsSignalConnected((QDialog*)self, (QMetaMethod*)signal);
}

void q_dialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDialog_OnIsSignalConnected((QDialog*)self, (intptr_t)callback);
}

double q_dialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDialog_GetDecodedMetricF((QDialog*)self, metricA, metricB);
}

double q_dialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDialog_QBaseGetDecodedMetricF((QDialog*)self, metricA, metricB);
}

void q_dialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QDialog_OnGetDecodedMetricF((QDialog*)self, (intptr_t)callback);
}

void q_dialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dialog_delete(void* self) {
    QDialog_Delete((QDialog*)(self));
}
