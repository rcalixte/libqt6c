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
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqfocusframe.hpp"
#include "libqfocusframe.h"

QFocusFrame* q_focusframe_new(void* parent) {
    return QFocusFrame_new((QWidget*)parent);
}

QFocusFrame* q_focusframe_new2() {
    return QFocusFrame_new2();
}

const QMetaObject* q_focusframe_meta_object(void* self) {
    return QFocusFrame_MetaObject((QFocusFrame*)self);
}

void* q_focusframe_metacast(void* self, const char* param1) {
    return QFocusFrame_Metacast((QFocusFrame*)self, param1);
}

int32_t q_focusframe_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFocusFrame_Metacall((QFocusFrame*)self, param1, param2, param3);
}

void q_focusframe_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QFocusFrame_OnMetacall((QFocusFrame*)self, (intptr_t)callback);
}

int32_t q_focusframe_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QFocusFrame_QBaseMetacall((QFocusFrame*)self, param1, param2, param3);
}

const char* q_focusframe_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_widget(void* self, void* widget) {
    QFocusFrame_SetWidget((QFocusFrame*)self, (QWidget*)widget);
}

QWidget* q_focusframe_widget(void* self) {
    return QFocusFrame_Widget((QFocusFrame*)self);
}

bool q_focusframe_event(void* self, void* e) {
    return QFocusFrame_Event((QFocusFrame*)self, (QEvent*)e);
}

