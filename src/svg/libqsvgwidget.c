#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "libqsvgrenderer.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqsvgwidget.hpp"
#include "libqsvgwidget.h"

QSvgWidget* q_svgwidget_new(void* parent) {
    return QSvgWidget_new((QWidget*)parent);
}

QSvgWidget* q_svgwidget_new2() {
    return QSvgWidget_new2();
}

QSvgWidget* q_svgwidget_new3(const char* file) {
    return QSvgWidget_new3(qstring(file));
}

QSvgWidget* q_svgwidget_new4(const char* file, void* parent) {
    return QSvgWidget_new4(qstring(file), (QWidget*)parent);
}

const QMetaObject* q_svgwidget_meta_object(void* self) {
    return QSvgWidget_MetaObject((QSvgWidget*)self);
}

void* q_svgwidget_metacast(void* self, const char* param1) {
    return QSvgWidget_Metacast((QSvgWidget*)self, param1);
}

int32_t q_svgwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSvgWidget_Metacall((QSvgWidget*)self, param1, param2, param3);
}

void q_svgwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSvgWidget_OnMetacall((QSvgWidget*)self, (intptr_t)callback);
}

int32_t q_svgwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSvgWidget_QBaseMetacall((QSvgWidget*)self, param1, param2, param3);
}

