#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkled.hpp"
#include "libkled.h"

KLed* k_led_new(void* parent) {
    return KLed_new((QWidget*)parent);
}

KLed* k_led_new2() {
    return KLed_new2();
}

KLed* k_led_new3(void* color) {
    return KLed_new3((QColor*)color);
}

KLed* k_led_new4(void* color, int32_t state, int32_t look, int32_t shape) {
    return KLed_new4((QColor*)color, state, look, shape);
}

KLed* k_led_new5(void* color, void* parent) {
    return KLed_new5((QColor*)color, (QWidget*)parent);
}

KLed* k_led_new6(void* color, int32_t state, int32_t look, int32_t shape, void* parent) {
    return KLed_new6((QColor*)color, state, look, shape, (QWidget*)parent);
}

const QMetaObject* k_led_meta_object(void* self) {
    return KLed_MetaObject((KLed*)self);
}

void* k_led_metacast(void* self, const char* param1) {
    return KLed_Metacast((KLed*)self, param1);
}

int32_t k_led_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLed_Metacall((KLed*)self, param1, param2, param3);
}

void k_led_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLed_OnMetacall((KLed*)self, (intptr_t)callback);
}

int32_t k_led_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLed_QBaseMetacall((KLed*)self, param1, param2, param3);
}

const char* k_led_tr(const char* s) {
    libqt_string _str = KLed_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* k_led_color(void* self) {
    return KLed_Color((KLed*)self);
}

int32_t k_led_state(void* self) {
    return KLed_State((KLed*)self);
}

int32_t k_led_look(void* self) {
    return KLed_Look((KLed*)self);
}

int32_t k_led_shape(void* self) {
    return KLed_Shape((KLed*)self);
}

int32_t k_led_dark_factor(void* self) {
    return KLed_DarkFactor((KLed*)self);
}

void k_led_set_color(void* self, void* color) {
    KLed_SetColor((KLed*)self, (QColor*)color);
}

void k_led_set_state(void* self, int32_t state) {
    KLed_SetState((KLed*)self, state);
}

void k_led_set_look(void* self, int32_t look) {
    KLed_SetLook((KLed*)self, look);
}

void k_led_set_shape(void* self, int32_t shape) {
    KLed_SetShape((KLed*)self, shape);
}

void k_led_set_dark_factor(void* self, int darkFactor) {
    KLed_SetDarkFactor((KLed*)self, darkFactor);
}

QSize* k_led_size_hint(void* self) {
    return KLed_SizeHint((KLed*)self);
}

void k_led_on_size_hint(void* self, QSize* (*callback)()) {
    KLed_OnSizeHint((KLed*)self, (intptr_t)callback);
}

QSize* k_led_qbase_size_hint(void* self) {
    return KLed_QBaseSizeHint((KLed*)self);
}

QSize* k_led_minimum_size_hint(void* self) {
    return KLed_MinimumSizeHint((KLed*)self);
}

void k_led_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KLed_OnMinimumSizeHint((KLed*)self, (intptr_t)callback);
}

QSize* k_led_qbase_minimum_size_hint(void* self) {
    return KLed_QBaseMinimumSizeHint((KLed*)self);
}

void k_led_toggle(void* self) {
    KLed_Toggle((KLed*)self);
}

void k_led_on(void* self) {
    KLed_On((KLed*)self);
}

void k_led_off(void* self) {
    KLed_Off((KLed*)self);
}

void k_led_paint_event(void* self, void* param1) {
    KLed_PaintEvent((KLed*)self, (QPaintEvent*)param1);
}

void k_led_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnPaintEvent((KLed*)self, (intptr_t)callback);
}

void k_led_qbase_paint_event(void* self, void* param1) {
    KLed_QBasePaintEvent((KLed*)self, (QPaintEvent*)param1);
}

void k_led_resize_event(void* self, void* param1) {
    KLed_ResizeEvent((KLed*)self, (QResizeEvent*)param1);
}