void q_focusframe_on_event(void* self, bool (*callback)(void*, void*)) {
    QFocusFrame_OnEvent((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_qbase_event(void* self, void* e) {
    return QFocusFrame_QBaseEvent((QFocusFrame*)self, (QEvent*)e);
}

bool q_focusframe_event_filter(void* self, void* param1, void* param2) {
    return QFocusFrame_EventFilter((QFocusFrame*)self, (QObject*)param1, (QEvent*)param2);
}

void q_focusframe_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QFocusFrame_OnEventFilter((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_qbase_event_filter(void* self, void* param1, void* param2) {
    return QFocusFrame_QBaseEventFilter((QFocusFrame*)self, (QObject*)param1, (QEvent*)param2);
}

void q_focusframe_paint_event(void* self, void* param1) {
    QFocusFrame_PaintEvent((QFocusFrame*)self, (QPaintEvent*)param1);
}

void q_focusframe_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnPaintEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_qbase_paint_event(void* self, void* param1) {
    QFocusFrame_QBasePaintEvent((QFocusFrame*)self, (QPaintEvent*)param1);
}

void q_focusframe_init_style_option(void* self, void* option) {
    QFocusFrame_InitStyleOption((QFocusFrame*)self, (QStyleOption*)option);
}

void q_focusframe_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnInitStyleOption((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_qbase_init_style_option(void* self, void* option) {
    QFocusFrame_QBaseInitStyleOption((QFocusFrame*)self, (QStyleOption*)option);
}

const char* q_focusframe_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_focusframe_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_focusframe_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_focusframe_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_focusframe_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_focusframe_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_focusframe_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_focusframe_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_focusframe_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_focusframe_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_focusframe_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_focusframe_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_focusframe_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_focusframe_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_focusframe_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_focusframe_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_focusframe_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_focusframe_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_focusframe_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_focusframe_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_focusframe_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_focusframe_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_focusframe_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_focusframe_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_focusframe_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_focusframe_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_focusframe_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_focusframe_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_focusframe_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_focusframe_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_focusframe_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_focusframe_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_focusframe_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_focusframe_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_focusframe_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_focusframe_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_focusframe_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_focusframe_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_focusframe_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_focusframe_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_focusframe_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_focusframe_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_focusframe_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_focusframe_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_focusframe_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_focusframe_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_focusframe_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_focusframe_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_focusframe_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_focusframe_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_focusframe_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_focusframe_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_focusframe_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_focusframe_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_focusframe_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_focusframe_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_focusframe_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_focusframe_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_focusframe_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_focusframe_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_focusframe_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_focusframe_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_focusframe_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_focusframe_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_focusframe_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_focusframe_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_focusframe_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_focusframe_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_focusframe_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_focusframe_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_focusframe_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_focusframe_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_focusframe_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_focusframe_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_focusframe_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_focusframe_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_focusframe_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_focusframe_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_focusframe_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_focusframe_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_focusframe_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_focusframe_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_focusframe_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_focusframe_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_focusframe_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_focusframe_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_focusframe_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_focusframe_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_focusframe_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_focusframe_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_focusframe_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_focusframe_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_focusframe_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_focusframe_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_focusframe_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_focusframe_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_focusframe_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_focusframe_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_focusframe_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_focusframe_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_focusframe_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_focusframe_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_focusframe_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_focusframe_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_focusframe_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_focusframe_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_focusframe_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_focusframe_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_focusframe_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_focusframe_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_focusframe_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_focusframe_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_focusframe_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_focusframe_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_focusframe_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_focusframe_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_focusframe_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_focusframe_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_focusframe_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_focusframe_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_focusframe_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_focusframe_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_focusframe_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_focusframe_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_focusframe_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_focusframe_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_focusframe_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_focusframe_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_focusframe_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_focusframe_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_focusframe_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_focusframe_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_focusframe_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_focusframe_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_focusframe_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_focusframe_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_focusframe_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_focusframe_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_focusframe_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_focusframe_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_focusframe_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_focusframe_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_focusframe_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_focusframe_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_focusframe_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_focusframe_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_focusframe_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_focusframe_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_focusframe_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_focusframe_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_focusframe_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_focusframe_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_focusframe_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_focusframe_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_focusframe_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_focusframe_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_focusframe_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_focusframe_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_focusframe_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_focusframe_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_focusframe_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_focusframe_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_focusframe_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_focusframe_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_focusframe_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_focusframe_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_focusframe_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_focusframe_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_focusframe_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_focusframe_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_focusframe_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_focusframe_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_focusframe_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_focusframe_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_focusframe_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_focusframe_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_focusframe_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_focusframe_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_focusframe_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_focusframe_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_focusframe_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_focusframe_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_focusframe_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_focusframe_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_focusframe_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_focusframe_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_focusframe_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_focusframe_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_focusframe_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_focusframe_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_focusframe_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_focusframe_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_focusframe_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_focusframe_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_focusframe_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_focusframe_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_focusframe_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_focusframe_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_focusframe_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_focusframe_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_focusframe_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_focusframe_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_focusframe_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_focusframe_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_focusframe_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_focusframe_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_focusframe_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_focusframe_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_focusframe_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_focusframe_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_focusframe_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_focusframe_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_focusframe_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_focusframe_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_focusframe_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_focusframe_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_focusframe_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_focusframe_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_focusframe_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_focusframe_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_focusframe_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_focusframe_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_focusframe_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_focusframe_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_focusframe_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_focusframe_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_focusframe_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_focusframe_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_focusframe_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_focusframe_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_focusframe_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_focusframe_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_focusframe_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_focusframe_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_focusframe_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_focusframe_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_focusframe_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_focusframe_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_focusframe_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_focusframe_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_focusframe_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_focusframe_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_focusframe_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_focusframe_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_focusframe_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_focusframe_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_focusframe_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_focusframe_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_focusframe_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_focusframe_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_focusframe_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_focusframe_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_focusframe_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_focusframe_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_focusframe_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_focusframe_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_focusframe_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_focusframe_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_focusframe_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_focusframe_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_focusframe_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_focusframe_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_focusframe_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_focusframe_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_focusframe_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_focusframe_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_focusframe_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_focusframe_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_focusframe_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_focusframe_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_focusframe_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_focusframe_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_focusframe_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_focusframe_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_focusframe_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_focusframe_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_focusframe_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_focusframe_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_focusframe_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_focusframe_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_focusframe_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_focusframe_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_focusframe_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_focusframe_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_focusframe_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_focusframe_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_focusframe_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_focusframe_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_focusframe_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_focusframe_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_focusframe_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_focusframe_dynamic_property_names\n");
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

QBindingStorage* q_focusframe_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_focusframe_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_focusframe_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_focusframe_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_focusframe_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_focusframe_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_focusframe_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_focusframe_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_focusframe_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_focusframe_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_focusframe_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_focusframe_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_focusframe_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_focusframe_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_focusframe_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_focusframe_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_focusframe_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_focusframe_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_focusframe_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_focusframe_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_focusframe_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_focusframe_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_focusframe_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_focusframe_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_focusframe_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_focusframe_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_focusframe_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_focusframe_dev_type(void* self) {
    return QFocusFrame_DevType((QFocusFrame*)self);
}

int32_t q_focusframe_qbase_dev_type(void* self) {
    return QFocusFrame_QBaseDevType((QFocusFrame*)self);
}

void q_focusframe_on_dev_type(void* self, int32_t (*callback)()) {
    QFocusFrame_OnDevType((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_set_visible(void* self, bool visible) {
    QFocusFrame_SetVisible((QFocusFrame*)self, visible);
}

void q_focusframe_qbase_set_visible(void* self, bool visible) {
    QFocusFrame_QBaseSetVisible((QFocusFrame*)self, visible);
}

void q_focusframe_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QFocusFrame_OnSetVisible((QFocusFrame*)self, (intptr_t)callback);
}

QSize* q_focusframe_size_hint(void* self) {
    return QFocusFrame_SizeHint((QFocusFrame*)self);
}

QSize* q_focusframe_qbase_size_hint(void* self) {
    return QFocusFrame_QBaseSizeHint((QFocusFrame*)self);
}

void q_focusframe_on_size_hint(void* self, QSize* (*callback)()) {
    QFocusFrame_OnSizeHint((QFocusFrame*)self, (intptr_t)callback);
}

QSize* q_focusframe_minimum_size_hint(void* self) {
    return QFocusFrame_MinimumSizeHint((QFocusFrame*)self);
}

QSize* q_focusframe_qbase_minimum_size_hint(void* self) {
    return QFocusFrame_QBaseMinimumSizeHint((QFocusFrame*)self);
}

void q_focusframe_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QFocusFrame_OnMinimumSizeHint((QFocusFrame*)self, (intptr_t)callback);
}

int32_t q_focusframe_height_for_width(void* self, int param1) {
    return QFocusFrame_HeightForWidth((QFocusFrame*)self, param1);
}

int32_t q_focusframe_qbase_height_for_width(void* self, int param1) {
    return QFocusFrame_QBaseHeightForWidth((QFocusFrame*)self, param1);
}

void q_focusframe_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QFocusFrame_OnHeightForWidth((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_has_height_for_width(void* self) {
    return QFocusFrame_HasHeightForWidth((QFocusFrame*)self);
}

bool q_focusframe_qbase_has_height_for_width(void* self) {
    return QFocusFrame_QBaseHasHeightForWidth((QFocusFrame*)self);
}

void q_focusframe_on_has_height_for_width(void* self, bool (*callback)()) {
    QFocusFrame_OnHasHeightForWidth((QFocusFrame*)self, (intptr_t)callback);
}

QPaintEngine* q_focusframe_paint_engine(void* self) {
    return QFocusFrame_PaintEngine((QFocusFrame*)self);
}

QPaintEngine* q_focusframe_qbase_paint_engine(void* self) {
    return QFocusFrame_QBasePaintEngine((QFocusFrame*)self);
}

void q_focusframe_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QFocusFrame_OnPaintEngine((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_mouse_press_event(void* self, void* event) {
    QFocusFrame_MousePressEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_qbase_mouse_press_event(void* self, void* event) {
    QFocusFrame_QBaseMousePressEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnMousePressEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_mouse_release_event(void* self, void* event) {
    QFocusFrame_MouseReleaseEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_qbase_mouse_release_event(void* self, void* event) {
    QFocusFrame_QBaseMouseReleaseEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnMouseReleaseEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_mouse_double_click_event(void* self, void* event) {
    QFocusFrame_MouseDoubleClickEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_qbase_mouse_double_click_event(void* self, void* event) {
    QFocusFrame_QBaseMouseDoubleClickEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnMouseDoubleClickEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_mouse_move_event(void* self, void* event) {
    QFocusFrame_MouseMoveEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_qbase_mouse_move_event(void* self, void* event) {
    QFocusFrame_QBaseMouseMoveEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

void q_focusframe_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnMouseMoveEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_wheel_event(void* self, void* event) {
    QFocusFrame_WheelEvent((QFocusFrame*)self, (QWheelEvent*)event);
}

void q_focusframe_qbase_wheel_event(void* self, void* event) {
    QFocusFrame_QBaseWheelEvent((QFocusFrame*)self, (QWheelEvent*)event);
}

void q_focusframe_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnWheelEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_key_press_event(void* self, void* event) {
    QFocusFrame_KeyPressEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

void q_focusframe_qbase_key_press_event(void* self, void* event) {
    QFocusFrame_QBaseKeyPressEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

void q_focusframe_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnKeyPressEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_key_release_event(void* self, void* event) {
    QFocusFrame_KeyReleaseEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

void q_focusframe_qbase_key_release_event(void* self, void* event) {
    QFocusFrame_QBaseKeyReleaseEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

void q_focusframe_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnKeyReleaseEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_focus_in_event(void* self, void* event) {
    QFocusFrame_FocusInEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

void q_focusframe_qbase_focus_in_event(void* self, void* event) {
    QFocusFrame_QBaseFocusInEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

void q_focusframe_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnFocusInEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_focus_out_event(void* self, void* event) {
    QFocusFrame_FocusOutEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

void q_focusframe_qbase_focus_out_event(void* self, void* event) {
    QFocusFrame_QBaseFocusOutEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

void q_focusframe_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnFocusOutEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_enter_event(void* self, void* event) {
    QFocusFrame_EnterEvent((QFocusFrame*)self, (QEnterEvent*)event);
}

void q_focusframe_qbase_enter_event(void* self, void* event) {
    QFocusFrame_QBaseEnterEvent((QFocusFrame*)self, (QEnterEvent*)event);
}

void q_focusframe_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnEnterEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_leave_event(void* self, void* event) {
    QFocusFrame_LeaveEvent((QFocusFrame*)self, (QEvent*)event);
}

void q_focusframe_qbase_leave_event(void* self, void* event) {
    QFocusFrame_QBaseLeaveEvent((QFocusFrame*)self, (QEvent*)event);
}

void q_focusframe_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnLeaveEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_move_event(void* self, void* event) {
    QFocusFrame_MoveEvent((QFocusFrame*)self, (QMoveEvent*)event);
}

void q_focusframe_qbase_move_event(void* self, void* event) {
    QFocusFrame_QBaseMoveEvent((QFocusFrame*)self, (QMoveEvent*)event);
}

void q_focusframe_on_move_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnMoveEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_resize_event(void* self, void* event) {
    QFocusFrame_ResizeEvent((QFocusFrame*)self, (QResizeEvent*)event);
}

void q_focusframe_qbase_resize_event(void* self, void* event) {
    QFocusFrame_QBaseResizeEvent((QFocusFrame*)self, (QResizeEvent*)event);
}

void q_focusframe_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnResizeEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_close_event(void* self, void* event) {
    QFocusFrame_CloseEvent((QFocusFrame*)self, (QCloseEvent*)event);
}

void q_focusframe_qbase_close_event(void* self, void* event) {
    QFocusFrame_QBaseCloseEvent((QFocusFrame*)self, (QCloseEvent*)event);
}

void q_focusframe_on_close_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnCloseEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_context_menu_event(void* self, void* event) {
    QFocusFrame_ContextMenuEvent((QFocusFrame*)self, (QContextMenuEvent*)event);
}

void q_focusframe_qbase_context_menu_event(void* self, void* event) {
    QFocusFrame_QBaseContextMenuEvent((QFocusFrame*)self, (QContextMenuEvent*)event);
}

void q_focusframe_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnContextMenuEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_tablet_event(void* self, void* event) {
    QFocusFrame_TabletEvent((QFocusFrame*)self, (QTabletEvent*)event);
}

void q_focusframe_qbase_tablet_event(void* self, void* event) {
    QFocusFrame_QBaseTabletEvent((QFocusFrame*)self, (QTabletEvent*)event);
}

void q_focusframe_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnTabletEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_action_event(void* self, void* event) {
    QFocusFrame_ActionEvent((QFocusFrame*)self, (QActionEvent*)event);
}

void q_focusframe_qbase_action_event(void* self, void* event) {
    QFocusFrame_QBaseActionEvent((QFocusFrame*)self, (QActionEvent*)event);
}

void q_focusframe_on_action_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnActionEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_drag_enter_event(void* self, void* event) {
    QFocusFrame_DragEnterEvent((QFocusFrame*)self, (QDragEnterEvent*)event);
}

void q_focusframe_qbase_drag_enter_event(void* self, void* event) {
    QFocusFrame_QBaseDragEnterEvent((QFocusFrame*)self, (QDragEnterEvent*)event);
}

void q_focusframe_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnDragEnterEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_drag_move_event(void* self, void* event) {
    QFocusFrame_DragMoveEvent((QFocusFrame*)self, (QDragMoveEvent*)event);
}

void q_focusframe_qbase_drag_move_event(void* self, void* event) {
    QFocusFrame_QBaseDragMoveEvent((QFocusFrame*)self, (QDragMoveEvent*)event);
}

void q_focusframe_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnDragMoveEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_drag_leave_event(void* self, void* event) {
    QFocusFrame_DragLeaveEvent((QFocusFrame*)self, (QDragLeaveEvent*)event);
}

void q_focusframe_qbase_drag_leave_event(void* self, void* event) {
    QFocusFrame_QBaseDragLeaveEvent((QFocusFrame*)self, (QDragLeaveEvent*)event);
}

void q_focusframe_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnDragLeaveEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_drop_event(void* self, void* event) {
    QFocusFrame_DropEvent((QFocusFrame*)self, (QDropEvent*)event);
}

void q_focusframe_qbase_drop_event(void* self, void* event) {
    QFocusFrame_QBaseDropEvent((QFocusFrame*)self, (QDropEvent*)event);
}

void q_focusframe_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnDropEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_show_event(void* self, void* event) {
    QFocusFrame_ShowEvent((QFocusFrame*)self, (QShowEvent*)event);
}

void q_focusframe_qbase_show_event(void* self, void* event) {
    QFocusFrame_QBaseShowEvent((QFocusFrame*)self, (QShowEvent*)event);
}

void q_focusframe_on_show_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnShowEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_hide_event(void* self, void* event) {
    QFocusFrame_HideEvent((QFocusFrame*)self, (QHideEvent*)event);
}

void q_focusframe_qbase_hide_event(void* self, void* event) {
    QFocusFrame_QBaseHideEvent((QFocusFrame*)self, (QHideEvent*)event);
}

void q_focusframe_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnHideEvent((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFocusFrame_NativeEvent((QFocusFrame*)self, qstring(eventType), message, result);
}

bool q_focusframe_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFocusFrame_QBaseNativeEvent((QFocusFrame*)self, qstring(eventType), message, result);
}

void q_focusframe_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QFocusFrame_OnNativeEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_change_event(void* self, void* param1) {
    QFocusFrame_ChangeEvent((QFocusFrame*)self, (QEvent*)param1);
}

void q_focusframe_qbase_change_event(void* self, void* param1) {
    QFocusFrame_QBaseChangeEvent((QFocusFrame*)self, (QEvent*)param1);
}

void q_focusframe_on_change_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnChangeEvent((QFocusFrame*)self, (intptr_t)callback);
}

int32_t q_focusframe_metric(void* self, int32_t param1) {
    return QFocusFrame_Metric((QFocusFrame*)self, param1);
}

int32_t q_focusframe_qbase_metric(void* self, int32_t param1) {
    return QFocusFrame_QBaseMetric((QFocusFrame*)self, param1);
}

void q_focusframe_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QFocusFrame_OnMetric((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_init_painter(void* self, void* painter) {
    QFocusFrame_InitPainter((QFocusFrame*)self, (QPainter*)painter);
}

void q_focusframe_qbase_init_painter(void* self, void* painter) {
    QFocusFrame_QBaseInitPainter((QFocusFrame*)self, (QPainter*)painter);
}

void q_focusframe_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnInitPainter((QFocusFrame*)self, (intptr_t)callback);
}

QPaintDevice* q_focusframe_redirected(void* self, void* offset) {
    return QFocusFrame_Redirected((QFocusFrame*)self, (QPoint*)offset);
}

QPaintDevice* q_focusframe_qbase_redirected(void* self, void* offset) {
    return QFocusFrame_QBaseRedirected((QFocusFrame*)self, (QPoint*)offset);
}

void q_focusframe_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QFocusFrame_OnRedirected((QFocusFrame*)self, (intptr_t)callback);
}

QPainter* q_focusframe_shared_painter(void* self) {
    return QFocusFrame_SharedPainter((QFocusFrame*)self);
}

QPainter* q_focusframe_qbase_shared_painter(void* self) {
    return QFocusFrame_QBaseSharedPainter((QFocusFrame*)self);
}

void q_focusframe_on_shared_painter(void* self, QPainter* (*callback)()) {
    QFocusFrame_OnSharedPainter((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_input_method_event(void* self, void* param1) {
    QFocusFrame_InputMethodEvent((QFocusFrame*)self, (QInputMethodEvent*)param1);
}

void q_focusframe_qbase_input_method_event(void* self, void* param1) {
    QFocusFrame_QBaseInputMethodEvent((QFocusFrame*)self, (QInputMethodEvent*)param1);
}

void q_focusframe_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnInputMethodEvent((QFocusFrame*)self, (intptr_t)callback);
}

QVariant* q_focusframe_input_method_query(void* self, int32_t param1) {
    return QFocusFrame_InputMethodQuery((QFocusFrame*)self, param1);
}

QVariant* q_focusframe_qbase_input_method_query(void* self, int32_t param1) {
    return QFocusFrame_QBaseInputMethodQuery((QFocusFrame*)self, param1);
}

void q_focusframe_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QFocusFrame_OnInputMethodQuery((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_focus_next_prev_child(void* self, bool next) {
    return QFocusFrame_FocusNextPrevChild((QFocusFrame*)self, next);
}

bool q_focusframe_qbase_focus_next_prev_child(void* self, bool next) {
    return QFocusFrame_QBaseFocusNextPrevChild((QFocusFrame*)self, next);
}

void q_focusframe_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QFocusFrame_OnFocusNextPrevChild((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_timer_event(void* self, void* event) {
    QFocusFrame_TimerEvent((QFocusFrame*)self, (QTimerEvent*)event);
}

void q_focusframe_qbase_timer_event(void* self, void* event) {
    QFocusFrame_QBaseTimerEvent((QFocusFrame*)self, (QTimerEvent*)event);
}

void q_focusframe_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnTimerEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_child_event(void* self, void* event) {
    QFocusFrame_ChildEvent((QFocusFrame*)self, (QChildEvent*)event);
}

void q_focusframe_qbase_child_event(void* self, void* event) {
    QFocusFrame_QBaseChildEvent((QFocusFrame*)self, (QChildEvent*)event);
}

void q_focusframe_on_child_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnChildEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_custom_event(void* self, void* event) {
    QFocusFrame_CustomEvent((QFocusFrame*)self, (QEvent*)event);
}

void q_focusframe_qbase_custom_event(void* self, void* event) {
    QFocusFrame_QBaseCustomEvent((QFocusFrame*)self, (QEvent*)event);
}

void q_focusframe_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnCustomEvent((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_connect_notify(void* self, void* signal) {
    QFocusFrame_ConnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

void q_focusframe_qbase_connect_notify(void* self, void* signal) {
    QFocusFrame_QBaseConnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

void q_focusframe_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnConnectNotify((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_disconnect_notify(void* self, void* signal) {
    QFocusFrame_DisconnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

void q_focusframe_qbase_disconnect_notify(void* self, void* signal) {
    QFocusFrame_QBaseDisconnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

void q_focusframe_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QFocusFrame_OnDisconnectNotify((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_update_micro_focus(void* self) {
    QFocusFrame_UpdateMicroFocus((QFocusFrame*)self);
}

void q_focusframe_qbase_update_micro_focus(void* self) {
    QFocusFrame_QBaseUpdateMicroFocus((QFocusFrame*)self);
}

void q_focusframe_on_update_micro_focus(void* self, void (*callback)()) {
    QFocusFrame_OnUpdateMicroFocus((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_create(void* self) {
    QFocusFrame_Create((QFocusFrame*)self);
}

void q_focusframe_qbase_create(void* self) {
    QFocusFrame_QBaseCreate((QFocusFrame*)self);
}

void q_focusframe_on_create(void* self, void (*callback)()) {
    QFocusFrame_OnCreate((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_destroy(void* self) {
    QFocusFrame_Destroy((QFocusFrame*)self);
}

void q_focusframe_qbase_destroy(void* self) {
    QFocusFrame_QBaseDestroy((QFocusFrame*)self);
}

void q_focusframe_on_destroy(void* self, void (*callback)()) {
    QFocusFrame_OnDestroy((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_focus_next_child(void* self) {
    return QFocusFrame_FocusNextChild((QFocusFrame*)self);
}

bool q_focusframe_qbase_focus_next_child(void* self) {
    return QFocusFrame_QBaseFocusNextChild((QFocusFrame*)self);
}

void q_focusframe_on_focus_next_child(void* self, bool (*callback)()) {
    QFocusFrame_OnFocusNextChild((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_focus_previous_child(void* self) {
    return QFocusFrame_FocusPreviousChild((QFocusFrame*)self);
}

bool q_focusframe_qbase_focus_previous_child(void* self) {
    return QFocusFrame_QBaseFocusPreviousChild((QFocusFrame*)self);
}

void q_focusframe_on_focus_previous_child(void* self, bool (*callback)()) {
    QFocusFrame_OnFocusPreviousChild((QFocusFrame*)self, (intptr_t)callback);
}

QObject* q_focusframe_sender(void* self) {
    return QFocusFrame_Sender((QFocusFrame*)self);
}

QObject* q_focusframe_qbase_sender(void* self) {
    return QFocusFrame_QBaseSender((QFocusFrame*)self);
}

void q_focusframe_on_sender(void* self, QObject* (*callback)()) {
    QFocusFrame_OnSender((QFocusFrame*)self, (intptr_t)callback);
}

int32_t q_focusframe_sender_signal_index(void* self) {
    return QFocusFrame_SenderSignalIndex((QFocusFrame*)self);
}

int32_t q_focusframe_qbase_sender_signal_index(void* self) {
    return QFocusFrame_QBaseSenderSignalIndex((QFocusFrame*)self);
}

void q_focusframe_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QFocusFrame_OnSenderSignalIndex((QFocusFrame*)self, (intptr_t)callback);
}

int32_t q_focusframe_receivers(void* self, const char* signal) {
    return QFocusFrame_Receivers((QFocusFrame*)self, signal);
}

int32_t q_focusframe_qbase_receivers(void* self, const char* signal) {
    return QFocusFrame_QBaseReceivers((QFocusFrame*)self, signal);
}

void q_focusframe_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QFocusFrame_OnReceivers((QFocusFrame*)self, (intptr_t)callback);
}

bool q_focusframe_is_signal_connected(void* self, void* signal) {
    return QFocusFrame_IsSignalConnected((QFocusFrame*)self, (QMetaMethod*)signal);
}

bool q_focusframe_qbase_is_signal_connected(void* self, void* signal) {
    return QFocusFrame_QBaseIsSignalConnected((QFocusFrame*)self, (QMetaMethod*)signal);
}

void q_focusframe_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QFocusFrame_OnIsSignalConnected((QFocusFrame*)self, (intptr_t)callback);
}

double q_focusframe_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QFocusFrame_GetDecodedMetricF((QFocusFrame*)self, metricA, metricB);
}

double q_focusframe_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QFocusFrame_QBaseGetDecodedMetricF((QFocusFrame*)self, metricA, metricB);
}

void q_focusframe_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QFocusFrame_OnGetDecodedMetricF((QFocusFrame*)self, (intptr_t)callback);
}

void q_focusframe_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_focusframe_delete(void* self) {
    QFocusFrame_Delete((QFocusFrame*)(self));
}
