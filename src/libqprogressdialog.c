#include "libqevent.hpp"
#include "libqdialog.hpp"
#include "libqlabel.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqprogressbar.hpp"
#include "libqpushbutton.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqprogressdialog.hpp"
#include "libqprogressdialog.h"

QProgressDialog* q_progressdialog_new(void* parent) {
    return QProgressDialog_new((QWidget*)parent);
}

QProgressDialog* q_progressdialog_new2() {
    return QProgressDialog_new2();
}

QProgressDialog* q_progressdialog_new3(const char* labelText, const char* cancelButtonText, int minimum, int maximum) {
    return QProgressDialog_new3(qstring(labelText), qstring(cancelButtonText), minimum, maximum);
}

QProgressDialog* q_progressdialog_new4(void* parent, int64_t flags) {
    return QProgressDialog_new4((QWidget*)parent, flags);
}

QProgressDialog* q_progressdialog_new5(const char* labelText, const char* cancelButtonText, int minimum, int maximum, void* parent) {
    return QProgressDialog_new5(qstring(labelText), qstring(cancelButtonText), minimum, maximum, (QWidget*)parent);
}

QProgressDialog* q_progressdialog_new6(const char* labelText, const char* cancelButtonText, int minimum, int maximum, void* parent, int64_t flags) {
    return QProgressDialog_new6(qstring(labelText), qstring(cancelButtonText), minimum, maximum, (QWidget*)parent, flags);
}

const QMetaObject* q_progressdialog_meta_object(void* self) {
    return QProgressDialog_MetaObject((QProgressDialog*)self);
}

void* q_progressdialog_metacast(void* self, const char* param1) {
    return QProgressDialog_Metacast((QProgressDialog*)self, param1);
}

int32_t q_progressdialog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProgressDialog_Metacall((QProgressDialog*)self, param1, param2, param3);
}

void q_progressdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QProgressDialog_OnMetacall((QProgressDialog*)self, (intptr_t)slot);
}

int32_t q_progressdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProgressDialog_QBaseMetacall((QProgressDialog*)self, param1, param2, param3);
}