void k_led_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnResizeEvent((KLed*)self, (intptr_t)callback);
}

void k_led_qbase_resize_event(void* self, void* param1) {
    KLed_QBaseResizeEvent((KLed*)self, (QResizeEvent*)param1);
}

const char* k_led_tr2(const char* s, const char* c) {
    libqt_string _str = KLed_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_led_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KLed_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_led_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_led_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_led_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_led_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_led_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_led_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_led_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_led_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_led_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_led_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_led_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_led_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_led_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_led_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_led_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_led_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_led_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_led_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_led_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_led_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_led_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_led_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_led_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_led_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_led_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_led_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_led_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_led_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_led_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_led_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_led_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_led_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_led_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_led_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_led_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_led_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_led_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_led_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_led_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_led_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_led_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_led_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_led_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_led_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_led_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_led_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_led_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_led_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_led_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_led_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_led_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_led_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_led_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_led_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_led_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_led_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_led_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_led_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_led_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_led_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_led_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_led_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_led_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_led_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_led_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_led_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_led_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_led_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_led_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_led_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_led_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_led_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_led_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_led_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_led_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_led_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_led_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_led_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_led_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_led_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_led_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_led_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_led_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_led_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_led_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_led_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_led_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_led_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_led_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_led_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_led_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_led_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_led_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_led_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_led_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_led_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_led_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_led_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_led_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_led_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_led_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_led_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_led_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_led_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_led_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_led_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_led_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_led_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_led_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_led_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_led_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_led_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_led_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_led_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_led_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_led_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_led_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_led_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_led_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_led_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_led_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_led_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_led_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_led_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_led_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_led_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_led_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_led_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_led_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_led_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_led_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_led_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_led_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_led_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_led_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_led_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_led_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_led_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_led_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_led_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_led_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_led_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_led_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_led_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_led_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_led_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_led_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_led_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_led_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_led_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_led_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_led_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_led_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_led_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_led_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_led_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_led_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_led_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_led_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_led_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_led_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_led_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_led_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_led_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_led_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_led_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_led_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_led_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_led_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_led_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_led_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_led_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_led_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_led_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_led_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_led_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_led_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_led_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_led_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_led_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_led_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_led_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_led_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_led_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_led_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t k_led_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_led_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_led_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_led_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_led_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_led_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_led_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_led_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_led_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_led_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_led_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_led_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_led_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_led_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_led_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_led_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_led_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_led_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_led_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_led_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_led_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_led_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_led_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_led_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_led_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_led_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_led_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_led_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_led_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_led_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_led_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_led_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_led_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_led_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_led_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_led_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_led_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_led_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_led_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_led_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_led_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_led_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_led_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_led_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_led_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_led_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_led_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_led_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_led_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_led_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_led_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_led_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_led_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_led_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_led_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_led_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_led_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_led_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_led_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_led_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_led_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_led_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_led_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_led_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_led_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_led_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_led_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_led_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_led_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_led_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_led_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_led_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_led_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_led_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_led_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_led_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_led_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_led_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_led_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_led_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_led_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_led_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_led_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_led_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_led_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_led_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_led_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_led_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_led_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_led_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_led_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_led_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_led_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_led_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_led_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_led_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_led_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_led_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_led_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_led_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_led_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_led_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_led_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_led_dynamic_property_names");
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

QBindingStorage* k_led_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_led_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_led_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_led_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_led_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_led_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_led_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_led_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_led_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_led_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_led_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_led_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_led_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_led_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_led_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_led_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_led_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_led_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_led_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_led_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_led_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_led_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_led_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_led_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_led_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_led_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_led_dev_type(void* self) {
    return KLed_DevType((KLed*)self);
}

int32_t k_led_qbase_dev_type(void* self) {
    return KLed_QBaseDevType((KLed*)self);
}

void k_led_on_dev_type(void* self, int32_t (*callback)()) {
    KLed_OnDevType((KLed*)self, (intptr_t)callback);
}

void k_led_set_visible(void* self, bool visible) {
    KLed_SetVisible((KLed*)self, visible);
}

void k_led_qbase_set_visible(void* self, bool visible) {
    KLed_QBaseSetVisible((KLed*)self, visible);
}

void k_led_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KLed_OnSetVisible((KLed*)self, (intptr_t)callback);
}

