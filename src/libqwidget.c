#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqbackingstore.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqwidget.hpp"
#include "libqwidget.h"

QWidgetData* q_widgetdata_new(void* param1) {
    return QWidgetData_new((QWidgetData*)param1);
}

void q_widgetdata_operator_assign(void* self, void* param1) {
    QWidgetData_OperatorAssign((QWidgetData*)self, (QWidgetData*)param1);
}

void q_widgetdata_delete(void* self) {
    QWidgetData_Delete((QWidgetData*)(self));
}

QWidget* q_widget_new(void* parent) {
    return QWidget_new((QWidget*)parent);
}

QWidget* q_widget_new2() {
    return QWidget_new2();
}

QWidget* q_widget_new3(void* parent, int64_t f) {
    return QWidget_new3((QWidget*)parent, f);
}

const QMetaObject* q_widget_meta_object(void* self) {
    return QWidget_MetaObject((QWidget*)self);
}

void* q_widget_metacast(void* self, const char* param1) {
    return QWidget_Metacast((QWidget*)self, param1);
}

int32_t q_widget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidget_Metacall((QWidget*)self, param1, param2, param3);
}

void q_widget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWidget_OnMetacall((QWidget*)self, (intptr_t)slot);
}

int32_t q_widget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidget_QBaseMetacall((QWidget*)self, param1, param2, param3);
}

const char* q_widget_tr(const char* s) {
    libqt_string _str = QWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_widget_dev_type(void* self) {
    return QWidget_DevType((QWidget*)self);
}

void q_widget_on_dev_type(void* self, int32_t (*slot)()) {
    QWidget_OnDevType((QWidget*)self, (intptr_t)slot);
}

int32_t q_widget_qbase_dev_type(void* self) {
    return QWidget_QBaseDevType((QWidget*)self);
}

uintptr_t q_widget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_widget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_widget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_widget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_widget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_widget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_widget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_widget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_widget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_widget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_widget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_widget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_widget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_widget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_widget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_widget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_widget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_widget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_widget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_widget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_widget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_widget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_widget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_widget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_widget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_widget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_widget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_widget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_widget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_widget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_widget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_widget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_widget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_widget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_widget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_widget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_widget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_widget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_widget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_widget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_widget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_widget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_widget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_widget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_widget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_widget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_widget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_widget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_widget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_widget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_widget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_widget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_widget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_widget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_widget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_widget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_widget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_widget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_widget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_widget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_widget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_widget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_widget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_widget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_widget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_widget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_widget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_widget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_widget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_widget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_widget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_widget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_widget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_widget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_widget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_widget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_widget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_widget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_widget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_widget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_widget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_widget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_widget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_widget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_widget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_widget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_widget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_widget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_widget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_widget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_widget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_widget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_widget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_widget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_widget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_widget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_widget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_widget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_widget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_widget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_widget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_widget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_widget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_widget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_widget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_widget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_widget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_widget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_widget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_widget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_widget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_widget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_widget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_widget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_widget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_widget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_widget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_widget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_widget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_widget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_widget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_widget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_widget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_widget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_widget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_widget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_widget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_widget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_widget_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_widget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_widget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_widget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_widget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_widget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_widget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_widget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_widget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_widget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_widget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_widget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_widget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_widget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_widget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_widget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_widget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_widget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_widget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_widget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_widget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_widget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_widget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_widget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_widget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_widget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_widget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_widget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_widget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_widget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_widget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_widget_set_visible(void* self, bool visible) {
    QWidget_SetVisible((QWidget*)self, visible);
}

void q_widget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QWidget_OnSetVisible((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_set_visible(void* self, bool visible) {
    QWidget_QBaseSetVisible((QWidget*)self, visible);
}

void q_widget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_widget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_widget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_widget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_widget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_widget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_widget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_widget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_widget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_widget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_widget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_widget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_widget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_widget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_widget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_widget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_widget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_widget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_widget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_widget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_widget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_widget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_widget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_widget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_widget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_widget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_widget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_widget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_widget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSize* q_widget_size_hint(void* self) {
    return QWidget_SizeHint((QWidget*)self);
}

void q_widget_on_size_hint(void* self, QSize* (*slot)()) {
    QWidget_OnSizeHint((QWidget*)self, (intptr_t)slot);
}

QSize* q_widget_qbase_size_hint(void* self) {
    return QWidget_QBaseSizeHint((QWidget*)self);
}

QSize* q_widget_minimum_size_hint(void* self) {
    return QWidget_MinimumSizeHint((QWidget*)self);
}

void q_widget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QWidget_OnMinimumSizeHint((QWidget*)self, (intptr_t)slot);
}

QSize* q_widget_qbase_minimum_size_hint(void* self) {
    return QWidget_QBaseMinimumSizeHint((QWidget*)self);
}

QSizePolicy* q_widget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_widget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_widget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

int32_t q_widget_height_for_width(void* self, int param1) {
    return QWidget_HeightForWidth((QWidget*)self, param1);
}

void q_widget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWidget_OnHeightForWidth((QWidget*)self, (intptr_t)slot);
}

int32_t q_widget_qbase_height_for_width(void* self, int param1) {
    return QWidget_QBaseHeightForWidth((QWidget*)self, param1);
}

bool q_widget_has_height_for_width(void* self) {
    return QWidget_HasHeightForWidth((QWidget*)self);
}

void q_widget_on_has_height_for_width(void* self, bool (*slot)()) {
    QWidget_OnHasHeightForWidth((QWidget*)self, (intptr_t)slot);
}

bool q_widget_qbase_has_height_for_width(void* self) {
    return QWidget_QBaseHasHeightForWidth((QWidget*)self);
}

QRegion* q_widget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_widget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_widget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_widget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_widget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_widget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_widget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_widget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_widget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_widget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_widget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_widget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_widget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_widget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_widget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_widget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_widget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_widget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_widget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_widget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_widget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_widget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_widget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_widget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_widget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_widget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_widget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_widget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_widget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_widget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_widget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_widget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_widget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_widget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_widget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_widget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_widget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_widget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_widget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

QPaintEngine* q_widget_paint_engine(void* self) {
    return QWidget_PaintEngine((QWidget*)self);
}

void q_widget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QWidget_OnPaintEngine((QWidget*)self, (intptr_t)slot);
}

