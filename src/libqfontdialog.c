#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqdialog.hpp"
#include "libqfont.hpp"
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
#include "libqfontdialog.hpp"
#include "libqfontdialog.h"

QFontDialog* q_fontdialog_new(void* parent) {
    return QFontDialog_new((QWidget*)parent);
}

QFontDialog* q_fontdialog_new2() {
    return QFontDialog_new2();
}

QFontDialog* q_fontdialog_new3(void* initial) {
    return QFontDialog_new3((QFont*)initial);
}

QFontDialog* q_fontdialog_new4(void* initial, void* parent) {
    return QFontDialog_new4((QFont*)initial, (QWidget*)parent);
}

const QMetaObject* q_fontdialog_meta_object(void* self) {
    return QFontDialog_MetaObject((QFontDialog*)self);
}

void q_fontdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QFontDialog_OnMetaObject((QFontDialog*)self, (intptr_t)callback);
}

const QMetaObject* q_fontdialog_qbase_meta_object(void* self) {
    return QFontDialog_QBaseMetaObject((QFontDialog*)self);
}

void* q_fontdialog_metacast(void* self, const char* param1) {
    return QFontDialog_Metacast((QFontDialog*)self, param1);
}

void q_fontdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QFontDialog_OnMetacast((QFontDialog*)self, (intptr_t)callback);
}

void* q_fontdialog_qbase_metacast(void* self, const char* param1) {
    return QFontDialog_QBaseMetacast((QFontDialog*)self, param1);
}

int32_t q_fontdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFontDialog_Metacall((QFontDialog*)self, param1, param2, param3);
}

void q_fontdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFontDialog_OnMetacall((QFontDialog*)self, (intptr_t)callback);
}

int32_t q_fontdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFontDialog_QBaseMetacall((QFontDialog*)self, param1, param2, param3);
}

const char* q_fontdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_current_font(void* self, void* font) {
    QFontDialog_SetCurrentFont((QFontDialog*)self, (QFont*)font);
}

QFont* q_fontdialog_current_font(void* self) {
    return QFontDialog_CurrentFont((QFontDialog*)self);
}

QFont* q_fontdialog_selected_font(void* self) {
    return QFontDialog_SelectedFont((QFontDialog*)self);
}

void q_fontdialog_set_option(void* self, int32_t option) {
    QFontDialog_SetOption((QFontDialog*)self, option);
}

bool q_fontdialog_test_option(void* self, int32_t option) {
    return QFontDialog_TestOption((QFontDialog*)self, option);
}

void q_fontdialog_set_options(void* self, int32_t options) {
    QFontDialog_SetOptions((QFontDialog*)self, options);
}

int32_t q_fontdialog_options(void* self) {
    return QFontDialog_Options((QFontDialog*)self);
}

void q_fontdialog_set_visible(void* self, bool visible) {
    QFontDialog_SetVisible((QFontDialog*)self, visible);
}

