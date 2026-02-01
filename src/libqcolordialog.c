#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqcolor.hpp"
#include "libqdialog.hpp"
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
#include "libqcolordialog.hpp"
#include "libqcolordialog.h"

QColorDialog* q_colordialog_new(void* parent) {
    return QColorDialog_new((QWidget*)parent);
}

QColorDialog* q_colordialog_new2() {
    return QColorDialog_new2();
}

QColorDialog* q_colordialog_new3(void* initial) {
    return QColorDialog_new3((QColor*)initial);
}

QColorDialog* q_colordialog_new4(void* initial, void* parent) {
    return QColorDialog_new4((QColor*)initial, (QWidget*)parent);
}

const QMetaObject* q_colordialog_meta_object(void* self) {
    return QColorDialog_MetaObject((QColorDialog*)self);
}

void q_colordialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QColorDialog_OnMetaObject((QColorDialog*)self, (intptr_t)callback);
}

const QMetaObject* q_colordialog_qbase_meta_object(void* self) {
    return QColorDialog_QBaseMetaObject((QColorDialog*)self);
}

void* q_colordialog_metacast(void* self, const char* param1) {
    return QColorDialog_Metacast((QColorDialog*)self, param1);
}

void q_colordialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QColorDialog_OnMetacast((QColorDialog*)self, (intptr_t)callback);
}

void* q_colordialog_qbase_metacast(void* self, const char* param1) {
    return QColorDialog_QBaseMetacast((QColorDialog*)self, param1);
}

int32_t q_colordialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QColorDialog_Metacall((QColorDialog*)self, param1, param2, param3);
}

void q_colordialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QColorDialog_OnMetacall((QColorDialog*)self, (intptr_t)callback);
}

int32_t q_colordialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QColorDialog_QBaseMetacall((QColorDialog*)self, param1, param2, param3);
}

const char* q_colordialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_current_color(void* self, void* color) {
    QColorDialog_SetCurrentColor((QColorDialog*)self, (QColor*)color);
}

QColor* q_colordialog_current_color(void* self) {
    return QColorDialog_CurrentColor((QColorDialog*)self);
}

QColor* q_colordialog_selected_color(void* self) {
    return QColorDialog_SelectedColor((QColorDialog*)self);
}

void q_colordialog_set_option(void* self, int32_t option) {
    QColorDialog_SetOption((QColorDialog*)self, option);
}

bool q_colordialog_test_option(void* self, int32_t option) {
    return QColorDialog_TestOption((QColorDialog*)self, option);
}

void q_colordialog_set_options(void* self, int32_t options) {
    QColorDialog_SetOptions((QColorDialog*)self, options);
}

int32_t q_colordialog_options(void* self) {
    return QColorDialog_Options((QColorDialog*)self);
}

void q_colordialog_set_visible(void* self, bool visible) {
    QColorDialog_SetVisible((QColorDialog*)self, visible);
}