const char* q_progressdialog_tr(const char* s) {
    libqt_string _str = QProgressDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_label(void* self, void* label) {
    QProgressDialog_SetLabel((QProgressDialog*)self, (QLabel*)label);
}

void q_progressdialog_set_cancel_button(void* self, void* button) {
    QProgressDialog_SetCancelButton((QProgressDialog*)self, (QPushButton*)button);
}

void q_progressdialog_set_bar(void* self, void* bar) {
    QProgressDialog_SetBar((QProgressDialog*)self, (QProgressBar*)bar);
}

bool q_progressdialog_was_canceled(void* self) {
    return QProgressDialog_WasCanceled((QProgressDialog*)self);
}

int32_t q_progressdialog_minimum(void* self) {
    return QProgressDialog_Minimum((QProgressDialog*)self);
}

int32_t q_progressdialog_maximum(void* self) {
    return QProgressDialog_Maximum((QProgressDialog*)self);
}

int32_t q_progressdialog_value(void* self) {
    return QProgressDialog_Value((QProgressDialog*)self);
}

QSize* q_progressdialog_size_hint(void* self) {
    return QProgressDialog_SizeHint((QProgressDialog*)self);
}

void q_progressdialog_on_size_hint(void* self, QSize* (*slot)()) {
    QProgressDialog_OnSizeHint((QProgressDialog*)self, (intptr_t)slot);
}

QSize* q_progressdialog_qbase_size_hint(void* self) {
    return QProgressDialog_QBaseSizeHint((QProgressDialog*)self);
}

const char* q_progressdialog_label_text(void* self) {
    libqt_string _str = QProgressDialog_LabelText((QProgressDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_progressdialog_minimum_duration(void* self) {
    return QProgressDialog_MinimumDuration((QProgressDialog*)self);
}

void q_progressdialog_set_auto_reset(void* self, bool reset) {
    QProgressDialog_SetAutoReset((QProgressDialog*)self, reset);
}

bool q_progressdialog_auto_reset(void* self) {
    return QProgressDialog_AutoReset((QProgressDialog*)self);
}

void q_progressdialog_set_auto_close(void* self, bool close) {
    QProgressDialog_SetAutoClose((QProgressDialog*)self, close);
}

bool q_progressdialog_auto_close(void* self) {
    return QProgressDialog_AutoClose((QProgressDialog*)self);
}

void q_progressdialog_cancel(void* self) {
    QProgressDialog_Cancel((QProgressDialog*)self);
}

void q_progressdialog_reset(void* self) {
    QProgressDialog_Reset((QProgressDialog*)self);
}

void q_progressdialog_set_maximum(void* self, int maximum) {
    QProgressDialog_SetMaximum((QProgressDialog*)self, maximum);
}

void q_progressdialog_set_minimum(void* self, int minimum) {
    QProgressDialog_SetMinimum((QProgressDialog*)self, minimum);
}

void q_progressdialog_set_range(void* self, int minimum, int maximum) {
    QProgressDialog_SetRange((QProgressDialog*)self, minimum, maximum);
}

void q_progressdialog_set_value(void* self, int progress) {
    QProgressDialog_SetValue((QProgressDialog*)self, progress);
}

void q_progressdialog_set_label_text(void* self, const char* text) {
    QProgressDialog_SetLabelText((QProgressDialog*)self, qstring(text));
}

void q_progressdialog_set_cancel_button_text(void* self, const char* text) {
    QProgressDialog_SetCancelButtonText((QProgressDialog*)self, qstring(text));
}

void q_progressdialog_set_minimum_duration(void* self, int ms) {
    QProgressDialog_SetMinimumDuration((QProgressDialog*)self, ms);
}

void q_progressdialog_canceled(void* self) {
    QProgressDialog_Canceled((QProgressDialog*)self);
}

void q_progressdialog_on_canceled(void* self, void (*slot)(void*)) {
    QProgressDialog_Connect_Canceled((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_resize_event(void* self, void* event) {
    QProgressDialog_ResizeEvent((QProgressDialog*)self, (QResizeEvent*)event);
}

void q_progressdialog_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnResizeEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_qbase_resize_event(void* self, void* event) {
    QProgressDialog_QBaseResizeEvent((QProgressDialog*)self, (QResizeEvent*)event);
}

void q_progressdialog_close_event(void* self, void* event) {
    QProgressDialog_CloseEvent((QProgressDialog*)self, (QCloseEvent*)event);
}

void q_progressdialog_on_close_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnCloseEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_qbase_close_event(void* self, void* event) {
    QProgressDialog_QBaseCloseEvent((QProgressDialog*)self, (QCloseEvent*)event);
}

void q_progressdialog_change_event(void* self, void* event) {
    QProgressDialog_ChangeEvent((QProgressDialog*)self, (QEvent*)event);
}

void q_progressdialog_on_change_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnChangeEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_qbase_change_event(void* self, void* event) {
    QProgressDialog_QBaseChangeEvent((QProgressDialog*)self, (QEvent*)event);
}

void q_progressdialog_show_event(void* self, void* event) {
    QProgressDialog_ShowEvent((QProgressDialog*)self, (QShowEvent*)event);
}

void q_progressdialog_on_show_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnShowEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_qbase_show_event(void* self, void* event) {
    QProgressDialog_QBaseShowEvent((QProgressDialog*)self, (QShowEvent*)event);
}

void q_progressdialog_force_show(void* self) {
    QProgressDialog_ForceShow((QProgressDialog*)self);
}

void q_progressdialog_on_force_show(void* self, void (*slot)()) {
    QProgressDialog_OnForceShow((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_qbase_force_show(void* self) {
    QProgressDialog_QBaseForceShow((QProgressDialog*)self);
}

const char* q_progressdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QProgressDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_progressdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QProgressDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_progressdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_progressdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_progressdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_progressdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_progressdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_progressdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_progressdialog_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

void q_progressdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_progressdialog_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

void q_progressdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_progressdialog_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

uintptr_t q_progressdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_progressdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_progressdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_progressdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_progressdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_progressdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_progressdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_progressdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_progressdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_progressdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_progressdialog_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_progressdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_progressdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_progressdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_progressdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_progressdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_progressdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_progressdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_progressdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_progressdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_progressdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_progressdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_progressdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_progressdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_progressdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_progressdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_progressdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_progressdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_progressdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_progressdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_progressdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_progressdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_progressdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_progressdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_progressdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_progressdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_progressdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_progressdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_progressdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_progressdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_progressdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_progressdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_progressdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_progressdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_progressdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_progressdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_progressdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_progressdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_progressdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_progressdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_progressdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_progressdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_progressdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_progressdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_progressdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_progressdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_progressdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_progressdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_progressdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_progressdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_progressdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_progressdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_progressdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_progressdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_progressdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_progressdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_progressdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_progressdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_progressdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_progressdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_progressdialog_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_progressdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_progressdialog_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_progressdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_progressdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_progressdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_progressdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_progressdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_progressdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_progressdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_progressdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_progressdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_progressdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_progressdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_progressdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_progressdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_progressdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_progressdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_progressdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_progressdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_progressdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_progressdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_progressdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_progressdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_progressdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_progressdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_progressdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_progressdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_progressdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_progressdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_progressdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_progressdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_progressdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_progressdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_progressdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_progressdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_progressdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_progressdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_progressdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_progressdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_progressdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_progressdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_progressdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_progressdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_progressdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_progressdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_progressdialog_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_progressdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_progressdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_progressdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_progressdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_progressdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_progressdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_progressdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_progressdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_progressdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_progressdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_progressdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_progressdialog_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_progressdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_progressdialog_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_progressdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_progressdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_progressdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_progressdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_progressdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_progressdialog_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_progressdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_progressdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_progressdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_progressdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_progressdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_progressdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_progressdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_progressdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_progressdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_progressdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_progressdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_progressdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_progressdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_progressdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_progressdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_progressdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_progressdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_progressdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_progressdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_progressdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_progressdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_progressdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_progressdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_progressdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_progressdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_progressdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_progressdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_progressdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_progressdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_progressdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_progressdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_progressdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_progressdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_progressdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_progressdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_progressdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_progressdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_progressdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_progressdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_progressdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_progressdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_progressdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_progressdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_progressdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_progressdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_progressdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_progressdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_progressdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_progressdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_progressdialog_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_progressdialog_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_progressdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_progressdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_progressdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_progressdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_progressdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_progressdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_progressdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_progressdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_progressdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_progressdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_progressdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_progressdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_progressdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_progressdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_progressdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_progressdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_progressdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_progressdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_progressdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_progressdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_progressdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_progressdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_progressdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_progressdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_progressdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_progressdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_progressdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_progressdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_progressdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_progressdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_progressdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_progressdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_progressdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_progressdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_progressdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_progressdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_progressdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_progressdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_progressdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_progressdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_progressdialog_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_progressdialog_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_progressdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_progressdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_progressdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_progressdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_progressdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_progressdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_progressdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_progressdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_progressdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_progressdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_progressdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_progressdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_progressdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_progressdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_progressdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_progressdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_progressdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_progressdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_progressdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_progressdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_progressdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_progressdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_progressdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_progressdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_progressdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_progressdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_progressdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_progressdialog_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_progressdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_progressdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_progressdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_progressdialog_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_progressdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_progressdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_progressdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_progressdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_progressdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_progressdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_progressdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_progressdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_progressdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_progressdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_progressdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_progressdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_progressdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_progressdialog_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_progressdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_progressdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_progressdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_progressdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_progressdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_progressdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_progressdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_progressdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_progressdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_progressdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_progressdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_progressdialog_dynamic_property_names(void* self) {
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

QBindingStorage* q_progressdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_progressdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_progressdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_progressdialog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_progressdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_progressdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_progressdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_progressdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_progressdialog_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_progressdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_progressdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_progressdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_progressdialog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_progressdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_progressdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_progressdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_progressdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_progressdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_progressdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_progressdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_progressdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_progressdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_progressdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_progressdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_progressdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_progressdialog_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_progressdialog_set_visible(void* self, bool visible) {
    QProgressDialog_SetVisible((QProgressDialog*)self, visible);
}

void q_progressdialog_qbase_set_visible(void* self, bool visible) {
    QProgressDialog_QBaseSetVisible((QProgressDialog*)self, visible);
}

void q_progressdialog_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QProgressDialog_OnSetVisible((QProgressDialog*)self, (intptr_t)slot);
}

QSize* q_progressdialog_minimum_size_hint(void* self) {
    return QProgressDialog_MinimumSizeHint((QProgressDialog*)self);
}

QSize* q_progressdialog_qbase_minimum_size_hint(void* self) {
    return QProgressDialog_QBaseMinimumSizeHint((QProgressDialog*)self);
}

void q_progressdialog_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QProgressDialog_OnMinimumSizeHint((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_open(void* self) {
    QProgressDialog_Open((QProgressDialog*)self);
}

void q_progressdialog_qbase_open(void* self) {
    QProgressDialog_QBaseOpen((QProgressDialog*)self);
}

void q_progressdialog_on_open(void* self, void (*slot)()) {
    QProgressDialog_OnOpen((QProgressDialog*)self, (intptr_t)slot);
}

int32_t q_progressdialog_exec(void* self) {
    return QProgressDialog_Exec((QProgressDialog*)self);
}

int32_t q_progressdialog_qbase_exec(void* self) {
    return QProgressDialog_QBaseExec((QProgressDialog*)self);
}

void q_progressdialog_on_exec(void* self, int32_t (*slot)()) {
    QProgressDialog_OnExec((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_done(void* self, int param1) {
    QProgressDialog_Done((QProgressDialog*)self, param1);
}

void q_progressdialog_qbase_done(void* self, int param1) {
    QProgressDialog_QBaseDone((QProgressDialog*)self, param1);
}

void q_progressdialog_on_done(void* self, void (*slot)(void*, int)) {
    QProgressDialog_OnDone((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_accept(void* self) {
    QProgressDialog_Accept((QProgressDialog*)self);
}

void q_progressdialog_qbase_accept(void* self) {
    QProgressDialog_QBaseAccept((QProgressDialog*)self);
}

void q_progressdialog_on_accept(void* self, void (*slot)()) {
    QProgressDialog_OnAccept((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_reject(void* self) {
    QProgressDialog_Reject((QProgressDialog*)self);
}

void q_progressdialog_qbase_reject(void* self) {
    QProgressDialog_QBaseReject((QProgressDialog*)self);
}

void q_progressdialog_on_reject(void* self, void (*slot)()) {
    QProgressDialog_OnReject((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_key_press_event(void* self, void* param1) {
    QProgressDialog_KeyPressEvent((QProgressDialog*)self, (QKeyEvent*)param1);
}

void q_progressdialog_qbase_key_press_event(void* self, void* param1) {
    QProgressDialog_QBaseKeyPressEvent((QProgressDialog*)self, (QKeyEvent*)param1);
}

void q_progressdialog_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnKeyPressEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_context_menu_event(void* self, void* param1) {
    QProgressDialog_ContextMenuEvent((QProgressDialog*)self, (QContextMenuEvent*)param1);
}

void q_progressdialog_qbase_context_menu_event(void* self, void* param1) {
    QProgressDialog_QBaseContextMenuEvent((QProgressDialog*)self, (QContextMenuEvent*)param1);
}

void q_progressdialog_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnContextMenuEvent((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_event_filter(void* self, void* param1, void* param2) {
    return QProgressDialog_EventFilter((QProgressDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_progressdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QProgressDialog_QBaseEventFilter((QProgressDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_progressdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QProgressDialog_OnEventFilter((QProgressDialog*)self, (intptr_t)slot);
}

int32_t q_progressdialog_dev_type(void* self) {
    return QProgressDialog_DevType((QProgressDialog*)self);
}

int32_t q_progressdialog_qbase_dev_type(void* self) {
    return QProgressDialog_QBaseDevType((QProgressDialog*)self);
}

void q_progressdialog_on_dev_type(void* self, int32_t (*slot)()) {
    QProgressDialog_OnDevType((QProgressDialog*)self, (intptr_t)slot);
}

int32_t q_progressdialog_height_for_width(void* self, int param1) {
    return QProgressDialog_HeightForWidth((QProgressDialog*)self, param1);
}

int32_t q_progressdialog_qbase_height_for_width(void* self, int param1) {
    return QProgressDialog_QBaseHeightForWidth((QProgressDialog*)self, param1);
}

void q_progressdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QProgressDialog_OnHeightForWidth((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_has_height_for_width(void* self) {
    return QProgressDialog_HasHeightForWidth((QProgressDialog*)self);
}

bool q_progressdialog_qbase_has_height_for_width(void* self) {
    return QProgressDialog_QBaseHasHeightForWidth((QProgressDialog*)self);
}

void q_progressdialog_on_has_height_for_width(void* self, bool (*slot)()) {
    QProgressDialog_OnHasHeightForWidth((QProgressDialog*)self, (intptr_t)slot);
}

QPaintEngine* q_progressdialog_paint_engine(void* self) {
    return QProgressDialog_PaintEngine((QProgressDialog*)self);
}

QPaintEngine* q_progressdialog_qbase_paint_engine(void* self) {
    return QProgressDialog_QBasePaintEngine((QProgressDialog*)self);
}

void q_progressdialog_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QProgressDialog_OnPaintEngine((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_event(void* self, void* event) {
    return QProgressDialog_Event((QProgressDialog*)self, (QEvent*)event);
}

bool q_progressdialog_qbase_event(void* self, void* event) {
    return QProgressDialog_QBaseEvent((QProgressDialog*)self, (QEvent*)event);
}

void q_progressdialog_on_event(void* self, bool (*slot)(void*, void*)) {
    QProgressDialog_OnEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_mouse_press_event(void* self, void* event) {
    QProgressDialog_MousePressEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_qbase_mouse_press_event(void* self, void* event) {
    QProgressDialog_QBaseMousePressEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMousePressEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_mouse_release_event(void* self, void* event) {
    QProgressDialog_MouseReleaseEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_qbase_mouse_release_event(void* self, void* event) {
    QProgressDialog_QBaseMouseReleaseEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMouseReleaseEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_mouse_double_click_event(void* self, void* event) {
    QProgressDialog_MouseDoubleClickEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QProgressDialog_QBaseMouseDoubleClickEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMouseDoubleClickEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_mouse_move_event(void* self, void* event) {
    QProgressDialog_MouseMoveEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_qbase_mouse_move_event(void* self, void* event) {
    QProgressDialog_QBaseMouseMoveEvent((QProgressDialog*)self, (QMouseEvent*)event);
}

void q_progressdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMouseMoveEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_wheel_event(void* self, void* event) {
    QProgressDialog_WheelEvent((QProgressDialog*)self, (QWheelEvent*)event);
}

void q_progressdialog_qbase_wheel_event(void* self, void* event) {
    QProgressDialog_QBaseWheelEvent((QProgressDialog*)self, (QWheelEvent*)event);
}

void q_progressdialog_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnWheelEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_key_release_event(void* self, void* event) {
    QProgressDialog_KeyReleaseEvent((QProgressDialog*)self, (QKeyEvent*)event);
}

void q_progressdialog_qbase_key_release_event(void* self, void* event) {
    QProgressDialog_QBaseKeyReleaseEvent((QProgressDialog*)self, (QKeyEvent*)event);
}

void q_progressdialog_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnKeyReleaseEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_focus_in_event(void* self, void* event) {
    QProgressDialog_FocusInEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

void q_progressdialog_qbase_focus_in_event(void* self, void* event) {
    QProgressDialog_QBaseFocusInEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

void q_progressdialog_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnFocusInEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_focus_out_event(void* self, void* event) {
    QProgressDialog_FocusOutEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

void q_progressdialog_qbase_focus_out_event(void* self, void* event) {
    QProgressDialog_QBaseFocusOutEvent((QProgressDialog*)self, (QFocusEvent*)event);
}

void q_progressdialog_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnFocusOutEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_enter_event(void* self, void* event) {
    QProgressDialog_EnterEvent((QProgressDialog*)self, (QEnterEvent*)event);
}

void q_progressdialog_qbase_enter_event(void* self, void* event) {
    QProgressDialog_QBaseEnterEvent((QProgressDialog*)self, (QEnterEvent*)event);
}

void q_progressdialog_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnEnterEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_leave_event(void* self, void* event) {
    QProgressDialog_LeaveEvent((QProgressDialog*)self, (QEvent*)event);
}

void q_progressdialog_qbase_leave_event(void* self, void* event) {
    QProgressDialog_QBaseLeaveEvent((QProgressDialog*)self, (QEvent*)event);
}

void q_progressdialog_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnLeaveEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_paint_event(void* self, void* event) {
    QProgressDialog_PaintEvent((QProgressDialog*)self, (QPaintEvent*)event);
}

void q_progressdialog_qbase_paint_event(void* self, void* event) {
    QProgressDialog_QBasePaintEvent((QProgressDialog*)self, (QPaintEvent*)event);
}

void q_progressdialog_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnPaintEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_move_event(void* self, void* event) {
    QProgressDialog_MoveEvent((QProgressDialog*)self, (QMoveEvent*)event);
}

void q_progressdialog_qbase_move_event(void* self, void* event) {
    QProgressDialog_QBaseMoveEvent((QProgressDialog*)self, (QMoveEvent*)event);
}

void q_progressdialog_on_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnMoveEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_tablet_event(void* self, void* event) {
    QProgressDialog_TabletEvent((QProgressDialog*)self, (QTabletEvent*)event);
}

void q_progressdialog_qbase_tablet_event(void* self, void* event) {
    QProgressDialog_QBaseTabletEvent((QProgressDialog*)self, (QTabletEvent*)event);
}

void q_progressdialog_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnTabletEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_action_event(void* self, void* event) {
    QProgressDialog_ActionEvent((QProgressDialog*)self, (QActionEvent*)event);
}

void q_progressdialog_qbase_action_event(void* self, void* event) {
    QProgressDialog_QBaseActionEvent((QProgressDialog*)self, (QActionEvent*)event);
}

void q_progressdialog_on_action_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnActionEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_drag_enter_event(void* self, void* event) {
    QProgressDialog_DragEnterEvent((QProgressDialog*)self, (QDragEnterEvent*)event);
}

void q_progressdialog_qbase_drag_enter_event(void* self, void* event) {
    QProgressDialog_QBaseDragEnterEvent((QProgressDialog*)self, (QDragEnterEvent*)event);
}

void q_progressdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDragEnterEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_drag_move_event(void* self, void* event) {
    QProgressDialog_DragMoveEvent((QProgressDialog*)self, (QDragMoveEvent*)event);
}

void q_progressdialog_qbase_drag_move_event(void* self, void* event) {
    QProgressDialog_QBaseDragMoveEvent((QProgressDialog*)self, (QDragMoveEvent*)event);
}

void q_progressdialog_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDragMoveEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_drag_leave_event(void* self, void* event) {
    QProgressDialog_DragLeaveEvent((QProgressDialog*)self, (QDragLeaveEvent*)event);
}

void q_progressdialog_qbase_drag_leave_event(void* self, void* event) {
    QProgressDialog_QBaseDragLeaveEvent((QProgressDialog*)self, (QDragLeaveEvent*)event);
}

void q_progressdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDragLeaveEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_drop_event(void* self, void* event) {
    QProgressDialog_DropEvent((QProgressDialog*)self, (QDropEvent*)event);
}

void q_progressdialog_qbase_drop_event(void* self, void* event) {
    QProgressDialog_QBaseDropEvent((QProgressDialog*)self, (QDropEvent*)event);
}

void q_progressdialog_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDropEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_hide_event(void* self, void* event) {
    QProgressDialog_HideEvent((QProgressDialog*)self, (QHideEvent*)event);
}

void q_progressdialog_qbase_hide_event(void* self, void* event) {
    QProgressDialog_QBaseHideEvent((QProgressDialog*)self, (QHideEvent*)event);
}

void q_progressdialog_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnHideEvent((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QProgressDialog_NativeEvent((QProgressDialog*)self, qstring(eventType), message, result);
}

bool q_progressdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QProgressDialog_QBaseNativeEvent((QProgressDialog*)self, qstring(eventType), message, result);
}

void q_progressdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QProgressDialog_OnNativeEvent((QProgressDialog*)self, (intptr_t)slot);
}

int32_t q_progressdialog_metric(void* self, int64_t param1) {
    return QProgressDialog_Metric((QProgressDialog*)self, param1);
}

int32_t q_progressdialog_qbase_metric(void* self, int64_t param1) {
    return QProgressDialog_QBaseMetric((QProgressDialog*)self, param1);
}

void q_progressdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QProgressDialog_OnMetric((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_init_painter(void* self, void* painter) {
    QProgressDialog_InitPainter((QProgressDialog*)self, (QPainter*)painter);
}

void q_progressdialog_qbase_init_painter(void* self, void* painter) {
    QProgressDialog_QBaseInitPainter((QProgressDialog*)self, (QPainter*)painter);
}

void q_progressdialog_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnInitPainter((QProgressDialog*)self, (intptr_t)slot);
}

QPaintDevice* q_progressdialog_redirected(void* self, void* offset) {
    return QProgressDialog_Redirected((QProgressDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_progressdialog_qbase_redirected(void* self, void* offset) {
    return QProgressDialog_QBaseRedirected((QProgressDialog*)self, (QPoint*)offset);
}

void q_progressdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QProgressDialog_OnRedirected((QProgressDialog*)self, (intptr_t)slot);
}

QPainter* q_progressdialog_shared_painter(void* self) {
    return QProgressDialog_SharedPainter((QProgressDialog*)self);
}

QPainter* q_progressdialog_qbase_shared_painter(void* self) {
    return QProgressDialog_QBaseSharedPainter((QProgressDialog*)self);
}

void q_progressdialog_on_shared_painter(void* self, QPainter* (*slot)()) {
    QProgressDialog_OnSharedPainter((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_input_method_event(void* self, void* param1) {
    QProgressDialog_InputMethodEvent((QProgressDialog*)self, (QInputMethodEvent*)param1);
}

void q_progressdialog_qbase_input_method_event(void* self, void* param1) {
    QProgressDialog_QBaseInputMethodEvent((QProgressDialog*)self, (QInputMethodEvent*)param1);
}

void q_progressdialog_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnInputMethodEvent((QProgressDialog*)self, (intptr_t)slot);
}

QVariant* q_progressdialog_input_method_query(void* self, int64_t param1) {
    return QProgressDialog_InputMethodQuery((QProgressDialog*)self, param1);
}

QVariant* q_progressdialog_qbase_input_method_query(void* self, int64_t param1) {
    return QProgressDialog_QBaseInputMethodQuery((QProgressDialog*)self, param1);
}

void q_progressdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QProgressDialog_OnInputMethodQuery((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_focus_next_prev_child(void* self, bool next) {
    return QProgressDialog_FocusNextPrevChild((QProgressDialog*)self, next);
}

bool q_progressdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QProgressDialog_QBaseFocusNextPrevChild((QProgressDialog*)self, next);
}

void q_progressdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QProgressDialog_OnFocusNextPrevChild((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_timer_event(void* self, void* event) {
    QProgressDialog_TimerEvent((QProgressDialog*)self, (QTimerEvent*)event);
}

void q_progressdialog_qbase_timer_event(void* self, void* event) {
    QProgressDialog_QBaseTimerEvent((QProgressDialog*)self, (QTimerEvent*)event);
}

void q_progressdialog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnTimerEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_child_event(void* self, void* event) {
    QProgressDialog_ChildEvent((QProgressDialog*)self, (QChildEvent*)event);
}

void q_progressdialog_qbase_child_event(void* self, void* event) {
    QProgressDialog_QBaseChildEvent((QProgressDialog*)self, (QChildEvent*)event);
}

void q_progressdialog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnChildEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_custom_event(void* self, void* event) {
    QProgressDialog_CustomEvent((QProgressDialog*)self, (QEvent*)event);
}

void q_progressdialog_qbase_custom_event(void* self, void* event) {
    QProgressDialog_QBaseCustomEvent((QProgressDialog*)self, (QEvent*)event);
}

void q_progressdialog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnCustomEvent((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_connect_notify(void* self, void* signal) {
    QProgressDialog_ConnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

void q_progressdialog_qbase_connect_notify(void* self, void* signal) {
    QProgressDialog_QBaseConnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

void q_progressdialog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnConnectNotify((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_disconnect_notify(void* self, void* signal) {
    QProgressDialog_DisconnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

void q_progressdialog_qbase_disconnect_notify(void* self, void* signal) {
    QProgressDialog_QBaseDisconnectNotify((QProgressDialog*)self, (QMetaMethod*)signal);
}

void q_progressdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnDisconnectNotify((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_adjust_position(void* self, void* param1) {
    QProgressDialog_AdjustPosition((QProgressDialog*)self, (QWidget*)param1);
}

void q_progressdialog_qbase_adjust_position(void* self, void* param1) {
    QProgressDialog_QBaseAdjustPosition((QProgressDialog*)self, (QWidget*)param1);
}

void q_progressdialog_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QProgressDialog_OnAdjustPosition((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_update_micro_focus(void* self) {
    QProgressDialog_UpdateMicroFocus((QProgressDialog*)self);
}

void q_progressdialog_qbase_update_micro_focus(void* self) {
    QProgressDialog_QBaseUpdateMicroFocus((QProgressDialog*)self);
}

void q_progressdialog_on_update_micro_focus(void* self, void (*slot)()) {
    QProgressDialog_OnUpdateMicroFocus((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_create(void* self) {
    QProgressDialog_Create((QProgressDialog*)self);
}

void q_progressdialog_qbase_create(void* self) {
    QProgressDialog_QBaseCreate((QProgressDialog*)self);
}

void q_progressdialog_on_create(void* self, void (*slot)()) {
    QProgressDialog_OnCreate((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_destroy(void* self) {
    QProgressDialog_Destroy((QProgressDialog*)self);
}

void q_progressdialog_qbase_destroy(void* self) {
    QProgressDialog_QBaseDestroy((QProgressDialog*)self);
}

void q_progressdialog_on_destroy(void* self, void (*slot)()) {
    QProgressDialog_OnDestroy((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_focus_next_child(void* self) {
    return QProgressDialog_FocusNextChild((QProgressDialog*)self);
}

bool q_progressdialog_qbase_focus_next_child(void* self) {
    return QProgressDialog_QBaseFocusNextChild((QProgressDialog*)self);
}

void q_progressdialog_on_focus_next_child(void* self, bool (*slot)()) {
    QProgressDialog_OnFocusNextChild((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_focus_previous_child(void* self) {
    return QProgressDialog_FocusPreviousChild((QProgressDialog*)self);
}

bool q_progressdialog_qbase_focus_previous_child(void* self) {
    return QProgressDialog_QBaseFocusPreviousChild((QProgressDialog*)self);
}

void q_progressdialog_on_focus_previous_child(void* self, bool (*slot)()) {
    QProgressDialog_OnFocusPreviousChild((QProgressDialog*)self, (intptr_t)slot);
}

QObject* q_progressdialog_sender(void* self) {
    return QProgressDialog_Sender((QProgressDialog*)self);
}

QObject* q_progressdialog_qbase_sender(void* self) {
    return QProgressDialog_QBaseSender((QProgressDialog*)self);
}

void q_progressdialog_on_sender(void* self, QObject* (*slot)()) {
    QProgressDialog_OnSender((QProgressDialog*)self, (intptr_t)slot);
}

int32_t q_progressdialog_sender_signal_index(void* self) {
    return QProgressDialog_SenderSignalIndex((QProgressDialog*)self);
}

int32_t q_progressdialog_qbase_sender_signal_index(void* self) {
    return QProgressDialog_QBaseSenderSignalIndex((QProgressDialog*)self);
}

void q_progressdialog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QProgressDialog_OnSenderSignalIndex((QProgressDialog*)self, (intptr_t)slot);
}

int32_t q_progressdialog_receivers(void* self, const char* signal) {
    return QProgressDialog_Receivers((QProgressDialog*)self, signal);
}

int32_t q_progressdialog_qbase_receivers(void* self, const char* signal) {
    return QProgressDialog_QBaseReceivers((QProgressDialog*)self, signal);
}

void q_progressdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QProgressDialog_OnReceivers((QProgressDialog*)self, (intptr_t)slot);
}

bool q_progressdialog_is_signal_connected(void* self, void* signal) {
    return QProgressDialog_IsSignalConnected((QProgressDialog*)self, (QMetaMethod*)signal);
}

bool q_progressdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QProgressDialog_QBaseIsSignalConnected((QProgressDialog*)self, (QMetaMethod*)signal);
}

void q_progressdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QProgressDialog_OnIsSignalConnected((QProgressDialog*)self, (intptr_t)slot);
}

double q_progressdialog_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QProgressDialog_GetDecodedMetricF((QProgressDialog*)self, metricA, metricB);
}

double q_progressdialog_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QProgressDialog_QBaseGetDecodedMetricF((QProgressDialog*)self, metricA, metricB);
}

void q_progressdialog_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QProgressDialog_OnGetDecodedMetricF((QProgressDialog*)self, (intptr_t)slot);
}

void q_progressdialog_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_progressdialog_delete(void* self) {
    QProgressDialog_Delete((QProgressDialog*)(self));
}