int32_t k_led_height_for_width(void* self, int param1) {
    return KLed_HeightForWidth((KLed*)self, param1);
}

int32_t k_led_qbase_height_for_width(void* self, int param1) {
    return KLed_QBaseHeightForWidth((KLed*)self, param1);
}

void k_led_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KLed_OnHeightForWidth((KLed*)self, (intptr_t)callback);
}

bool k_led_has_height_for_width(void* self) {
    return KLed_HasHeightForWidth((KLed*)self);
}

bool k_led_qbase_has_height_for_width(void* self) {
    return KLed_QBaseHasHeightForWidth((KLed*)self);
}

void k_led_on_has_height_for_width(void* self, bool (*callback)()) {
    KLed_OnHasHeightForWidth((KLed*)self, (intptr_t)callback);
}

QPaintEngine* k_led_paint_engine(void* self) {
    return KLed_PaintEngine((KLed*)self);
}

QPaintEngine* k_led_qbase_paint_engine(void* self) {
    return KLed_QBasePaintEngine((KLed*)self);
}

void k_led_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KLed_OnPaintEngine((KLed*)self, (intptr_t)callback);
}

bool k_led_event(void* self, void* event) {
    return KLed_Event((KLed*)self, (QEvent*)event);
}

bool k_led_qbase_event(void* self, void* event) {
    return KLed_QBaseEvent((KLed*)self, (QEvent*)event);
}

void k_led_on_event(void* self, bool (*callback)(void*, void*)) {
    KLed_OnEvent((KLed*)self, (intptr_t)callback);
}

void k_led_mouse_press_event(void* self, void* event) {
    KLed_MousePressEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_qbase_mouse_press_event(void* self, void* event) {
    KLed_QBaseMousePressEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnMousePressEvent((KLed*)self, (intptr_t)callback);
}

void k_led_mouse_release_event(void* self, void* event) {
    KLed_MouseReleaseEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_qbase_mouse_release_event(void* self, void* event) {
    KLed_QBaseMouseReleaseEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnMouseReleaseEvent((KLed*)self, (intptr_t)callback);
}

void k_led_mouse_double_click_event(void* self, void* event) {
    KLed_MouseDoubleClickEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_qbase_mouse_double_click_event(void* self, void* event) {
    KLed_QBaseMouseDoubleClickEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnMouseDoubleClickEvent((KLed*)self, (intptr_t)callback);
}

void k_led_mouse_move_event(void* self, void* event) {
    KLed_MouseMoveEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_qbase_mouse_move_event(void* self, void* event) {
    KLed_QBaseMouseMoveEvent((KLed*)self, (QMouseEvent*)event);
}

void k_led_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnMouseMoveEvent((KLed*)self, (intptr_t)callback);
}

void k_led_wheel_event(void* self, void* event) {
    KLed_WheelEvent((KLed*)self, (QWheelEvent*)event);
}

void k_led_qbase_wheel_event(void* self, void* event) {
    KLed_QBaseWheelEvent((KLed*)self, (QWheelEvent*)event);
}

void k_led_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnWheelEvent((KLed*)self, (intptr_t)callback);
}

void k_led_key_press_event(void* self, void* event) {
    KLed_KeyPressEvent((KLed*)self, (QKeyEvent*)event);
}

void k_led_qbase_key_press_event(void* self, void* event) {
    KLed_QBaseKeyPressEvent((KLed*)self, (QKeyEvent*)event);
}

void k_led_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnKeyPressEvent((KLed*)self, (intptr_t)callback);
}

void k_led_key_release_event(void* self, void* event) {
    KLed_KeyReleaseEvent((KLed*)self, (QKeyEvent*)event);
}

void k_led_qbase_key_release_event(void* self, void* event) {
    KLed_QBaseKeyReleaseEvent((KLed*)self, (QKeyEvent*)event);
}

void k_led_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnKeyReleaseEvent((KLed*)self, (intptr_t)callback);
}

