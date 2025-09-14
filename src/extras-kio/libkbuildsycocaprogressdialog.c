#include "../libqdialog.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqprogressdialog.hpp"
#include "../libqwidget.hpp"
#include "libkbuildsycocaprogressdialog.hpp"
#include "libkbuildsycocaprogressdialog.h"

const QMetaObject* k_buildsycocaprogressdialog_meta_object(void* self) {
    return KBuildSycocaProgressDialog_MetaObject((KBuildSycocaProgressDialog*)self);
}

void* k_buildsycocaprogressdialog_metacast(void* self, const char* param1) {
    return KBuildSycocaProgressDialog_Metacast((KBuildSycocaProgressDialog*)self, param1);
}

int32_t k_buildsycocaprogressdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KBuildSycocaProgressDialog_Metacall((KBuildSycocaProgressDialog*)self, param1, param2, param3);
}

const char* k_buildsycocaprogressdialog_tr(const char* s) {
    libqt_string _str = KBuildSycocaProgressDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_rebuild_k_sycoca(void* parent) {
    KBuildSycocaProgressDialog_RebuildKSycoca((QWidget*)parent);
}

const char* k_buildsycocaprogressdialog_tr2(const char* s, const char* c) {
    libqt_string _str = KBuildSycocaProgressDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_buildsycocaprogressdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KBuildSycocaProgressDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_label(void* self, void* label) {
    QProgressDialog_SetLabel((QProgressDialog*)self, (QLabel*)label);
}

void k_buildsycocaprogressdialog_set_cancel_button(void* self, void* button) {
    QProgressDialog_SetCancelButton((QProgressDialog*)self, (QPushButton*)button);
}

void k_buildsycocaprogressdialog_set_bar(void* self, void* bar) {
    QProgressDialog_SetBar((QProgressDialog*)self, (QProgressBar*)bar);
}

bool k_buildsycocaprogressdialog_was_canceled(void* self) {
    return QProgressDialog_WasCanceled((QProgressDialog*)self);
}

int32_t k_buildsycocaprogressdialog_minimum(void* self) {
    return QProgressDialog_Minimum((QProgressDialog*)self);
}

int32_t k_buildsycocaprogressdialog_maximum(void* self) {
    return QProgressDialog_Maximum((QProgressDialog*)self);
}

int32_t k_buildsycocaprogressdialog_value(void* self) {
    return QProgressDialog_Value((QProgressDialog*)self);
}

QSize* k_buildsycocaprogressdialog_size_hint(void* self) {
    return QProgressDialog_SizeHint((QProgressDialog*)self);
}

const char* k_buildsycocaprogressdialog_label_text(void* self) {
    libqt_string _str = QProgressDialog_LabelText((QProgressDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_buildsycocaprogressdialog_minimum_duration(void* self) {
    return QProgressDialog_MinimumDuration((QProgressDialog*)self);
}

void k_buildsycocaprogressdialog_set_auto_reset(void* self, bool reset) {
    QProgressDialog_SetAutoReset((QProgressDialog*)self, reset);
}

bool k_buildsycocaprogressdialog_auto_reset(void* self) {
    return QProgressDialog_AutoReset((QProgressDialog*)self);
}

void k_buildsycocaprogressdialog_set_auto_close(void* self, bool close) {
    QProgressDialog_SetAutoClose((QProgressDialog*)self, close);
}

bool k_buildsycocaprogressdialog_auto_close(void* self) {
    return QProgressDialog_AutoClose((QProgressDialog*)self);
}

void k_buildsycocaprogressdialog_cancel(void* self) {
    QProgressDialog_Cancel((QProgressDialog*)self);
}

void k_buildsycocaprogressdialog_reset(void* self) {
    QProgressDialog_Reset((QProgressDialog*)self);
}

void k_buildsycocaprogressdialog_set_maximum(void* self, int maximum) {
    QProgressDialog_SetMaximum((QProgressDialog*)self, maximum);
}

void k_buildsycocaprogressdialog_set_minimum(void* self, int minimum) {
    QProgressDialog_SetMinimum((QProgressDialog*)self, minimum);
}

void k_buildsycocaprogressdialog_set_range(void* self, int minimum, int maximum) {
    QProgressDialog_SetRange((QProgressDialog*)self, minimum, maximum);
}

void k_buildsycocaprogressdialog_set_value(void* self, int progress) {
    QProgressDialog_SetValue((QProgressDialog*)self, progress);
}

void k_buildsycocaprogressdialog_set_label_text(void* self, const char* text) {
    QProgressDialog_SetLabelText((QProgressDialog*)self, qstring(text));
}

void k_buildsycocaprogressdialog_set_cancel_button_text(void* self, const char* text) {
    QProgressDialog_SetCancelButtonText((QProgressDialog*)self, qstring(text));
}

void k_buildsycocaprogressdialog_set_minimum_duration(void* self, int ms) {
    QProgressDialog_SetMinimumDuration((QProgressDialog*)self, ms);
}

void k_buildsycocaprogressdialog_canceled(void* self) {
    QProgressDialog_Canceled((QProgressDialog*)self);
}

void k_buildsycocaprogressdialog_on_canceled(void* self, void (*callback)(void*)) {
    QProgressDialog_Connect_Canceled((QProgressDialog*)self, (intptr_t)callback);
}

int32_t k_buildsycocaprogressdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_buildsycocaprogressdialog_set_visible(void* self, bool visible) {
    QDialog_SetVisible((QDialog*)self, visible);
}

QSize* k_buildsycocaprogressdialog_minimum_size_hint(void* self) {
    return QDialog_MinimumSizeHint((QDialog*)self);
}

void k_buildsycocaprogressdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_buildsycocaprogressdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_buildsycocaprogressdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_buildsycocaprogressdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_buildsycocaprogressdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_buildsycocaprogressdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_buildsycocaprogressdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_buildsycocaprogressdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_buildsycocaprogressdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_buildsycocaprogressdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

void k_buildsycocaprogressdialog_open(void* self) {
    QDialog_Open((QDialog*)self);
}

int32_t k_buildsycocaprogressdialog_exec(void* self) {
    return QDialog_Exec((QDialog*)self);
}

void k_buildsycocaprogressdialog_done(void* self, int param1) {
    QDialog_Done((QDialog*)self, param1);
}

void k_buildsycocaprogressdialog_accept(void* self) {
    QDialog_Accept((QDialog*)self);
}

void k_buildsycocaprogressdialog_reject(void* self) {
    QDialog_Reject((QDialog*)self);
}

int32_t k_buildsycocaprogressdialog_dev_type(void* self) {
    return QWidget_DevType((QWidget*)self);
}

uintptr_t k_buildsycocaprogressdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_buildsycocaprogressdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_buildsycocaprogressdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_buildsycocaprogressdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_buildsycocaprogressdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_buildsycocaprogressdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_buildsycocaprogressdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_buildsycocaprogressdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_buildsycocaprogressdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_buildsycocaprogressdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_buildsycocaprogressdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_buildsycocaprogressdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_buildsycocaprogressdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_buildsycocaprogressdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_buildsycocaprogressdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_buildsycocaprogressdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_buildsycocaprogressdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_buildsycocaprogressdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_buildsycocaprogressdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_buildsycocaprogressdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_buildsycocaprogressdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_buildsycocaprogressdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_buildsycocaprogressdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_buildsycocaprogressdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_buildsycocaprogressdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_buildsycocaprogressdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_buildsycocaprogressdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_buildsycocaprogressdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_buildsycocaprogressdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_buildsycocaprogressdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_buildsycocaprogressdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_buildsycocaprogressdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_buildsycocaprogressdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_buildsycocaprogressdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_buildsycocaprogressdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_buildsycocaprogressdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_buildsycocaprogressdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_buildsycocaprogressdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_buildsycocaprogressdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_buildsycocaprogressdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_buildsycocaprogressdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_buildsycocaprogressdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_buildsycocaprogressdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_buildsycocaprogressdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_buildsycocaprogressdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_buildsycocaprogressdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_buildsycocaprogressdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_buildsycocaprogressdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_buildsycocaprogressdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_buildsycocaprogressdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_buildsycocaprogressdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_buildsycocaprogressdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_buildsycocaprogressdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_buildsycocaprogressdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_buildsycocaprogressdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_buildsycocaprogressdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_buildsycocaprogressdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_buildsycocaprogressdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_buildsycocaprogressdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_buildsycocaprogressdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_buildsycocaprogressdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_buildsycocaprogressdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_buildsycocaprogressdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_buildsycocaprogressdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_buildsycocaprogressdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_buildsycocaprogressdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_buildsycocaprogressdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_buildsycocaprogressdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_buildsycocaprogressdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_buildsycocaprogressdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_buildsycocaprogressdialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_buildsycocaprogressdialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_buildsycocaprogressdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_buildsycocaprogressdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_buildsycocaprogressdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_buildsycocaprogressdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_buildsycocaprogressdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_buildsycocaprogressdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_buildsycocaprogressdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_buildsycocaprogressdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_buildsycocaprogressdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_buildsycocaprogressdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_buildsycocaprogressdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_buildsycocaprogressdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_buildsycocaprogressdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_buildsycocaprogressdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_buildsycocaprogressdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_buildsycocaprogressdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_buildsycocaprogressdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_buildsycocaprogressdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_buildsycocaprogressdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_buildsycocaprogressdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_buildsycocaprogressdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_buildsycocaprogressdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_buildsycocaprogressdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_buildsycocaprogressdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_buildsycocaprogressdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_buildsycocaprogressdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_buildsycocaprogressdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_buildsycocaprogressdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_buildsycocaprogressdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_buildsycocaprogressdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_buildsycocaprogressdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_buildsycocaprogressdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_buildsycocaprogressdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_buildsycocaprogressdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_buildsycocaprogressdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_buildsycocaprogressdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_buildsycocaprogressdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_buildsycocaprogressdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_buildsycocaprogressdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_buildsycocaprogressdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_buildsycocaprogressdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_buildsycocaprogressdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_buildsycocaprogressdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_buildsycocaprogressdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_buildsycocaprogressdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_buildsycocaprogressdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_buildsycocaprogressdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_buildsycocaprogressdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_buildsycocaprogressdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_buildsycocaprogressdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_buildsycocaprogressdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_buildsycocaprogressdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_buildsycocaprogressdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_buildsycocaprogressdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_buildsycocaprogressdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_buildsycocaprogressdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_buildsycocaprogressdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_buildsycocaprogressdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_buildsycocaprogressdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_buildsycocaprogressdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_buildsycocaprogressdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_buildsycocaprogressdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_buildsycocaprogressdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_buildsycocaprogressdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_buildsycocaprogressdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_buildsycocaprogressdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_buildsycocaprogressdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_buildsycocaprogressdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_buildsycocaprogressdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_buildsycocaprogressdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_buildsycocaprogressdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

int32_t k_buildsycocaprogressdialog_height_for_width(void* self, int param1) {
    return QWidget_HeightForWidth((QWidget*)self, param1);
}

bool k_buildsycocaprogressdialog_has_height_for_width(void* self) {
    return QWidget_HasHeightForWidth((QWidget*)self);
}

QRegion* k_buildsycocaprogressdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_buildsycocaprogressdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_buildsycocaprogressdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_buildsycocaprogressdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_buildsycocaprogressdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_buildsycocaprogressdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_buildsycocaprogressdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_buildsycocaprogressdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_buildsycocaprogressdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_buildsycocaprogressdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_buildsycocaprogressdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_buildsycocaprogressdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_buildsycocaprogressdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_buildsycocaprogressdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_buildsycocaprogressdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_buildsycocaprogressdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_buildsycocaprogressdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_buildsycocaprogressdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_buildsycocaprogressdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_buildsycocaprogressdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_buildsycocaprogressdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_buildsycocaprogressdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_buildsycocaprogressdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_buildsycocaprogressdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_buildsycocaprogressdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_buildsycocaprogressdialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_buildsycocaprogressdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_buildsycocaprogressdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_buildsycocaprogressdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_buildsycocaprogressdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_buildsycocaprogressdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_buildsycocaprogressdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_buildsycocaprogressdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

QPaintEngine* k_buildsycocaprogressdialog_paint_engine(void* self) {
    return QWidget_PaintEngine((QWidget*)self);
}

void k_buildsycocaprogressdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_buildsycocaprogressdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_buildsycocaprogressdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_buildsycocaprogressdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_buildsycocaprogressdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_buildsycocaprogressdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_buildsycocaprogressdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_buildsycocaprogressdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_buildsycocaprogressdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_buildsycocaprogressdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_buildsycocaprogressdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_buildsycocaprogressdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_buildsycocaprogressdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_buildsycocaprogressdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_buildsycocaprogressdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

QVariant* k_buildsycocaprogressdialog_input_method_query(void* self, int64_t param1) {
    return QWidget_InputMethodQuery((QWidget*)self, param1);
}

int64_t k_buildsycocaprogressdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_buildsycocaprogressdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_buildsycocaprogressdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_buildsycocaprogressdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_buildsycocaprogressdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_buildsycocaprogressdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_buildsycocaprogressdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_buildsycocaprogressdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_buildsycocaprogressdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_buildsycocaprogressdialog_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_buildsycocaprogressdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_buildsycocaprogressdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_buildsycocaprogressdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_buildsycocaprogressdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_buildsycocaprogressdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_buildsycocaprogressdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_buildsycocaprogressdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_buildsycocaprogressdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_buildsycocaprogressdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_buildsycocaprogressdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_buildsycocaprogressdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_buildsycocaprogressdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_buildsycocaprogressdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_buildsycocaprogressdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_buildsycocaprogressdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_buildsycocaprogressdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_buildsycocaprogressdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_buildsycocaprogressdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_buildsycocaprogressdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_buildsycocaprogressdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_buildsycocaprogressdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_buildsycocaprogressdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_buildsycocaprogressdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_buildsycocaprogressdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_buildsycocaprogressdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_buildsycocaprogressdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_buildsycocaprogressdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_buildsycocaprogressdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_buildsycocaprogressdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_buildsycocaprogressdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_buildsycocaprogressdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_buildsycocaprogressdialog_dynamic_property_names");
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

QBindingStorage* k_buildsycocaprogressdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_buildsycocaprogressdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_buildsycocaprogressdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_buildsycocaprogressdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_buildsycocaprogressdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_buildsycocaprogressdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_buildsycocaprogressdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_buildsycocaprogressdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_buildsycocaprogressdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_buildsycocaprogressdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_buildsycocaprogressdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_buildsycocaprogressdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_buildsycocaprogressdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_buildsycocaprogressdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_buildsycocaprogressdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_buildsycocaprogressdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_buildsycocaprogressdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_buildsycocaprogressdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_buildsycocaprogressdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_buildsycocaprogressdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}