void q_fontdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QFontDialog_OnSetVisible((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_qbase_set_visible(void* self, bool visible) {
    QFontDialog_QBaseSetVisible((QFontDialog*)self, visible);
}

QFont* q_fontdialog_get_font(bool* ok) {
    return QFontDialog_GetFont((bool*)ok);
}

QFont* q_fontdialog_get_font2(bool* ok, void* initial) {
    return QFontDialog_GetFont2((bool*)ok, (QFont*)initial);
}

void q_fontdialog_current_font_changed(void* self, void* font) {
    QFontDialog_CurrentFontChanged((QFontDialog*)self, (QFont*)font);
}

void q_fontdialog_on_current_font_changed(void* self, void (*callback)(void*, void*)) {
    QFontDialog_Connect_CurrentFontChanged((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_font_selected(void* self, void* font) {
    QFontDialog_FontSelected((QFontDialog*)self, (QFont*)font);
}

void q_fontdialog_on_font_selected(void* self, void (*callback)(void*, void*)) {
    QFontDialog_Connect_FontSelected((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_change_event(void* self, void* event) {
    QFontDialog_ChangeEvent((QFontDialog*)self, (QEvent*)event);
}

void q_fontdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnChangeEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_qbase_change_event(void* self, void* event) {
    QFontDialog_QBaseChangeEvent((QFontDialog*)self, (QEvent*)event);
}

void q_fontdialog_done(void* self, int result) {
    QFontDialog_Done((QFontDialog*)self, result);
}

void q_fontdialog_on_done(void* self, void (*callback)(void*, int)) {
    QFontDialog_OnDone((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_qbase_done(void* self, int result) {
    QFontDialog_QBaseDone((QFontDialog*)self, result);
}

bool q_fontdialog_event_filter(void* self, void* object, void* event) {
    return QFontDialog_EventFilter((QFontDialog*)self, (QObject*)object, (QEvent*)event);
}

void q_fontdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFontDialog_OnEventFilter((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_qbase_event_filter(void* self, void* object, void* event) {
    return QFontDialog_QBaseEventFilter((QFontDialog*)self, (QObject*)object, (QEvent*)event);
}

const char* q_fontdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_option2(void* self, int32_t option, bool on) {
    QFontDialog_SetOption2((QFontDialog*)self, option, on);
}

QFont* q_fontdialog_get_font22(bool* ok, void* parent) {
    return QFontDialog_GetFont22((bool*)ok, (QWidget*)parent);
}

QFont* q_fontdialog_get_font3(bool* ok, void* initial, void* parent) {
    return QFontDialog_GetFont3((bool*)ok, (QFont*)initial, (QWidget*)parent);
}

QFont* q_fontdialog_get_font4(bool* ok, void* initial, void* parent, const char* title) {
    return QFontDialog_GetFont4((bool*)ok, (QFont*)initial, (QWidget*)parent, qstring(title));
}

QFont* q_fontdialog_get_font5(bool* ok, void* initial, void* parent, const char* title, int32_t options) {
    return QFontDialog_GetFont5((bool*)ok, (QFont*)initial, (QWidget*)parent, qstring(title), options);
}

int32_t q_fontdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_fontdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_fontdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_fontdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_fontdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_fontdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_fontdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_fontdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_fontdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_fontdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_fontdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_fontdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_fontdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_fontdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_fontdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_fontdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_fontdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_fontdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_fontdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_fontdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_fontdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_fontdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_fontdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_fontdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_fontdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_fontdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_fontdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_fontdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_fontdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_fontdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_fontdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_fontdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_fontdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_fontdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_fontdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_fontdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_fontdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_fontdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_fontdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_fontdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_fontdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_fontdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_fontdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_fontdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_fontdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_fontdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_fontdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_fontdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_fontdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_fontdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_fontdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_fontdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_fontdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_fontdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_fontdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_fontdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_fontdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_fontdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_fontdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_fontdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_fontdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_fontdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_fontdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_fontdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_fontdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_fontdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_fontdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_fontdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_fontdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_fontdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_fontdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_fontdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_fontdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_fontdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_fontdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_fontdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_fontdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_fontdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_fontdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_fontdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_fontdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_fontdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_fontdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_fontdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_fontdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_fontdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_fontdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_fontdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_fontdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_fontdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_fontdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_fontdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_fontdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_fontdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_fontdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_fontdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_fontdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_fontdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_fontdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_fontdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_fontdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_fontdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_fontdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_fontdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_fontdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_fontdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_fontdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_fontdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_fontdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_fontdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_fontdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_fontdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_fontdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_fontdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_fontdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_fontdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_fontdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_fontdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_fontdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_fontdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_fontdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_fontdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_fontdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_fontdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_fontdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_fontdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_fontdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_fontdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_fontdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_fontdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_fontdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_fontdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_fontdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_fontdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_fontdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_fontdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_fontdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_fontdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_fontdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_fontdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_fontdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_fontdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_fontdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_fontdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_fontdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_fontdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_fontdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_fontdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_fontdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_fontdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_fontdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_fontdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_fontdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_fontdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_fontdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_fontdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_fontdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_fontdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_fontdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_fontdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_fontdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_fontdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_fontdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_fontdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_fontdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_fontdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_fontdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_fontdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_fontdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_fontdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_fontdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_fontdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_fontdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_fontdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_fontdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_fontdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_fontdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_fontdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_fontdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_fontdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_fontdialog_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_fontdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_fontdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_fontdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_fontdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_fontdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_fontdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_fontdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_fontdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_fontdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_fontdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_fontdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_fontdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_fontdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_fontdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_fontdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_fontdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_fontdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_fontdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_fontdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_fontdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_fontdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_fontdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_fontdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_fontdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_fontdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_fontdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_fontdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_fontdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_fontdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_fontdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_fontdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_fontdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_fontdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_fontdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_fontdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_fontdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_fontdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_fontdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_fontdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_fontdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_fontdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_fontdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_fontdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_fontdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_fontdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_fontdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_fontdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_fontdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_fontdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_fontdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_fontdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_fontdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_fontdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_fontdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_fontdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_fontdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_fontdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_fontdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_fontdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_fontdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_fontdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_fontdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_fontdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_fontdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_fontdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_fontdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_fontdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_fontdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_fontdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_fontdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_fontdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_fontdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_fontdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_fontdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_fontdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_fontdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_fontdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_fontdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_fontdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_fontdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_fontdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_fontdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_fontdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_fontdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_fontdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_fontdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_fontdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fontdialog_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_fontdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_fontdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_fontdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_fontdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_fontdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_fontdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_fontdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_fontdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_fontdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_fontdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_fontdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_fontdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_fontdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_fontdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_fontdialog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_fontdialog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_fontdialog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_fontdialog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_fontdialog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_fontdialog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_fontdialog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_fontdialog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_fontdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_fontdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_fontdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_fontdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_fontdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fontdialog_dynamic_property_names\n");
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

QBindingStorage* q_fontdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_fontdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_fontdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_fontdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_fontdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_fontdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_fontdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_fontdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_fontdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_fontdialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_fontdialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_fontdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_fontdialog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_fontdialog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_fontdialog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_fontdialog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_fontdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_fontdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_fontdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_fontdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_fontdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_fontdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_fontdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_fontdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_fontdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_fontdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_fontdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_fontdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_fontdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_fontdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_fontdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_fontdialog_size_hint(void* self) {
    return QFontDialog_SizeHint((QFontDialog*)self);
}

QSize* q_fontdialog_qbase_size_hint(void* self) {
    return QFontDialog_QBaseSizeHint((QFontDialog*)self);
}

void q_fontdialog_on_size_hint(void* self, QSize* (*callback)()) {
    QFontDialog_OnSizeHint((QFontDialog*)self, (intptr_t)callback);
}

QSize* q_fontdialog_minimum_size_hint(void* self) {
    return QFontDialog_MinimumSizeHint((QFontDialog*)self);
}

QSize* q_fontdialog_qbase_minimum_size_hint(void* self) {
    return QFontDialog_QBaseMinimumSizeHint((QFontDialog*)self);
}

void q_fontdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QFontDialog_OnMinimumSizeHint((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_open(void* self) {
    QFontDialog_Open((QFontDialog*)self);
}

void q_fontdialog_qbase_open(void* self) {
    QFontDialog_QBaseOpen((QFontDialog*)self);
}

void q_fontdialog_on_open(void* self, void (*callback)()) {
    QFontDialog_OnOpen((QFontDialog*)self, (intptr_t)callback);
}

int32_t q_fontdialog_exec(void* self) {
    return QFontDialog_Exec((QFontDialog*)self);
}

int32_t q_fontdialog_qbase_exec(void* self) {
    return QFontDialog_QBaseExec((QFontDialog*)self);
}

void q_fontdialog_on_exec(void* self, int32_t (*callback)()) {
    QFontDialog_OnExec((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_accept(void* self) {
    QFontDialog_Accept((QFontDialog*)self);
}

void q_fontdialog_qbase_accept(void* self) {
    QFontDialog_QBaseAccept((QFontDialog*)self);
}

void q_fontdialog_on_accept(void* self, void (*callback)()) {
    QFontDialog_OnAccept((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_reject(void* self) {
    QFontDialog_Reject((QFontDialog*)self);
}

void q_fontdialog_qbase_reject(void* self) {
    QFontDialog_QBaseReject((QFontDialog*)self);
}

void q_fontdialog_on_reject(void* self, void (*callback)()) {
    QFontDialog_OnReject((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_key_press_event(void* self, void* param1) {
    QFontDialog_KeyPressEvent((QFontDialog*)self, (QKeyEvent*)param1);
}

void q_fontdialog_qbase_key_press_event(void* self, void* param1) {
    QFontDialog_QBaseKeyPressEvent((QFontDialog*)self, (QKeyEvent*)param1);
}

void q_fontdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnKeyPressEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_close_event(void* self, void* param1) {
    QFontDialog_CloseEvent((QFontDialog*)self, (QCloseEvent*)param1);
}

void q_fontdialog_qbase_close_event(void* self, void* param1) {
    QFontDialog_QBaseCloseEvent((QFontDialog*)self, (QCloseEvent*)param1);
}

void q_fontdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnCloseEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_show_event(void* self, void* param1) {
    QFontDialog_ShowEvent((QFontDialog*)self, (QShowEvent*)param1);
}

void q_fontdialog_qbase_show_event(void* self, void* param1) {
    QFontDialog_QBaseShowEvent((QFontDialog*)self, (QShowEvent*)param1);
}

void q_fontdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnShowEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_resize_event(void* self, void* param1) {
    QFontDialog_ResizeEvent((QFontDialog*)self, (QResizeEvent*)param1);
}

void q_fontdialog_qbase_resize_event(void* self, void* param1) {
    QFontDialog_QBaseResizeEvent((QFontDialog*)self, (QResizeEvent*)param1);
}

void q_fontdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnResizeEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_context_menu_event(void* self, void* param1) {
    QFontDialog_ContextMenuEvent((QFontDialog*)self, (QContextMenuEvent*)param1);
}

void q_fontdialog_qbase_context_menu_event(void* self, void* param1) {
    QFontDialog_QBaseContextMenuEvent((QFontDialog*)self, (QContextMenuEvent*)param1);
}

void q_fontdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnContextMenuEvent((QFontDialog*)self, (intptr_t)callback);
}

int32_t q_fontdialog_dev_type(void* self) {
    return QFontDialog_DevType((QFontDialog*)self);
}

int32_t q_fontdialog_qbase_dev_type(void* self) {
    return QFontDialog_QBaseDevType((QFontDialog*)self);
}

void q_fontdialog_on_dev_type(void* self, int32_t (*callback)()) {
    QFontDialog_OnDevType((QFontDialog*)self, (intptr_t)callback);
}

int32_t q_fontdialog_height_for_width(void* self, int param1) {
    return QFontDialog_HeightForWidth((QFontDialog*)self, param1);
}

int32_t q_fontdialog_qbase_height_for_width(void* self, int param1) {
    return QFontDialog_QBaseHeightForWidth((QFontDialog*)self, param1);
}

void q_fontdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QFontDialog_OnHeightForWidth((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_has_height_for_width(void* self) {
    return QFontDialog_HasHeightForWidth((QFontDialog*)self);
}

bool q_fontdialog_qbase_has_height_for_width(void* self) {
    return QFontDialog_QBaseHasHeightForWidth((QFontDialog*)self);
}

void q_fontdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    QFontDialog_OnHasHeightForWidth((QFontDialog*)self, (intptr_t)callback);
}

QPaintEngine* q_fontdialog_paint_engine(void* self) {
    return QFontDialog_PaintEngine((QFontDialog*)self);
}

QPaintEngine* q_fontdialog_qbase_paint_engine(void* self) {
    return QFontDialog_QBasePaintEngine((QFontDialog*)self);
}

void q_fontdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QFontDialog_OnPaintEngine((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_event(void* self, void* event) {
    return QFontDialog_Event((QFontDialog*)self, (QEvent*)event);
}

bool q_fontdialog_qbase_event(void* self, void* event) {
    return QFontDialog_QBaseEvent((QFontDialog*)self, (QEvent*)event);
}

void q_fontdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    QFontDialog_OnEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_mouse_press_event(void* self, void* event) {
    QFontDialog_MousePressEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_qbase_mouse_press_event(void* self, void* event) {
    QFontDialog_QBaseMousePressEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnMousePressEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_mouse_release_event(void* self, void* event) {
    QFontDialog_MouseReleaseEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_qbase_mouse_release_event(void* self, void* event) {
    QFontDialog_QBaseMouseReleaseEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnMouseReleaseEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_mouse_double_click_event(void* self, void* event) {
    QFontDialog_MouseDoubleClickEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_qbase_mouse_double_click_event(void* self, void* event) {
    QFontDialog_QBaseMouseDoubleClickEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnMouseDoubleClickEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_mouse_move_event(void* self, void* event) {
    QFontDialog_MouseMoveEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_qbase_mouse_move_event(void* self, void* event) {
    QFontDialog_QBaseMouseMoveEvent((QFontDialog*)self, (QMouseEvent*)event);
}

void q_fontdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnMouseMoveEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_wheel_event(void* self, void* event) {
    QFontDialog_WheelEvent((QFontDialog*)self, (QWheelEvent*)event);
}

void q_fontdialog_qbase_wheel_event(void* self, void* event) {
    QFontDialog_QBaseWheelEvent((QFontDialog*)self, (QWheelEvent*)event);
}

void q_fontdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnWheelEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_key_release_event(void* self, void* event) {
    QFontDialog_KeyReleaseEvent((QFontDialog*)self, (QKeyEvent*)event);
}

void q_fontdialog_qbase_key_release_event(void* self, void* event) {
    QFontDialog_QBaseKeyReleaseEvent((QFontDialog*)self, (QKeyEvent*)event);
}

void q_fontdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnKeyReleaseEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_focus_in_event(void* self, void* event) {
    QFontDialog_FocusInEvent((QFontDialog*)self, (QFocusEvent*)event);
}

void q_fontdialog_qbase_focus_in_event(void* self, void* event) {
    QFontDialog_QBaseFocusInEvent((QFontDialog*)self, (QFocusEvent*)event);
}

void q_fontdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnFocusInEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_focus_out_event(void* self, void* event) {
    QFontDialog_FocusOutEvent((QFontDialog*)self, (QFocusEvent*)event);
}

void q_fontdialog_qbase_focus_out_event(void* self, void* event) {
    QFontDialog_QBaseFocusOutEvent((QFontDialog*)self, (QFocusEvent*)event);
}

void q_fontdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnFocusOutEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_enter_event(void* self, void* event) {
    QFontDialog_EnterEvent((QFontDialog*)self, (QEnterEvent*)event);
}

void q_fontdialog_qbase_enter_event(void* self, void* event) {
    QFontDialog_QBaseEnterEvent((QFontDialog*)self, (QEnterEvent*)event);
}

void q_fontdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnEnterEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_leave_event(void* self, void* event) {
    QFontDialog_LeaveEvent((QFontDialog*)self, (QEvent*)event);
}

void q_fontdialog_qbase_leave_event(void* self, void* event) {
    QFontDialog_QBaseLeaveEvent((QFontDialog*)self, (QEvent*)event);
}

void q_fontdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnLeaveEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_paint_event(void* self, void* event) {
    QFontDialog_PaintEvent((QFontDialog*)self, (QPaintEvent*)event);
}

void q_fontdialog_qbase_paint_event(void* self, void* event) {
    QFontDialog_QBasePaintEvent((QFontDialog*)self, (QPaintEvent*)event);
}

void q_fontdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnPaintEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_move_event(void* self, void* event) {
    QFontDialog_MoveEvent((QFontDialog*)self, (QMoveEvent*)event);
}

void q_fontdialog_qbase_move_event(void* self, void* event) {
    QFontDialog_QBaseMoveEvent((QFontDialog*)self, (QMoveEvent*)event);
}

void q_fontdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnMoveEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_tablet_event(void* self, void* event) {
    QFontDialog_TabletEvent((QFontDialog*)self, (QTabletEvent*)event);
}

void q_fontdialog_qbase_tablet_event(void* self, void* event) {
    QFontDialog_QBaseTabletEvent((QFontDialog*)self, (QTabletEvent*)event);
}

void q_fontdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnTabletEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_action_event(void* self, void* event) {
    QFontDialog_ActionEvent((QFontDialog*)self, (QActionEvent*)event);
}

void q_fontdialog_qbase_action_event(void* self, void* event) {
    QFontDialog_QBaseActionEvent((QFontDialog*)self, (QActionEvent*)event);
}

void q_fontdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnActionEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_drag_enter_event(void* self, void* event) {
    QFontDialog_DragEnterEvent((QFontDialog*)self, (QDragEnterEvent*)event);
}

void q_fontdialog_qbase_drag_enter_event(void* self, void* event) {
    QFontDialog_QBaseDragEnterEvent((QFontDialog*)self, (QDragEnterEvent*)event);
}

void q_fontdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnDragEnterEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_drag_move_event(void* self, void* event) {
    QFontDialog_DragMoveEvent((QFontDialog*)self, (QDragMoveEvent*)event);
}

void q_fontdialog_qbase_drag_move_event(void* self, void* event) {
    QFontDialog_QBaseDragMoveEvent((QFontDialog*)self, (QDragMoveEvent*)event);
}

void q_fontdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnDragMoveEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_drag_leave_event(void* self, void* event) {
    QFontDialog_DragLeaveEvent((QFontDialog*)self, (QDragLeaveEvent*)event);
}

void q_fontdialog_qbase_drag_leave_event(void* self, void* event) {
    QFontDialog_QBaseDragLeaveEvent((QFontDialog*)self, (QDragLeaveEvent*)event);
}

void q_fontdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnDragLeaveEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_drop_event(void* self, void* event) {
    QFontDialog_DropEvent((QFontDialog*)self, (QDropEvent*)event);
}

void q_fontdialog_qbase_drop_event(void* self, void* event) {
    QFontDialog_QBaseDropEvent((QFontDialog*)self, (QDropEvent*)event);
}

void q_fontdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnDropEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_hide_event(void* self, void* event) {
    QFontDialog_HideEvent((QFontDialog*)self, (QHideEvent*)event);
}

void q_fontdialog_qbase_hide_event(void* self, void* event) {
    QFontDialog_QBaseHideEvent((QFontDialog*)self, (QHideEvent*)event);
}

void q_fontdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnHideEvent((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QFontDialog_NativeEvent((QFontDialog*)self, qstring(eventType), message, result);
}

bool q_fontdialog_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QFontDialog_QBaseNativeEvent((QFontDialog*)self, qstring(eventType), message, result);
}

void q_fontdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QFontDialog_OnNativeEvent((QFontDialog*)self, (intptr_t)callback);
}

int32_t q_fontdialog_metric(void* self, int32_t param1) {
    return QFontDialog_Metric((QFontDialog*)self, param1);
}

int32_t q_fontdialog_qbase_metric(void* self, int32_t param1) {
    return QFontDialog_QBaseMetric((QFontDialog*)self, param1);
}

void q_fontdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QFontDialog_OnMetric((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_init_painter(void* self, void* painter) {
    QFontDialog_InitPainter((QFontDialog*)self, (QPainter*)painter);
}

void q_fontdialog_qbase_init_painter(void* self, void* painter) {
    QFontDialog_QBaseInitPainter((QFontDialog*)self, (QPainter*)painter);
}

void q_fontdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnInitPainter((QFontDialog*)self, (intptr_t)callback);
}

QPaintDevice* q_fontdialog_redirected(void* self, void* offset) {
    return QFontDialog_Redirected((QFontDialog*)self, (QPoint*)offset);
}

QPaintDevice* q_fontdialog_qbase_redirected(void* self, void* offset) {
    return QFontDialog_QBaseRedirected((QFontDialog*)self, (QPoint*)offset);
}

void q_fontdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QFontDialog_OnRedirected((QFontDialog*)self, (intptr_t)callback);
}

QPainter* q_fontdialog_shared_painter(void* self) {
    return QFontDialog_SharedPainter((QFontDialog*)self);
}

QPainter* q_fontdialog_qbase_shared_painter(void* self) {
    return QFontDialog_QBaseSharedPainter((QFontDialog*)self);
}

void q_fontdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    QFontDialog_OnSharedPainter((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_input_method_event(void* self, void* param1) {
    QFontDialog_InputMethodEvent((QFontDialog*)self, (QInputMethodEvent*)param1);
}

void q_fontdialog_qbase_input_method_event(void* self, void* param1) {
    QFontDialog_QBaseInputMethodEvent((QFontDialog*)self, (QInputMethodEvent*)param1);
}

void q_fontdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnInputMethodEvent((QFontDialog*)self, (intptr_t)callback);
}

QVariant* q_fontdialog_input_method_query(void* self, int32_t param1) {
    return QFontDialog_InputMethodQuery((QFontDialog*)self, param1);
}

QVariant* q_fontdialog_qbase_input_method_query(void* self, int32_t param1) {
    return QFontDialog_QBaseInputMethodQuery((QFontDialog*)self, param1);
}

void q_fontdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QFontDialog_OnInputMethodQuery((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_focus_next_prev_child(void* self, bool next) {
    return QFontDialog_FocusNextPrevChild((QFontDialog*)self, next);
}

bool q_fontdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return QFontDialog_QBaseFocusNextPrevChild((QFontDialog*)self, next);
}

void q_fontdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QFontDialog_OnFocusNextPrevChild((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_timer_event(void* self, void* event) {
    QFontDialog_TimerEvent((QFontDialog*)self, (QTimerEvent*)event);
}

void q_fontdialog_qbase_timer_event(void* self, void* event) {
    QFontDialog_QBaseTimerEvent((QFontDialog*)self, (QTimerEvent*)event);
}

void q_fontdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnTimerEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_child_event(void* self, void* event) {
    QFontDialog_ChildEvent((QFontDialog*)self, (QChildEvent*)event);
}

void q_fontdialog_qbase_child_event(void* self, void* event) {
    QFontDialog_QBaseChildEvent((QFontDialog*)self, (QChildEvent*)event);
}

void q_fontdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnChildEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_custom_event(void* self, void* event) {
    QFontDialog_CustomEvent((QFontDialog*)self, (QEvent*)event);
}

void q_fontdialog_qbase_custom_event(void* self, void* event) {
    QFontDialog_QBaseCustomEvent((QFontDialog*)self, (QEvent*)event);
}

void q_fontdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnCustomEvent((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_connect_notify(void* self, void* signal) {
    QFontDialog_ConnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

void q_fontdialog_qbase_connect_notify(void* self, void* signal) {
    QFontDialog_QBaseConnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

void q_fontdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnConnectNotify((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_disconnect_notify(void* self, void* signal) {
    QFontDialog_DisconnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

void q_fontdialog_qbase_disconnect_notify(void* self, void* signal) {
    QFontDialog_QBaseDisconnectNotify((QFontDialog*)self, (QMetaMethod*)signal);
}

void q_fontdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnDisconnectNotify((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_adjust_position(void* self, void* param1) {
    QFontDialog_AdjustPosition((QFontDialog*)self, (QWidget*)param1);
}

void q_fontdialog_qbase_adjust_position(void* self, void* param1) {
    QFontDialog_QBaseAdjustPosition((QFontDialog*)self, (QWidget*)param1);
}

void q_fontdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QFontDialog_OnAdjustPosition((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_update_micro_focus(void* self) {
    QFontDialog_UpdateMicroFocus((QFontDialog*)self);
}

void q_fontdialog_qbase_update_micro_focus(void* self) {
    QFontDialog_QBaseUpdateMicroFocus((QFontDialog*)self);
}

void q_fontdialog_on_update_micro_focus(void* self, void (*callback)()) {
    QFontDialog_OnUpdateMicroFocus((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_create(void* self) {
    QFontDialog_Create((QFontDialog*)self);
}

void q_fontdialog_qbase_create(void* self) {
    QFontDialog_QBaseCreate((QFontDialog*)self);
}

void q_fontdialog_on_create(void* self, void (*callback)()) {
    QFontDialog_OnCreate((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_destroy(void* self) {
    QFontDialog_Destroy((QFontDialog*)self);
}

void q_fontdialog_qbase_destroy(void* self) {
    QFontDialog_QBaseDestroy((QFontDialog*)self);
}

void q_fontdialog_on_destroy(void* self, void (*callback)()) {
    QFontDialog_OnDestroy((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_focus_next_child(void* self) {
    return QFontDialog_FocusNextChild((QFontDialog*)self);
}

bool q_fontdialog_qbase_focus_next_child(void* self) {
    return QFontDialog_QBaseFocusNextChild((QFontDialog*)self);
}

void q_fontdialog_on_focus_next_child(void* self, bool (*callback)()) {
    QFontDialog_OnFocusNextChild((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_focus_previous_child(void* self) {
    return QFontDialog_FocusPreviousChild((QFontDialog*)self);
}

bool q_fontdialog_qbase_focus_previous_child(void* self) {
    return QFontDialog_QBaseFocusPreviousChild((QFontDialog*)self);
}

void q_fontdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    QFontDialog_OnFocusPreviousChild((QFontDialog*)self, (intptr_t)callback);
}

QObject* q_fontdialog_sender(void* self) {
    return QFontDialog_Sender((QFontDialog*)self);
}

QObject* q_fontdialog_qbase_sender(void* self) {
    return QFontDialog_QBaseSender((QFontDialog*)self);
}

void q_fontdialog_on_sender(void* self, QObject* (*callback)()) {
    QFontDialog_OnSender((QFontDialog*)self, (intptr_t)callback);
}

int32_t q_fontdialog_sender_signal_index(void* self) {
    return QFontDialog_SenderSignalIndex((QFontDialog*)self);
}

int32_t q_fontdialog_qbase_sender_signal_index(void* self) {
    return QFontDialog_QBaseSenderSignalIndex((QFontDialog*)self);
}

void q_fontdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFontDialog_OnSenderSignalIndex((QFontDialog*)self, (intptr_t)callback);
}

int32_t q_fontdialog_receivers(void* self, const char* signal) {
    return QFontDialog_Receivers((QFontDialog*)self, signal);
}

int32_t q_fontdialog_qbase_receivers(void* self, const char* signal) {
    return QFontDialog_QBaseReceivers((QFontDialog*)self, signal);
}

void q_fontdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFontDialog_OnReceivers((QFontDialog*)self, (intptr_t)callback);
}

bool q_fontdialog_is_signal_connected(void* self, void* signal) {
    return QFontDialog_IsSignalConnected((QFontDialog*)self, (QMetaMethod*)signal);
}

bool q_fontdialog_qbase_is_signal_connected(void* self, void* signal) {
    return QFontDialog_QBaseIsSignalConnected((QFontDialog*)self, (QMetaMethod*)signal);
}

void q_fontdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFontDialog_OnIsSignalConnected((QFontDialog*)self, (intptr_t)callback);
}

double q_fontdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QFontDialog_GetDecodedMetricF((QFontDialog*)self, metricA, metricB);
}

double q_fontdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QFontDialog_QBaseGetDecodedMetricF((QFontDialog*)self, metricA, metricB);
}

void q_fontdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QFontDialog_OnGetDecodedMetricF((QFontDialog*)self, (intptr_t)callback);
}

void q_fontdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_fontdialog_delete(void* self) {
    QFontDialog_Delete((QFontDialog*)(self));
}