void k_led_focus_in_event(void* self, void* event) {
    KLed_FocusInEvent((KLed*)self, (QFocusEvent*)event);
}

void k_led_qbase_focus_in_event(void* self, void* event) {
    KLed_QBaseFocusInEvent((KLed*)self, (QFocusEvent*)event);
}

void k_led_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnFocusInEvent((KLed*)self, (intptr_t)callback);
}

void k_led_focus_out_event(void* self, void* event) {
    KLed_FocusOutEvent((KLed*)self, (QFocusEvent*)event);
}

void k_led_qbase_focus_out_event(void* self, void* event) {
    KLed_QBaseFocusOutEvent((KLed*)self, (QFocusEvent*)event);
}

void k_led_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnFocusOutEvent((KLed*)self, (intptr_t)callback);
}

void k_led_enter_event(void* self, void* event) {
    KLed_EnterEvent((KLed*)self, (QEnterEvent*)event);
}

void k_led_qbase_enter_event(void* self, void* event) {
    KLed_QBaseEnterEvent((KLed*)self, (QEnterEvent*)event);
}

void k_led_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnEnterEvent((KLed*)self, (intptr_t)callback);
}

void k_led_leave_event(void* self, void* event) {
    KLed_LeaveEvent((KLed*)self, (QEvent*)event);
}

void k_led_qbase_leave_event(void* self, void* event) {
    KLed_QBaseLeaveEvent((KLed*)self, (QEvent*)event);
}

void k_led_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnLeaveEvent((KLed*)self, (intptr_t)callback);
}

void k_led_move_event(void* self, void* event) {
    KLed_MoveEvent((KLed*)self, (QMoveEvent*)event);
}

void k_led_qbase_move_event(void* self, void* event) {
    KLed_QBaseMoveEvent((KLed*)self, (QMoveEvent*)event);
}

void k_led_on_move_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnMoveEvent((KLed*)self, (intptr_t)callback);
}

void k_led_close_event(void* self, void* event) {
    KLed_CloseEvent((KLed*)self, (QCloseEvent*)event);
}

void k_led_qbase_close_event(void* self, void* event) {
    KLed_QBaseCloseEvent((KLed*)self, (QCloseEvent*)event);
}

void k_led_on_close_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnCloseEvent((KLed*)self, (intptr_t)callback);
}

void k_led_context_menu_event(void* self, void* event) {
    KLed_ContextMenuEvent((KLed*)self, (QContextMenuEvent*)event);
}

void k_led_qbase_context_menu_event(void* self, void* event) {
    KLed_QBaseContextMenuEvent((KLed*)self, (QContextMenuEvent*)event);
}

void k_led_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnContextMenuEvent((KLed*)self, (intptr_t)callback);
}

void k_led_tablet_event(void* self, void* event) {
    KLed_TabletEvent((KLed*)self, (QTabletEvent*)event);
}

void k_led_qbase_tablet_event(void* self, void* event) {
    KLed_QBaseTabletEvent((KLed*)self, (QTabletEvent*)event);
}

void k_led_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnTabletEvent((KLed*)self, (intptr_t)callback);
}

void k_led_action_event(void* self, void* event) {
    KLed_ActionEvent((KLed*)self, (QActionEvent*)event);
}

void k_led_qbase_action_event(void* self, void* event) {
    KLed_QBaseActionEvent((KLed*)self, (QActionEvent*)event);
}

void k_led_on_action_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnActionEvent((KLed*)self, (intptr_t)callback);
}

void k_led_drag_enter_event(void* self, void* event) {
    KLed_DragEnterEvent((KLed*)self, (QDragEnterEvent*)event);
}