const char* q_svgwidget_tr(const char* s) {
    libqt_string _str = QSvgWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSvgRenderer* q_svgwidget_renderer(void* self) {
    return QSvgWidget_Renderer((QSvgWidget*)self);
}

QSize* q_svgwidget_size_hint(void* self) {
    return QSvgWidget_SizeHint((QSvgWidget*)self);
}

void q_svgwidget_on_size_hint(void* self, QSize* (*callback)()) {
    QSvgWidget_OnSizeHint((QSvgWidget*)self, (intptr_t)callback);
}

QSize* q_svgwidget_qbase_size_hint(void* self) {
    return QSvgWidget_QBaseSizeHint((QSvgWidget*)self);
}

int64_t q_svgwidget_options(void* self) {
    return QSvgWidget_Options((QSvgWidget*)self);
}

void q_svgwidget_set_options(void* self, int64_t options) {
    QSvgWidget_SetOptions((QSvgWidget*)self, options);
}

void q_svgwidget_load(void* self, const char* file) {
    QSvgWidget_Load((QSvgWidget*)self, qstring(file));
}

void q_svgwidget_load2(void* self, const char* contents) {
    QSvgWidget_Load2((QSvgWidget*)self, qstring(contents));
}

void q_svgwidget_paint_event(void* self, void* event) {
    QSvgWidget_PaintEvent((QSvgWidget*)self, (QPaintEvent*)event);
}

void q_svgwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnPaintEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_qbase_paint_event(void* self, void* event) {
    QSvgWidget_QBasePaintEvent((QSvgWidget*)self, (QPaintEvent*)event);
}

const char* q_svgwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QSvgWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_svgwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSvgWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_svgwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_svgwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_svgwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_svgwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_svgwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_svgwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_svgwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_svgwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_svgwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_svgwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_svgwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_svgwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_svgwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_svgwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_svgwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_svgwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_svgwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_svgwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_svgwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_svgwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_svgwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_svgwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_svgwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_svgwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_svgwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_svgwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_svgwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_svgwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_svgwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_svgwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_svgwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_svgwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_svgwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_svgwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_svgwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_svgwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_svgwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_svgwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_svgwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_svgwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_svgwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_svgwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_svgwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_svgwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_svgwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_svgwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_svgwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_svgwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_svgwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_svgwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_svgwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_svgwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_svgwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_svgwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_svgwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_svgwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_svgwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_svgwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_svgwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_svgwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_svgwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_svgwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_svgwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_svgwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_svgwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_svgwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_svgwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_svgwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_svgwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_svgwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_svgwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_svgwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_svgwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_svgwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_svgwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_svgwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_svgwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_svgwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_svgwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_svgwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_svgwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_svgwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_svgwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_svgwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_svgwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_svgwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_svgwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_svgwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_svgwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_svgwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_svgwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_svgwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_svgwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_svgwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_svgwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_svgwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_svgwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_svgwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_svgwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_svgwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_svgwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_svgwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_svgwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_svgwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_svgwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_svgwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_svgwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_svgwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_svgwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_svgwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_svgwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_svgwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_svgwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_svgwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_svgwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_svgwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_svgwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_svgwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_svgwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_svgwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_svgwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_svgwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_svgwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_svgwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_svgwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_svgwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_svgwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_svgwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_svgwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_svgwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_svgwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_svgwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_svgwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_svgwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_svgwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_svgwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_svgwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_svgwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_svgwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_svgwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_svgwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_svgwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_svgwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_svgwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_svgwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_svgwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_svgwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_svgwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_svgwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_svgwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_svgwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_svgwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_svgwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_svgwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_svgwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_svgwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_svgwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_svgwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_svgwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_svgwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_svgwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_svgwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_svgwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_svgwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_svgwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_svgwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_svgwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_svgwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_svgwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_svgwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_svgwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_svgwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_svgwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_svgwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_svgwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_svgwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_svgwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_svgwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_svgwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_svgwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_svgwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_svgwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_svgwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_svgwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_svgwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_svgwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_svgwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_svgwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_svgwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_svgwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_svgwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_svgwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_svgwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_svgwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_svgwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_svgwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_svgwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_svgwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_svgwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_svgwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_svgwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_svgwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_svgwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_svgwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_svgwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_svgwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_svgwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_svgwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_svgwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_svgwidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_svgwidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_svgwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_svgwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_svgwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_svgwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_svgwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_svgwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_svgwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_svgwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_svgwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_svgwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_svgwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_svgwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_svgwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_svgwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_svgwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_svgwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_svgwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_svgwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_svgwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_svgwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_svgwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_svgwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_svgwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_svgwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_svgwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_svgwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_svgwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_svgwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_svgwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_svgwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_svgwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_svgwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_svgwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_svgwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_svgwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_svgwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_svgwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_svgwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_svgwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_svgwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_svgwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_svgwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_svgwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_svgwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_svgwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_svgwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_svgwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_svgwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_svgwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_svgwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_svgwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_svgwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_svgwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_svgwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_svgwidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_svgwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_svgwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_svgwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_svgwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_svgwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_svgwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_svgwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_svgwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_svgwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_svgwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_svgwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_svgwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_svgwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_svgwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_svgwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_svgwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_svgwidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_svgwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_svgwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_svgwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_svgwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_svgwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_svgwidget_dynamic_property_names");
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

QBindingStorage* q_svgwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_svgwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_svgwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_svgwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_svgwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_svgwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_svgwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_svgwidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_svgwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_svgwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_svgwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_svgwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_svgwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_svgwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_svgwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_svgwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_svgwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_svgwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_svgwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_svgwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_svgwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_svgwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_svgwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_svgwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_svgwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_svgwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_svgwidget_dev_type(void* self) {
    return QSvgWidget_DevType((QSvgWidget*)self);
}

int32_t q_svgwidget_qbase_dev_type(void* self) {
    return QSvgWidget_QBaseDevType((QSvgWidget*)self);
}

void q_svgwidget_on_dev_type(void* self, int32_t (*callback)()) {
    QSvgWidget_OnDevType((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_set_visible(void* self, bool visible) {
    QSvgWidget_SetVisible((QSvgWidget*)self, visible);
}

void q_svgwidget_qbase_set_visible(void* self, bool visible) {
    QSvgWidget_QBaseSetVisible((QSvgWidget*)self, visible);
}

void q_svgwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QSvgWidget_OnSetVisible((QSvgWidget*)self, (intptr_t)callback);
}

QSize* q_svgwidget_minimum_size_hint(void* self) {
    return QSvgWidget_MinimumSizeHint((QSvgWidget*)self);
}

QSize* q_svgwidget_qbase_minimum_size_hint(void* self) {
    return QSvgWidget_QBaseMinimumSizeHint((QSvgWidget*)self);
}

void q_svgwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QSvgWidget_OnMinimumSizeHint((QSvgWidget*)self, (intptr_t)callback);
}

int32_t q_svgwidget_height_for_width(void* self, int param1) {
    return QSvgWidget_HeightForWidth((QSvgWidget*)self, param1);
}

int32_t q_svgwidget_qbase_height_for_width(void* self, int param1) {
    return QSvgWidget_QBaseHeightForWidth((QSvgWidget*)self, param1);
}

void q_svgwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QSvgWidget_OnHeightForWidth((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_has_height_for_width(void* self) {
    return QSvgWidget_HasHeightForWidth((QSvgWidget*)self);
}

bool q_svgwidget_qbase_has_height_for_width(void* self) {
    return QSvgWidget_QBaseHasHeightForWidth((QSvgWidget*)self);
}

void q_svgwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    QSvgWidget_OnHasHeightForWidth((QSvgWidget*)self, (intptr_t)callback);
}

QPaintEngine* q_svgwidget_paint_engine(void* self) {
    return QSvgWidget_PaintEngine((QSvgWidget*)self);
}

QPaintEngine* q_svgwidget_qbase_paint_engine(void* self) {
    return QSvgWidget_QBasePaintEngine((QSvgWidget*)self);
}

void q_svgwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QSvgWidget_OnPaintEngine((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_event(void* self, void* event) {
    return QSvgWidget_Event((QSvgWidget*)self, (QEvent*)event);
}

bool q_svgwidget_qbase_event(void* self, void* event) {
    return QSvgWidget_QBaseEvent((QSvgWidget*)self, (QEvent*)event);
}

void q_svgwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    QSvgWidget_OnEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_mouse_press_event(void* self, void* event) {
    QSvgWidget_MousePressEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_qbase_mouse_press_event(void* self, void* event) {
    QSvgWidget_QBaseMousePressEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnMousePressEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_mouse_release_event(void* self, void* event) {
    QSvgWidget_MouseReleaseEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_qbase_mouse_release_event(void* self, void* event) {
    QSvgWidget_QBaseMouseReleaseEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnMouseReleaseEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_mouse_double_click_event(void* self, void* event) {
    QSvgWidget_MouseDoubleClickEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QSvgWidget_QBaseMouseDoubleClickEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnMouseDoubleClickEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_mouse_move_event(void* self, void* event) {
    QSvgWidget_MouseMoveEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_qbase_mouse_move_event(void* self, void* event) {
    QSvgWidget_QBaseMouseMoveEvent((QSvgWidget*)self, (QMouseEvent*)event);
}

void q_svgwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnMouseMoveEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_wheel_event(void* self, void* event) {
    QSvgWidget_WheelEvent((QSvgWidget*)self, (QWheelEvent*)event);
}

void q_svgwidget_qbase_wheel_event(void* self, void* event) {
    QSvgWidget_QBaseWheelEvent((QSvgWidget*)self, (QWheelEvent*)event);
}

void q_svgwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnWheelEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_key_press_event(void* self, void* event) {
    QSvgWidget_KeyPressEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

void q_svgwidget_qbase_key_press_event(void* self, void* event) {
    QSvgWidget_QBaseKeyPressEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

void q_svgwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnKeyPressEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_key_release_event(void* self, void* event) {
    QSvgWidget_KeyReleaseEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

void q_svgwidget_qbase_key_release_event(void* self, void* event) {
    QSvgWidget_QBaseKeyReleaseEvent((QSvgWidget*)self, (QKeyEvent*)event);
}

void q_svgwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnKeyReleaseEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_focus_in_event(void* self, void* event) {
    QSvgWidget_FocusInEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

void q_svgwidget_qbase_focus_in_event(void* self, void* event) {
    QSvgWidget_QBaseFocusInEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

void q_svgwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnFocusInEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_focus_out_event(void* self, void* event) {
    QSvgWidget_FocusOutEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

void q_svgwidget_qbase_focus_out_event(void* self, void* event) {
    QSvgWidget_QBaseFocusOutEvent((QSvgWidget*)self, (QFocusEvent*)event);
}

void q_svgwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnFocusOutEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_enter_event(void* self, void* event) {
    QSvgWidget_EnterEvent((QSvgWidget*)self, (QEnterEvent*)event);
}

void q_svgwidget_qbase_enter_event(void* self, void* event) {
    QSvgWidget_QBaseEnterEvent((QSvgWidget*)self, (QEnterEvent*)event);
}

void q_svgwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnEnterEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_leave_event(void* self, void* event) {
    QSvgWidget_LeaveEvent((QSvgWidget*)self, (QEvent*)event);
}

void q_svgwidget_qbase_leave_event(void* self, void* event) {
    QSvgWidget_QBaseLeaveEvent((QSvgWidget*)self, (QEvent*)event);
}

void q_svgwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnLeaveEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_move_event(void* self, void* event) {
    QSvgWidget_MoveEvent((QSvgWidget*)self, (QMoveEvent*)event);
}

void q_svgwidget_qbase_move_event(void* self, void* event) {
    QSvgWidget_QBaseMoveEvent((QSvgWidget*)self, (QMoveEvent*)event);
}

void q_svgwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnMoveEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_resize_event(void* self, void* event) {
    QSvgWidget_ResizeEvent((QSvgWidget*)self, (QResizeEvent*)event);
}

void q_svgwidget_qbase_resize_event(void* self, void* event) {
    QSvgWidget_QBaseResizeEvent((QSvgWidget*)self, (QResizeEvent*)event);
}

void q_svgwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnResizeEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_close_event(void* self, void* event) {
    QSvgWidget_CloseEvent((QSvgWidget*)self, (QCloseEvent*)event);
}

void q_svgwidget_qbase_close_event(void* self, void* event) {
    QSvgWidget_QBaseCloseEvent((QSvgWidget*)self, (QCloseEvent*)event);
}

void q_svgwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnCloseEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_context_menu_event(void* self, void* event) {
    QSvgWidget_ContextMenuEvent((QSvgWidget*)self, (QContextMenuEvent*)event);
}

void q_svgwidget_qbase_context_menu_event(void* self, void* event) {
    QSvgWidget_QBaseContextMenuEvent((QSvgWidget*)self, (QContextMenuEvent*)event);
}

void q_svgwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnContextMenuEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_tablet_event(void* self, void* event) {
    QSvgWidget_TabletEvent((QSvgWidget*)self, (QTabletEvent*)event);
}

void q_svgwidget_qbase_tablet_event(void* self, void* event) {
    QSvgWidget_QBaseTabletEvent((QSvgWidget*)self, (QTabletEvent*)event);
}

void q_svgwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnTabletEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_action_event(void* self, void* event) {
    QSvgWidget_ActionEvent((QSvgWidget*)self, (QActionEvent*)event);
}

void q_svgwidget_qbase_action_event(void* self, void* event) {
    QSvgWidget_QBaseActionEvent((QSvgWidget*)self, (QActionEvent*)event);
}

void q_svgwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnActionEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_drag_enter_event(void* self, void* event) {
    QSvgWidget_DragEnterEvent((QSvgWidget*)self, (QDragEnterEvent*)event);
}

void q_svgwidget_qbase_drag_enter_event(void* self, void* event) {
    QSvgWidget_QBaseDragEnterEvent((QSvgWidget*)self, (QDragEnterEvent*)event);
}

void q_svgwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnDragEnterEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_drag_move_event(void* self, void* event) {
    QSvgWidget_DragMoveEvent((QSvgWidget*)self, (QDragMoveEvent*)event);
}

void q_svgwidget_qbase_drag_move_event(void* self, void* event) {
    QSvgWidget_QBaseDragMoveEvent((QSvgWidget*)self, (QDragMoveEvent*)event);
}

void q_svgwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnDragMoveEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_drag_leave_event(void* self, void* event) {
    QSvgWidget_DragLeaveEvent((QSvgWidget*)self, (QDragLeaveEvent*)event);
}

void q_svgwidget_qbase_drag_leave_event(void* self, void* event) {
    QSvgWidget_QBaseDragLeaveEvent((QSvgWidget*)self, (QDragLeaveEvent*)event);
}

void q_svgwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnDragLeaveEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_drop_event(void* self, void* event) {
    QSvgWidget_DropEvent((QSvgWidget*)self, (QDropEvent*)event);
}

void q_svgwidget_qbase_drop_event(void* self, void* event) {
    QSvgWidget_QBaseDropEvent((QSvgWidget*)self, (QDropEvent*)event);
}

void q_svgwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnDropEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_show_event(void* self, void* event) {
    QSvgWidget_ShowEvent((QSvgWidget*)self, (QShowEvent*)event);
}

void q_svgwidget_qbase_show_event(void* self, void* event) {
    QSvgWidget_QBaseShowEvent((QSvgWidget*)self, (QShowEvent*)event);
}

void q_svgwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnShowEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_hide_event(void* self, void* event) {
    QSvgWidget_HideEvent((QSvgWidget*)self, (QHideEvent*)event);
}

void q_svgwidget_qbase_hide_event(void* self, void* event) {
    QSvgWidget_QBaseHideEvent((QSvgWidget*)self, (QHideEvent*)event);
}

void q_svgwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnHideEvent((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSvgWidget_NativeEvent((QSvgWidget*)self, qstring(eventType), message, result);
}

bool q_svgwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSvgWidget_QBaseNativeEvent((QSvgWidget*)self, qstring(eventType), message, result);
}

void q_svgwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QSvgWidget_OnNativeEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_change_event(void* self, void* param1) {
    QSvgWidget_ChangeEvent((QSvgWidget*)self, (QEvent*)param1);
}

void q_svgwidget_qbase_change_event(void* self, void* param1) {
    QSvgWidget_QBaseChangeEvent((QSvgWidget*)self, (QEvent*)param1);
}

void q_svgwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnChangeEvent((QSvgWidget*)self, (intptr_t)callback);
}

int32_t q_svgwidget_metric(void* self, int32_t param1) {
    return QSvgWidget_Metric((QSvgWidget*)self, param1);
}

int32_t q_svgwidget_qbase_metric(void* self, int32_t param1) {
    return QSvgWidget_QBaseMetric((QSvgWidget*)self, param1);
}

void q_svgwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QSvgWidget_OnMetric((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_init_painter(void* self, void* painter) {
    QSvgWidget_InitPainter((QSvgWidget*)self, (QPainter*)painter);
}

void q_svgwidget_qbase_init_painter(void* self, void* painter) {
    QSvgWidget_QBaseInitPainter((QSvgWidget*)self, (QPainter*)painter);
}

void q_svgwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnInitPainter((QSvgWidget*)self, (intptr_t)callback);
}

QPaintDevice* q_svgwidget_redirected(void* self, void* offset) {
    return QSvgWidget_Redirected((QSvgWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_svgwidget_qbase_redirected(void* self, void* offset) {
    return QSvgWidget_QBaseRedirected((QSvgWidget*)self, (QPoint*)offset);
}

void q_svgwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QSvgWidget_OnRedirected((QSvgWidget*)self, (intptr_t)callback);
}

QPainter* q_svgwidget_shared_painter(void* self) {
    return QSvgWidget_SharedPainter((QSvgWidget*)self);
}

QPainter* q_svgwidget_qbase_shared_painter(void* self) {
    return QSvgWidget_QBaseSharedPainter((QSvgWidget*)self);
}

void q_svgwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    QSvgWidget_OnSharedPainter((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_input_method_event(void* self, void* param1) {
    QSvgWidget_InputMethodEvent((QSvgWidget*)self, (QInputMethodEvent*)param1);
}

void q_svgwidget_qbase_input_method_event(void* self, void* param1) {
    QSvgWidget_QBaseInputMethodEvent((QSvgWidget*)self, (QInputMethodEvent*)param1);
}

void q_svgwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnInputMethodEvent((QSvgWidget*)self, (intptr_t)callback);
}

QVariant* q_svgwidget_input_method_query(void* self, int64_t param1) {
    return QSvgWidget_InputMethodQuery((QSvgWidget*)self, param1);
}

QVariant* q_svgwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QSvgWidget_QBaseInputMethodQuery((QSvgWidget*)self, param1);
}

void q_svgwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QSvgWidget_OnInputMethodQuery((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_focus_next_prev_child(void* self, bool next) {
    return QSvgWidget_FocusNextPrevChild((QSvgWidget*)self, next);
}

bool q_svgwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QSvgWidget_QBaseFocusNextPrevChild((QSvgWidget*)self, next);
}

void q_svgwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QSvgWidget_OnFocusNextPrevChild((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_event_filter(void* self, void* watched, void* event) {
    return QSvgWidget_EventFilter((QSvgWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_svgwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QSvgWidget_QBaseEventFilter((QSvgWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_svgwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSvgWidget_OnEventFilter((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_timer_event(void* self, void* event) {
    QSvgWidget_TimerEvent((QSvgWidget*)self, (QTimerEvent*)event);
}

void q_svgwidget_qbase_timer_event(void* self, void* event) {
    QSvgWidget_QBaseTimerEvent((QSvgWidget*)self, (QTimerEvent*)event);
}

void q_svgwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnTimerEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_child_event(void* self, void* event) {
    QSvgWidget_ChildEvent((QSvgWidget*)self, (QChildEvent*)event);
}

void q_svgwidget_qbase_child_event(void* self, void* event) {
    QSvgWidget_QBaseChildEvent((QSvgWidget*)self, (QChildEvent*)event);
}

void q_svgwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnChildEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_custom_event(void* self, void* event) {
    QSvgWidget_CustomEvent((QSvgWidget*)self, (QEvent*)event);
}

void q_svgwidget_qbase_custom_event(void* self, void* event) {
    QSvgWidget_QBaseCustomEvent((QSvgWidget*)self, (QEvent*)event);
}

void q_svgwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnCustomEvent((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_connect_notify(void* self, void* signal) {
    QSvgWidget_ConnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

void q_svgwidget_qbase_connect_notify(void* self, void* signal) {
    QSvgWidget_QBaseConnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

void q_svgwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnConnectNotify((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_disconnect_notify(void* self, void* signal) {
    QSvgWidget_DisconnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

void q_svgwidget_qbase_disconnect_notify(void* self, void* signal) {
    QSvgWidget_QBaseDisconnectNotify((QSvgWidget*)self, (QMetaMethod*)signal);
}

void q_svgwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSvgWidget_OnDisconnectNotify((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_update_micro_focus(void* self) {
    QSvgWidget_UpdateMicroFocus((QSvgWidget*)self);
}

void q_svgwidget_qbase_update_micro_focus(void* self) {
    QSvgWidget_QBaseUpdateMicroFocus((QSvgWidget*)self);
}

void q_svgwidget_on_update_micro_focus(void* self, void (*callback)()) {
    QSvgWidget_OnUpdateMicroFocus((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_create(void* self) {
    QSvgWidget_Create((QSvgWidget*)self);
}

void q_svgwidget_qbase_create(void* self) {
    QSvgWidget_QBaseCreate((QSvgWidget*)self);
}

void q_svgwidget_on_create(void* self, void (*callback)()) {
    QSvgWidget_OnCreate((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_destroy(void* self) {
    QSvgWidget_Destroy((QSvgWidget*)self);
}

void q_svgwidget_qbase_destroy(void* self) {
    QSvgWidget_QBaseDestroy((QSvgWidget*)self);
}

void q_svgwidget_on_destroy(void* self, void (*callback)()) {
    QSvgWidget_OnDestroy((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_focus_next_child(void* self) {
    return QSvgWidget_FocusNextChild((QSvgWidget*)self);
}

bool q_svgwidget_qbase_focus_next_child(void* self) {
    return QSvgWidget_QBaseFocusNextChild((QSvgWidget*)self);
}

void q_svgwidget_on_focus_next_child(void* self, bool (*callback)()) {
    QSvgWidget_OnFocusNextChild((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_focus_previous_child(void* self) {
    return QSvgWidget_FocusPreviousChild((QSvgWidget*)self);
}

bool q_svgwidget_qbase_focus_previous_child(void* self) {
    return QSvgWidget_QBaseFocusPreviousChild((QSvgWidget*)self);
}

void q_svgwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    QSvgWidget_OnFocusPreviousChild((QSvgWidget*)self, (intptr_t)callback);
}

QObject* q_svgwidget_sender(void* self) {
    return QSvgWidget_Sender((QSvgWidget*)self);
}

QObject* q_svgwidget_qbase_sender(void* self) {
    return QSvgWidget_QBaseSender((QSvgWidget*)self);
}

void q_svgwidget_on_sender(void* self, QObject* (*callback)()) {
    QSvgWidget_OnSender((QSvgWidget*)self, (intptr_t)callback);
}

int32_t q_svgwidget_sender_signal_index(void* self) {
    return QSvgWidget_SenderSignalIndex((QSvgWidget*)self);
}

int32_t q_svgwidget_qbase_sender_signal_index(void* self) {
    return QSvgWidget_QBaseSenderSignalIndex((QSvgWidget*)self);
}

void q_svgwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSvgWidget_OnSenderSignalIndex((QSvgWidget*)self, (intptr_t)callback);
}

int32_t q_svgwidget_receivers(void* self, const char* signal) {
    return QSvgWidget_Receivers((QSvgWidget*)self, signal);
}

int32_t q_svgwidget_qbase_receivers(void* self, const char* signal) {
    return QSvgWidget_QBaseReceivers((QSvgWidget*)self, signal);
}

void q_svgwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSvgWidget_OnReceivers((QSvgWidget*)self, (intptr_t)callback);
}

bool q_svgwidget_is_signal_connected(void* self, void* signal) {
    return QSvgWidget_IsSignalConnected((QSvgWidget*)self, (QMetaMethod*)signal);
}

bool q_svgwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QSvgWidget_QBaseIsSignalConnected((QSvgWidget*)self, (QMetaMethod*)signal);
}

void q_svgwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSvgWidget_OnIsSignalConnected((QSvgWidget*)self, (intptr_t)callback);
}

double q_svgwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QSvgWidget_GetDecodedMetricF((QSvgWidget*)self, metricA, metricB);
}

double q_svgwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QSvgWidget_QBaseGetDecodedMetricF((QSvgWidget*)self, metricA, metricB);
}

void q_svgwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QSvgWidget_OnGetDecodedMetricF((QSvgWidget*)self, (intptr_t)callback);
}

void q_svgwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_svgwidget_delete(void* self) {
    QSvgWidget_Delete((QSvgWidget*)(self));
}