QPaintEngine* q_widget_qbase_paint_engine(void* self) {
    return QWidget_QBasePaintEngine((QWidget*)self);
}

void q_widget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_widget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_widget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_widget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_widget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_widget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_widget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_widget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_widget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_widget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_widget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_widget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_widget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_widget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_widget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_widget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_widget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

bool q_widget_event(void* self, void* event) {
    return QWidget_Event((QWidget*)self, (QEvent*)event);
}

void q_widget_on_event(void* self, bool (*slot)(void*, void*)) {
    QWidget_OnEvent((QWidget*)self, (intptr_t)slot);
}

bool q_widget_qbase_event(void* self, void* event) {
    return QWidget_QBaseEvent((QWidget*)self, (QEvent*)event);
}

void q_widget_mouse_press_event(void* self, void* event) {
    QWidget_MousePressEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMousePressEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_mouse_press_event(void* self, void* event) {
    QWidget_QBaseMousePressEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_mouse_release_event(void* self, void* event) {
    QWidget_MouseReleaseEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMouseReleaseEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_mouse_release_event(void* self, void* event) {
    QWidget_QBaseMouseReleaseEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_mouse_double_click_event(void* self, void* event) {
    QWidget_MouseDoubleClickEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMouseDoubleClickEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_mouse_double_click_event(void* self, void* event) {
    QWidget_QBaseMouseDoubleClickEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_mouse_move_event(void* self, void* event) {
    QWidget_MouseMoveEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMouseMoveEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_mouse_move_event(void* self, void* event) {
    QWidget_QBaseMouseMoveEvent((QWidget*)self, (QMouseEvent*)event);
}

void q_widget_wheel_event(void* self, void* event) {
    QWidget_WheelEvent((QWidget*)self, (QWheelEvent*)event);
}

void q_widget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnWheelEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_wheel_event(void* self, void* event) {
    QWidget_QBaseWheelEvent((QWidget*)self, (QWheelEvent*)event);
}

void q_widget_key_press_event(void* self, void* event) {
    QWidget_KeyPressEvent((QWidget*)self, (QKeyEvent*)event);
}

void q_widget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnKeyPressEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_key_press_event(void* self, void* event) {
    QWidget_QBaseKeyPressEvent((QWidget*)self, (QKeyEvent*)event);
}

void q_widget_key_release_event(void* self, void* event) {
    QWidget_KeyReleaseEvent((QWidget*)self, (QKeyEvent*)event);
}

void q_widget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnKeyReleaseEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_key_release_event(void* self, void* event) {
    QWidget_QBaseKeyReleaseEvent((QWidget*)self, (QKeyEvent*)event);
}

void q_widget_focus_in_event(void* self, void* event) {
    QWidget_FocusInEvent((QWidget*)self, (QFocusEvent*)event);
}

void q_widget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnFocusInEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_focus_in_event(void* self, void* event) {
    QWidget_QBaseFocusInEvent((QWidget*)self, (QFocusEvent*)event);
}

void q_widget_focus_out_event(void* self, void* event) {
    QWidget_FocusOutEvent((QWidget*)self, (QFocusEvent*)event);
}

void q_widget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnFocusOutEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_focus_out_event(void* self, void* event) {
    QWidget_QBaseFocusOutEvent((QWidget*)self, (QFocusEvent*)event);
}

void q_widget_enter_event(void* self, void* event) {
    QWidget_EnterEvent((QWidget*)self, (QEnterEvent*)event);
}

void q_widget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnEnterEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_enter_event(void* self, void* event) {
    QWidget_QBaseEnterEvent((QWidget*)self, (QEnterEvent*)event);
}

void q_widget_leave_event(void* self, void* event) {
    QWidget_LeaveEvent((QWidget*)self, (QEvent*)event);
}

void q_widget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnLeaveEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_leave_event(void* self, void* event) {
    QWidget_QBaseLeaveEvent((QWidget*)self, (QEvent*)event);
}

void q_widget_paint_event(void* self, void* event) {
    QWidget_PaintEvent((QWidget*)self, (QPaintEvent*)event);
}

void q_widget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnPaintEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_paint_event(void* self, void* event) {
    QWidget_QBasePaintEvent((QWidget*)self, (QPaintEvent*)event);
}

void q_widget_move_event(void* self, void* event) {
    QWidget_MoveEvent((QWidget*)self, (QMoveEvent*)event);
}

void q_widget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnMoveEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_move_event(void* self, void* event) {
    QWidget_QBaseMoveEvent((QWidget*)self, (QMoveEvent*)event);
}

void q_widget_resize_event(void* self, void* event) {
    QWidget_ResizeEvent((QWidget*)self, (QResizeEvent*)event);
}

void q_widget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnResizeEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_resize_event(void* self, void* event) {
    QWidget_QBaseResizeEvent((QWidget*)self, (QResizeEvent*)event);
}

void q_widget_close_event(void* self, void* event) {
    QWidget_CloseEvent((QWidget*)self, (QCloseEvent*)event);
}

void q_widget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnCloseEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_close_event(void* self, void* event) {
    QWidget_QBaseCloseEvent((QWidget*)self, (QCloseEvent*)event);
}

void q_widget_context_menu_event(void* self, void* event) {
    QWidget_ContextMenuEvent((QWidget*)self, (QContextMenuEvent*)event);
}

void q_widget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnContextMenuEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_context_menu_event(void* self, void* event) {
    QWidget_QBaseContextMenuEvent((QWidget*)self, (QContextMenuEvent*)event);
}

void q_widget_tablet_event(void* self, void* event) {
    QWidget_TabletEvent((QWidget*)self, (QTabletEvent*)event);
}

void q_widget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnTabletEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_tablet_event(void* self, void* event) {
    QWidget_QBaseTabletEvent((QWidget*)self, (QTabletEvent*)event);
}

void q_widget_action_event(void* self, void* event) {
    QWidget_ActionEvent((QWidget*)self, (QActionEvent*)event);
}

void q_widget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnActionEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_action_event(void* self, void* event) {
    QWidget_QBaseActionEvent((QWidget*)self, (QActionEvent*)event);
}

void q_widget_drag_enter_event(void* self, void* event) {
    QWidget_DragEnterEvent((QWidget*)self, (QDragEnterEvent*)event);
}

void q_widget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDragEnterEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_drag_enter_event(void* self, void* event) {
    QWidget_QBaseDragEnterEvent((QWidget*)self, (QDragEnterEvent*)event);
}

void q_widget_drag_move_event(void* self, void* event) {
    QWidget_DragMoveEvent((QWidget*)self, (QDragMoveEvent*)event);
}

void q_widget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDragMoveEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_drag_move_event(void* self, void* event) {
    QWidget_QBaseDragMoveEvent((QWidget*)self, (QDragMoveEvent*)event);
}

void q_widget_drag_leave_event(void* self, void* event) {
    QWidget_DragLeaveEvent((QWidget*)self, (QDragLeaveEvent*)event);
}

void q_widget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDragLeaveEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_drag_leave_event(void* self, void* event) {
    QWidget_QBaseDragLeaveEvent((QWidget*)self, (QDragLeaveEvent*)event);
}

void q_widget_drop_event(void* self, void* event) {
    QWidget_DropEvent((QWidget*)self, (QDropEvent*)event);
}

void q_widget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDropEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_drop_event(void* self, void* event) {
    QWidget_QBaseDropEvent((QWidget*)self, (QDropEvent*)event);
}

void q_widget_show_event(void* self, void* event) {
    QWidget_ShowEvent((QWidget*)self, (QShowEvent*)event);
}

void q_widget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnShowEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_show_event(void* self, void* event) {
    QWidget_QBaseShowEvent((QWidget*)self, (QShowEvent*)event);
}

void q_widget_hide_event(void* self, void* event) {
    QWidget_HideEvent((QWidget*)self, (QHideEvent*)event);
}

void q_widget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnHideEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_hide_event(void* self, void* event) {
    QWidget_QBaseHideEvent((QWidget*)self, (QHideEvent*)event);
}

bool q_widget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWidget_NativeEvent((QWidget*)self, qstring(eventType), message, result);
}

void q_widget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QWidget_OnNativeEvent((QWidget*)self, (intptr_t)slot);
}

bool q_widget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWidget_QBaseNativeEvent((QWidget*)self, qstring(eventType), message, result);
}

void q_widget_change_event(void* self, void* param1) {
    QWidget_ChangeEvent((QWidget*)self, (QEvent*)param1);
}

void q_widget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnChangeEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_change_event(void* self, void* param1) {
    QWidget_QBaseChangeEvent((QWidget*)self, (QEvent*)param1);
}

int32_t q_widget_metric(void* self, int64_t param1) {
    return QWidget_Metric((QWidget*)self, param1);
}

void q_widget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QWidget_OnMetric((QWidget*)self, (intptr_t)slot);
}

int32_t q_widget_qbase_metric(void* self, int64_t param1) {
    return QWidget_QBaseMetric((QWidget*)self, param1);
}

void q_widget_init_painter(void* self, void* painter) {
    QWidget_InitPainter((QWidget*)self, (QPainter*)painter);
}

void q_widget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QWidget_OnInitPainter((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_init_painter(void* self, void* painter) {
    QWidget_QBaseInitPainter((QWidget*)self, (QPainter*)painter);
}

QPaintDevice* q_widget_redirected(void* self, void* offset) {
    return QWidget_Redirected((QWidget*)self, (QPoint*)offset);
}

void q_widget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QWidget_OnRedirected((QWidget*)self, (intptr_t)slot);
}

QPaintDevice* q_widget_qbase_redirected(void* self, void* offset) {
    return QWidget_QBaseRedirected((QWidget*)self, (QPoint*)offset);
}

QPainter* q_widget_shared_painter(void* self) {
    return QWidget_SharedPainter((QWidget*)self);
}

void q_widget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QWidget_OnSharedPainter((QWidget*)self, (intptr_t)slot);
}

QPainter* q_widget_qbase_shared_painter(void* self) {
    return QWidget_QBaseSharedPainter((QWidget*)self);
}

void q_widget_input_method_event(void* self, void* param1) {
    QWidget_InputMethodEvent((QWidget*)self, (QInputMethodEvent*)param1);
}

void q_widget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnInputMethodEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_input_method_event(void* self, void* param1) {
    QWidget_QBaseInputMethodEvent((QWidget*)self, (QInputMethodEvent*)param1);
}

QVariant* q_widget_input_method_query(void* self, int64_t param1) {
    return QWidget_InputMethodQuery((QWidget*)self, param1);
}

void q_widget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QWidget_OnInputMethodQuery((QWidget*)self, (intptr_t)slot);
}

QVariant* q_widget_qbase_input_method_query(void* self, int64_t param1) {
    return QWidget_QBaseInputMethodQuery((QWidget*)self, param1);
}

int64_t q_widget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_widget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_widget_update_micro_focus(void* self) {
    QWidget_UpdateMicroFocus((QWidget*)self);
}

void q_widget_on_update_micro_focus(void* self, void (*slot)()) {
    QWidget_OnUpdateMicroFocus((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_update_micro_focus(void* self) {
    QWidget_QBaseUpdateMicroFocus((QWidget*)self);
}

void q_widget_create(void* self) {
    QWidget_Create((QWidget*)self);
}

void q_widget_on_create(void* self, void (*slot)()) {
    QWidget_OnCreate((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_create(void* self) {
    QWidget_QBaseCreate((QWidget*)self);
}

void q_widget_destroy(void* self) {
    QWidget_Destroy((QWidget*)self);
}

void q_widget_on_destroy(void* self, void (*slot)()) {
    QWidget_OnDestroy((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_destroy(void* self) {
    QWidget_QBaseDestroy((QWidget*)self);
}

bool q_widget_focus_next_prev_child(void* self, bool next) {
    return QWidget_FocusNextPrevChild((QWidget*)self, next);
}

void q_widget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QWidget_OnFocusNextPrevChild((QWidget*)self, (intptr_t)slot);
}

bool q_widget_qbase_focus_next_prev_child(void* self, bool next) {
    return QWidget_QBaseFocusNextPrevChild((QWidget*)self, next);
}

bool q_widget_focus_next_child(void* self) {
    return QWidget_FocusNextChild((QWidget*)self);
}

void q_widget_on_focus_next_child(void* self, bool (*slot)()) {
    QWidget_OnFocusNextChild((QWidget*)self, (intptr_t)slot);
}

bool q_widget_qbase_focus_next_child(void* self) {
    return QWidget_QBaseFocusNextChild((QWidget*)self);
}

bool q_widget_focus_previous_child(void* self) {
    return QWidget_FocusPreviousChild((QWidget*)self);
}

void q_widget_on_focus_previous_child(void* self, bool (*slot)()) {
    QWidget_OnFocusPreviousChild((QWidget*)self, (intptr_t)slot);
}

bool q_widget_qbase_focus_previous_child(void* self) {
    return QWidget_QBaseFocusPreviousChild((QWidget*)self);
}

const char* q_widget_tr2(const char* s, const char* c) {
    libqt_string _str = QWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_widget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_widget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_widget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_widget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_widget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_widget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_widget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_widget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_widget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_widget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_widget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_widget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_widget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_widget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_widget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

void q_widget_update_micro_focus1(void* self, int64_t query) {
    QWidget_UpdateMicroFocus1((QWidget*)self, query);
}

void q_widget_on_update_micro_focus1(void* self, void (*slot)(void*, int64_t)) {
    QWidget_OnUpdateMicroFocus1((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_update_micro_focus1(void* self, int64_t query) {
    QWidget_QBaseUpdateMicroFocus1((QWidget*)self, query);
}

void q_widget_create1(void* self, uint64_t param1) {
    QWidget_Create1((QWidget*)self, param1);
}

void q_widget_on_create1(void* self, void (*slot)(void*, uint64_t)) {
    QWidget_OnCreate1((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_create1(void* self, uint64_t param1) {
    QWidget_QBaseCreate1((QWidget*)self, param1);
}

void q_widget_create2(void* self, uint64_t param1, bool initializeWindow) {
    QWidget_Create2((QWidget*)self, param1, initializeWindow);
}

void q_widget_on_create2(void* self, void (*slot)(void*, uint64_t, bool)) {
    QWidget_OnCreate2((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_create2(void* self, uint64_t param1, bool initializeWindow) {
    QWidget_QBaseCreate2((QWidget*)self, param1, initializeWindow);
}

void q_widget_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow) {
    QWidget_Create3((QWidget*)self, param1, initializeWindow, destroyOldWindow);
}

void q_widget_on_create3(void* self, void (*slot)(void*, uint64_t, bool, bool)) {
    QWidget_OnCreate3((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_create3(void* self, uint64_t param1, bool initializeWindow, bool destroyOldWindow) {
    QWidget_QBaseCreate3((QWidget*)self, param1, initializeWindow, destroyOldWindow);
}

void q_widget_destroy1(void* self, bool destroyWindow) {
    QWidget_Destroy1((QWidget*)self, destroyWindow);
}

void q_widget_on_destroy1(void* self, void (*slot)(void*, bool)) {
    QWidget_OnDestroy1((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_destroy1(void* self, bool destroyWindow) {
    QWidget_QBaseDestroy1((QWidget*)self, destroyWindow);
}

void q_widget_destroy2(void* self, bool destroyWindow, bool destroySubWindows) {
    QWidget_Destroy2((QWidget*)self, destroyWindow, destroySubWindows);
}

void q_widget_on_destroy2(void* self, void (*slot)(void*, bool, bool)) {
    QWidget_OnDestroy2((QWidget*)self, (intptr_t)slot);
}

void q_widget_qbase_destroy2(void* self, bool destroyWindow, bool destroySubWindows) {
    QWidget_QBaseDestroy2((QWidget*)self, destroyWindow, destroySubWindows);
}

const char* q_widget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_widget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_widget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_widget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_widget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_widget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_widget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_widget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_widget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_widget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_widget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_widget_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_widget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_widget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_widget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_widget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_widget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_widget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_widget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_widget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_widget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_widget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_widget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_widget_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_widget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_widget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_widget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_widget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_widget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_widget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_widget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_widget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_widget_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_widget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_widget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_widget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_widget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_widget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_widget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_widget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_widget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_widget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_widget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_widget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_widget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_widget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_widget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_widget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_widget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_widget_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool q_widget_event_filter(void* self, void* watched, void* event) {
    return QWidget_EventFilter((QWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_widget_qbase_event_filter(void* self, void* watched, void* event) {
    return QWidget_QBaseEventFilter((QWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_widget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWidget_OnEventFilter((QWidget*)self, (intptr_t)slot);
}

void q_widget_timer_event(void* self, void* event) {
    QWidget_TimerEvent((QWidget*)self, (QTimerEvent*)event);
}

void q_widget_qbase_timer_event(void* self, void* event) {
    QWidget_QBaseTimerEvent((QWidget*)self, (QTimerEvent*)event);
}

void q_widget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnTimerEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_child_event(void* self, void* event) {
    QWidget_ChildEvent((QWidget*)self, (QChildEvent*)event);
}

void q_widget_qbase_child_event(void* self, void* event) {
    QWidget_QBaseChildEvent((QWidget*)self, (QChildEvent*)event);
}

void q_widget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnChildEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_custom_event(void* self, void* event) {
    QWidget_CustomEvent((QWidget*)self, (QEvent*)event);
}

void q_widget_qbase_custom_event(void* self, void* event) {
    QWidget_QBaseCustomEvent((QWidget*)self, (QEvent*)event);
}

void q_widget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWidget_OnCustomEvent((QWidget*)self, (intptr_t)slot);
}

void q_widget_connect_notify(void* self, void* signal) {
    QWidget_ConnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

void q_widget_qbase_connect_notify(void* self, void* signal) {
    QWidget_QBaseConnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

void q_widget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWidget_OnConnectNotify((QWidget*)self, (intptr_t)slot);
}

void q_widget_disconnect_notify(void* self, void* signal) {
    QWidget_DisconnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

void q_widget_qbase_disconnect_notify(void* self, void* signal) {
    QWidget_QBaseDisconnectNotify((QWidget*)self, (QMetaMethod*)signal);
}

void q_widget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWidget_OnDisconnectNotify((QWidget*)self, (intptr_t)slot);
}

QObject* q_widget_sender(void* self) {
    return QWidget_Sender((QWidget*)self);
}

QObject* q_widget_qbase_sender(void* self) {
    return QWidget_QBaseSender((QWidget*)self);
}

void q_widget_on_sender(void* self, QObject* (*slot)()) {
    QWidget_OnSender((QWidget*)self, (intptr_t)slot);
}

int32_t q_widget_sender_signal_index(void* self) {
    return QWidget_SenderSignalIndex((QWidget*)self);
}

int32_t q_widget_qbase_sender_signal_index(void* self) {
    return QWidget_QBaseSenderSignalIndex((QWidget*)self);
}

void q_widget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWidget_OnSenderSignalIndex((QWidget*)self, (intptr_t)slot);
}

int32_t q_widget_receivers(void* self, const char* signal) {
    return QWidget_Receivers((QWidget*)self, signal);
}

int32_t q_widget_qbase_receivers(void* self, const char* signal) {
    return QWidget_QBaseReceivers((QWidget*)self, signal);
}

void q_widget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWidget_OnReceivers((QWidget*)self, (intptr_t)slot);
}

bool q_widget_is_signal_connected(void* self, void* signal) {
    return QWidget_IsSignalConnected((QWidget*)self, (QMetaMethod*)signal);
}

bool q_widget_qbase_is_signal_connected(void* self, void* signal) {
    return QWidget_QBaseIsSignalConnected((QWidget*)self, (QMetaMethod*)signal);
}

void q_widget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWidget_OnIsSignalConnected((QWidget*)self, (intptr_t)slot);
}

double q_widget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QWidget_GetDecodedMetricF((QWidget*)self, metricA, metricB);
}

double q_widget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QWidget_QBaseGetDecodedMetricF((QWidget*)self, metricA, metricB);
}

void q_widget_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QWidget_OnGetDecodedMetricF((QWidget*)self, (intptr_t)slot);
}

void q_widget_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_widget_delete(void* self) {
    QWidget_Delete((QWidget*)(self));
}