void k_led_qbase_drag_enter_event(void* self, void* event) {
    KLed_QBaseDragEnterEvent((KLed*)self, (QDragEnterEvent*)event);
}

void k_led_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnDragEnterEvent((KLed*)self, (intptr_t)callback);
}

void k_led_drag_move_event(void* self, void* event) {
    KLed_DragMoveEvent((KLed*)self, (QDragMoveEvent*)event);
}

void k_led_qbase_drag_move_event(void* self, void* event) {
    KLed_QBaseDragMoveEvent((KLed*)self, (QDragMoveEvent*)event);
}

void k_led_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnDragMoveEvent((KLed*)self, (intptr_t)callback);
}

void k_led_drag_leave_event(void* self, void* event) {
    KLed_DragLeaveEvent((KLed*)self, (QDragLeaveEvent*)event);
}

void k_led_qbase_drag_leave_event(void* self, void* event) {
    KLed_QBaseDragLeaveEvent((KLed*)self, (QDragLeaveEvent*)event);
}

void k_led_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnDragLeaveEvent((KLed*)self, (intptr_t)callback);
}

void k_led_drop_event(void* self, void* event) {
    KLed_DropEvent((KLed*)self, (QDropEvent*)event);
}

void k_led_qbase_drop_event(void* self, void* event) {
    KLed_QBaseDropEvent((KLed*)self, (QDropEvent*)event);
}

void k_led_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnDropEvent((KLed*)self, (intptr_t)callback);
}

void k_led_show_event(void* self, void* event) {
    KLed_ShowEvent((KLed*)self, (QShowEvent*)event);
}

void k_led_qbase_show_event(void* self, void* event) {
    KLed_QBaseShowEvent((KLed*)self, (QShowEvent*)event);
}

void k_led_on_show_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnShowEvent((KLed*)self, (intptr_t)callback);
}

void k_led_hide_event(void* self, void* event) {
    KLed_HideEvent((KLed*)self, (QHideEvent*)event);
}

void k_led_qbase_hide_event(void* self, void* event) {
    KLed_QBaseHideEvent((KLed*)self, (QHideEvent*)event);
}

void k_led_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnHideEvent((KLed*)self, (intptr_t)callback);
}

bool k_led_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KLed_NativeEvent((KLed*)self, qstring(eventType), message, result);
}

bool k_led_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KLed_QBaseNativeEvent((KLed*)self, qstring(eventType), message, result);
}

void k_led_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KLed_OnNativeEvent((KLed*)self, (intptr_t)callback);
}

void k_led_change_event(void* self, void* param1) {
    KLed_ChangeEvent((KLed*)self, (QEvent*)param1);
}

void k_led_qbase_change_event(void* self, void* param1) {
    KLed_QBaseChangeEvent((KLed*)self, (QEvent*)param1);
}

void k_led_on_change_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnChangeEvent((KLed*)self, (intptr_t)callback);
}

int32_t k_led_metric(void* self, int32_t param1) {
    return KLed_Metric((KLed*)self, param1);
}

int32_t k_led_qbase_metric(void* self, int32_t param1) {
    return KLed_QBaseMetric((KLed*)self, param1);
}

void k_led_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KLed_OnMetric((KLed*)self, (intptr_t)callback);
}

void k_led_init_painter(void* self, void* painter) {
    KLed_InitPainter((KLed*)self, (QPainter*)painter);
}

void k_led_qbase_init_painter(void* self, void* painter) {
    KLed_QBaseInitPainter((KLed*)self, (QPainter*)painter);
}

void k_led_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KLed_OnInitPainter((KLed*)self, (intptr_t)callback);
}

QPaintDevice* k_led_redirected(void* self, void* offset) {
    return KLed_Redirected((KLed*)self, (QPoint*)offset);
}

QPaintDevice* k_led_qbase_redirected(void* self, void* offset) {
    return KLed_QBaseRedirected((KLed*)self, (QPoint*)offset);
}