void q_colordialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QColorDialog_OnSetVisible((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_qbase_set_visible(void* self, bool visible) {
    QColorDialog_QBaseSetVisible((QColorDialog*)self, visible);
}

QColor* q_colordialog_get_color() {
    return QColorDialog_GetColor();
}

int32_t q_colordialog_custom_count() {
    return QColorDialog_CustomCount();
}

QColor* q_colordialog_custom_color(int index) {
    return QColorDialog_CustomColor(index);
}

void q_colordialog_set_custom_color(int index, void* color) {
    QColorDialog_SetCustomColor(index, (QColor*)color);
}

QColor* q_colordialog_standard_color(int index) {
    return QColorDialog_StandardColor(index);
}

void q_colordialog_set_standard_color(int index, void* color) {
    QColorDialog_SetStandardColor(index, (QColor*)color);
}

void q_colordialog_current_color_changed(void* self, void* color) {
    QColorDialog_CurrentColorChanged((QColorDialog*)self, (QColor*)color);
}

void q_colordialog_on_current_color_changed(void* self, void (*callback)(void*, void*)) {
    QColorDialog_Connect_CurrentColorChanged((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_color_selected(void* self, void* color) {
    QColorDialog_ColorSelected((QColorDialog*)self, (QColor*)color);
}

void q_colordialog_on_color_selected(void* self, void (*callback)(void*, void*)) {
    QColorDialog_Connect_ColorSelected((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_change_event(void* self, void* event) {
    QColorDialog_ChangeEvent((QColorDialog*)self, (QEvent*)event);
}

void q_colordialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnChangeEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_qbase_change_event(void* self, void* event) {
    QColorDialog_QBaseChangeEvent((QColorDialog*)self, (QEvent*)event);
}

void q_colordialog_done(void* self, int result) {
    QColorDialog_Done((QColorDialog*)self, result);
}

void q_colordialog_on_done(void* self, void (*callback)(void*, int)) {
    QColorDialog_OnDone((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_qbase_done(void* self, int result) {
    QColorDialog_QBaseDone((QColorDialog*)self, result);
}

const char* q_colordialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_colordialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_option2(void* self, int32_t option, bool on) {
    QColorDialog_SetOption2((QColorDialog*)self, option, on);
}

QColor* q_colordialog_get_color1(void* initial) {
    return QColorDialog_GetColor1((QColor*)initial);
}

QColor* q_colordialog_get_color2(void* initial, void* parent) {
    return QColorDialog_GetColor2((QColor*)initial, (QWidget*)parent);
}

QColor* q_colordialog_get_color3(void* initial, void* parent, const char* title) {
    return QColorDialog_GetColor3((QColor*)initial, (QWidget*)parent, qstring(title));
}

QColor* q_colordialog_get_color4(void* initial, void* parent, const char* title, int32_t options) {
    return QColorDialog_GetColor4((QColor*)initial, (QWidget*)parent, qstring(title), options);
}

int32_t q_colordialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_colordialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_colordialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_colordialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_colordialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_colordialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_colordialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_colordialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_colordialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_colordialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_colordialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_colordialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_colordialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_colordialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_colordialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_colordialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_colordialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_colordialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_colordialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_colordialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_colordialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_colordialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_colordialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_colordialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_colordialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_colordialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_colordialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_colordialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_colordialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_colordialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_colordialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_colordialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_colordialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_colordialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_colordialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_colordialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_colordialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_colordialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_colordialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_colordialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_colordialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_colordialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_colordialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_colordialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_colordialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_colordialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_colordialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_colordialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_colordialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_colordialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_colordialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_colordialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_colordialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_colordialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_colordialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_colordialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_colordialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_colordialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_colordialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_colordialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_colordialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_colordialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_colordialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_colordialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_colordialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_colordialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_colordialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_colordialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_colordialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_colordialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_colordialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_colordialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_colordialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_colordialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_colordialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_colordialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_colordialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_colordialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_colordialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_colordialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_colordialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_colordialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_colordialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_colordialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_colordialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_colordialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_colordialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_colordialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_colordialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_colordialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_colordialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_colordialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_colordialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_colordialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_colordialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_colordialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_colordialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_colordialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_colordialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_colordialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_colordialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_colordialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_colordialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_colordialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_colordialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_colordialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_colordialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_colordialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_colordialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_colordialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_colordialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_colordialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_colordialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_colordialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_colordialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_colordialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_colordialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_colordialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_colordialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_colordialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_colordialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_colordialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_colordialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_colordialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_colordialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_colordialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_colordialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_colordialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_colordialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_colordialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_colordialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_colordialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_colordialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_colordialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_colordialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_colordialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_colordialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_colordialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_colordialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_colordialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_colordialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_colordialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_colordialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_colordialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_colordialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_colordialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_colordialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_colordialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_colordialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_colordialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_colordialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_colordialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_colordialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_colordialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_colordialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_colordialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_colordialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_colordialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_colordialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_colordialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_colordialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_colordialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_colordialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_colordialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_colordialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_colordialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_colordialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_colordialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_colordialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_colordialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_colordialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_colordialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_colordialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_colordialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_colordialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_colordialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_colordialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_colordialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_colordialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_colordialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_colordialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_colordialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_colordialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_colordialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_colordialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_colordialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_colordialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_colordialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_colordialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_colordialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_colordialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_colordialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_colordialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_colordialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_colordialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_colordialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_colordialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_colordialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_colordialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_colordialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_colordialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_colordialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_colordialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_colordialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_colordialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_colordialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_colordialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_colordialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_colordialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_colordialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_colordialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_colordialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_colordialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_colordialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_colordialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_colordialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_colordialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_colordialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_colordialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_colordialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_colordialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_colordialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_colordialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_colordialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_colordialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_colordialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_colordialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_colordialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_colordialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_colordialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_colordialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_colordialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_colordialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_colordialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_colordialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_colordialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_colordialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_colordialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_colordialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_colordialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_colordialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_colordialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_colordialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_colordialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_colordialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_colordialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_colordialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_colordialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_colordialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_colordialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_colordialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_colordialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_colordialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_colordialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_colordialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_colordialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_colordialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_colordialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_colordialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_colordialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_colordialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_colordialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_colordialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_colordialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_colordialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_colordialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_colordialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_colordialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_colordialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_colordialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_colordialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_colordialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_colordialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_colordialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_colordialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_colordialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colordialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_colordialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_colordialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_colordialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_colordialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_colordialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_colordialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_colordialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_colordialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_colordialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_colordialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_colordialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_colordialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_colordialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_colordialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_colordialog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_colordialog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_colordialog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_colordialog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_colordialog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_colordialog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_colordialog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_colordialog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_colordialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_colordialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_colordialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_colordialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_colordialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_colordialog_dynamic_property_names\n");
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

QBindingStorage* q_colordialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_colordialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_colordialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_colordialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_colordialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_colordialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_colordialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_colordialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_colordialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_colordialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_colordialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_colordialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_colordialog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_colordialog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_colordialog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_colordialog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_colordialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_colordialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_colordialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_colordialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_colordialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_colordialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_colordialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_colordialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_colordialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_colordialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_colordialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_colordialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_colordialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_colordialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_colordialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_colordialog_size_hint(void* self) {
    return QColorDialog_SizeHint((QColorDialog*)self);
}

QSize* q_colordialog_qbase_size_hint(void* self) {
    return QColorDialog_QBaseSizeHint((QColorDialog*)self);
}

void q_colordialog_on_size_hint(void* self, QSize* (*callback)()) {
    QColorDialog_OnSizeHint((QColorDialog*)self, (intptr_t)callback);
}

QSize* q_colordialog_minimum_size_hint(void* self) {
    return QColorDialog_MinimumSizeHint((QColorDialog*)self);
}

QSize* q_colordialog_qbase_minimum_size_hint(void* self) {
    return QColorDialog_QBaseMinimumSizeHint((QColorDialog*)self);
}

void q_colordialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QColorDialog_OnMinimumSizeHint((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_open(void* self) {
    QColorDialog_Open((QColorDialog*)self);
}

void q_colordialog_qbase_open(void* self) {
    QColorDialog_QBaseOpen((QColorDialog*)self);
}

void q_colordialog_on_open(void* self, void (*callback)()) {
    QColorDialog_OnOpen((QColorDialog*)self, (intptr_t)callback);
}

int32_t q_colordialog_exec(void* self) {
    return QColorDialog_Exec((QColorDialog*)self);
}

int32_t q_colordialog_qbase_exec(void* self) {
    return QColorDialog_QBaseExec((QColorDialog*)self);
}

void q_colordialog_on_exec(void* self, int32_t (*callback)()) {
    QColorDialog_OnExec((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_accept(void* self) {
    QColorDialog_Accept((QColorDialog*)self);
}

void q_colordialog_qbase_accept(void* self) {
    QColorDialog_QBaseAccept((QColorDialog*)self);
}

void q_colordialog_on_accept(void* self, void (*callback)()) {
    QColorDialog_OnAccept((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_reject(void* self) {
    QColorDialog_Reject((QColorDialog*)self);
}

void q_colordialog_qbase_reject(void* self) {
    QColorDialog_QBaseReject((QColorDialog*)self);
}

void q_colordialog_on_reject(void* self, void (*callback)()) {
    QColorDialog_OnReject((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_key_press_event(void* self, void* param1) {
    QColorDialog_KeyPressEvent((QColorDialog*)self, (QKeyEvent*)param1);
}

void q_colordialog_qbase_key_press_event(void* self, void* param1) {
    QColorDialog_QBaseKeyPressEvent((QColorDialog*)self, (QKeyEvent*)param1);
}

void q_colordialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnKeyPressEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_close_event(void* self, void* param1) {
    QColorDialog_CloseEvent((QColorDialog*)self, (QCloseEvent*)param1);
}

void q_colordialog_qbase_close_event(void* self, void* param1) {
    QColorDialog_QBaseCloseEvent((QColorDialog*)self, (QCloseEvent*)param1);
}

void q_colordialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnCloseEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_show_event(void* self, void* param1) {
    QColorDialog_ShowEvent((QColorDialog*)self, (QShowEvent*)param1);
}

void q_colordialog_qbase_show_event(void* self, void* param1) {
    QColorDialog_QBaseShowEvent((QColorDialog*)self, (QShowEvent*)param1);
}

void q_colordialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnShowEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_resize_event(void* self, void* param1) {
    QColorDialog_ResizeEvent((QColorDialog*)self, (QResizeEvent*)param1);
}

void q_colordialog_qbase_resize_event(void* self, void* param1) {
    QColorDialog_QBaseResizeEvent((QColorDialog*)self, (QResizeEvent*)param1);
}

void q_colordialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnResizeEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_context_menu_event(void* self, void* param1) {
    QColorDialog_ContextMenuEvent((QColorDialog*)self, (QContextMenuEvent*)param1);
}

void q_colordialog_qbase_context_menu_event(void* self, void* param1) {
    QColorDialog_QBaseContextMenuEvent((QColorDialog*)self, (QContextMenuEvent*)param1);
}

void q_colordialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnContextMenuEvent((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_event_filter(void* self, void* param1, void* param2) {
    return QColorDialog_EventFilter((QColorDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_colordialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return QColorDialog_QBaseEventFilter((QColorDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void q_colordialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QColorDialog_OnEventFilter((QColorDialog*)self, (intptr_t)callback);
}

int32_t q_colordialog_dev_type(void* self) {
    return QColorDialog_DevType((QColorDialog*)self);
}

int32_t q_colordialog_qbase_dev_type(void* self) {
    return QColorDialog_QBaseDevType((QColorDialog*)self);
}

void q_colordialog_on_dev_type(void* self, int32_t (*callback)()) {
    QColorDialog_OnDevType((QColorDialog*)self, (intptr_t)callback);
}

int32_t q_colordialog_height_for_width(void* self, int param1) {
    return QColorDialog_HeightForWidth((QColorDialog*)self, param1);
}

int32_t q_colordialog_qbase_height_for_width(void* self, int param1) {
    return QColorDialog_QBaseHeightForWidth((QColorDialog*)self, param1);
}

void q_colordialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QColorDialog_OnHeightForWidth((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_has_height_for_width(void* self) {
    return QColorDialog_HasHeightForWidth((QColorDialog*)self);
}

bool q_colordialog_qbase_has_height_for_width(void* self) {
    return QColorDialog_QBaseHasHeightForWidth((QColorDialog*)self);
}

void q_colordialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QColorDialog_OnHasHeightForWidth((QColorDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_colordialog_paint_engine(void* self) {
    return QColorDialog_PaintEngine((QColorDialog*)self);
}

QPaintEngine* q_colordialog_qbase_paint_engine(void* self) {
    return QColorDialog_QBasePaintEngine((QColorDialog*)self);
}

void q_colordialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QColorDialog_OnPaintEngine((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_event(void* self, void* event) {
    return QColorDialog_Event((QColorDialog*)self, (QEvent*)event);
}

bool q_colordialog_qbase_event(void* self, void* event) {
    return QColorDialog_QBaseEvent((QColorDialog*)self, (QEvent*)event);
}

void q_colordialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QColorDialog_OnEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_mouse_press_event(void* self, void* event) {
    QColorDialog_MousePressEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_qbase_mouse_press_event(void* self, void* event) {
    QColorDialog_QBaseMousePressEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnMousePressEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_mouse_release_event(void* self, void* event) {
    QColorDialog_MouseReleaseEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_qbase_mouse_release_event(void* self, void* event) {
    QColorDialog_QBaseMouseReleaseEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnMouseReleaseEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_mouse_double_click_event(void* self, void* event) {
    QColorDialog_MouseDoubleClickEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_qbase_mouse_double_click_event(void* self, void* event) {
    QColorDialog_QBaseMouseDoubleClickEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnMouseDoubleClickEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_mouse_move_event(void* self, void* event) {
    QColorDialog_MouseMoveEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_qbase_mouse_move_event(void* self, void* event) {
    QColorDialog_QBaseMouseMoveEvent((QColorDialog*)self, (QMouseEvent*)event);
}

void q_colordialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnMouseMoveEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_wheel_event(void* self, void* event) {
    QColorDialog_WheelEvent((QColorDialog*)self, (QWheelEvent*)event);
}

void q_colordialog_qbase_wheel_event(void* self, void* event) {
    QColorDialog_QBaseWheelEvent((QColorDialog*)self, (QWheelEvent*)event);
}

void q_colordialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnWheelEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_key_release_event(void* self, void* event) {
    QColorDialog_KeyReleaseEvent((QColorDialog*)self, (QKeyEvent*)event);
}

void q_colordialog_qbase_key_release_event(void* self, void* event) {
    QColorDialog_QBaseKeyReleaseEvent((QColorDialog*)self, (QKeyEvent*)event);
}

void q_colordialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnKeyReleaseEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_focus_in_event(void* self, void* event) {
    QColorDialog_FocusInEvent((QColorDialog*)self, (QFocusEvent*)event);
}

void q_colordialog_qbase_focus_in_event(void* self, void* event) {
    QColorDialog_QBaseFocusInEvent((QColorDialog*)self, (QFocusEvent*)event);
}

void q_colordialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnFocusInEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_focus_out_event(void* self, void* event) {
    QColorDialog_FocusOutEvent((QColorDialog*)self, (QFocusEvent*)event);
}

void q_colordialog_qbase_focus_out_event(void* self, void* event) {
    QColorDialog_QBaseFocusOutEvent((QColorDialog*)self, (QFocusEvent*)event);
}

void q_colordialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnFocusOutEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_enter_event(void* self, void* event) {
    QColorDialog_EnterEvent((QColorDialog*)self, (QEnterEvent*)event);
}

void q_colordialog_qbase_enter_event(void* self, void* event) {
    QColorDialog_QBaseEnterEvent((QColorDialog*)self, (QEnterEvent*)event);
}

void q_colordialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnEnterEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_leave_event(void* self, void* event) {
    QColorDialog_LeaveEvent((QColorDialog*)self, (QEvent*)event);
}

void q_colordialog_qbase_leave_event(void* self, void* event) {
    QColorDialog_QBaseLeaveEvent((QColorDialog*)self, (QEvent*)event);
}

void q_colordialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnLeaveEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_paint_event(void* self, void* event) {
    QColorDialog_PaintEvent((QColorDialog*)self, (QPaintEvent*)event);
}

void q_colordialog_qbase_paint_event(void* self, void* event) {
    QColorDialog_QBasePaintEvent((QColorDialog*)self, (QPaintEvent*)event);
}

void q_colordialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnPaintEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_move_event(void* self, void* event) {
    QColorDialog_MoveEvent((QColorDialog*)self, (QMoveEvent*)event);
}

void q_colordialog_qbase_move_event(void* self, void* event) {
    QColorDialog_QBaseMoveEvent((QColorDialog*)self, (QMoveEvent*)event);
}

void q_colordialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnMoveEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_tablet_event(void* self, void* event) {
    QColorDialog_TabletEvent((QColorDialog*)self, (QTabletEvent*)event);
}

void q_colordialog_qbase_tablet_event(void* self, void* event) {
    QColorDialog_QBaseTabletEvent((QColorDialog*)self, (QTabletEvent*)event);
}

void q_colordialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnTabletEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_action_event(void* self, void* event) {
    QColorDialog_ActionEvent((QColorDialog*)self, (QActionEvent*)event);
}

void q_colordialog_qbase_action_event(void* self, void* event) {
    QColorDialog_QBaseActionEvent((QColorDialog*)self, (QActionEvent*)event);
}

void q_colordialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnActionEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_drag_enter_event(void* self, void* event) {
    QColorDialog_DragEnterEvent((QColorDialog*)self, (QDragEnterEvent*)event);
}

void q_colordialog_qbase_drag_enter_event(void* self, void* event) {
    QColorDialog_QBaseDragEnterEvent((QColorDialog*)self, (QDragEnterEvent*)event);
}

void q_colordialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnDragEnterEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_drag_move_event(void* self, void* event) {
    QColorDialog_DragMoveEvent((QColorDialog*)self, (QDragMoveEvent*)event);
}

void q_colordialog_qbase_drag_move_event(void* self, void* event) {
    QColorDialog_QBaseDragMoveEvent((QColorDialog*)self, (QDragMoveEvent*)event);
}

void q_colordialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnDragMoveEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_drag_leave_event(void* self, void* event) {
    QColorDialog_DragLeaveEvent((QColorDialog*)self, (QDragLeaveEvent*)event);
}

void q_colordialog_qbase_drag_leave_event(void* self, void* event) {
    QColorDialog_QBaseDragLeaveEvent((QColorDialog*)self, (QDragLeaveEvent*)event);
}

void q_colordialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnDragLeaveEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_drop_event(void* self, void* event) {
    QColorDialog_DropEvent((QColorDialog*)self, (QDropEvent*)event);
}

void q_colordialog_qbase_drop_event(void* self, void* event) {
    QColorDialog_QBaseDropEvent((QColorDialog*)self, (QDropEvent*)event);
}

void q_colordialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnDropEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_hide_event(void* self, void* event) {
    QColorDialog_HideEvent((QColorDialog*)self, (QHideEvent*)event);
}

void q_colordialog_qbase_hide_event(void* self, void* event) {
    QColorDialog_QBaseHideEvent((QColorDialog*)self, (QHideEvent*)event);
}

void q_colordialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnHideEvent((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QColorDialog_NativeEvent((QColorDialog*)self, qstring(eventType), message, result);
}

bool q_colordialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QColorDialog_QBaseNativeEvent((QColorDialog*)self, qstring(eventType), message, result);
}

void q_colordialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QColorDialog_OnNativeEvent((QColorDialog*)self, (intptr_t)callback);
}

int32_t q_colordialog_metric(void* self, int32_t param1) {
    return QColorDialog_Metric((QColorDialog*)self, param1);
}

int32_t q_colordialog_qbase_metric(void* self, int32_t param1) {
    return QColorDialog_QBaseMetric((QColorDialog*)self, param1);
}

void q_colordialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QColorDialog_OnMetric((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_init_painter(void* self, void* painter) {
    QColorDialog_InitPainter((QColorDialog*)self, (QPainter*)painter);
}

void q_colordialog_qbase_init_painter(void* self, void* painter) {
    QColorDialog_QBaseInitPainter((QColorDialog*)self, (QPainter*)painter);
}

void q_colordialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnInitPainter((QColorDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_colordialog_redirected(void* self, void* offset) {
    return QColorDialog_Redirected((QColorDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_colordialog_qbase_redirected(void* self, void* offset) {
    return QColorDialog_QBaseRedirected((QColorDialog*)self, (QPoint*)offset);
}

void q_colordialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QColorDialog_OnRedirected((QColorDialog*)self, (intptr_t)callback);
}

QPainter* q_colordialog_shared_painter(void* self) {
    return QColorDialog_SharedPainter((QColorDialog*)self);
}

QPainter* q_colordialog_qbase_shared_painter(void* self) {
    return QColorDialog_QBaseSharedPainter((QColorDialog*)self);
}

void q_colordialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QColorDialog_OnSharedPainter((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_input_method_event(void* self, void* param1) {
    QColorDialog_InputMethodEvent((QColorDialog*)self, (QInputMethodEvent*)param1);
}

void q_colordialog_qbase_input_method_event(void* self, void* param1) {
    QColorDialog_QBaseInputMethodEvent((QColorDialog*)self, (QInputMethodEvent*)param1);
}

void q_colordialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnInputMethodEvent((QColorDialog*)self, (intptr_t)callback);
}

QVariant* q_colordialog_input_method_query(void* self, int32_t param1) {
    return QColorDialog_InputMethodQuery((QColorDialog*)self, param1);
}

QVariant* q_colordialog_qbase_input_method_query(void* self, int32_t param1) {
    return QColorDialog_QBaseInputMethodQuery((QColorDialog*)self, param1);
}

void q_colordialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QColorDialog_OnInputMethodQuery((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_focus_next_prev_child(void* self, bool next) {
    return QColorDialog_FocusNextPrevChild((QColorDialog*)self, next);
}

bool q_colordialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QColorDialog_QBaseFocusNextPrevChild((QColorDialog*)self, next);
}

void q_colordialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QColorDialog_OnFocusNextPrevChild((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_timer_event(void* self, void* event) {
    QColorDialog_TimerEvent((QColorDialog*)self, (QTimerEvent*)event);
}

void q_colordialog_qbase_timer_event(void* self, void* event) {
    QColorDialog_QBaseTimerEvent((QColorDialog*)self, (QTimerEvent*)event);
}

void q_colordialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnTimerEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_child_event(void* self, void* event) {
    QColorDialog_ChildEvent((QColorDialog*)self, (QChildEvent*)event);
}

void q_colordialog_qbase_child_event(void* self, void* event) {
    QColorDialog_QBaseChildEvent((QColorDialog*)self, (QChildEvent*)event);
}

void q_colordialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnChildEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_custom_event(void* self, void* event) {
    QColorDialog_CustomEvent((QColorDialog*)self, (QEvent*)event);
}

void q_colordialog_qbase_custom_event(void* self, void* event) {
    QColorDialog_QBaseCustomEvent((QColorDialog*)self, (QEvent*)event);
}

void q_colordialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnCustomEvent((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_connect_notify(void* self, void* signal) {
    QColorDialog_ConnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

void q_colordialog_qbase_connect_notify(void* self, void* signal) {
    QColorDialog_QBaseConnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

void q_colordialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnConnectNotify((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_disconnect_notify(void* self, void* signal) {
    QColorDialog_DisconnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

void q_colordialog_qbase_disconnect_notify(void* self, void* signal) {
    QColorDialog_QBaseDisconnectNotify((QColorDialog*)self, (QMetaMethod*)signal);
}

void q_colordialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnDisconnectNotify((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_adjust_position(void* self, void* param1) {
    QColorDialog_AdjustPosition((QColorDialog*)self, (QWidget*)param1);
}

void q_colordialog_qbase_adjust_position(void* self, void* param1) {
    QColorDialog_QBaseAdjustPosition((QColorDialog*)self, (QWidget*)param1);
}

void q_colordialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QColorDialog_OnAdjustPosition((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_update_micro_focus(void* self) {
    QColorDialog_UpdateMicroFocus((QColorDialog*)self);
}

void q_colordialog_qbase_update_micro_focus(void* self) {
    QColorDialog_QBaseUpdateMicroFocus((QColorDialog*)self);
}

void q_colordialog_on_update_micro_focus(void* self, void (*callback)()) {
    QColorDialog_OnUpdateMicroFocus((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_create(void* self) {
    QColorDialog_Create((QColorDialog*)self);
}

void q_colordialog_qbase_create(void* self) {
    QColorDialog_QBaseCreate((QColorDialog*)self);
}

void q_colordialog_on_create(void* self, void (*callback)()) {
    QColorDialog_OnCreate((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_destroy(void* self) {
    QColorDialog_Destroy((QColorDialog*)self);
}

void q_colordialog_qbase_destroy(void* self) {
    QColorDialog_QBaseDestroy((QColorDialog*)self);
}

void q_colordialog_on_destroy(void* self, void (*callback)()) {
    QColorDialog_OnDestroy((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_focus_next_child(void* self) {
    return QColorDialog_FocusNextChild((QColorDialog*)self);
}

bool q_colordialog_qbase_focus_next_child(void* self) {
    return QColorDialog_QBaseFocusNextChild((QColorDialog*)self);
}

void q_colordialog_on_focus_next_child(void* self, bool (*callback)()) {
    QColorDialog_OnFocusNextChild((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_focus_previous_child(void* self) {
    return QColorDialog_FocusPreviousChild((QColorDialog*)self);
}

bool q_colordialog_qbase_focus_previous_child(void* self) {
    return QColorDialog_QBaseFocusPreviousChild((QColorDialog*)self);
}

void q_colordialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QColorDialog_OnFocusPreviousChild((QColorDialog*)self, (intptr_t)callback);
}

QObject* q_colordialog_sender(void* self) {
    return QColorDialog_Sender((QColorDialog*)self);
}

QObject* q_colordialog_qbase_sender(void* self) {
    return QColorDialog_QBaseSender((QColorDialog*)self);
}

void q_colordialog_on_sender(void* self, QObject* (*callback)()) {
    QColorDialog_OnSender((QColorDialog*)self, (intptr_t)callback);
}

int32_t q_colordialog_sender_signal_index(void* self) {
    return QColorDialog_SenderSignalIndex((QColorDialog*)self);
}

int32_t q_colordialog_qbase_sender_signal_index(void* self) {
    return QColorDialog_QBaseSenderSignalIndex((QColorDialog*)self);
}

void q_colordialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QColorDialog_OnSenderSignalIndex((QColorDialog*)self, (intptr_t)callback);
}

int32_t q_colordialog_receivers(void* self, const char* signal) {
    return QColorDialog_Receivers((QColorDialog*)self, signal);
}

int32_t q_colordialog_qbase_receivers(void* self, const char* signal) {
    return QColorDialog_QBaseReceivers((QColorDialog*)self, signal);
}

void q_colordialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QColorDialog_OnReceivers((QColorDialog*)self, (intptr_t)callback);
}

bool q_colordialog_is_signal_connected(void* self, void* signal) {
    return QColorDialog_IsSignalConnected((QColorDialog*)self, (QMetaMethod*)signal);
}

bool q_colordialog_qbase_is_signal_connected(void* self, void* signal) {
    return QColorDialog_QBaseIsSignalConnected((QColorDialog*)self, (QMetaMethod*)signal);
}

void q_colordialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QColorDialog_OnIsSignalConnected((QColorDialog*)self, (intptr_t)callback);
}

double q_colordialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QColorDialog_GetDecodedMetricF((QColorDialog*)self, metricA, metricB);
}

double q_colordialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QColorDialog_QBaseGetDecodedMetricF((QColorDialog*)self, metricA, metricB);
}

void q_colordialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QColorDialog_OnGetDecodedMetricF((QColorDialog*)self, (intptr_t)callback);
}

void q_colordialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_colordialog_delete(void* self) {
    QColorDialog_Delete((QColorDialog*)(self));
}