void k_led_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KLed_OnRedirected((KLed*)self, (intptr_t)callback);
}

QPainter* k_led_shared_painter(void* self) {
    return KLed_SharedPainter((KLed*)self);
}

QPainter* k_led_qbase_shared_painter(void* self) {
    return KLed_QBaseSharedPainter((KLed*)self);
}

void k_led_on_shared_painter(void* self, QPainter* (*callback)()) {
    KLed_OnSharedPainter((KLed*)self, (intptr_t)callback);
}

void k_led_input_method_event(void* self, void* param1) {
    KLed_InputMethodEvent((KLed*)self, (QInputMethodEvent*)param1);
}

void k_led_qbase_input_method_event(void* self, void* param1) {
    KLed_QBaseInputMethodEvent((KLed*)self, (QInputMethodEvent*)param1);
}

void k_led_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnInputMethodEvent((KLed*)self, (intptr_t)callback);
}

QVariant* k_led_input_method_query(void* self, int64_t param1) {
    return KLed_InputMethodQuery((KLed*)self, param1);
}

QVariant* k_led_qbase_input_method_query(void* self, int64_t param1) {
    return KLed_QBaseInputMethodQuery((KLed*)self, param1);
}

void k_led_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KLed_OnInputMethodQuery((KLed*)self, (intptr_t)callback);
}

bool k_led_focus_next_prev_child(void* self, bool next) {
    return KLed_FocusNextPrevChild((KLed*)self, next);
}

bool k_led_qbase_focus_next_prev_child(void* self, bool next) {
    return KLed_QBaseFocusNextPrevChild((KLed*)self, next);
}

void k_led_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KLed_OnFocusNextPrevChild((KLed*)self, (intptr_t)callback);
}

bool k_led_event_filter(void* self, void* watched, void* event) {
    return KLed_EventFilter((KLed*)self, (QObject*)watched, (QEvent*)event);
}

bool k_led_qbase_event_filter(void* self, void* watched, void* event) {
    return KLed_QBaseEventFilter((KLed*)self, (QObject*)watched, (QEvent*)event);
}

void k_led_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KLed_OnEventFilter((KLed*)self, (intptr_t)callback);
}

void k_led_timer_event(void* self, void* event) {
    KLed_TimerEvent((KLed*)self, (QTimerEvent*)event);
}

void k_led_qbase_timer_event(void* self, void* event) {
    KLed_QBaseTimerEvent((KLed*)self, (QTimerEvent*)event);
}

void k_led_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnTimerEvent((KLed*)self, (intptr_t)callback);
}

void k_led_child_event(void* self, void* event) {
    KLed_ChildEvent((KLed*)self, (QChildEvent*)event);
}

void k_led_qbase_child_event(void* self, void* event) {
    KLed_QBaseChildEvent((KLed*)self, (QChildEvent*)event);
}

void k_led_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnChildEvent((KLed*)self, (intptr_t)callback);
}

void k_led_custom_event(void* self, void* event) {
    KLed_CustomEvent((KLed*)self, (QEvent*)event);
}

void k_led_qbase_custom_event(void* self, void* event) {
    KLed_QBaseCustomEvent((KLed*)self, (QEvent*)event);
}

void k_led_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLed_OnCustomEvent((KLed*)self, (intptr_t)callback);
}

void k_led_connect_notify(void* self, void* signal) {
    KLed_ConnectNotify((KLed*)self, (QMetaMethod*)signal);
}

void k_led_qbase_connect_notify(void* self, void* signal) {
    KLed_QBaseConnectNotify((KLed*)self, (QMetaMethod*)signal);
}

void k_led_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLed_OnConnectNotify((KLed*)self, (intptr_t)callback);
}

void k_led_disconnect_notify(void* self, void* signal) {
    KLed_DisconnectNotify((KLed*)self, (QMetaMethod*)signal);
}

void k_led_qbase_disconnect_notify(void* self, void* signal) {
    KLed_QBaseDisconnectNotify((KLed*)self, (QMetaMethod*)signal);
}

void k_led_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLed_OnDisconnectNotify((KLed*)self, (intptr_t)callback);
}

void k_led_update_micro_focus(void* self) {
    KLed_UpdateMicroFocus((KLed*)self);
}

void k_led_qbase_update_micro_focus(void* self) {
    KLed_QBaseUpdateMicroFocus((KLed*)self);
}

void k_led_on_update_micro_focus(void* self, void (*callback)()) {
    KLed_OnUpdateMicroFocus((KLed*)self, (intptr_t)callback);
}

void k_led_create(void* self) {
    KLed_Create((KLed*)self);
}

void k_led_qbase_create(void* self) {
    KLed_QBaseCreate((KLed*)self);
}

void k_led_on_create(void* self, void (*callback)()) {
    KLed_OnCreate((KLed*)self, (intptr_t)callback);
}

void k_led_destroy(void* self) {
    KLed_Destroy((KLed*)self);
}

void k_led_qbase_destroy(void* self) {
    KLed_QBaseDestroy((KLed*)self);
}

void k_led_on_destroy(void* self, void (*callback)()) {
    KLed_OnDestroy((KLed*)self, (intptr_t)callback);
}

bool k_led_focus_next_child(void* self) {
    return KLed_FocusNextChild((KLed*)self);
}

bool k_led_qbase_focus_next_child(void* self) {
    return KLed_QBaseFocusNextChild((KLed*)self);
}

void k_led_on_focus_next_child(void* self, bool (*callback)()) {
    KLed_OnFocusNextChild((KLed*)self, (intptr_t)callback);
}

bool k_led_focus_previous_child(void* self) {
    return KLed_FocusPreviousChild((KLed*)self);
}

bool k_led_qbase_focus_previous_child(void* self) {
    return KLed_QBaseFocusPreviousChild((KLed*)self);
}

void k_led_on_focus_previous_child(void* self, bool (*callback)()) {
    KLed_OnFocusPreviousChild((KLed*)self, (intptr_t)callback);
}

QObject* k_led_sender(void* self) {
    return KLed_Sender((KLed*)self);
}

QObject* k_led_qbase_sender(void* self) {
    return KLed_QBaseSender((KLed*)self);
}

void k_led_on_sender(void* self, QObject* (*callback)()) {
    KLed_OnSender((KLed*)self, (intptr_t)callback);
}

int32_t k_led_sender_signal_index(void* self) {
    return KLed_SenderSignalIndex((KLed*)self);
}

int32_t k_led_qbase_sender_signal_index(void* self) {
    return KLed_QBaseSenderSignalIndex((KLed*)self);
}

void k_led_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLed_OnSenderSignalIndex((KLed*)self, (intptr_t)callback);
}

int32_t k_led_receivers(void* self, const char* signal) {
    return KLed_Receivers((KLed*)self, signal);
}

int32_t k_led_qbase_receivers(void* self, const char* signal) {
    return KLed_QBaseReceivers((KLed*)self, signal);
}

void k_led_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLed_OnReceivers((KLed*)self, (intptr_t)callback);
}

bool k_led_is_signal_connected(void* self, void* signal) {
    return KLed_IsSignalConnected((KLed*)self, (QMetaMethod*)signal);
}

bool k_led_qbase_is_signal_connected(void* self, void* signal) {
    return KLed_QBaseIsSignalConnected((KLed*)self, (QMetaMethod*)signal);
}

void k_led_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLed_OnIsSignalConnected((KLed*)self, (intptr_t)callback);
}

double k_led_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KLed_GetDecodedMetricF((KLed*)self, metricA, metricB);
}

double k_led_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KLed_QBaseGetDecodedMetricF((KLed*)self, metricA, metricB);
}

void k_led_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KLed_OnGetDecodedMetricF((KLed*)self, (intptr_t)callback);
}

void k_led_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_led_delete(void* self) {
    KLed_Delete((KLed*)(self));
}
